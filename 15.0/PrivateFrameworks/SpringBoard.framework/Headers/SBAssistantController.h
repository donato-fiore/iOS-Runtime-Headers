// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBASSISTANTCONTROLLER_H
#define SBASSISTANTCONTROLLER_H

@class BSEventQueue, NSString, SBFAuthenticationAssertion, NSHashTable, UIApplicationSceneDeactivationAssertion, SBFZStackParticipant, SiriPresentationSpringBoardMainScreenViewController, FBDisplayLayoutElement, NSSet, NSMutableArray, UITapGestureRecognizer, UIPanGestureRecognizer;
@protocol SBFluidGestureDismissable, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying, BSInvalidatable, SBIdleTimer, SBIdleTimerCoordinating;

#import <Foundation/Foundation.h>

#import "SBAssistantWindow.h"
#import "SBAssistantActiveInterfaceOrientationWindow.h"
#import "SBHomeGestureParticipant.h"
#import "SBFluidDismissalState.h"
#import "SBSystemAnimationSettings.h"
#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBTransientOverlayViewController.h"

@interface SBAssistantController : NSObject <SBFluidGestureDismissable, CSExternalBehaviorProviding, SBFIdleTimerBehaviorProviding, PTSettingsKeyObserver, SBHomeGestureParticipantDelegate, SBFZStackParticipantDelegate, SBHomeGrabberPointerClickDelegate, SBFAuthenticationResponder, SiriPresentationSpringBoardMainScreenViewControllerDelegate, UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBIdleTimerProviding, CSCoverSheetOverlaying>

 {
    BSEventQueue *_operationQueue;
    NSString *_appDisplayIDBeingHosted;
    SBAssistantWindow *_assistantWindow;
    SBAssistantActiveInterfaceOrientationWindow *_assistantActiveInterfaceOrientationWindow;
    BOOL _isHidingOtherWindows;
    SBFAuthenticationAssertion *_disableAssertion;
    NSHashTable *_observers;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id<BSInvalidatable> *_deferOrientationUpdatesAssertion;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBFZStackParticipant *_zStackParticipant;
    SiriPresentationSpringBoardMainScreenViewController *_mainScreenSiriPresentation;
    SiriPresentationSpringBoardMainScreenViewController *_presentedMainScreenSiriPresentation;
    BOOL _dismissing;
    FBDisplayLayoutElement *_mainDisplayLayoutElement;
    SBFluidDismissalState *_fluidDismissalState;
    NSSet *_audioCategoriesDisablingVolumeHUD;
    id<BSInvalidatable> *_hideApplicationModalAlertsAssertion;
    SBSystemAnimationSettings *_settings;
    id<SBIdleTimer> *_idleTimer;
    NSMutableArray *_windowLevelAssertions;
    UITapGestureRecognizer *_tapToDismissSiriGestureRecognizer;
    SBHomeGesturePanGestureRecognizer *_bottomEdgeDismissGestureRecognizer;
    BOOL _shareHomeGesture;
    BOOL _tapsDismissSiri;
    BOOL _swipesDismissSiri;
    UIPanGestureRecognizer *_panToDismissSiriGestureRecognizer;
    NSInteger _homeAffordanceSuppression;
    BOOL _siriWantsToShowHomeAffordance;
    SBTransientOverlayViewController *_topmostTransientViewControllerAtPresentation;
    BOOL _screenShotServicesIsRunning;
}


@property (readonly, nonatomic) BOOL contentObscuresScreen;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) NSObject<SBIdleTimerCoordinating> *idleTimerCoordinator; // ivar: _idleTimerCoordinator
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly, nonatomic) BOOL preventsCoverSheetPresentation;
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (readonly, nonatomic) NSInteger scrollingStrategy;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion
@property (readonly, nonatomic) BOOL unlockedDevice; // ivar: _unlockedDevice
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(BOOL)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg0 ;
+(BOOL)shouldDismissSiriForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)bootstrapServices;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)overrideInterfaceOrientation:(*NSInteger)arg0 ;
-(BOOL)requestPasscodeUnlockWithCompletion:(id)arg0 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)shouldShowSystemVolumeHUDForCategory:(id)arg0 ;
-(BOOL)siriPresentation:(id)arg0 requestsDeviceUnlockWithPassword:(id)arg1 ;
-(CGFloat)_defaultAnimatedDismissDurationForMainScreen;
-(NSInteger)touchInterfaceOrientationForGestureRecognizer:(id)arg0 ;
-(id)_activationSettingsWithPunchoutStyle:(NSInteger)arg0 ;
-(id)_createPanToDismissSiriGestureRecognizer;
-(id)_createTapToDimissSiriGestureRecognizer;
-(id)_idleTimerBehavior;
-(id)_init;
-(id)_siriHomeAffordanceSuppressionAsString:(NSInteger)arg0 ;
-(id)acquireWindowLevelAssertionWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 reason:(id)arg2 ;
-(id)activationSettings;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)init;
-(id)mainScreenView;
-(id)rootViewController;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(id)window;
-(void)_bioAuthenticated:(id)arg0 ;
-(void)_commonHandlerForSiriDismissalGesture:(id)arg0 ;
-(void)_configureHomeGesture;
-(void)_configurePanToDismissGestureDependencies;
-(void)_createAssistantWindowIfNecessaryForSiriPresentationOptions:(id)arg0 ;
-(void)_deviceBlocked:(id)arg0 ;
-(void)_dismissForMainScreenWithFactory:(id)arg0 dismissalOptions:(id)arg1 completion:(id)arg2 ;
-(void)_dockFrameDidChange:(id)arg0 ;
-(void)_handleBottomEdgeDismissGesture:(id)arg0 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)_pannedToDismissSiri:(id)arg0 ;
-(void)_presentForMainScreenAnimated:(BOOL)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_prototypeSettingsChanged;
-(void)_remoteLocked:(id)arg0 ;
-(void)_removeHomeGesture;
-(void)_removeScreenEdgePanGestureRecognizerIfNecessary;
-(void)_resetSystemGestures;
-(void)_restoreOrientation;
-(void)_setShareHomeGesture:(BOOL)arg0 ;
-(void)_setStatusBarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setTouchesPassThroughToSpringBoard:(BOOL)arg0 ;
-(void)_setupSystemGestures;
-(void)_tappedToDismissSiri:(id)arg0 ;
-(void)_tearDownSystemGestures;
-(void)_teardownWindowInUse;
-(void)_toggleModalAlertHidingAssertion:(BOOL)arg0 ;
-(void)_turnScreenOffWithCompletion:(id)arg0 ;
-(void)_uiLocked:(id)arg0 ;
-(void)_updateDockViewFrame:(struct CGRect )arg0 ;
-(void)_updateHomeGestureParticipant;
-(void)_updateOrbLocation:(id)arg0 ;
-(void)_updateOrientationLock;
-(void)_updateRootViewControllerOwnsHomeGesture;
-(void)_updateRootViewControllerShowsHomeAffordance:(BOOL)arg0 ;
-(void)_updateSceneClientSettings;
-(void)_updateWindowLevel;
-(void)_updateZStackParticipantWithReason:(id)arg0 ;
-(void)_viewDidAppearOnMainScreen:(BOOL)arg0 ;
-(void)_viewDidDisappearOnMainScreen:(BOOL)arg0 ;
-(void)_viewWillAppearOnMainScreen:(BOOL)arg0 ;
-(void)_viewWillDisappearOnMainScreen:(BOOL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)applicationProcessDidChangeState:(id)arg0 ;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
-(void)dealloc;
-(void)deviceUnlockRequestedWithPassword:(id)arg0 ;
-(void)dismissAssistantViewIfNecessary;
-(void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 factory:(id)arg1 completion:(id)arg2 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 factory:(id)arg1 dismissalOptions:(id)arg2 completion:(id)arg3 ;
-(void)dismissAssistantViewIfNecessaryWithDismissalOptions:(id)arg0 ;
-(void)dismissOverlayForDashBoardAnimated:(BOOL)arg0 ;
-(void)handleFailedAuthenticationRequest:(id)arg0 error:(id)arg1 ;
-(void)handleInvalidAuthenticationRequest:(id)arg0 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg0 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg0 ;
-(void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(id)arg0 ;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)screenWakeIdleTimerResetRequested;
-(void)screenWakeRequested;
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
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif