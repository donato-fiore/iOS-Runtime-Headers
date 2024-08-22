// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKREMOTEALERTLAUNCHER_H
#define GKREMOTEALERTLAUNCHER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GKRemoteAlertLauncher : NSObject

@property (readonly, nonatomic) BOOL isLaunching; // ivar: _isLaunching
@property (retain, nonatomic) NSObject<OS_dispatch_source> *launchTimeoutTimer; // ivar: _launchTimeoutTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)shared;
-(id)init;
-(void)cancelLaunchTimeoutTimer;
-(void)dealloc;
-(void)launchBypassingPreAuthentication:(BOOL)arg0 forGame:(id)arg1 hostPID:(int)arg2 deeplink:(id)arg3 observer:(id)arg4 ;
-(void)notifyDashboardDidLaunch;
-(void)startLaunchTimeoutTimer;


@end


#endif