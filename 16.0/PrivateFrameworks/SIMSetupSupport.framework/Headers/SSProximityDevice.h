// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPROXIMITYDEVICE_H
#define SSPROXIMITYDEVICE_H

@class CoreTelephonyClient, NSString, NSDictionary, CUMessageSession;
@protocol CoreTelephonyClientCellularPlanManagementDelegate;

#import <Foundation/Foundation.h>


@interface SSProximityDevice : NSObject <CoreTelephonyClientCellularPlanManagementDelegate>



@property (retain) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property NSUInteger endpoint; // ivar: _endpoint
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *remoteInfo; // ivar: _remoteInfo
@property (retain) CUMessageSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 endpoint:(NSUInteger)arg1 remoteInfo:(id)arg2 ;
-(id)skEventFromDictionary:(id)arg0 ;
-(id)templateSession;
-(void)activate:(id)arg0 ;
-(void)invalidate:(BOOL)arg0 ;
-(void)proxSetupAuthEventUpdate:(id)arg0 ;
-(void)verifyPIN:(id)arg0 ;


@end


#endif