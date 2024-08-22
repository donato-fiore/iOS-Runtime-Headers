// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINSWITCHERVIEWCONTROLLER_H
#define SBMAINSWITCHERVIEWCONTROLLER_H

@class UIViewController, NSArray, NSMutableDictionary, SBOrientationTransformWrapperView, NSMutableSet, NSDictionary, SBFTraitsParticipant, NSMutableArray, FBDisplayLayoutElement, SiriContinuitySource, UIApplicationSceneDeactivationAssertion, BSSimpleAssertion, BSTimer, NSHashTable, FBScene, SBFHomeGrabberSettings, BSAbsoluteMachTimer, UIViewController<SBSwitcherContentViewControlling>, NSString, BSAnimationSettings;
@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBFTraitsParticipantDelegate, SBSceneHandleObserver, SBAttentionAwarenessClientDelegate, SBButtonEventsHandler, BSInvalidatable;


#import "SBAppSwitcherServiceSet.h"
#import "SBWindow.h"
#import "SBFluidSwitcherGestureManager.h"
#import "SBAppLayout.h"
#import "SBSwitcherModelRemovalResults.h"
#import "SBMainDisplayLayoutState.h"
#import "SBAppSwitcherSettings.h"
#import "SBFluidSwitcherSheetMetricsCache.h"
#import "SBMainDisplaySceneLayoutViewController.h"
#import "SBAppSwitcherModel.h"
#import "SBSwitcherDemoCommandsServer.h"
#import "SBSwitcherDemoFilteringController.h"
#import "SBApplicationUserQuitMonitorServer.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBAppStatusBarContentAssertion.h"
#import "SBKeyboardHomeAffordanceAssertion.h"
#import "SBMedusaBannerViewController.h"
#import "SBAttentionAwarenessClient.h"

@interface SBMainSwitcherViewController : UIViewController <SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBLayoutStateTransitionSceneEntityFrameProvider, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBFTraitsParticipantDelegate, SBSceneHandleObserver, SBAttentionAwarenessClientDelegate, SBButtonEventsHandler>

 {
    NSArray *_appLayouts;
    SBAppSwitcherServiceSet *_switcherServices;
    NSMutableDictionary *_appLayoutToAcquiredTransientOverlayViewController;
    NSMutableDictionary *_appLayoutToEligibleTransientOverlayViewController;
    SBWindow *_window;
    SBOrientationTransformWrapperView *_contentWrapperView;
    SBFluidSwitcherGestureManager *_gestureManager;
    NSMutableSet *_windowDragSceneIdentifiers;
    SBAppLayout *_activeAppLayoutWhenActivatingMainSwitcher;
    SBSwitcherModelRemovalResults *_activeTransitionModelRemovalResults;
    NSDictionary *_activeTransitionModelRemovalAppLayoutToRemovalContext;
    SBMainDisplayLayoutState *_lastMeaningfullyDifferentLayoutState;
    SBFTraitsParticipant *_switcherTraitsParticipant;
    SBAppSwitcherSettings *_settings;
    Class _contentViewControllerClass;
    SBFluidSwitcherSheetMetricsCache *_sheetMetricsCache;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    NSMutableSet *_liveDisplayItemsBeingTerminated;
    BOOL _ignoreModelUpdates;
    id<BSInvalidatable> *_deferRotationForAppSwitcherAssertion;
    id<BSInvalidatable> *_lockKeyboardFocusAssertion;
    id<BSInvalidatable> *_wallpaperScaleAssertion;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBAppLayout *_testItemForInsertion;
    NSUInteger _testItemInsertionIndex;
    SBAppSwitcherModel *_mainSwitcherModel;
    SBSwitcherDemoCommandsServer *_demoCommandsServer;
    SBSwitcherDemoFilteringController *_demoFilteringController;
    NSArray *_demoFilteringHiddenAppLayouts;
    SBApplicationUserQuitMonitorServer *_userQuitMonitorServer;
    SiriContinuitySource *_siriSource;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id<BSInvalidatable> *_keyboardFocusObserver;
    UIApplicationSceneDeactivationAssertion *_deactivatingScenesResignActiveAssertion;
    SBAppStatusBarSettingsAssertion *_mainStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_floatingStatusBarAssertion;
    SBAppStatusBarContentAssertion *_containerStatusBarContentAssertion;
    BSSimpleAssertion *_preventAdditionalMedusaSnapshotsAssertion;
    BSTimer *_preventAdditionalMedusaSnapshotsInvalidationTimer;
    NSMutableSet *_asynchronousRenderingAssertions;
    NSHashTable *_asynchronousRenderingCachedSurfacesReasons;
    BSTimer *_disableCachingAsynchronousRenderingSurfacesTimer;
    NSMutableDictionary *_recentSwipeUpToKillTimestampsForAppLayouts;
    BOOL _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBMedusaBannerViewController *_medusaBannerViewController;
    BSAbsoluteMachTimer *_medusaBannerPresentTimer;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
}


