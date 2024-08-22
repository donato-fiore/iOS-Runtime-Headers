// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMEDUSADECORATEDDEVICEAPPLICATIONSCENEVIEWCONTROLLER_H
#define SBMEDUSADECORATEDDEVICEAPPLICATIONSCENEVIEWCONTROLLER_H

@class UIViewController, UIApplicationSceneClientSettingsDiffInspector, UIView, UITapGestureRecognizer, NSString, NSHashTable, NSMutableSet, UIView<SBApplicationSceneBackgroundView>, UIDropInteraction, MTLumaDodgePillSettings;
@protocol SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneViewControllerDelegate, SBSceneViewStatusBarAssertionObserver, SBSystemPointerInteractionDelegate, SBTopAffordanceViewControllerDelegate, SBUIActiveOrientationObserver, UIGestureRecognizerDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMedusaDecoratedDeviceApplicationSceneViewControlling, SBApplicationSceneViewControllingStatusBarDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControllerDelegate, SBScenePlaceholderContentContext;


#import "SBMainWorkspace.h"
#import "SBSetupManager.h"
#import "SBDeviceApplicationSceneHandle.h"
#import "SBDeviceApplicationSceneViewController.h"
#import "SBNubView.h"
#import "SBTopAffordanceViewController.h"
#import "SBApplicationBlurContentView.h"
#import "SBMedusaSettings.h"
#import "SBHomeGrabberView.h"

@interface SBMedusaDecoratedDeviceApplicationSceneViewController : UIViewController <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateObserver, SBDeviceApplicationSceneViewControllerDelegate, SBSceneViewStatusBarAssertionObserver, SBSystemPointerInteractionDelegate, SBTopAffordanceViewControllerDelegate, SBUIActiveOrientationObserver, UIGestureRecognizerDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMedusaDecoratedDeviceApplicationSceneViewControlling>

 {
    SBMainWorkspace *_workspace;
    SBSetupManager *_setupManager;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
    SBDeviceApplicationSceneViewController *_deviceApplicationSceneViewController;
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
    BOOL _nubViewHidden;
    BOOL _nubViewHighlighted;
    UIView *_containerView;
    UIView *_blurViewContainerView;
    SBNubView *_nubView;
    SBTopAffordanceViewController *_topAffordanceViewController;
    UITapGestureRecognizer *_topAffordanceTapGestureRecognizer;
    UIView *_darkenView;
    BOOL _isBlurred;
    SBApplicationBlurContentView *_blurView;
    NSInteger _blurViewAnimationCount;
    BOOL _sceneRendersAsynchronously;
    NSString *_sceneMinificationFilter;
    NSInteger _disableAsyncRenderingCount;
    NSHashTable *_statusBarAssertions;
    NSMutableSet *_matchMoveAnimationRequiringReasons;
    SBMedusaSettings *_medusaSettings;
}


