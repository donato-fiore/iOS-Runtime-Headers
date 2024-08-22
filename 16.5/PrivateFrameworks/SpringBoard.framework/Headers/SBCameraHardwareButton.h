// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCAMERAHARDWAREBUTTON_H
#define SBCAMERAHARDWAREBUTTON_H

@class NSMutableIndexSet, BSMutableIntegerMap, RBSProcessMonitor, CMPocketStateManager, BSAbsoluteMachTimer, BKSHIDEventDeliveryManager, SBCameraHardwareButtonDefaults, NSString;
@protocol SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHIDButtonStateArbiter.h"
#import "_SBCameraLaunchCondition.h"
#import "SBApplicationController.h"
#import "SBLockScreenManager.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBBacklightController.h"
#import "SBProximitySensorManager.h"
#import "SBSceneManager.h"
#import "SBCameraHardwareButtonSettings.h"
#import "SBBacklightStudyLogger.h"
#import "SBCameraHardwareButtonStudyLogger.h"
#import "SBLiftToWakeStudyLogger.h"

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver>

 {
    BOOL _shouldUsePocketStateDetection;
    int _lastCameraApplicationPID;
    id<BSInvalidatable> *_dispatchingRuleAssertion;
    id<BSInvalidatable> *_deferringRuleAssertion;
    NSMutableIndexSet *_allCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;
    BSMutableIntegerMap *_deferringTokensPerPID;
    SBHIDButtonStateArbiter *_buttonArbiter;
    RBSProcessMonitor *_processMonitor;
    CMPocketStateManager *_pocketStateManager;
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;
    _SBCameraLaunchCondition *_longPressCondition;
    _SBCameraLaunchCondition *_outOfPocketCondition;
    BSAbsoluteMachTimer *_longPressCancellationTimer;
    CGFloat _longPressCancellationTimeout;
    BKSHIDEventDeliveryManager *_deliveryManager;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    SBSceneManager *_mainDisplaySceneManager;
    SBCameraHardwareButtonSettings *_settings;
    SBCameraHardwareButtonDefaults *_defaults;
    SBBacklightStudyLogger *_backlightStudyLogger;
    SBCameraHardwareButtonStudyLogger *_studyLogger;
    SBLiftToWakeStudyLogger *_liftToWakeStudyLogger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableDeferringToApplications; // ivar: _disableDeferringToApplications
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCoverSheetCameraVisible;
-(BOOL)_shouldDeferToCoverSheetCamera;
-(BOOL)_shouldDeferToNonSpringBoardProcess;
-(id)init;
-(void)_deferCameraPressesToApplication:(id)arg0 ;
-(void)_deferCameraPressesToCameraApplication;
-(void)_deferCameraPressesToPID:(int)arg0 ;
-(void)_deferCameraPressesToSpringBoard;
-(void)_launchCameraIfReady;
-(void)_launchToCoverSheetCameraAfterWakingScreen:(BOOL)arg0 ;
-(void)_launchToUnlockedCameraAfterWakingScreen:(BOOL)arg0 ;
-(void)_longPressDidCancel;
-(void)_notifyCoreAnalyticsCameraDidLaunchToLockScreen:(BOOL)arg0 screenWasOff:(BOOL)arg1 ;
-(void)_process:(id)arg0 stateDidUpdate:(id)arg1 ;
-(void)_reconfigureProcessMonitor;
-(void)_reconfigureProcessMonitorForPredicates:(id)arg0 ;
-(void)_startWaitingForLongPressCancellation;
-(void)_stopWaitingForLongPressCancellation;
-(void)_updateCameraDeferringRule;
-(void)_updateSettingsForReason:(id)arg0 ;
-(void)addProcessRequestingCameraButton:(int)arg0 token:(id)arg1 ;
-(void)dealloc;
-(void)handleButtonEvent:(struct __IOHIDEvent *)arg0 ;
-(void)performActionsForButtonDown:(id)arg0 ;
-(void)performActionsForButtonLongPress:(id)arg0 ;
-(void)performActionsForButtonUp:(id)arg0 ;
-(void)removeProcessRequestingCameraButton:(int)arg0 ;
-(void)sceneManager:(id)arg0 didAddExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)sceneManager:(id)arg0 didRemoveExternalForegroundApplicationSceneHandle:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif