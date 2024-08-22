// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYNCCONTROLLER_H
#define SBSYNCCONTROLLER_H

@class NSTimer, SBFAuthenticationAssertion, NSString;
@protocol DDRResetObserver, SBIdleTimerProviding, SBIdleTimerCoordinating;

#import <Foundation/Foundation.h>

#import "SBWindowSceneStatusBarSettingsAssertion.h"

@interface SBSyncController : NSObject <DDRResetObserver, SBIdleTimerProviding>

 {
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    NSTimer *_progressTimer;
    BOOL _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
    SBFAuthenticationAssertion *_disableDeviceLockAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_hideStatusBarAssertion;
    BOOL _isAppSyncing;
    BOOL _inExtendedAppSyncCoalescePeriod;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_isBackupAgentRunning;
-(BOOL)isInUse;
-(BOOL)isResetting;
-(BOOL)isRestoring;
-(id)_idleTimerBehavior;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(int)resetState;
-(int)restoreState;
-(void)_appInstallationNotification;
-(void)_delayedQuitApplications;
-(void)_didEndRestoring:(int)arg0 ;
-(void)_invalidateRestoreTimer;
-(void)_killApplicationsIfNecessary;
-(void)_notifyRestoreCanProceed;
-(void)_rebootNow;
-(void)_restoreTimerFired:(id)arg0 ;
-(void)_setRestoreState:(int)arg0 ;
-(void)_setupRestoreTimer;
-(void)_syncSessionDidBegin;
-(void)_syncSessionDidEnd;
-(void)_wirelessSyncBegan:(id)arg0 ;
-(void)_wirelessSyncEnded:(id)arg0 ;
-(void)beginRestoring;
-(void)cancelRestoring;
-(void)dealloc;
-(void)finishedTerminatingApplications;
-(void)resetService:(id)arg0 didBeginDataResetWithMode:(NSInteger)arg1 ;
-(void)resetService:(id)arg0 didCompleteDataResetMode:(NSInteger)arg1 withError:(id)arg2 completion:(id)arg3 ;
-(void)resetService:(id)arg0 willBeginDataResetWithMode:(NSInteger)arg1 ;
-(void)startObserving;
-(void)stopObserving;


@end


#endif