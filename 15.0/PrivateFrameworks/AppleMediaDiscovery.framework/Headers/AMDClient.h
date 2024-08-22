// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDCLIENT_H
#define AMDCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMDClient : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSString *dsId; // ivar: _dsId


-(id)appSegmentData:(id)arg0 completion:(id)arg1 ;
-(id)getFeature:(id)arg0 ;
-(id)getFeatureStub:(id)arg0 ;
-(void)callIAESegmentNotificationHandler;
-(void)clearDataForDSID:(id)arg0 completion:(id)arg1 ;
-(void)fetchAppSegments:(id)arg0 completion:(id)arg1 ;
-(void)getAppSegmentDataWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)iaeSegmentNotificationHandler:(id)arg0 ;
// -(void)subscribeToSegmentNotificationWithCallback:(id)arg0 forAccountDSID:(unk)arg1  ;
-(void)unsubscribeFromSegmentNotification;


@end


#endif