@property (readonly, nonatomic) UIView *_blurViewContainerView;
@property (weak, nonatomic) NSObject<SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate;
@property (retain, nonatomic) UIView<SBApplicationSceneBackgroundView> *backgroundView;
@property (nonatomic) CGFloat blurViewIconScale;
@property (readonly, nonatomic, getter=isBlurred) BOOL blurred;
@property (readonly, nonatomic) NSInteger contentInterfaceOrientation;
@property (readonly, nonatomic) CGSize contentReferenceSize;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic) CGFloat darkenViewAlpha; // ivar: _darkenViewAlpha
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBMedusaDecoratedDeviceApplicationSceneViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (retain, nonatomic) UIDropInteraction *dropInteraction; // ivar: _dropInteraction
@property (readonly, nonatomic) NSInteger floatingConfiguration; // ivar: _floatingConfiguration
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeGrabberDisplayMode;
@property (retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings;
@property (readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property (nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance; // ivar: _isInsetForHomeAffordance
@property (readonly, nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (nonatomic, getter=isNubViewHidden) BOOL nubViewHidden;
@property (nonatomic, getter=isNubViewHighlighted) BOOL nubViewHighlighted;
@property (readonly, nonatomic) NSInteger overrideStatusBarStyle;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext;
@property (readonly, nonatomic) UIView *sceneContentView;
@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (copy, nonatomic) NSString *sceneMinificationFilter;
@property (nonatomic) BOOL sceneRendersAsynchronously;
@property (readonly, nonatomic) NSInteger spaceConfiguration; // ivar: _spaceConfiguration
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly) Class superclass;


-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(BOOL)_sceneViewHasMatchMoveAnimation;
-(BOOL)_shouldShowMultipleWindowsNotSupportedMessageForLayoutStateTransitionContext:(id)arg0 ;
-(BOOL)_shouldShowSplitViewNotSupportedMessageForLayoutStateTransitionContext:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(CGFloat)currentStatusBarHeight;
-(NSInteger)_topAffordanceButtonTypeForCurrentLayout;
-(NSInteger)bestHomeAffordanceOrientationForOrientation:(NSInteger)arg0 ;
-(NSInteger)leadingStatusBarStyle;
-(NSInteger)trailingStatusBarStyle;
-(id)_blurContentView;
-(id)hitTestToTopAffordance:(struct CGPoint )arg0 window:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg0 layoutRole:(NSInteger)arg1 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg0 layoutRole:(NSInteger)arg1 workspace:(id)arg2 setupManager:(id)arg3 ;
-(id)newSnapshot;
-(id)newSnapshotView;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 atLevel:(NSUInteger)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg0 nubViewHidden:(NSInteger)arg1 atLevel:(NSUInteger)arg2 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(id)topAffordanceView;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(void)_addSceneViewMatchMoveAnimation;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg0 ;
-(void)_createOrDestroyTopAffordanceViewControllerAnimated:(BOOL)arg0 ;
-(void)_elasticValueViewControllerWillDismiss:(id)arg0 ;
-(void)_elasticValueViewControllerWillPresent:(id)arg0 ;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg0 ;
-(void)_guidedAccessActivationChanged:(id)arg0 ;
-(void)_handleSplitHomeScreenSwitcherKeyShortcut;
-(void)_handleTopAffordanceButtonPressOfType:(NSInteger)arg0 forTopAffordanceViewController:(id)arg1 desiredFloatingConfiguration:(NSInteger)arg2 transitionSource:(NSInteger)arg3 ;
-(void)_handleTopAffordanceTapGestureRecognizerAction:(id)arg0 ;
-(void)_hardwareKeyboardAvailabilityChanged:(id)arg0 ;
-(void)_medusaEnabledStateChanged:(id)arg0 ;
-(void)_modifyApplicationContext:(id)arg0 forTapOnTopAffordanceButtonType:(NSInteger)arg1 spaceConfiguration:(NSInteger)arg2 layoutRole:(NSInteger)arg3 desiredFloatingConfiguration:(NSInteger)arg4 ;
-(void)_presentTransientErrorMessageIfNeededForLayoutStateTransitionContext:(id)arg0 ;
-(void)_removeSceneViewMatchMoveAnimation;
-(void)_sendStatusBarScrollToTopActionForGestureRecognizer:(id)arg0 ;
-(void)_setBlurContentView:(id)arg0 ;
-(void)_setTopAffordanceAutoHides:(BOOL)arg0 ;
-(void)_updateAsyncRendering;
-(void)_updateCurrentTopAffordanceAlpha;
-(void)_updateTopAffordanceHighlight;
-(void)_updateTopAffordanceInset;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)applicationSceneViewController:(id)arg0 statusBarTapped:(id)arg1 tapActionType:(NSInteger)arg2 ;
-(void)applicationSceneViewControllerDidUpdateHomeAffordanceSupportedOrientations:(id)arg0 ;
-(void)conformsToProtocolSBDeviceApplicationSceneViewControlling;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 ;
-(void)invalidate;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)loadView;
-(void)newSnapshotViewOnQueue:(id)arg0 withCompletion:(id)arg1 ;
-(void)performSwitcherKeyboardShortcutAction:(NSInteger)arg0 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 ;
-(void)sceneWithIdentifier:(id)arg0 didChangeStatusBarStyleTo:(NSInteger)arg1 forPartWithIdentifier:(id)arg2 ;
// -(void)setLiveContentBlurEnabled:(BOOL)arg0 duration:(CGFloat)arg1 blurDelay:(CGFloat)arg2 iconViewScale:(CGFloat)arg3 began:(id)arg4 completion:(unk)arg5  ;
-(void)statusBarAssertionDidInvalidate:(id)arg0 ;
-(void)statusBarAssertionDidUpdate:(id)arg0 ;
-(void)topAffordanceViewController:(id)arg0 didTapOnButtonWithTopAffordanceButtonType:(NSInteger)arg1 ;
-(void)updateTopAffordanceOverrideUserInterfaceStyle;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willRotateFromInterfaceOrientation:(NSInteger)arg0 toInterfaceOrientation:(NSInteger)arg1 alongsideContainerView:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif