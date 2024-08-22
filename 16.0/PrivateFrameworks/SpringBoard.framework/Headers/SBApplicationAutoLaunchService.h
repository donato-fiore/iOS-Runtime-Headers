// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONAUTOLAUNCHSERVICE_H
#define SBAPPLICATIONAUTOLAUNCHSERVICE_H

@class SBFMobileKeyBag, NSString, NSArray, NSTimer;
@protocol BSDescriptionProviding, SBFMobileKeyBagObserver;

#import <Foundation/Foundation.h>

#import "SBMainWorkspace.h"
#import "SBApplicationController.h"
#import "SBRestartManager.h"
#import "SBSyncController.h"

@interface SBApplicationAutoLaunchService : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver>

 {
    SBMainWorkspace *_mainWorkspace;
    SBApplicationController *_applicationController;
    SBRestartManager *_restartManager;
    SBSyncController *_syncController;
    SBFMobileKeyBag *_keybag;
    BOOL _invalidated;
}


@property (nonatomic, getter=_autoLaunchSynchronously, setter=_setAutoLaunchSynchronously:) BOOL autoLaunchSynchronously; // ivar: _autoLaunchSynchronously
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_queuedApplicationsThrottledForRelaunch) NSArray *queuedApplicationsThrottledForRelaunch; // ivar: _queuedApplicationsThrottledForRelaunch
@property (readonly, nonatomic, getter=_queuedApplicationsThrottledForRelaunchTimer) NSTimer *queuedApplicationsThrottledForRelaunchTimer; // ivar: _queuedApplicationsThrottledForRelaunchTimer
@property (readonly) Class superclass;


-(BOOL)_shouldAutoLaunchApplication:(id)arg0 forReason:(NSUInteger)arg1 ;
-(id)_initWithWorkspace:(id)arg0 applicationController:(id)arg1 restartManager:(id)arg2 syncController:(id)arg3 keybag:(id)arg4 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_applicationProcessStateDidChange:(id)arg0 ;
-(void)_autoLaunchAppsIfNecessaryAfterFirstUnlock;
-(void)_autoLaunchIfNecessary:(id)arg0 forReason:(NSUInteger)arg1 ;
-(void)_installedApplicationsDidChange:(id)arg0 ;
-(void)_invalidateQueuedApplicationsThrottledForRelaunchTimer;
-(void)_launchNextQueuedApplicationThrottledForRelaunch;
-(void)_memoryPressureRelieved:(id)arg0 ;
-(void)_memoryPressureWarn:(id)arg0 ;
-(void)_noteKeybagDidUnlock;
-(void)_noteTerminationAssertionRemovedForApplication:(id)arg0 ;
-(void)_recalculateVoIPBehaviorForApplication:(id)arg0 withExitContext:(id)arg1 ;
-(void)_scheduleAutoLaunchForApplicationExited:(id)arg0 withExitContext:(id)arg1 ;
-(void)_scheduleThrottledApplicationRelaunchTimerIfNecessary;
-(void)autoLaunchApplicationsIfNecessaryForStartup;
-(void)dealloc;
-(void)invalidate;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;


@end


#endif