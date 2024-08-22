// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPCONTROLLER_H
#define SBPIPCONTROLLER_H

@class NSMutableArray, NSMutableSet, NSMutableDictionary, NSHashTable, BSCompoundAssertion, UIView, FBSDisplayLayoutMonitor, NSString;
@protocol SBPIPContainerViewControllerObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBSensorActivityObserver, SBWorkspaceKeyboardFocusControllerObserver, SBPIPControllerAdapterContextProviding, SBLayoutStateTransitionObserver, SBIdleTimerProviding, SBPIPMorphAnimatorControllerDelegate, BSInvalidatable, SBIdleTimerCoordinating, SBPIPControllerAdapter;

#import <Foundation/Foundation.h>

#import "SBPIPInteractionSettings.h"
#import "SBIdleTimerCoordinatorHelper.h"
#import "SBPIPWindow.h"
#import "SBPIPStashAssertion.h"
#import "SBPIPInterruptionDebouncingTimer.h"

@interface SBPIPController : NSObject <SBPIPContainerViewControllerObserver, SBAlertItemsControllerObserver, SBAssistantObserver, SBSensorActivityObserver, SBWorkspaceKeyboardFocusControllerObserver, SBPIPControllerAdapterContextProviding, SBLayoutStateTransitionObserver, SBIdleTimerProviding, SBPIPMorphAnimatorControllerDelegate>

 {
    id<BSInvalidatable> *_stateCaptureInvalidatable;
    SBPIPInteractionSettings *_interactionSettings;
    CGFloat _windowLevel;
    BOOL _hasIdleTimerBehaviors;
    id<SBIdleTimerCoordinating> *_idleTimerCoordinator;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    NSMutableArray *_windowLevelOverrideAssertions;
    NSMutableSet *_pictureInPictureWindowHiddenReasons;
    SBPIPWindow *_pictureInPictureWindow;
    UIEdgeInsets _pictureInPictureWindowMargin;
    NSMutableDictionary *_pictureInPictureInsetsForSource;
    BOOL _expectKeyboardVisible;
    NSMutableArray *_stashAssertions;
    NSHashTable *_interruptionAssertions;
    BSCompoundAssertion *_insetsOverrideAssertions;
    NSMutableDictionary *_cameraInterruptionAssertions;
    id<BSInvalidatable> *_fullscreenModalElementInsetOverrideAssertion;
    SBPIPStashAssertion *_stashForInterruptionAssertion;
    SBPIPStashAssertion *_transitionStashAssertion;
    SBPIPInterruptionDebouncingTimer *_interruptionEndDebouncingTimer;
    BOOL _defaultToStashed;
    NSMutableSet *_pictureInPictureMorphAnimatorControllers;
    UIView *_keyboardInsetsVisualizerView;
    NSInteger _unlockedEnvironmentModeWhenKeyboardFocusChanged;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    BOOL _isReducingResourcesUsage;
    NSHashTable *_weakObservers;
    id<BSInvalidatable> *_keyboardFocusObserver;
    id<SBPIPControllerAdapter> *_adapter;
    BOOL _adapterWants_didAddContainerViewController;
    BOOL _adapterWants_willRemoveContainerViewController;
    BOOL _adapterWants_willBeginPIPInterruptionForAssertion;
    BOOL _adapterWants_willEndPIPInterruptionForAssertion;
    BOOL _adapterWants_didStartPictureInPictureCallback;
    BOOL _adapterWants_didCancelPictureInPictureCallback;
    BOOL _adapterWants_morphAnimatorDataSourceForTargetProcessIdentifier;
    BOOL _adapterWants_willStartPictureInPictureTestActionForApplication;
    BOOL _adapterWants_willRestorePictureInPictureForTestForApplication;
    BOOL _adapterWants_windowLevelChanged;
    BOOL _adapterWants_windowVisibilityChanged;
    BOOL _adapterWants_preventStashAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIdleTimerBehaviors;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets minimumStashedPadding; // ivar: _minimumStashedPadding
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat windowLevel;


+(BOOL)_layoutState:(id)arg0 hasMeaningfullyChangedFromOldLayoutState:(id)arg1 ;
-(BOOL)_acquirePIPStashAssertionIfNecessaryForTransitionContext:(id)arg0 ;
-(BOOL)_isContentViewAlignedLeftWithPosition:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_isContentViewAlignedTopWithPosition:(NSUInteger)arg0 orientation:(NSInteger)arg1 ;
-(BOOL)_pointInside:(struct CGPoint )arg0 ;
-(BOOL)_shouldStashForTransitionContext:(id)arg0 ;
-(BOOL)isPictureInPictureWindowVisible;
-(BOOL)isPresentingPictureInPictureRequiringMedusaKeyboard;
-(BOOL)isStoppingOrCancellingPictureInPictureForApplicationWithBundleIdentifier:(id)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(NSInteger)contentType;
-(NSInteger)interfaceOrientationForContainerViewController:(id)arg0 ;
-(NSInteger)tetheringModeForScenePersistenceIdentifier:(id)arg0 ;
-(id)_acquireStashAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 customAllowedEnvironmentModes:(id)arg2 ;
-(id)_currentLayoutState;
-(id)_overrideInsetsForReason:(id)arg0 withIdentifier:(id)arg1 ;
-(id)_pipWindow;
-(id)acquireInterruptionAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)acquireInterruptionAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 cameraSensorBundleIdentifier:(id)arg2 ;
-(id)acquirePictureInPictureWindowLevelOverrideAssertionForWindowLevel:(NSUInteger)arg0 withReason:(NSInteger)arg1 identifier:(id)arg2 ;
-(id)acquireStashAssertionForReason:(NSInteger)arg0 identifier:(id)arg1 ;
-(id)allContainerViewControllers;
-(id)anyPresentedContentView;
-(id)containerViewControllerForContentViewController:(id)arg0 ;
-(id)coordinatorRequestedIdleTimerBehavior:(id)arg0 ;
-(id)createAndRegisterPictureInPictureMorphAnimatorControllerWithTargetProcessIdentifier:(int)arg0 uuid:(id)arg1 scenePersistenceIdentifier:(id)arg2 direction:(NSInteger)arg3 gestureInitiated:(BOOL)arg4 ;
-(id)hostedAppSceneHandles;
-(id)initWithIdleTimerCoordinator:(id)arg0 windowLevel:(CGFloat)arg1 interactionSettings:(id)arg2 adapter:(id)arg3 ;
-(id)morphAnimatorController:(id)arg0 dataSourceWithTargetProcessIdentifier:(int)arg1 scenePersistenceIdentifier:(id)arg2 gestureInitiated:(BOOL)arg3 ;
-(id)pictureInPictureMorphAnimatorControllerForProcessIdentifier:(int)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(struct CGRect )_keyboardFrameInScreenSpaceFromNotification:(id)arg0 ;
-(struct CGRect )homeScreenInitialPIPFrame:(struct CGRect )arg0 withContentViewSize:(struct CGSize )arg1 position:(NSUInteger)arg2 padding:(CGFloat)arg3 fromOrientation:(NSInteger)arg4 toOrientation:(NSInteger)arg5 shouldUpdate:(BOOL)arg6 gestureInitiated:(BOOL)arg7 ;
-(struct UIEdgeInsets )_pictureInPictureWindowMargins;
-(struct UIEdgeInsets )_updatePictureInPictureOverlayInsetsWithCurrentLayoutState:(BOOL)arg0 ;
-(struct UIEdgeInsets )_updatePictureInPictureOverlayInsetsWithCurrentLayoutState:(BOOL)arg0 shouldUpdate:(BOOL)arg1 ;
-(void)_addPictureInPictureMorphAnimatorController:(id)arg0 ;
-(void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg0 ;
-(void)_cancelInterruptionDebouncingTimer;
-(void)_createWindowAndRootViewControllerIfNeeded;
-(void)_destroyWindowAndRootViewControllerIfPossible;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg0 usingBlock:(id)arg1 ;
-(void)_floatingDockHeightWillChange:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillRotate:(id)arg0 ;
-(void)_keyboardWillShowOrHide:(id)arg0 ;
-(void)_lockStateDidChange:(id)arg0 ;
-(void)_managePictureInPictureWindowLevel;
-(void)_managePictureInPictureWindowVisibilityAnimated:(BOOL)arg0 ;
-(void)_relinquishPIPStashAssertionIfNecessaryForTransitionContext:(id)arg0 ;
-(void)_removePictureInPictureMorphAnimatorController:(id)arg0 ;
-(void)_restorePictureInPictureForTestForApplicationWithBundleIdentifier:(id)arg0 ;
-(void)_setAdapter:(id)arg0 ;
-(void)_setContainersStashed:(BOOL)arg0 ;
-(void)_setPictureInPictureWindowMargin:(struct UIEdgeInsets )arg0 ;
-(void)_shelfHeightDidChange:(id)arg0 ;
-(void)_startPictureInPictureTestActionForApplicationWithBundleIdentifier:(id)arg0 ;
-(void)_updateContainerViewControllersContentPadding;
-(void)_updateFloatingDockInsets;
-(void)_updateFloatingDockInsetsWithHeight:(CGFloat)arg0 ;
-(void)_visualizeKeyboardFrameIfNeeded:(id)arg0 ;
-(void)activityDidChangeForSensorActivityDataProvider:(id)arg0 ;
-(void)addContainerViewController:(id)arg0 dataSource:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)alertItemsController:(id)arg0 didActivateAlertItem:(id)arg1 ;
-(void)alertItemsController:(id)arg0 didDeactivateAlertItem:(id)arg1 forReason:(int)arg2 ;
-(void)alertItemsController:(id)arg0 willActivateAlertItem:(id)arg1 ;
-(void)applyPictureInPictureInsets:(struct UIEdgeInsets )arg0 forSource:(NSInteger)arg1 ;
-(void)assistantDidDisappear:(id)arg0 ;
-(void)assistantWillAppear:(id)arg0 ;
-(void)cancelPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 ;
-(void)containerViewController:(id)arg0 didFinishStartAnimationWithInitialInterfaceOrientation:(NSInteger)arg1 ;
-(void)containerViewController:(id)arg0 userDidUpdateStashState:(BOOL)arg1 ;
-(void)containerViewControllerUserMayUpdateStashState:(id)arg0 ;
-(void)dealloc;
-(void)displayLayoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)endPIPInterruptionForAssertion:(id)arg0 ;
-(void)handleDestructionRequestForSceneHandles:(id)arg0 ;
-(void)invalidateIdleTimerBehaviors;
-(void)keyboardFocusController:(id)arg0 externalSceneDidAcquireFocus:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)morphAnimatorControllerDidTerminate:(id)arg0 ;
-(void)prepareContainerViewControllerForHidingContentViewController:(id)arg0 ;
-(void)removeContainerViewController:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)restoreContentViewController:(id)arg0 appSceneEntity:(id)arg1 morphAnimatorConfigurationBlock:(id)arg2 ;
-(void)setPictureInPictureWindowHidden:(BOOL)arg0 withReason:(id)arg1 ;
-(void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg0 scenePersistenceIdentifier:(id)arg1 animated:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)updateContentPaddingForContainerViewController:(id)arg0 ;
-(void)updatePictureInPictureWindowLevel;


@end


#endif