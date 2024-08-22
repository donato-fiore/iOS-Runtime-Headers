// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINSWITCHERCONTROLLERCOORDINATOR_H
#define SBMAINSWITCHERCONTROLLERCOORDINATOR_H

@class NSMapTable, NSArray, NSMutableDictionary, NSMutableSet, NSDictionary, NSMutableArray, SiriContinuitySource, UIApplicationSceneDeactivationAssertion, BSSimpleAssertion, BSAbsoluteMachTimer, NSHashTable, FBScene, SBFHomeGrabberSettings, SBSDisplayLayoutElement, NSString;
@protocol SBApplicationSupportServiceRequestPersistenceIdentifierProvider, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBAppInteractionEventSourceObserving, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBSwitcherViewControllerDelegate, SBButtonEventsHandler, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBAppSwitcherServiceSet.h"
#import "SBAppLayout.h"
#import "SBSwitcherModelRemovalResults.h"
#import "SBMainDisplayLayoutState.h"
#import "SBAppSwitcherSettings.h"
#import "SBFluidSwitcherSheetMetricsCache.h"
#import "SBAppSwitcherModel.h"
#import "SBSwitcherDemoCommandsServer.h"
#import "SBSwitcherDemoFilteringController.h"
#import "SBApplicationUserQuitMonitorServer.h"
#import "SBWorkspaceKeyboardFocusController.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBStatusBarPartVisibilityAssertion.h"
#import "SBKeyboardHomeAffordanceAssertion.h"

@interface SBMainSwitcherControllerCoordinator : NSObject <SBApplicationSupportServiceRequestPersistenceIdentifierProvider, SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate, SBSwitcherDemoFilteringControllerObserver, PTSettingsKeyObserver, SBLayoutStateTransitionObserver, SBFluidSwitcherGestureManagerDelegate, SBWorkspaceKeyboardFocusControllerObserver, SBAppSwitcherModelDelegate, SBAppInteractionEventSourceObserving, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBSwitcherViewControllerDelegate, SBButtonEventsHandler>

 {
    NSMapTable *_switcherControllersByWindowScene;
    NSMapTable *_layoutStateTransitionCoordinatorsByWindowScene;
    NSArray *_appLayouts;
    SBAppSwitcherServiceSet *_switcherServices;
    NSMutableDictionary *_appLayoutToAcquiredTransientOverlayViewController;
    NSMutableDictionary *_appLayoutToEligibleTransientOverlayViewController;
    NSMutableSet *_windowDragSceneIdentifiers;
    SBAppLayout *_activeAppLayoutWhenActivatingMainSwitcher;
    SBSwitcherModelRemovalResults *_activeTransitionModelRemovalResults;
    NSDictionary *_activeTransitionModelRemovalAppLayoutToRemovalContext;
    SBMainDisplayLayoutState *_lastMeaningfullyDifferentLayoutState;
    SBAppSwitcherSettings *_settings;
    SBFluidSwitcherSheetMetricsCache *_sheetMetricsCache;
    NSMutableArray *_servicesRemovedWhileAwayFromSwitcher;
    NSMutableSet *_liveDisplayItemsBeingTerminated;
    BOOL _ignoreModelUpdates;
    id<BSInvalidatable> *_deferRotationForAppSwitcherAssertion;
    id<BSInvalidatable> *_lockKeyboardFocusAssertion;
    id<BSInvalidatable> *_wallpaperScaleAssertion;
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
    SBWindowSceneStatusBarSettingsAssertion *_mainStatusBarAssertion;
    SBWindowSceneStatusBarSettingsAssertion *_floatingStatusBarAssertion;
    SBStatusBarPartVisibilityAssertion *_containerStatusBarContentAssertion;
    BSSimpleAssertion *_preventAdditionalMedusaSnapshotsAssertion;
    BSAbsoluteMachTimer *_preventAdditionalMedusaSnapshotsInvalidationTimer;
    NSMutableSet *_asynchronousRenderingAssertions;
    NSHashTable *_asynchronousRenderingCachedSurfacesReasons;
    BSAbsoluteMachTimer *_disableCachingAsynchronousRenderingSurfacesTimer;
    NSMutableDictionary *_recentSwipeUpToKillTimestampsForAppLayouts;
    BOOL _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    NSMutableSet *_activeBetaLaunchHandles;
    NSObject<OS_dispatch_queue> *_storeAppLaunchUIActivationQueue;
    SBSDisplayLayoutElement *_homeScreenDisplayLayoutElement;
    NSMapTable *_homeScreenDisplayLayoutElementAssertionsBySwitcherController;
    NSMapTable *_displayLayoutTransitionsBySwitcherController;
}


@property (retain, nonatomic, setter=_setHideStatusBarAssertions:) NSHashTable *_hideStatusBarAssertions; // ivar: __hideStatusBarAssertions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *suspendWallpaperAnimationAssertion; // ivar: _suspendWallpaperAnimationAssertion


+(BOOL)_layoutElementExistsInRecencyModel:(id)arg0 ;
+(BOOL)_layoutState:(id)arg0 hasMeaningfullyChangedFromOldLayoutState:(id)arg1 ;
+(id)_applyWindowReplacementPolicyWithRemainingMainElements:(id)arg0 layoutStateBeforeRemoval:(id)arg1 lastDifferentLayoutState:(id)arg2 entitiesWithRemovalContexts:(id)arg3 ;
+(id)_remainingMainElementsAfterRemovingEntities:(id)arg0 fromMainElements:(id)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)_contentControllerIsEmbeddedDisplayContentController:(id)arg0 ;
-(BOOL)_dismissSwitcherNoninteractivelyToAppLayout:(id)arg0 dismissFloatingSwitcher:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasAppLayoutBeenUserKilledWithinThresholdToCreateNewScene:(id)arg0 ;
-(BOOL)_hasAppLayoutContainingDisplayItem:(id)arg0 ;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)arg0 ;
-(BOOL)_isKnownContentController:(id)arg0 ;
-(BOOL)_isPerformingModelTransitionForReplacementAppLayout:(id)arg0 ;
-(BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
-(BOOL)_shouldAddAppLayoutToFront:(id)arg0 ;
-(BOOL)_shouldMorphFromPIPForTransitionContext:(id)arg0 ;
-(BOOL)_shouldMorphToPIPForTransitionContext:(id)arg0 ;
-(BOOL)_shouldPrioritizeSortOrderForAppLayout:(id)arg0 ;
-(BOOL)_shouldReverseLayoutDirection;
-(BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
-(BOOL)_shouldZoomFromSystemApertureForTransitionContext:(id)arg0 ;
-(BOOL)_supportsFloatingApplication;
-(BOOL)activateMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)canPerformKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 windowScene:(id)arg2 ;
-(BOOL)deleteAppLayoutForDisplayItem:(id)arg0 ;
-(BOOL)dismissAllSwitchersNoninteractivelyAnimated:(BOOL)arg0 ;
-(BOOL)dismissMainSwitcherNoninteractivelyAnimated:(BOOL)arg0 ;
-(BOOL)fluidSwitcherGestureManagerSupportsFloatingApplication:(id)arg0 ;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg0 ;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVoiceCommandButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)hasAppLayoutForDisplayItem:(id)arg0 ;
-(BOOL)hasAppLayoutForTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(BOOL)hasTransientOverlayAppLayoutsForWindowScene:(id)arg0 ;
-(BOOL)hasVisibleElements;
-(BOOL)isAcquiredTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(BOOL)isAnySwitcherVisible;
-(BOOL)isInAppStatusBarHiddenForWindowScene:(id)arg0 ;
-(BOOL)isInAppStatusBarRequestedHiddenForSwitcherContentController:(id)arg0 ;
-(BOOL)isMainSwitcherVisible;
-(BOOL)isSlideOverSwitcherVisible;
-(BOOL)layoutContainsRole:(NSInteger)arg0 ;
-(BOOL)shouldAcceleratedHomeButtonPressBegin;
-(BOOL)shouldPerformPreTransitionInsertionOfAppLayout:(id)arg0 forTransitionWithContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 displayItemSupportsCenterRole:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldMorphFromPIPForTransitionContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldMorphToPIPForTransitionContext:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 shouldResignActiveForStartOfTransition:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsKillingOfAppLayout:(id)arg1 ;
-(BOOL)switcherContentController:(id)arg0 supportsTitleItemsForAppLayout:(id)arg1 ;
-(BOOL)switcherContentControllerControlsHomeScreenContents:(id)arg0 ;
-(BOOL)switcherContentControllerIsFloatingApplicationSupported:(id)arg0 ;
-(BOOL)switcherContentControllerIsKeyboardHomeAffordanceAssertionCurrentlyBeingTaken:(id)arg0 ;
-(BOOL)toggleMainSwitcherNoninteractivelyWithSource:(NSInteger)arg0 animated:(BOOL)arg1 windowScene:(id)arg2 ;
-(CGFloat)minimumHomeScreenScaleForWindowScene:(id)arg0 ;
-(CGFloat)scaleForDownscaledSnapshotGenerationForSceneHandle:(id)arg0 windowScene:(id)arg1 ;
-(NSInteger)_currentUnlockedEnvironmentMode;
-(NSInteger)_overrideWindowActiveInterfaceOrientation;
-(NSInteger)homeScreenInterfaceOrientationForContentController:(id)arg0 ;
-(NSInteger)overrideInterfaceOrientationMechanicsForSwitcherViewController:(id)arg0 ;
-(NSInteger)sbActiveInterfaceOrientation;
-(NSInteger)switcherInterfaceOrientationForContentController:(id)arg0 ;
-(NSInteger)unlockedEnvironmentMode;
-(char)activityModeForScene:(id)arg0 ;
-(char)jetsamModeForScene:(id)arg0 ;
-(id)_activateSwitcherValidatorWithEventLabel:(SEL)arg0 animated:(id)arg1 ;
-(id)_activateSwitcherValidatorWithEventLabel:(SEL)arg0 animated:(id)arg1 windowScene:(BOOL)arg2 ;
-(id)_activeDisplaySwitcherController;
-(id)_appForDisplayItem:(id)arg0 ;
-(id)_appLayoutContainingDisplayItem:(id)arg0 ;
-(id)_appLayoutForScene:(id)arg0 ;
-(id)_appLayoutFromPrimaryLayoutItem:(id)arg0 sideLayoutElement:(id)arg1 configuration:(NSInteger)arg2 ;
-(id)_centerWindowSheetMetricsCache;
-(id)_coordinateSpaceForInterfaceOrientation:(NSInteger)arg0 windowScene:(id)arg1 ;
-(id)_currentAppLayout;
-(id)_currentFloatingAppLayout;
-(id)_currentLayoutState;
-(id)_currentVisibleFloatingItem;
-(id)_deviceApplicationSceneHandleForDisplayItem:(id)arg0 ;
-(id)_dismissSwitcherValidatorToAppLayout:(SEL)arg0 dismissFloatingSwitcher:(id)arg1 withEventLabel:(BOOL)arg2 animated:(id)arg3 windowScene:(BOOL)arg4 ;
-(id)_displayItemLayoutAttributesMapFromLayoutState:(id)arg0 ;
-(id)_embeddedDisplaySwitcherController;
-(id)_entityForDisplayItem:(id)arg0 displayIdentity:(id)arg1 ;
-(id)_entityForDisplayItem:(id)arg0 sceneHandleProvider:(id)arg1 displayIdentity:(id)arg2 ;
-(id)_entityForDisplayItem:(id)arg0 switcherController:(id)arg1 ;
-(id)_init;
-(id)_medusaKeyboardSceneHandle;
-(id)_modelRemovalRequestForDisplayItemResolutionResults:(id)arg0 ;
-(id)_nonHiddenAppLayoutsForDisplayItem:(id)arg0 ;
-(id)_persistenceIdentifiersForBundleIdentifier:(id)arg0 onlyIncludeLaunchableIdentifiers:(BOOL)arg1 ;
-(id)_recentAppLayoutsController;
-(id)_resultsForDisplayItemRemovalResolutionRequest:(id)arg0 preferredAppLayoutForRemovalAnimationIfAny:(id)arg1 ;
-(id)_sceneManagerForWindowScene:(id)arg0 ;
-(id)_switcherControllerForContentViewController:(id)arg0 ;
-(id)_switcherControllerForGestureManager:(id)arg0 ;
-(id)_switcherControllerForSwitcherViewController:(id)arg0 ;
-(id)_switcherControllerForTransitionRequest:(id)arg0 ;
-(id)_switcherControllerPassingTest:(id)arg0 ;
-(id)_switcherModelRemovalResultsForRequest:(id)arg0 forReason:(NSInteger)arg1 ;
-(id)_toggleSwitcherTransitionValidatorAnimated:(SEL)arg0 ;
-(id)_toggleSwitcherTransitionValidatorAnimated:(SEL)arg0 windowScene:(BOOL)arg1 ;
-(id)_transientOverlayPesentationManager;
-(id)acquireAllowHiddenAppAssertionForBundleIdentifier:(id)arg0 reason:(id)arg1 ;
-(id)activeTransientOverlayPresentedAppLayoutForSwitcherContentController:(id)arg0 ;
-(id)activeTransientOverlayPresentedAppLayoutForWindowScene:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ancillaryTransitionRequests:(id)arg1 ;
-(id)appLayoutForWorkspaceTransientOverlay:(id)arg0 windowScene:(id)arg1 ;
-(id)appLayoutsForSwitcherContentController:(id)arg0 ;
-(id)appLayoutsForSwitcherController:(id)arg0 ;
-(id)appSwitcherModel:(id)arg0 willAddAppLayout:(id)arg1 replacingAppLayouts:(id)arg2 removingAppLayouts:(id)arg3 ;
-(id)appSwitcherModel:(id)arg0 willReplaceAppLayout:(id)arg1 proposedReplacementAppLayout:(id)arg2 ;
-(id)continuousExposeIdentifiersForSwitcherContentController:(id)arg0 ;
-(id)createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)displayIdentity;
-(id)entityWithRole:(NSInteger)arg0 ;
-(id)homeGestureBottomEdgeRecognizer;
-(id)homeGestureBottomEdgeRecognizerForWindowScene:(id)arg0 ;
-(id)layoutState;
-(id)layoutStateApplicationSceneHandles;
-(id)layoutStatePrimaryElement;
-(id)layoutStateSideElement;
-(id)layoutStateStudyLogData;
-(id)leadingStatusBarStyleRequestForWindowScene:(id)arg0 ;
-(id)mainSwitcherWindow;
-(id)matchingIconViewForIconView:(id)arg0 ;
-(id)recentAppLayouts;
-(id)requestInAppStatusBarHiddenAssertionForReason:(id)arg0 animated:(BOOL)arg1 windowScene:(id)arg2 ;
-(id)statusBarActionsByPartIdentifierForWindowScene:(id)arg0 ;
-(id)statusBarOverlayDataForWindowScene:(id)arg0 ;
-(id)switcherContentController:(id)arg0 deviceApplicationSceneHandleForDisplayItem:(id)arg1 ;
-(id)switcherContentController:(id)arg0 hiddenAppLayoutsForBundleIdentifier:(id)arg1 ;
-(id)switcherContentController:(id)arg0 transitionEventForContext:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 transitionEventForLayoutState:(id)arg1 identifier:(id)arg2 phase:(NSUInteger)arg3 animated:(BOOL)arg4 ;
-(id)switcherContentController:(id)arg0 visibleAppLayoutsForBundleIdentifier:(id)arg1 ;
-(id)switcherContentController:(id)arg0 visibleDisplayItemsForBundleIdentifier:(id)arg1 ;
-(id)switcherControllerForWindowScene:(id)arg0 ;
-(id)trailingStatusBarStyleRequestForWindowScene:(id)arg0 ;
-(id)transitionEventForContext:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)transitionEventForLayoutState:(id)arg0 identifier:(id)arg1 phase:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(id)viewControllerForTransientOverlayAppLayout:(id)arg0 ;
-(struct CGAffineTransform )switcherContentController:(id)arg0 transformForCardUnderSheetForBoundsSize:(struct CGSize )arg1 ;
-(struct CGRect )statusBarAvoidanceFrameForLayoutRole:(NSInteger)arg0 layoutState:(id)arg1 windowScene:(id)arg2 ;
-(struct CGRect )statusBarAvoidanceFrameForLayoutRole:(NSInteger)arg0 windowScene:(id)arg1 ;
-(struct CGRect )switcherContentController:(id)arg0 frameForCenterItemWithConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(struct CGRect )switcherContentController:(id)arg0 frameForFloatingAppLayoutInInterfaceOrientation:(NSInteger)arg1 floatingConfiguration:(NSInteger)arg2 ;
-(struct CGRect )switcherContentController:(id)arg0 frameForItemWithRole:(NSInteger)arg1 inMainAppLayout:(id)arg2 interfaceOrientation:(NSInteger)arg3 ;
-(struct UIEdgeInsets )statusBarEdgeInsetsForWindowScene:(id)arg0 ;
-(void)_acquireAssertion:(id)arg0 ;
-(void)_activateNeighboringAppLayoutRequiringActiveAppLayout:(BOOL)arg0 appLayoutEnvironment:(NSInteger)arg1 inForwardDirection:(BOOL)arg2 windowScene:(id)arg3 eventLabel:(id)arg4 ;
-(void)_addAppLayoutToFront:(id)arg0 ;
-(void)_addAppLayoutToFront:(id)arg0 removeAppLayout:(id)arg1 ;
-(void)_applicationDidExit:(id)arg0 ;
-(void)_beginDisplayLayoutTransitionForSwitcherController:(id)arg0 reason:(id)arg1 ;
-(void)_buildAppLayoutCache;
-(void)_cancelPIPForDisplayItem:(id)arg0 ;
-(void)_configureRequest:(id)arg0 forSwitcherTransitionRequest:(id)arg1 withEventLabel:(id)arg2 ;
-(void)_continuityAppSuggestionChanged:(id)arg0 ;
-(void)_deleteAppLayoutsMatchingBundleIdentifier:(id)arg0 ;
-(void)_doUglySiriActivationThingsIfNecessary:(id)arg0 ;
-(void)_endDisplayLayoutTransitionForSwitcherController:(id)arg0 ;
-(void)_enumerateSwitcherControllersWithBlock:(id)arg0 ;
-(void)_evaluateAsynchronousRenderingEnablement;
-(void)_focusNewlyAddedApplicationIfNeededTransitioningFromLayoutState:(id)arg0 toLayoutState:(id)arg1 windowScene:(id)arg2 ;
-(void)_handleFocusedIconSwitcherShortcutAction:(NSInteger)arg0 bundleIdentifier:(id)arg1 windowScene:(id)arg2 ;
// -(void)_insertAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 contentViewController:(id)arg2 modelMutationBlock:(id)arg3 completion:(unk)arg4  ;
// -(void)_insertAppLayouts:(id)arg0 atIndexes:(id)arg1 contentViewController:(id)arg2 modelMutationBlock:(id)arg3 completion:(unk)arg4  ;
-(void)_insertCardForDisplayIdentifier:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_loadContentViewControllerIfNecessaryForAllWindowScenes;
-(void)_loadContentViewControllerIfNecessaryForWindowScene:(id)arg0 ;
-(void)_lockKeyboardFocusForSwitcherController:(id)arg0 ;
-(void)_modifyModelWithDropContext:(id)arg0 ;
-(void)_noteUIWillLock;
-(void)_notifySwitcherControllersAppLayoutsDidChange;
-(void)_observerLayoutStateTransitionCoordinatorForWindowSceneIfNeeded:(id)arg0 ;
-(void)_performSceneDestructionForModelRemovalResults:(id)arg0 ;
-(void)_purgeHiddenAppLayoutsForUILock;
-(void)_rebuildAppListCache;
-(void)_releaseKeyboardFocus;
-(void)_removeAcquiredTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(void)_removeAppLayout:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)_removeCardForDisplayIdentifier:(id)arg0 ;
-(void)_removeDisplayItem:(id)arg0 forReason:(NSInteger)arg1 ;
-(void)_removeDisplayItem:(id)arg0 forReason:(NSInteger)arg1 preferredAppLayoutForRemovalAnimationIfAny:(id)arg2 ;
-(void)_reqlinquishAssertion:(id)arg0 ;
-(void)_setAsynchronousRenderingEnabled:(BOOL)arg0 withMinificationFilter:(BOOL)arg1 forLayerTarget:(id)arg2 presentationManager:(id)arg3 ;
-(void)_setContainerStatusBarHidden:(BOOL)arg0 animationDuration:(CGFloat)arg1 usingAssertion:(*id)arg2 reason:(id)arg3 windowScene:(id)arg4 ;
-(void)_setStatusBarPartsHidden:(NSUInteger)arg0 animated:(BOOL)arg1 windowScene:(id)arg2 ;
-(void)_switcherModelChanged:(id)arg0 ;
-(void)_switcherServiceAdded:(id)arg0 ;
-(void)_switcherServiceRemoved:(id)arg0 ;
-(void)_temp_92893062_observeLayoutStateTransitionCoordinatorForWindowScene:(id)arg0 ;
-(void)_updateAssertion:(id)arg0 ;
-(void)_updateBestAppSuggestion;
-(void)_updateHomeScreenDisplayLayoutElementForLayoutState:(id)arg0 switcherController:(id)arg1 ;
-(void)_updateKeyboardHomeAffordanceAssertion;
-(void)_warmAppInfoForAppsInList;
-(void)addAcquiredTransientOverlayViewController:(id)arg0 forAppLayout:(id)arg1 windowScene:(id)arg2 ;
-(void)addAppLayoutForDisplayItem:(id)arg0 windowScene:(id)arg1 completion:(id)arg2 ;
-(void)addAppLayoutForTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
-(void)addCenterRoleAppLayoutForDisplayItem:(id)arg0 windowScene:(id)arg1 completion:(id)arg2 ;
-(void)appSwitcherModel:(id)arg0 didRemoveAppLayoutForFallingOffList:(id)arg1 ;
-(void)betaLaunchHandle:(id)arg0 activateIfNeededEndedWithResult:(BOOL)arg1 ;
-(void)cancelActiveGestureForSwitcherContentController:(id)arg0 ;
-(void)cancelAnyPeekToHomescreenFromSource:(NSInteger)arg0 ;
-(void)dealloc;
// -(void)enumerateTransientOverlayViewControllersUsingBlock:(id)arg0 windowScene:(unk)arg1  ;
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
-(void)performKeyboardShortcutAction:(NSInteger)arg0 forBundleIdentifier:(id)arg1 windowScene:(id)arg2 ;
// -(void)performTransitionWithContext:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 windowScene:(unk)arg3  ;
-(void)programmaticSwitchAppGestureMoveToLeft;
-(void)programmaticSwitchAppGestureMoveToRight;
-(void)removeAppLayoutForDisplayItem:(id)arg0 shouldDestroyScene:(BOOL)arg1 ;
-(void)removeAppLayoutTransientOverlayViewController:(id)arg0 windowScene:(id)arg1 ;
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
-(void)switcherContentController:(id)arg0 setHomeScreenAlpha:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurMaterialRecipeName:(id)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurProgress:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenBackdropBlurType:(NSInteger)arg1 ;
-(void)switcherContentController:(id)arg0 setHomeScreenDimmingAlpha:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setHomeScreenScale:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setPointerInteractionsEnabled:(BOOL)arg1 ;
-(void)switcherContentController:(id)arg0 setWallpaperScale:(CGFloat)arg1 withAnimationMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)switcherContentController:(id)arg0 setWallpaperStyle:(NSInteger)arg1 ;
-(void)switcherDemoFilteringControllerDidChangeHiddenApplicationBundleIDs:(id)arg0 ;
-(void)updateUserInteractionEnabledForSwitcherContentController:(id)arg0 ;
-(void)updateWindowVisibilityForSwitcherContentController:(id)arg0 ;
-(void)viewDidLoadForSwitcherViewController:(id)arg0 ;
-(void)viewWillAppearForSwitcherViewController:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif