// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACLIENT_H
#define SACLIENT_H

@class NSXPCConnection;
@protocol SAClientProtocol, OS_dispatch_queue, SACrashDetectionClientProtocol, SAEmergencyResponseClientProtocol;

#import <Foundation/Foundation.h>


@interface SAClient : NSObject <SAClientProtocol>

 {
    NSObject<OS_dispatch_queue> *_messageQueue;
    id *_authenticationRequestHandler;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) NSObject<SACrashDetectionClientProtocol> *crashDetectionClientDelegate; // ivar: _crashDetectionClientDelegate
@property (weak, nonatomic) NSObject<SAEmergencyResponseClientProtocol> *emergencyResponseClientDelegate; // ivar: _emergencyResponseClientDelegate


+(id)sharedInstance;
-(id)init;
-(id)serverProxy;
-(void)callAuthenticationRequestHandlerWithError;
-(void)callAuthenticationRequestHandlerWithStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)dialVoiceCallToPhoneNumber:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestCrashDetectionAuthorization:(id)arg0 ;
-(void)requestMostRecentCrashDetectionEvent;
-(void)updateMostRecentCrashDetectionEvent:(id)arg0 ;
-(void)updateVoiceCallStatus:(NSInteger)arg0 ;


@end


#endif