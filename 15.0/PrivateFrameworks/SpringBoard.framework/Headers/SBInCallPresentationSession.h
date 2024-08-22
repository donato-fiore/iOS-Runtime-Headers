// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINCALLPRESENTATIONSESSION_H
#define SBINCALLPRESENTATIONSESSION_H

@class NSMutableSet, NSMutableArray, BSEventQueue, UIScreen, NSMapTable, NSMutableDictionary, UIApplicationSceneDeactivationManager, UIApplicationSceneDeactivationAssertion, SBSUIInCallSceneClientSettingsDiffInspector, NSUUID, NSString;
@protocol SBApplicationSceneHandleUpdateContributing, SBBannerUnfurlSourceContextProviding, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBInCallBannerPresentableViewControllerDelegate, SBInCallTransientOverlayViewControllerDelegate, SBSceneHandleActionConsuming, SBWorkspaceApplicationSceneTransitionContextDelegate, SBLayoutStateTransitionObserver, SBUIActiveOrientationObserver, FBSceneObserver, BSInvalidatable, SBApplicationHosting, SBInCallPresentationSessionDelegate;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBInCallBannerPresentableViewController.h"
#import "SBBannerManager.h"
#import "SBLockScreenManager.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBMainDisplaySceneManager.h"
#import "SBInCallTransientOverlayViewController.h"
#import "SBMainWorkspace.h"
#import "SBMainSwitcherViewController.h"
#import "SBSetupManager.h"
#import "SBPIPControllerCoordinator.h"
#import "SpringBoard.h"
#import "SBUIController.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBLayoutElement.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBInCallPresentationSession : NSObject <SBApplicationSceneHandleUpdateContributing, SBBannerUnfurlSourceContextProviding, SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBInCallBannerPresentableViewControllerDelegate, SBInCallTransientOverlayViewControllerDelegate, SBSceneHandleActionConsuming, SBWorkspaceApplicationSceneTransitionContextDelegate, SBLayoutStateTransitionObserver, SBUIActiveOrientationObserver, FBSceneObserver, BSInvalidatable, SBApplicationHosting>

 {
    NSMutableSet *_activeSystemGestureDeactivationReasons;
    NSMutableSet *_activeSystemAnimationDeactivationReasons;
    NSMutableArray *_assertionAnalyticSources;
    SBBacklightController *_backlightController;
    SBInCallBannerPresentableViewController *_bannerPresentableViewController;
    SBBannerManager *_bannerManager;
    NSMutableArray *_deviceLockHandlingCompletionHandlers;
    id<BSInvalidatable> *_ignoreSuspendedUnderLockAssertion;
    BOOL _isHandlingDeviceLock;
    BOOL _hasBegunHandlingPresentationRequest;
    BOOL _hasHandledInitialPresentationRequest;
    BOOL _hasReceivedFinalizeSceneDestructionRequest;
    BSEventQueue *_localEventQueue;
    SBLockScreenManager *_lockScreenManager;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    SBMainDisplaySceneManager *_sceneManager;
    UIScreen *_screen;
    SBInCallTransientOverlayViewController *_transientOverlayViewController;
    NSMapTable *_entityToSceneUpdateContext;
    NSMapTable *_entityToUnfurlSourceContext;
    SBMainWorkspace *_workspace;
    SBMainSwitcherViewController *_mainSwitcherViewController;
    SBSetupManager *_setupManager;
    SBPIPControllerCoordinator *_pipControllerCoordinator;
    SpringBoard *_springBoard;
    SBUIController *_uiController;
    NSMutableDictionary *_bannerDidDisappearHandlerByUUID;
    BOOL _isInvalidated;
    BOOL _isBannerPresentationActive;
    BOOL _isTransientOverlayPresentationActive;
    BOOL _hasAdoptedFullscreenOverlayAPI;
    BOOL _isPerformingSwitcherPresentation;
    BOOL _isHandlingTransientOverlayDismissalRequest;
    NSUInteger _presentationModeRevisionID;
    BOOL _isAttachedToWindowedAccessory;
    BOOL _isScreenSharingPresentation;
    id<BSInvalidatable> *_suppressHomeIndicatorWhileAttachedToWindowedAccessoryAssertion;
    UIApplicationSceneDeactivationManager *_deactivationManager;
    UIApplicationSceneDeactivationAssertion *_systemAnimationSceneDeactivationAssertion;
    UIApplicationSceneDeactivationAssertion *_systemGestureSceneDeactivationAssertion;
    id<BSInvalidatable> *_allowHiddenAppAssertion;
    SBAppStatusBarSettingsAssertion *_appStatusBarSettingsAssertion;
    SBLayoutElement *_preferredDismissalPrimaryElement;
    id<BSInvalidatable> *_preventKeyboardFocusAssertion;
    SBSUIInCallSceneClientSettingsDiffInspector *_inCallSceneClientSettingsDiffInspector;
    NSUUID *_requestedPresentationConfigurationIdentifier;
    SBDeviceApplicationSceneHandle *_sceneHandleToObserveForShowSystemControlsAction;
    BOOL _observedSceneHandlePrefersHomeIndicatorAutoHidden;
    id<BSInvalidatable> *_hideSharePlayContentFromClonedDisplayAssertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBInCallPresentationSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disallowsLockHardwareButtonDoublePress;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFullscreenCallInSwitcher;
@property (nonatomic) CGFloat preferredBannerHeight; // ivar: _preferredBannerHeight
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (nonatomic) BOOL shouldIgnoreHomeIndicatorAutoHiddenClientSettings; // ivar: _shouldIgnoreHomeIndicatorAutoHiddenClientSettings
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHandlingDeviceLock;


-(BOOL)_allowsBannerPresentation;
-(BOOL)_allowsInitiallyDismissedPresentation;
-(BOOL)_hasExistingSceneSettingsPresentationModeForLayoutState:(id)arg0 ;
-(BOOL)_isCallConnectedForScene;
-(BOOL)_isDismissedForLayoutState:(id)arg0 ;
-(BOOL)_isInSwitcherModel;
-(BOOL)_isShowingFullScreenForLayoutState:(id)arg0 ;
-(BOOL)_isShowingInPIP;
-(BOOL)_isValidForSceneUpdates;
-(BOOL)_sceneSupportsHandlingDeviceLock;
-(BOOL)_shouldConsiderScenePrimaryForLayoutState:(id)arg0 ;
-(BOOL)_shouldExcludeFromSwitcherWhenDismissed;
-(BOOL)_shouldUseTransientOverlayForFullScreenPresentation;
-(BOOL)_systemControlsShouldPresentAsEmbeddedForLayoutState:(id)arg0 ;
-(BOOL)canBeRestored;
-(BOOL)canHostAnApp;
-(BOOL)handleAccessoryAttachWithCompletion:(id)arg0 ;
-(BOOL)isHostingAnApp;
-(BOOL)sceneHandle:(id)arg0 didReceiveAction:(id)arg1 ;
-(BOOL)supportsBecomingVisibleWhenUnlockingFromSource:(int)arg0 wakingDisplay:(BOOL)arg1 ;
-(NSInteger)_currentPresentationModeForLayoutState:(id)arg0 ;
-(NSUInteger)_incrementPresentationModeRevisionIDWithReason:(id)arg0 ;
-(id)_acquireAssertionForAnalyticsSource:(id)arg0 ;
-(id)_clientSettingsIfExists;
-(id)_createTransientOverlayViewController;
-(id)_inCallSceneClientSettingsDiffInspector;
-(id)bannerUnfurlSourceContextForTransitionRequest:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)hostedAppSceneHandle;
-(id)hostedAppSceneHandles;
-(id)initWithSceneHandle:(id)arg0 screen:(id)arg1 sceneManager:(id)arg2 workspace:(id)arg3 bannerManager:(id)arg4 lockScreenManager:(id)arg5 deactivationManager:(id)arg6 mainSwitcherViewController:(id)arg7 backlightController:(id)arg8 keyboardFocusController:(id)arg9 springBoard:(id)arg10 setupManager:(id)arg11 uiController:(id)arg12 pipCoordinator:(id)arg13 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)overrideAppSceneEntityForLaunchingApplication:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGRect )_presentedBannerBounds;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(void)_addSystemAnimationDeactivationReason:(id)arg0 ;
-(void)_addSystemGestureDeactivationReason:(id)arg0 ;
-(void)_configureTransitionRequest:(id)arg0 forPresentingTransientOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)_destroySceneEntityIfExists;
-(void)_dispatchBlockToMainEventQueueWithReason:(id)arg0 block:(id)arg1 ;
-(void)_handleRequestInCallPresentationModeAction:(id)arg0 ;
// -(void)_insertIntoSwitcherAsDismissedWithAnalyticsSource:(id)arg0 transitionValidator:(id)arg1 completion:(unk)arg2  ;
-(void)_notifySceneOfDeviceLockFromSource:(int)arg0 completion:(id)arg1 ;
-(void)_performBannerDismissalTransitionAnimated:(BOOL)arg0 analyticsSource:(id)arg1 completion:(id)arg2 ;
-(void)_performBannerPresentationTransitionWithAnalyticsSource:(id)arg0 completion:(id)arg1 ;
-(void)_performBannerToFullScreenPresentationTransitionAnimated:(BOOL)arg0 analyticsSource:(id)arg1 completion:(id)arg2 ;
-(void)_performBannerToTransientOverlayPresentationTransitionAnimated:(BOOL)arg0 analyticsSource:(id)arg1 completion:(id)arg2 ;
-(void)_performBlockUsingMainEventQueueWithReason:(id)arg0 handler:(id)arg1 ;
-(void)_performPresentationWithRequestedPresentationMode:(NSInteger)arg0 isUserInitiated:(BOOL)arg1 animated:(BOOL)arg2 analyticsSource:(id)arg3 completion:(id)arg4 ;
-(void)_performSceneUpdateTransactionWithContext:(id)arg0 ;
-(void)_performSwitcherDismissalTransitionAnimated:(BOOL)arg0 shouldDestroyScene:(BOOL)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)_performSwitcherPresentationTransitionAnimated:(BOOL)arg0 isUserInitiated:(BOOL)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)_performTransientOverlayDismissalTransitionAnimated:(BOOL)arg0 shouldInsertIntoSwitcherModel:(BOOL)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)_performTransientOverlayPresentationTransitionAnimated:(BOOL)arg0 analyticsSource:(id)arg1 completion:(id)arg2 ;
-(void)_prepareForTransientOverlayPresentationTransactionWithAnimation:(BOOL)arg0 analyticsSource:(id)arg1 completion:(id)arg2 ;
-(void)_presentWithRequestedConfiguration:(id)arg0 animated:(BOOL)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)_removeFromSwitcherForPrefersHiddenWhenDismissedWithValidator:(id)arg0 ;
-(void)_removeSystemAnimationDeactivationReason:(id)arg0 ;
-(void)_removeSystemGestureDeactivationReason:(id)arg0 ;
-(void)_sendShowNoticeForSystemControlsActionIfNeeded;
-(void)_setBannerPresentationActive:(BOOL)arg0 ;
-(void)_setTransientOverlayPresentationActive:(BOOL)arg0 ;
-(void)_uiLockStateDidChange:(id)arg0 ;
-(void)_updateAppStatusBarSettingsAssertionForLayoutState:(id)arg0 ;
-(void)_updateKeyboardFocusPreventionAssertionWithLayoutState:(id)arg0 ;
-(void)_updatePIPInsetsForExpanseHUDForUnlockedEnvironmentMode:(NSInteger)arg0 shouldConsiderPrimary:(BOOL)arg1 ;
-(void)_updateSceneDeactivationAssertions;
-(void)_updateSceneHandleToObserveForSendingShowNoticeForSystemControlsAction:(id)arg0 ;
-(void)_updateSystemControlsShouldPresentAsEmbedded;
-(void)_updateVisibilityInSwitcherForPrefersHiddenWhenDismissedIfNeededForLayoutState:(id)arg0 ;
-(void)_windowedAccessoryDidAttachOrDetach:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)applicationSceneHandle:(id)arg0 appendToSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)applicationSceneHandle:(id)arg0 appendToTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)conformsToSBApplicationHosting;
-(void)dismissAndFinalizeSceneDestructionAnimated:(BOOL)arg0 analyticsSource:(id)arg1 completion:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg0 shouldFinalizeSceneDestruction:(BOOL)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)ensureInclusionInSwitcherForRestoreFromPIPWithCompletion:(id)arg0 ;
-(void)handleDeviceLockFromSource:(int)arg0 completion:(id)arg1 ;
-(void)hostedAppWillRotateToInterfaceOrientation:(NSInteger)arg0 ;
-(void)inCallBannerPresentableViewController:(id)arg0 didDisappearWithReason:(id)arg1 ;
-(void)inCallBannerPresentableViewController:(id)arg0 viewWillTransitionSizeWithAnimationSettings:(id)arg1 ;
-(void)inCallBannerPresentableViewController:(id)arg0 willDisappearWithReason:(id)arg1 ;
-(void)inCallBannerPresentableViewControllerCallConnectedStatusChanged:(id)arg0 ;
-(void)inCallBannerPresentableViewControllerDidAppear:(id)arg0 ;
-(void)inCallBannerPresentableViewControllerDidCrossDefaultDraggingThreshold:(id)arg0 ;
-(void)inCallBannerPresentableViewControllerDidReceiveTap:(id)arg0 ;
-(void)inCallBannerPresentableViewControllerUserInteractionDidEnd:(id)arg0 ;
-(void)inCallBannerPresentableViewControllerUserInteractionWillBegin:(id)arg0 ;
-(void)inCallBannerPresentableViewControllerWillAppear:(id)arg0 ;
-(void)inCallTransientOverlayViewController:(id)arg0 didAppearAnimated:(BOOL)arg1 ;
-(void)inCallTransientOverlayViewController:(id)arg0 didDisappearAnimated:(BOOL)arg1 ;
-(void)inCallTransientOverlayViewController:(id)arg0 viewWillTransitionSizeWithAnimationSettings:(id)arg1 ;
-(void)inCallTransientOverlayViewController:(id)arg0 willAppearAnimated:(BOOL)arg1 ;
-(void)inCallTransientOverlayViewController:(id)arg0 willDisappearAnimated:(BOOL)arg1 ;
-(void)inCallTransientOverlayViewControllerRequestsDismissal:(id)arg0 ;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)presentWithRequestedConfiguration:(id)arg0 animated:(BOOL)arg1 analyticsSource:(id)arg2 completion:(id)arg3 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleOverridesToSuppressTo:(NSUInteger)arg1 ;


@end


#endif