@property (retain, nonatomic, setter=_setHideStatusBarAssertions:) NSHashTable *_hideStatusBarAssertions; // ivar: __hideStatusBarAssertions
@property (readonly, nonatomic) SBAppLayout *activeTransientOverlayPresentedAppLayout;
@property (readonly, nonatomic) BOOL canInterruptActiveTransition;
@property (readonly, nonatomic) UIViewController<SBSwitcherContentViewControlling> *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) BSAnimationSettings *defaultTransitionAnimationSettings;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTransientOverlayAppLayouts;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion


+(BOOL)_layoutState:(id)arg0 hasMeaningfullyChangedFromOldLayoutState:(id)arg1 ;
+(id)_applyWindowReplacementPolicyWithRemainingMainElements:(id)arg0 layoutStateBeforeRemoval:(id)arg1 lastDifferentLayoutState:(id)arg2 entitiesWithRemovalContexts:(id)arg3 ;
+(id)_remainingMainElementsAfterRemovingEntities:(id)arg0 fromMainElements:(id)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)arg0 dismissFloatingSwitcher:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg0 ;
-(BOOL)_hasAppLayoutContainingDisplayItem:(id)arg0 ;
-(BOOL)_isAcquiredTransientOverlayViewController:(id)arg0 ;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg0 ;
-(BOOL)_isPerformingModelTransitionForReplacementAppLayout:(id)arg0 ;
-(BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
-(BOOL)_shouldAddAppLayoutToFront:(id)arg0 ;
-(BOOL)_shouldMorphFromPIPForTransitionContext:(id)arg0 ;
-(BOOL)_shouldMorphToPIPForTransitionContext:(id)arg0 ;
-(BOOL)_shouldPrioritizeSortOrderForAppLayout:(id)arg0 ;
-(BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
-(BOOL)_supportsFloatingApplication;
-(BOOL)activateMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)deleteAppLayoutForDisplayItem:(id)arg0 ;
-(BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)arg0 ;
-(BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)arg0 ;
-(BOOL)fluidSwitcherGestureManagerSupportsFloatingApplication:(id)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleHomeButtonSinglePressUp;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasAppLayoutForDisplayItem:(id)arg0 ;
-(BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg0 ;
-(BOOL)isAnySwitcherVisible;
-(BOOL)isInAnyPeekState;
-(BOOL)isInAppStatusBarHidden;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg0 ;
-(BOOL)isMainSwitcherVisible;
-(BOOL)isSlideOverSwitcherVisible;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldAutorotate;
-(BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)arg0 forTransitionWithContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 displayItemSupportsCenterRole:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldMorphFromPIPForTransitionContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldMorphToPIPForTransitionContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldResignActiveForStartOfTransition:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsKillingOfAppLayout:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsTitleItemsForAppLayout:(id)arg1 ;
-(BOOL)switcherContentControllerIsFloatingApplicationSupported:(id)arg0 ;
-(BOOL)switcherContentControllerIsKeyboardHomeAffordanceAssertionCurrentlyBeingTaken:(id)arg0 ;
-(BOOL)toggleMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(CGFloat)minimumHomeScreenScale;
-(CGFloat)scaleForDownscaledSnapshotGenerationForSceneHandle:(id)arg0 ;
-(NSInteger)_currentUnlockedEnvironmentMode;
-(NSInteger)_overrideInterfaceOrientationMechanics;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSInteger)homeScreenInterfaceOrientation;
-(NSInteger)sbActiveInterfaceOrientation;
-(NSInteger)switcherInterfaceOrientationForContentController:(id)arg0 ;
-(NSUInteger)_debugSwitcherPostModernRotationSupportedSupportedInterfaceOrientations;
-(NSUInteger)supportedInterfaceOrientations;
-(NSUInteger)switcherSupportedInterfaceOrientations;
-(id)_activateSwitcherValidatorWithEventLabel:(SEL)arg0 animated:(id)arg1 ;
-(id)_appForDisplayItem:(id)arg0 ;
-(id)_appLayoutContainingDisplayItem:(id)arg0 ;
-(id)_appLayoutFromPrimaryLayoutItem:(id)arg0 sideLayoutElement:(id)arg1 configuration:(NSInteger)arg2 ;
-(id)_centerWindowSheetMetricsCache;
-(id)_coordinateSpaceForInterfaceOrientation:(NSInteger)arg0 ;
-(id)_currentAppLayout;
-(id)_currentFloatingAppLayout;
-(id)_currentLayoutState;
-(id)_currentVisibleFloatingItem;
-(id)_deviceApplicationSceneHandleForDisplayItem:(id)arg0 ;
-(id)_dismissSwitcherValidatorToAppLayout:(SEL)arg0 dismissFloatingSwitcher:(id)arg1 withEventLabel:(BOOL)arg2 animated:(id)arg3 ;
-(id)_displayItemForEntity:(id)arg0 ;
-(id)_entityForDisplayItem:(id)arg0 ;
-(id)_init;
-(id)_leadingStatusBarStyleRequest;
-(id)_medusaKeyboardSceneHandle;
-(id)_modelRemovalRequestForDisplayItemResolutionResults:(id)arg0 ;
-(id)_nonHiddenAppLayoutsForDisplayItem:(id)arg0 ;
-(id)_persistenceIdentifiersForBundleIdentifier:(id)arg0 onlyIncludeLaunchableIdentifiers:(BOOL)arg1 ;
-(id)_recentAppLayoutsController;
-(id)_resultsForDisplayItemRemovalResolutionRequest:(id)arg0 ;
-(id)_switcherModelRemovalResultsForRequest:(id)arg0 forReason:(NSInteger)arg1 ;
-(id)_toggleSwitcherTransitionValidatorAnimated:(SEL)arg0 ;
-(id)_trailingStatusBarStyleRequest;
-(id)_transientOverlayPesentationManager;
-(id)acquireAllowHiddenAppAssertionForBundleIdentifier:(id)arg0 reason:(id)arg1 ;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg0 ;
-(id)appLayoutsForSwitcherContentController:(id)arg0 ;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)homeGestureBottomEdgeRecognizer;
-(id)mainSwitcherWindow;
-(id)matchingIconViewForIconView:(id)arg0 ;
-(id)participantAssociatedWindows:(id)arg0 ;
-(id)recentAppLayouts;
-(id)requestInAppStatusBarHiddenAssertionForReason:(id)arg0 animated:(BOOL)arg1 ;
-(id)switcherContentController:(id)arg0 hiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(id)switcherContentController:(id)arg0 transitionEventForContext:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 transitionEventForLayoutState:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 visibleAppLayoutsForBundleIdentifier:(id)arg1 ;
-(id)transitionEventForContext:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)transitionEventForLayoutState:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg0 ;
-(id)windowsToExcludeForCrossfadeSnapshotForSwitcherContentController:(id)arg0 ;
-(struct CGAffineTransform )switcherContentController:(id)arg0 transformForCardUnderSheetForBoundsSize:(struct CGSize )arg1 ;
-(struct CGRect )_statusBarAvoidanceFrameForLayoutRole:(NSInteger)arg0 ;
-(struct CGRect )applicationSceneSettingsFrameForInterfaceOrientation:(NSInteger)arg0 centerConfiguration:(NSInteger)arg1 ;
-(struct CGRect )applicationSceneSettingsFrameForInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )frameForCenterItemWithConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(struct CGRect )frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(struct CGRect )frameForItemWithRole:(NSInteger)arg0 inMainAppLayout:(id)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )sceneEntityFrameForWorkspaceEntity:(id)arg0 inLayoutState:(id)arg1 ;
-(struct UIEdgeInsets )_statusBarEdgeInsets;
-(void)_acquireAssertion:(id)arg0 ;
-(void)_activateNeighboringAppLayoutRequiringActiveAppLayout:(BOOL)arg0 appLayoutEnvironment:(NSInteger)arg1 inForwardDirection:(BOOL)arg2 eventLabel:(id)arg3 ;
-(void)_addAcquiredTransientOverlayViewController:(id)arg0 forAppLayout:(id)arg1 ;
-(void)_addAppLayoutToFront:(id)arg0 ;
-(void)_addAppLayoutToFront:(id)arg0 removeAppLayout:(id)arg1 ;
-(void)_applicationDidExit:(id)arg0 ;
-(void)_cacheAppList;
-(void)_cancelPIPForDisplayItem:(id)arg0 ;
-(void)_configureRequest:(id)arg0 forSwitcherTransitionRequest:(id)arg1 withEventLabel:(id)arg2 ;
-(void)_continuityAppSuggestionChanged:(id)arg0 ;
-(void)_deleteAppLayoutsMatchingBundleIdentifier:(id)arg0 ;
-(void)_destroyAppListCache;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg0 ;
-(void)_enumerateTransientOverlayViewControllersUsingBlock:(id)arg0 ;
-(void)_evaluateAsynchronousRenderingEnablement;
-(void)_focusNewOverlayApplicationTransitioningFromLayoutState:(id)arg0 toLayoutState:(id)arg1 ;
-(void)_handleFocusedIconSwitcherShortcutAction:(NSInteger)arg0 bundleIdentifier:(id)arg1 ;
// -(void)_insertAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 modelMutationBlock:(id)arg2 completion:(unk)arg3  ;
// -(void)_insertAppLayouts:(id)arg0 atIndexes:(id)arg1 modelMutationBlock:(id)arg2 completion:(unk)arg3  ;
-(void)_insertCardForDisplayIdentifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_loadContentViewControllerIfNecessary;
-(void)_lockKeyboardFocus;
-(void)_lockOrientationForSwitcherWithLayoutState:(id)arg0 ;
-(void)_noteSwitcherDropAnimationCompletedWithContext:(id)arg0 ;
-(void)_noteUIWillLock;
-(void)_performSceneDestructionForModelRemovalResults:(id)arg0 ;
-(void)_performSwitcherDropWithContext:(id)arg0 ;
-(void)_presentMedusaEducationBanner;
-(void)_purgeHiddenAppLayoutsForUILock;
-(void)_rebuildAppListCache;
-(void)_releaseKeyboardFocus;
-(void)_releaseSwitcherOrientationLock;
-(void)_removeAcquiredTransientOverlayViewController:(id)arg0 ;
-(void)_removeAppLayout:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)_removeCardForDisplayIdentifier:(id)arg0 ;
-(void)_removeDisplayItem:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)_reqlinquishAssertion:(id)arg0 ;
-(void)_setAsynchronousRenderingEnabled:(BOOL)arg0 withMinificationFilter:(BOOL)arg1 forLayerTarget:(id)arg2 presentationManager:(id)arg3 ;
-(void)_setContainerStatusBarHidden:(BOOL)arg0 animationDuration:(CGFloat)arg1 usingAssertion:(*id)arg2 reason:(id)arg3 ;
-(void)_setContentOrientation:(NSInteger)arg0 forContentViewController:(id)arg1 ;
-(void)_setStatusBarPartsHidden:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_switcherModelChanged:(id)arg0 ;
-(void)_switcherServiceAdded:(id)arg0 ;
-(void)_switcherServiceRemoved:(id)arg0 ;
-(void)_updateAssertion:(id)arg0 ;
-(void)_updateBestAppSuggestion;
-(void)_updateContentViewInterfaceOrientation:(NSInteger)arg0 ;
-(void)_updateDisplayLayoutElementForLayoutState:(id)arg0 ;
-(void)_updateKeyboardHomeAffordanceAssertion;
-(void)_warmAppInfoForAppsInList;
-(void)addAppLayoutForDisplayItem:(id)arg0 completion:(id)arg1 ;
-(void)addAppLayoutForTransientOverlayViewController:(id)arg0 ;
-(void)addCenterRoleAppLayoutForDisplayItem:(id)arg0 completion:(id)arg1 ;
-(void)appSwitcherModel:(id)arg0 didRemoveAppLayoutForFallingOffList:(id)arg1 ;
-(void)cancelActiveGestureForSwitcherContentController:(id)arg0 ;
-(void)cancelAnyPeekToHomescreenFromSource:(NSInteger)arg0 ;
-(void)client:(id)arg0 attentionLostTimeoutDidExpire:(CGFloat)arg1 forConfigurationGeneration:(NSUInteger)arg2 withAssociatedObject:(id)arg3 ;
-(void)clientDidResetForUserAttention:(id)arg0 ;
-(void)dealloc;
-(void)didChangeSettingsForParticipant:(id)arg0 context:(id)arg1 ;
-(void)eventSource:(id)arg0 userDeletedWebBookmark:(id)arg1 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)failMultitaskingGesturesForReason:(id)arg0 ;
-(void)fluidSwitcherGestureManager:(id)arg0 clickReceivedForHomeGrabberView:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didBeginDraggingWindowWithSceneIdentifier:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didBeginGesture:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didEndGesture:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didPlatterizeWindowDragWithSceneIdentifier:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 didUpdateGesture:(id)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 tapReceivedForGrabberTongueAtEdge:(NSUInteger)arg1 ;
-(void)fluidSwitcherGestureManager:(id)arg0 willEndDraggingWindowWithSceneIdentifier:(id)arg1 ;
-(void)handleApplicationSceneEntityDestructionIntent:(id)arg0 forEntities:(id)arg1 ;
-(void)keyboardFocusController:(id)arg0 externalSceneDidAcquireFocus:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)noteKeyboardIsForMedusaWithOwningScene:(id)arg0 ;
-(void)noteKeyboardIsNotForMedusa;
-(void)performKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 ;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)removeAppLayoutForDisplayItem:(id)arg0 shouldDestroyScene:(BOOL)arg1 ;
-(void)removeAppLayoutTransientOverlayViewController:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)switcherContentController:(id)arg0 activatedBestAppSuggestion:(id)arg1 ;
-(void)switcherContentController:(id)arg0 bringAppLayoutToFront:(id)arg1 ;
-(void)switcherContentController:(id)arg0 deletedDisplayItem:(id)arg1 inAppLayout:(id)arg2 forReason:(NSInteger)arg3 ;
-(void)switcherContentController:(id)arg0 layoutStateTransitionDidEndWithTransitionContext:(id)arg1 ;
-(void)switcherContentController:(id)arg0 performTransitionWithRequest:(id)arg1 gestureInitiated:(BOOL)arg2 ;
-(void)switcherContentController:(id)arg0 reopenHiddenAppLayoutsWithBundleIdentifier:(id)arg1 ;
-(void)switcherContentController:(id)arg0 requestNewWindowForBundleIdentifier:(id)arg1 ;
-(void)switcherContentController:(id)arg0 setCacheAsynchronousRenderingSurfaces:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg0 setContainerStatusBarHidden:(BOOL)arg1 partsHidden:(NSUInteger)arg2 animationDuration:(CGFloat)arg3 ;
-(void)switcherContentController:(id)arg0 setContentOrientation:(NSInteger)arg1 ;
-(void)switcherContentController:(id)arg0 setHomeScreenAlpha:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurProgress:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurType:(NSInteger)arg1 ;
-(void)switcherContentController:(id)arg0 setHomeScreenDimmingAlpha:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenScale:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setPointerInteractionsEnabled:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg0 setWallpaperScale:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setWallpaperStyle:(NSInteger)arg1 ;
-(void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)arg0 ;
-(void)updatePreferenceForParticipant:(id)arg0 updater:(id)arg1 ;
-(void)updateUserInteractionEnabledForSwitcherContentController:(id)arg0 ;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif