// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCOVERSHEETPRESENTATIONMANAGER_H
#define SBCOVERSHEETPRESENTATIONMANAGER_H

@class NSString, NSSet, NSMutableSet, NSHashTable, CSCoverSheetFlyInSettings, _UILegibilitySettings, CSLockScreenSettings, BSEventQueue, BSCompoundAssertion, UIImpactFeedbackGenerator, CSCoverSheetTransitionSettings, UIView<BSInvalidatable>, UIView, SBFZStackParticipant;
@protocol SBCoverSheetSlidingViewControllerDelegate, SBCoverSheetGrabberDelegate, CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSCoverSheetViewControllerObserver, SBFIdleTimerBehaviorProviding, SBSecureAppViewControllerDelegate, SBSecureAppObserver, SBAssistantObserver, PTSettingsKeyObserver, SBFZStackParticipantDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBWallpaperOrientationProvider, SBPearlMatchingStateProviderDelegate, SBFBacklightEnvironmentSceneProviding, SBDeviceApplicationSceneHandleObserver, SBCoverSheetSystemApertureTransitionOverlayViewControllerDelegate, BSInvalidatable, SBCoverSheetPresentationDelegate, OS_dispatch_group, SBLockScreenEnvironment, SBPearlMatchingStateProvider, SBUILockStateProvider;

#import <Foundation/Foundation.h>

#import "SBDisableActiveInterfaceOrientationChangeAssertion.h"
#import "SBAsynchronousRenderingAssertion.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBCoverSheetSlidingViewController.h"
#import "SBWindow.h"
#import "SBCoverSheetIconFlyInAnimator.h"
#import "SBMainWorkspace.h"
#import "SBCoverSheetSceneManager.h"
#import "SBCoverSheetSecureAppEnvironmentViewController.h"
#import "SBDashBoardHostedAppViewController.h"
#import "SBCoverSheetSystemApertureTransitionOverlayViewController.h"

@interface SBCoverSheetPresentationManager : NSObject <SBCoverSheetSlidingViewControllerDelegate, SBCoverSheetGrabberDelegate, CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSCoverSheetViewControllerObserver, SBFIdleTimerBehaviorProviding, SBSecureAppViewControllerDelegate, SBSecureAppObserver, SBAssistantObserver, PTSettingsKeyObserver, SBFZStackParticipantDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBWallpaperOrientationProvider, SBPearlMatchingStateProviderDelegate, SBFBacklightEnvironmentSceneProviding, SBDeviceApplicationSceneHandleObserver, SBCoverSheetSystemApertureTransitionOverlayViewControllerDelegate>



@property (retain, nonatomic) SBDisableActiveInterfaceOrientationChangeAssertion *activeInterfaceOrientationChangeAssertion; // ivar: _activeInterfaceOrientationChangeAssertion
@property (nonatomic, getter=activeInterfaceOrientationLocked) BOOL activeInterfaceOrientationLocked; // ivar: _activeInterfaceOrientationLocked
@property (nonatomic) BOOL animateIconsOnPresentationToo; // ivar: _animateIconsOnPresentationToo
@property (readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property (retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion; // ivar: _asynchronousRenderingAssertion
@property (nonatomic) BOOL centerFollowsFinger; // ivar: _centerFollowsFinger
@property (readonly, copy, nonatomic) NSSet *components;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *coverSheetHostedAppSceneHandle;
@property (readonly, nonatomic, getter=isCoverSheetHostingAnApp) BOOL coverSheetHostingAnApp;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (retain, nonatomic) SBCoverSheetSlidingViewController *coverSheetSlidingViewController; // ivar: _coverSheetSlidingViewController
@property (retain, nonatomic) SBWindow *coverSheetWindow; // ivar: _coverSheetWindow
@property (retain, nonatomic) NSMutableSet *coverSheetWindowVisibleReasons; // ivar: _coverSheetWindowVisibleReasons
@property (readonly, nonatomic) CGFloat customIdleExpirationTimeout;
@property (readonly, nonatomic) CGFloat customIdleWarningTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BSInvalidatable> *deferOrientationUpdatesAssertion; // ivar: _deferOrientationUpdatesAssertion
@property (weak, nonatomic) NSObject<SBCoverSheetPresentationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *dismissalObservers; // ivar: _dismissalObservers
@property (nonatomic) BOOL dismissingCoverSheet; // ivar: _dismissingCoverSheet
@property (retain, nonatomic) CSCoverSheetFlyInSettings *flyInSettings; // ivar: _flyInSettings
@property (nonatomic) BOOL hasBeenDismissedSinceBoot; // ivar: _hasBeenDismissedSinceBoot
@property (nonatomic) BOOL hasBeenDismissedSinceKeybagLock; // ivar: _hasBeenDismissedSinceKeybagLock
@property (readonly, nonatomic) BOOL hasBeenDismissedSinceKeybagLockAndAuthenticated; // ivar: _hasBeenDismissedSinceKeybagLockAndAuthenticated
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBCoverSheetIconFlyInAnimator *iconAnimator; // ivar: _iconAnimator
@property (copy, nonatomic) id *iconAnimatorCompletionBlock; // ivar: _iconAnimatorCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_group> *iconAnimatorCompletionGroup; // ivar: _iconAnimatorCompletionGroup
@property (nonatomic) BOOL iconAnimatorNeedsAnimating; // ivar: _iconAnimatorNeedsAnimating
@property (nonatomic) CGFloat iconFlyInFriction; // ivar: _iconFlyInFriction
@property (nonatomic) CGFloat iconFlyInInteractiveDampingRatioMax; // ivar: _iconFlyInInteractiveDampingRatioMax
@property (nonatomic) CGFloat iconFlyInInteractiveDampingRatioMin; // ivar: _iconFlyInInteractiveDampingRatioMin
@property (nonatomic) CGFloat iconFlyInInteractiveResponseMax; // ivar: _iconFlyInInteractiveResponseMax
@property (nonatomic) CGFloat iconFlyInInteractiveResponseMin; // ivar: _iconFlyInInteractiveResponseMin
@property (nonatomic) CGFloat iconFlyInTension; // ivar: _iconFlyInTension
@property (readonly, nonatomic) NSInteger idleTimerDuration;
@property (readonly, nonatomic) NSInteger idleTimerMode;
@property (readonly, nonatomic) NSInteger idleWarnMode;
@property (readonly, nonatomic) BOOL isCoverSheetHostingUnlockedEnvironmentWindows; // ivar: _isCoverSheetHostingUnlockedEnvironmentWindows
@property (retain, nonatomic) NSObject<BSInvalidatable> *keyboardFocusAssertion; // ivar: _keyboardFocusAssertion
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) NSObject<SBLockScreenEnvironment> *lockScreenEnvironment; // ivar: _lockScreenEnvironment
@property (retain, nonatomic) CSLockScreenSettings *lockScreenSettings; // ivar: _lockScreenSettings
@property (retain, nonatomic) BSEventQueue *lockUnlockQueue; // ivar: _lockUnlockQueue
@property (retain, nonatomic) SBMainWorkspace *mainWorkspace; // ivar: _mainWorkspace
@property (nonatomic) BOOL needsFakeStatusBarUpdate; // ivar: _needsFakeStatusBarUpdate
@property (readonly, nonatomic) NSInteger notificationBehavior;
@property (nonatomic) NSInteger participantState; // ivar: _participantState
@property (weak, nonatomic) NSObject<SBPearlMatchingStateProvider> *pearlMatchingStateProvider; // ivar: _pearlMatchingStateProvider
@property (nonatomic) BOOL pendingClearSecureAppViewControllers; // ivar: _pendingClearSecureAppViewControllers
@property (copy, nonatomic) id *ppt_transitionBeginsCallback; // ivar: _ppt_transitionBeginsCallback
@property (copy, nonatomic) id *ppt_transitionEndsCallback; // ivar: _ppt_transitionEndsCallback
@property (nonatomic) BOOL preparingToDismissCoverSheet; // ivar: _preparingToDismissCoverSheet
@property (retain, nonatomic) BSCompoundAssertion *preserveSecureAppAssertions; // ivar: _preserveSecureAppAssertions
@property (readonly, nonatomic) NSInteger proximityDetectionMode;
@property (retain, nonatomic) NSObject<BSInvalidatable> *requireWallpaperAssertion; // ivar: _requireWallpaperAssertion
@property (readonly, nonatomic) NSUInteger restrictedCapabilities;
@property (nonatomic) BOOL rubberBandCleanupNeeded; // ivar: _rubberBandCleanupNeeded
@property (retain, nonatomic) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator; // ivar: _rubberBandFeedbackGenerator
@property (retain, nonatomic) SBCoverSheetSceneManager *sceneManager; // ivar: _sceneManager
@property (readonly, nonatomic) NSInteger scrollingStrategy; // ivar: _scrollingStrategy
@property (copy, nonatomic) id *secureAppCleanupHandler; // ivar: _secureAppCleanupHandler
@property (retain, nonatomic) SBCoverSheetSecureAppEnvironmentViewController *secureAppEnvironmentViewController; // ivar: _secureAppEnvironmentViewController
@property (retain, nonatomic) SBCoverSheetSlidingViewController *secureAppSlidingViewController; // ivar: _secureAppSlidingViewController
@property (retain, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController; // ivar: _secureAppViewController
@property (retain, nonatomic) SBWindow *secureAppWindow; // ivar: _secureAppWindow
@property (retain, nonatomic) NSMutableSet *secureAppWindowVisibleReasons; // ivar: _secureAppWindowVisibleReasons
@property (nonatomic) BOOL shouldDisplayFakeStatusBar; // ivar: _shouldDisplayFakeStatusBar
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion
@property (retain, nonatomic) NSObject<BSInvalidatable> *systemApertureCoverSheetAssertion; // ivar: _systemApertureCoverSheetAssertion
@property (retain, nonatomic) SBCoverSheetSystemApertureTransitionOverlayViewController *systemApertureTransitionOverlayViewController; // ivar: _systemApertureTransitionOverlayViewController
@property (nonatomic) NSUInteger transitionOverrideOptions; // ivar: _transitionOverrideOptions
@property (weak, nonatomic) CSCoverSheetTransitionSettings *transitionSettings; // ivar: _transitionSettings
@property (nonatomic) NSUInteger transitionType; // ivar: _transitionType
@property (retain, nonatomic, setter=setUILockStateProvider:) NSObject<SBUILockStateProvider> *uiLockStateProvider; // ivar: _uiLockStateProvider
@property (nonatomic) BOOL wallpaperFloatingLayerHidden; // ivar: _wallpaperFloatingLayerHidden
@property (retain, nonatomic) UIView<BSInvalidatable> *wallpaperFloatingLayerView; // ivar: _wallpaperFloatingLayerView
@property (retain, nonatomic) UIView *wallpaperFloatingLayerViewContainerView; // ivar: _wallpaperFloatingLayerViewContainerView
@property (nonatomic) BOOL wantsHomeGestureOwnership; // ivar: _wantsHomeGestureOwnership
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


+(id)sharedInstance;
+(id)sharedInstanceIfExists;
+(void)getLeadingTopButtonFrame:(struct CGRect *)arg0 trailingTopButtonFrame:(struct CGRect *)arg1 forScreen:(id)arg2 ;
-(BOOL)_isEffectivelyLocked;
-(BOOL)_secureAppTypeGetsCorrectDismissalSemantics:(NSUInteger)arg0 ;
-(BOOL)coverSheetCanTransitionToPresented:(BOOL)arg0 ;
-(BOOL)coverSheetSlidingViewControllerContentShouldAutoRotateWhenNotVisible:(id)arg0 ;
-(BOOL)coverSheetSlidingViewControllerShouldAllowDismissal:(id)arg0 ;
-(BOOL)hasContentUnderCoverSheetSlidingViewController:(id)arg0 ;
-(BOOL)hasFirstSwipeShowGrabberOverride;
-(BOOL)isActiveInterfaceOrientationLocked;
-(BOOL)isAnyGestureActivelyRecognized;
-(BOOL)isDismissGestureActive;
-(BOOL)isInSecureApp;
-(BOOL)isPresented;
-(BOOL)isTransitioning;
-(BOOL)isVisible;
-(BOOL)isVisibleAndNotDisappearing;
-(BOOL)secureAppEnvironmentViewControllerShouldEnableIdleWarning:(id)arg0 alwaysOnEnabled:(BOOL)arg1 ;
-(NSInteger)interfaceOrientationForWallpaperController:(id)arg0 ;
-(NSUInteger)screenEdgesDeferringSystemGestures;
-(id)_impactFeedbackGeneratorConfigurationForStyle:(NSInteger)arg0 ;
-(id)_newRubberBandFeedbackGeneratorForSettings:(id)arg0 ;
-(id)acquirePreserveSecureAppAssertionForReason:(id)arg0 ;
-(id)coverSheetViewController;
-(id)init;
-(id)scenesForBacklightSession;
-(id)traitsParticipantForSceneHandle:(id)arg0 ;
-(id)viewPreferringProminentPresentationAndDismissalForSystemApertureTransitionOverlayViewController:(id)arg0 ;
-(void)_acquireAsynchronousRenderingAssertion;
-(void)_acquireSystemApertureCoverSheetAssertion;
-(void)_animateForProgress:(CGFloat)arg0 ;
-(void)_authenticationChanged:(id)arg0 ;
-(void)_cleanupARubberBandTransitionForSlidingViewController:(id)arg0 ;
-(void)_cleanupATransition;
-(void)_cleanupDismissalTransition;
-(void)_cleanupIconAnimator;
-(void)_cleanupInterstitialTransitionForSlidingViewController:(id)arg0 ;
-(void)_cleanupPresentationTransition;
-(void)_cleanupRubberBandDismissalTransitionForSlidingViewController:(id)arg0 ;
-(void)_cleanupRubberBandPresentationTransitionForSlidingViewController:(id)arg0 ;
-(void)_clearSecureAppViewControllersIncludingWindow:(BOOL)arg0 ;
-(void)_clearSecureAppViewControllersIncludingWindow:(BOOL)arg0 force:(BOOL)arg1 ;
-(void)_createWallpaperOverlayIfNeededWithCoverSheetFrame:(struct CGRect )arg0 ;
// -(void)_enqueueBlock:(id)arg0 withName:(unk)arg1  ;
-(void)_invalidateSystemApertureCoverSheetAssertion;
-(void)_noteEffectiveLockStatusMayHaveChangedForUserNotification:(BOOL)arg0 canDismiss:(BOOL)arg1 ;
-(void)_notifyDelegateDidDismiss;
-(void)_notifyDelegateDidPresent;
-(void)_notifyDelegateRequestsUnlock;
-(void)_notifyDelegateWillDismiss;
-(void)_notifyDelegateWillPresent;
-(void)_performAfterSecureAppCleanup:(id)arg0 ;
-(void)_prepareCoverSheetWindowForDisplay;
-(void)_prepareForARubberBandTransitionForSlidingViewController:(id)arg0 ;
-(void)_prepareForATransition;
-(void)_prepareForDismissalTransition;
-(void)_prepareForPresentationTransitionForUserGesture:(BOOL)arg0 ;
-(void)_prepareForRubberBandDismissalTransitionForSlidingViewController:(id)arg0 ;
-(void)_prepareForRubberBandPresentationTransitionForSlidingViewController:(id)arg0 ;
-(void)_prepareForTransitionToSecureApp;
-(void)_prepareIconAnimatorForPresenting:(BOOL)arg0 ;
-(void)_prepareInterstitialTransitionForSlidingViewController:(id)arg0 ;
-(void)_prepareSecureAppViewController;
-(void)_prepareSecureAppWindowForDisplay;
-(void)_relinquishAsynchronousRenderingAssertion;
-(void)_relinquishHomeGestureOwnership;
-(void)_removeWallpaperOverlay;
-(void)_requestHomeGestureOwnership;
-(void)_restartStartupTransitionBegan:(id)arg0 ;
-(void)_setCoverSheet:(BOOL)arg0 windowVisible:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_setCoverSheetPresented:(BOOL)arg0 forcePresented:(BOOL)arg1 animated:(BOOL)arg2 options:(NSUInteger)arg3 withCompletion:(id)arg4 ;
-(void)_setCoverSheetPresented:(BOOL)arg0 forcePresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(id)arg3 ;
-(void)_setOrientationUpdatesDeferred:(BOOL)arg0 ;
-(void)_setTransitionProgress:(CGFloat)arg0 animated:(BOOL)arg1 gestureActive:(BOOL)arg2 coverSheetProgress:(CGFloat)arg3 completion:(id)arg4 ;
-(void)_tellDashBoardOurAppearanceAndBehaviorChanged;
-(void)_tellDashBoardOurAppearanceChanged;
-(void)_tellDashBoardOurBehaviorChanged;
-(void)_transitionFromSecureAppToFullAppAndDismiss:(BOOL)arg0 preservingBanners:(BOOL)arg1 ;
-(void)_updateIconsFlyInWithSettings:(id)arg0 ;
-(void)_updateInterstitialTransitionForSlidingViewController:(id)arg0 withProgress:(CGFloat)arg1 ;
-(void)_updateProximitySensorState;
-(void)_updateSecureAppViewControllerVisibilityForAssertionsActive:(BOOL)arg0 ;
-(void)_updateShouldDisplayFakeStatusBarInVisibleTransition:(BOOL)arg0 ;
-(void)_updateVisibilityOfWindow:(id)arg0 forReasons:(id)arg1 ;
-(void)_updateWallpaperOverlay;
-(void)addDismissalObserver:(id)arg0 ;
-(void)assistantDidDisappear:(id)arg0 windowScene:(id)arg1 ;
-(void)authenticationStateMayHaveChangedFromSource:(int)arg0 ;
-(void)conformsToCSAppearanceProviding;
-(void)conformsToCSBehaviorProviding;
-(void)conformsToCSExternalBehaviorProviding;
// -(void)coverSheetSlidingViewController:(id)arg0 animateForGestureActive:(BOOL)arg1 withProgress:(CGFloat)arg2 beginBlock:(id)arg3 endBlock:(unk)arg4  ;
-(void)coverSheetSlidingViewController:(id)arg0 animationTickedWithProgress:(CGFloat)arg1 velocity:(CGFloat)arg2 coverSheetFrame:(struct CGRect )arg3 gestureActive:(BOOL)arg4 forPresentationValue:(BOOL)arg5 ;
-(void)coverSheetSlidingViewController:(id)arg0 committingToEndPresented:(BOOL)arg1 ;
-(void)coverSheetSlidingViewController:(id)arg0 dismissGestureChangedWithProgress:(CGFloat)arg1 ;
-(void)coverSheetSlidingViewController:(id)arg0 isTransitioning:(BOOL)arg1 ;
-(void)coverSheetSlidingViewController:(id)arg0 prepareForDismissalTransitionForReversingTransition:(BOOL)arg1 forUserGesture:(BOOL)arg2 ;
-(void)coverSheetSlidingViewController:(id)arg0 prepareForPresentationTransitionForUserGesture:(BOOL)arg1 ;
-(void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg0 ;
-(void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg0 ;
-(void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg0 ;
-(void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg0 ;
-(void)coverSheetSlidingViewControllerDidEndTransition:(id)arg0 ;
-(void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg0 ;
-(void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg0 ;
-(void)coverSheetSlidingViewControllerReachabilityAnimationDidEnd:(id)arg0 ;
-(void)coverSheetSlidingViewControllerReachabilityAnimationWillBegin:(id)arg0 ;
-(void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg0 ;
-(void)coverSheetViewController:(id)arg0 didChangeActiveBehavior:(id)arg1 ;
-(void)coverSheetViewControllerActivityItemsMayHaveChanged:(id)arg0 ;
-(void)coverSheetViewControllerDidAddNewSceneHostEnvironment:(id)arg0 ;
-(void)coverSheetViewControllerDidObscureWallpaper:(id)arg0 obscured:(BOOL)arg1 ;
-(void)coverSheetViewControllerExternalLockProviderStateDidChange:(id)arg0 ;
-(void)coverSheetViewControllerWillPresentPosterSwitcher:(id)arg0 ;
-(void)loadViewsIfNeeded;
-(void)noteDeviceDidLock;
-(void)noteScreenDidTurnOff;
-(void)pearlMatchingStateProviderStateChangedForMatchFailure:(id)arg0 ;
-(void)removeDismissalObserver:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)secureAppOfTypeDidBegin:(NSUInteger)arg0 ;
-(void)secureAppOfTypeDidEnd:(NSUInteger)arg0 ;
-(void)secureAppViewControllerDidAuthenticate:(id)arg0 ;
-(void)setCoverSheetPresented:(BOOL)arg0 animated:(BOOL)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)setCoverSheetPresented:(BOOL)arg0 animated:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)updateBecauseSecureAppChanged;
-(void)updateInterfaceOrientationToMatchOrientation:(NSInteger)arg0 ;
-(void)updateVisibilityForGrabberVisible:(BOOL)arg0 ;
-(void)willUIUnlockWithPendingUnlockRequest:(BOOL)arg0 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif