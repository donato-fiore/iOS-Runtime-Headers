// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYPOLICYAGGREGATOR_H
#define SBMAINDISPLAYPOLICYAGGREGATOR_H

@class SBLocalDefaults, MCProfileConnection;


#import "SBPolicyAggregator.h"
#import "SBAlertItemsController.h"
#import "SBApplicationController.h"
#import "SBAssistantController.h"
#import "SBBannerManager.h"
#import "SBCommandTabController.h"
#import "SBConferenceManager.h"
#import "SBLockScreenManager.h"
#import "SBLockStateAggregator.h"
#import "SBMainWorkspace.h"
#import "SBRemoteTransientOverlaySessionManager.h"
#import "SBSetupManager.h"
#import "SBTelephonyManager.h"

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator {
    *__CFBoolean _hasCameraCapability;
    SBLocalDefaults *_defaults;
    BOOL _storeDemoAppLockEnabled;
}


@property (retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController; // ivar: _override_alertItemsController
@property (retain, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController; // ivar: _override_applicationController
@property (retain, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController; // ivar: _override_assistantController
@property (retain, nonatomic, getter=_bannerManager, setter=_setBannerManager:) SBBannerManager *bannerManager; // ivar: _override_bannerManager
@property (retain, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController; // ivar: _override_commandTabController
@property (retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager; // ivar: _override_conferenceManager
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // ivar: _override_lockScreenManager
@property (retain, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator; // ivar: _override_lockStateAggregator
@property (retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace; // ivar: _override_mainWorkspace
@property (retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // ivar: _override_profileConnection
@property (retain, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager; // ivar: _override_remoteTransientOverlaySessionManager
@property (retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // ivar: _override_setupManager
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager; // ivar: _override_telephonyManager


-(BOOL)_allowsCapabilityAssistantEnabledWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityAssistantWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityCommandTabWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityControlCenterWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityCoverSheetSpotlightWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityCoverSheetWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityDismissCoverSheetWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityHomeScreenEditingWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLiftToWakeWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLockScreenBulletinWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLockScreenCameraWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLockScreenControlCenterWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLockScreenTodayViewWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLoginWindowWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityLogoutWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityQuickNoteWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityScreenshotWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilitySendMediaCommandWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilitySpotlightWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilitySuggestedApplicationWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilitySystemGestureWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityTodayViewWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(*id)arg0 ;
-(BOOL)_allowsCapabilityVoiceControlWithExplanation:(*id)arg0 ;
-(BOOL)_allowsNotificationOrControlCenterWithExplanation:(*id)arg0 ;
-(BOOL)_dictationInfoOnScreen;
-(BOOL)_hasFullySetUpUserWithExplanation:(*id)arg0 ;
-(BOOL)allowsCapability:(NSInteger)arg0 ;
-(BOOL)allowsCapability:(NSInteger)arg0 explanation:(*id)arg1 ;
-(BOOL)allowsTransitionRequest:(id)arg0 ;
-(id)_initWithDefaults:(id)arg0 ;
-(id)init;
-(void)reloadDemoDefaults;


@end


#endif