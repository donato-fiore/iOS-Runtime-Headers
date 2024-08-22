// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBASSISTANTCONTROLLER_H
#define SBASSISTANTCONTROLLER_H

@class BSEventQueue, SBFAuthenticationAssertion, NSHashTable, SiriPresentationSpringBoardMainScreenViewController, NSSet, NSArray, NSString;
@protocol SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, SBAssistantSessionDelegate, SBWindowLevelAssertionManagerDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying, SBWindowLevelAssertionProviding, SBIdleTimer, SBWindowSceneTracking, SBIdleTimerCoordinating, SAInvalidatable;

#import <Foundation/Foundation.h>

#import "SBAssistantGestureConfiguration.h"
#import "SBSystemAnimationSettings.h"
#import "SBWindowLevelAssertionManager.h"
#import "SBAssistantSession.h"

@interface SBAssistantController : NSObject <SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, SBAssistantSessionDelegate, SBWindowLevelAssertionManagerDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying, SBWindowLevelAssertionProviding>

 {
    BSEventQueue *_operationQueue;
    SBFAuthenticationAssertion *_disableAssertion;
    NSHashTable *_observers;
    SiriPresentationSpringBoardMainScreenViewController *_mainScreenSiriPresentation;
    SBAssistantGestureConfiguration *_gestureConfiguration;
    NSSet *_audioCategoriesDisablingVolumeHUD;
    SBSystemAnimationSettings *_settings;
    id<SBIdleTimer> *_idleTimer;
    SBWindowLevelAssertionManager *_windowLevelAssertionManager;
    BOOL _screenShotServicesIsRunning;
    BOOL _dismissing;
    id<SBWindowSceneTracking> *_uiSceneTracker;
    UIEdgeInsets _systemApertureEdgeInsets;
    NSArray *_systemApertureFrames;
}


@property (readonly, nonatomic) BOOL contentObscuresEmbeddedDisplayScreen;
@property (retain, nonatomic) SBAssistantSession *currentSession; // ivar: _currentSession
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<SAInvalidatable> *systemApertureAssertion; // ivar: _systemApertureAssertion
@property (readonly, nonatomic) BOOL unlockedDevice; // ivar: _unlockedDevice
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(BOOL)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg0 ;
+(BOOL)shouldDismissSiriForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
+(id)_activationSettingsWithPunchoutStyle:(NSInteger)arg0 ;
+(id)defaultActivationSettings;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)bootstrapServices;
-(BOOL)isVisibleInWindowScene:(id)arg0 ;
-(BOOL)requestPasscodeUnlockWithCompletion:(id)arg0 ;
-(BOOL)shouldShowSystemVolumeHUDForCategory:(id)arg0 ;
-(BOOL)siriPresentation:(id)arg0 requestsDeviceUnlockWithPassword:(id)arg1 ;
-(id)_idleTimerBehavior;
-(id)_init;
-(id)_uiSceneTracker;
-(id)acquireWindowLevelAssertionWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 windowScene:(id)arg2 reason:(id)arg3 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)init;
-(id)rootViewController;
-(id)sessionForWindowScene:(id)arg0 ;
-(id)window;
-(void)_bioAuthenticated:(id)arg0 ;
-(void)_deviceBlocked:(id)arg0 ;
-(void)_dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 factory:(id)arg1 dismissalOptions:(id)arg2 completion:(id)arg3 ;
-(void)_dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 factory:(id)arg1 dismissalOptions:(id)arg2 windowScene:(id)arg3 completion:(id)arg4 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)_prototypeSettingsChanged;
-(void)_remoteLocked:(id)arg0 ;
-(void)_startSessionOnScene:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_systemApertureFrameDidChange:(id)arg0 ;
-(void)_turnScreenOffWithCompletion:(id)arg0 ;
-(void)_uiLocked:(id)arg0 ;
-(void)_updateWindowLevelForScene:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationProcessDidChangeState:(id)arg0 ;
-(void)assistantSession:(id)arg0 requestsDismissalWithAnimation:(NSInteger)arg1 completion:(id)arg2 ;
-(void)assistantSession:(id)arg0 requestsDismissalWithDismissalOptions:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewDidAppearInWindowScene:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewDidDisappearInWindowScene:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewWillAppearInWindowScene:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewWillDisappearInWindowScene:(id)arg1 ;
-(void)dealloc;
-(void)deviceUnlockRequestedWithPassword:(id)arg0 ;
-(void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 windowScene:(id)arg2 ;
-(void)dismissAssistantViewIfNecessaryInWindowScene:(id)arg0 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 windowScene:(id)arg1 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 windowScene:(id)arg1 completion:(id)arg2 ;
-(void)dismissAssistantViewInEverySceneIfNecessary;
-(void)dismissAssistantViewInEverySceneIfNecessaryForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(void)dismissAssistantViewInEverySceneIfNecessaryWithAnimation:(NSInteger)arg0 ;
-(void)dismissAssistantViewInEverySceneIfNecessaryWithAnimation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)dismissAssistantViewInEverySceneIfNecessaryWithAnimation:(NSInteger)arg0 factory:(id)arg1 completion:(id)arg2 ;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg0 ;
-(void)handleFailedAuthenticationRequest:(id)arg0 error:(id)arg1 ;
-(void)handleInvalidAuthenticationRequest:(id)arg0 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg0 ;
-(void)invalidateSystemApertureAssertionWithReason:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)restrictSystemApertureToDefaultLayoutWithReason:(id)arg0 ;
-(void)screenWakeIdleTimerResetRequested;
-(void)screenWakeRequested;
-(void)setUISceneTracker:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)siriPresentation:(id)arg0 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg1 ;
-(void)siriPresentation:(id)arg0 didUpdateHomeGestureSharing:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg0 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg0 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg0 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg0 isEnabledDidChange:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg0 requestsDismissalWithOptions:(id)arg1 withHandler:(id)arg2 ;
-(void)siriPresentation:(id)arg0 requestsPresentationWithOptions:(id)arg1 withHandler:(id)arg2 ;
-(void)siriPresentation:(id)arg0 requestsPunchout:(id)arg1 withHandler:(id)arg2 ;
-(void)siriPresentation:(id)arg0 setHomeAffordanceSuppression:(NSInteger)arg1 ;
-(void)siriPresentation:(id)arg0 setShowsHomeAffordance:(BOOL)arg1 ;
-(void)windowLevelAssertionManager:(id)arg0 didUpdateAssertionsForWindowScene:(id)arg1 ;


@end


#endif