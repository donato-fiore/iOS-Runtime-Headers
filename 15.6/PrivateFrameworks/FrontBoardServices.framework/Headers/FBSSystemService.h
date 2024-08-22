// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSSYSTEMSERVICE_H
#define FBSSYSTEMSERVICE_H


#import <Foundation/Foundation.h>

#import "FBSSystemAppProxy.h"
#import "FBSOpenApplicationService.h"

@interface FBSSystemService : NSObject {
    FBSSystemAppProxy *_systemAppProxy;
    FBSOpenApplicationService *_defaultOpenApplicationService;
}




+(id)clientCallbackQueue;
+(id)sharedService;
-(BOOL)canOpenApplication:(id)arg0 reason:(*NSInteger)arg1 ;
-(BOOL)isPasscodeLockedOrBlocked;
-(id)badgeValueForBundleID:(id)arg0 ;
-(id)init;
-(id)initWithEndpoint:(id)arg0 ;
-(id)processHandleForApplication:(id)arg0 ;
-(id)systemApplicationBundleIdentifier;
-(int)pidForApplication:(id)arg0 ;
-(unsigned int)createClientPort;
-(void)cleanupClientPort:(unsigned int)arg0 ;
-(void)dataResetWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)openApplication:(id)arg0 options:(id)arg1 clientPort:(unsigned int)arg2 withResult:(id)arg3 ;
-(void)openApplication:(id)arg0 options:(id)arg1 withResult:(id)arg2 ;
-(void)openURL:(id)arg0 application:(id)arg1 options:(id)arg2 clientPort:(unsigned int)arg3 withResult:(id)arg4 ;
-(void)reboot;
-(void)sendActions:(id)arg0 withResult:(id)arg1 ;
-(void)setBadgeValue:(id)arg0 forBundleID:(id)arg1 ;
-(void)setKeyboardFocusApplicationPID:(int)arg0 completion:(id)arg1 ;
-(void)setKeyboardFocusApplicationPID:(int)arg0 deferringToken:(id)arg1 completion:(id)arg2 ;
-(void)setKeyboardFocusApplicationWithBundleID:(id)arg0 pid:(int)arg1 completion:(id)arg2 ;
-(void)shutdown;
-(void)shutdownWithOptions:(id)arg0 ;
-(void)terminateApplication:(id)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 ;
-(void)terminateApplication:(id)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;
-(void)terminateApplicationGroup:(NSInteger)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 ;
-(void)terminateApplicationGroup:(NSInteger)arg0 forReason:(NSInteger)arg1 andReport:(BOOL)arg2 withDescription:(id)arg3 completion:(id)arg4 ;


@end


#endif