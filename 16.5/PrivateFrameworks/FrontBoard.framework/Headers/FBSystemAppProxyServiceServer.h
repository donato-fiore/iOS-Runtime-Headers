// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSYSTEMAPPPROXYSERVICESERVER_H
#define FBSYSTEMAPPPROXYSERVICESERVER_H

@class FBSServiceFacility;


#import "FBServiceClientAuthenticator.h"

@interface FBSystemAppProxyServiceServer : FBSServiceFacility {
    FBServiceClientAuthenticator *_shutdownAuthenticator;
}




+(id)sharedInstance;
+(id)targetQueue;
-(id)_initWithQueue:(id)arg0 ;
-(void)_handleActions:(id)arg0 forClient:(id)arg1 ;
-(void)_handleGetPasscodeLockedOrBlockedStatus:(id)arg0 forClient:(id)arg1 ;
-(void)_handleGetProcessHandle:(id)arg0 forClient:(id)arg1 ;
-(void)_handleShutdown:(id)arg0 forClient:(id)arg1 ;
-(void)_handleSystemApplicationBundleIdentifier:(id)arg0 forClient:(id)arg1 ;
-(void)_handleTerminateApplication:(id)arg0 forClient:(id)arg1 ;
-(void)_handleTerminateApplicationGroup:(id)arg0 forClient:(id)arg1 ;
-(void)noteClientDidConnect:(id)arg0 withMessage:(id)arg1 ;
-(void)noteClientDidDisconnect:(id)arg0 ;
-(void)noteDidReceiveMessage:(id)arg0 withType:(NSInteger)arg1 fromClient:(id)arg2 ;


@end


#endif