// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPCOMPANIONAPPSERVERPROTOCOLSTUB_H
#define SPCOMPANIONAPPSERVERPROTOCOLSTUB_H

@class NSString;
@protocol SPCompanionAppServerProtocol;

#import <Foundation/Foundation.h>


@interface SPCompanionAppServerProtocolStub : NSObject <SPCompanionAppServerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)extensionWithIdentifier:(id)arg0 gotUnknownInterfaceController:(id)arg1 ;
-(void)fetchNotificationForNotificationID:(id)arg0 completion:(id)arg1 ;
-(void)requestTimingData:(id)arg0 timingMetaData:(id)arg1 ;
-(void)sendCacheRequest:(id)arg0 identifier:(id)arg1 ;
-(void)sendData:(id)arg0 identifier:(id)arg1 clientIdentifiers:(id)arg2 ;
-(void)sendData:(id)arg0 identifier:(id)arg1 clientIdentifiers:(id)arg2 reply:(id)arg3 ;


@end


#endif