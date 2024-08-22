// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSSYSTEMAPPPROXY_H
#define FBSSYSTEMAPPPROXY_H

@class BSServiceConnectionEndpoint, BSProcessHandle;


#import "FBSServiceFacilityClient.h"

@interface FBSSystemAppProxy : FBSServiceFacilityClient {
    BSServiceConnectionEndpoint *_endpoint;
    NSUInteger _checkoutCount;
    BSProcessHandle *_processHandle;
}




+(id)checkoutProxyWithEndpoint:(id)arg0 ;
-(BOOL)isPasscodeLockedOrBlocked;
-(id)clientCallbackQueue;
-(id)processHandleForBundleID:(id)arg0 ;
-(id)systemApplicationBundleIdentifier;
-(void)_handleConnect:(id)arg0 ;
-(void)_handleTerminationReply:(id)arg0 withCompletion:(id)arg1 ;
// -(void)_sendMessageType:(NSInteger)arg0 withMessage:(id)arg1 withReplyHandler:(unk)arg2 waitForReply:(id)arg3  ;
-(void)checkin;
// -(void)fireCompletion:(id)arg0 error:(unk)arg1  ;
// -(void)fireCompletion:(id)arg0 openAppErrorCode:(unk)arg1  ;
-(void)handleMessage:(id)arg0 withType:(NSInteger)arg1 ;
-(void)sendActions:(id)arg0 withResult:(id)arg1 ;
-(void)setKeyboardFocusApplication:(int)arg0 deferringToken:(id)arg1 completion:(id)arg2 ;
-(void)shutdownWithOptions:(id)arg0 ;
-(void)terminateApplication:(id)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;
-(void)terminateApplicationGroup:(NSInteger)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;


@end


#endif