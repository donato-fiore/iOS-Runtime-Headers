// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMAINDISPLAYSCENELAYOUTVIEWCONTROLLER_H
#define SBMAINDISPLAYSCENELAYOUTVIEWCONTROLLER_H

@class NSMutableSet, SBOrientationTransformWrapperView, UIView, SBFHomeGrabberSettings, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, FBScene, NSLayoutConstraint, NSArray, NSString;
@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource, PTSettingsKeyObserver, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSystemPointerInteractionDelegate, OS_dispatch_queue, BSInvalidatable;


#import "SBSceneLayoutViewController.h"
#import "SBMainDisplaySceneLayoutStatusBarView.h"
#import "SBSeparatorView.h"
#import "SBKeyboardHomeAffordanceAssertion.h"
#import "SBMedusaSettings.h"
#import "SBHomeGrabberView.h"
#import "SBMainDisplayLayoutState.h"
#import "SBHomeGrabberRotationView.h"

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <SBMainDisplaySceneLayoutStatusBarViewDataSource, PTSettingsKeyObserver, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSystemPointerInteractionDelegate>

 {
    NSMutableSet *_pushPopTransformReasons;
    NSMutableSet *_pushPopWallpaperReasons;
    BOOL _showsPushInWallpaper;
    SBOrientationTransformWrapperView *_contentWrapperView;
    SBMainDisplaySceneLayoutStatusBarView *_statusBarView;
    UIView *_contentView;
    SBSeparatorView *_separatorView;
    id *_keyboardWillChangeFrameObserver;
    CGFloat _separatorViewKeyboardMargin;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    BOOL _isKeyboardShowing;
    FBScene *_medusaKeyboardScene;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    NSMutableSet *_activeBetaLaunchHandles;
    NSObject<OS_dispatch_queue> *_betaLaunchUIActivationQueue;
    NSLayoutConstraint *_homeGrabberTopConstraint;
    NSLayoutConstraint *_homeGrabberBottomConstraint;
    NSLayoutConstraint *_homeGrabberLeftConstraint;
    NSLayoutConstraint *_homeGrabberRightConstraint;
    SBMedusaSettings *_medusaSettings;
}


@property (readonly, nonatomic) SBHomeGrabberView *_activeHomeGrabberView;
@property (nonatomic, setter=_setNubStyle:) NSUInteger _nubStyle; // ivar: _nubStyle
@property (nonatomic, setter=_setPreventsCornerRadiusUpdate:) BOOL _preventsCornerRadiusUpdate; // ivar: __preventsCornerRadiusUpdate
@property (readonly, nonatomic) UIView *_separatorView;
@property (nonatomic, setter=_setSeparatorViewAlpha:) CGFloat _separatorViewAlpha; // ivar: _separatorViewAlpha
@property (readonly, nonatomic) CGRect _separatorViewHitTestFrame;
@property (readonly, copy, nonatomic) NSArray *_transitioningAppViewControllers;
@property (readonly, nonatomic) SBMainDisplayLayoutState *_transitioningFromLayoutState;
@property (readonly, nonatomic) SBMainDisplayLayoutState *_transitioningToLayoutState;
@property (readonly, nonatomic) NSArray *appViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBHomeGrabberRotationView *homeGrabberRotationView; // ivar: _homeGrabberRotationView
@property (copy, nonatomic, getter=_keyboardFocusSceneID, setter=_setKeyboardFocusSceneID:) NSString *keyboardFocusSceneID; // ivar: _keyboardFocusSceneID
@property (readonly, nonatomic) SBMainDisplayLayoutState *layoutState;
@property (retain, nonatomic) NSObject<BSInvalidatable> *pushPopWallpaperRequireAssertion; // ivar: _pushPopWallpaperRequireAssertion
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)_isCurrentlyRotating;
-(BOOL)_isEdgeProtectedForHomeGestureAtEdgeLocation:(CGFloat)arg0 ;
-(BOOL)_isLayoutElementViewControllerOccluded:(id)arg0 ;
-(BOOL)_isStatusBarHidden;
-(BOOL)_isTransitioningNoninteractivelyFromAppToApp;
-(BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition;
-(BOOL)_shouldConsiderHomeScreenAsActive;
-(BOOL)_shouldDrawHomeGrabber;
-(BOOL)_shouldNubViewBeVisibleForLayoutRole:(NSInteger)arg0 inLayoutState:(id)arg1 ;
-(BOOL)_shouldRepositionViewAfterTransition;
-(BOOL)_shouldReverseLayoutDirection;
-(BOOL)_shouldRotateToLayoutOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
-(BOOL)allowsConfiguringIndividualStatusBarParts;
-(BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint )arg0 forView:(id)arg1 ;
-(CGFloat)_layoutWidthForLayoutRole:(NSInteger)arg0 inSpaceConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(NSInteger)_layoutRoleForSceneWithIdentifier:(id)arg0 ;
-(NSInteger)_overrideInterfaceOrientationMechanics;
-(NSInteger)statusBarOrientation;
-(id)_animationWrapperViewForElement:(id)arg0 entity:(id)arg1 layoutState:(id)arg2 ;
-(id)_applicationSceneLayoutElementControllerForLayoutRole:(NSInteger)arg0 ;
-(id)_bannerUnfurlAnimationControllerForTransitionRequest:(id)arg0 ;
-(id)_createSlideOverAndFadeElementOffscreenWithTransitionRequest:(id)arg0 ;
-(id)_createSplitAnimationControllerWithTransitionRequest:(id)arg0 ;
-(id)_createStatusBarWithFrame:(struct CGRect )arg0 interfaceOrientation:(NSInteger)arg1 reason:(id)arg2 ;
-(id)_displayConfiguration;
-(id)_fadeStatusBarStylesBetweenFromAndToViewControllersWithTransitionRequest:(id)arg0 ;
-(id)_jiggleAppAnimationControllerForTransitionRequest:(id)arg0 ;
-(id)_layoutElementForSceneWithIdentifier:(id)arg0 ;
-(id)_leadingStatusBarStyleRequest;
-(id)_medusaKeyboardSceneHandle;
-(id)_removeAppAnimationControllerWithTransitionRequest:(id)arg0 ;
-(id)_replaceSingleAppAnimationControllerWithTransitionRequest:(id)arg0 ;
-(id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg0 ;
-(id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg0 ;
-(id)_sceneHandleForBottomEdgeLocation:(CGFloat)arg0 ;
-(id)_sceneHandleForLayoutRole:(NSInteger)arg0 ;
-(id)_sceneHandlesIntersectingHomeGrabber;
-(id)_trailingStatusBarStyleRequest;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg0 ;
-(id)animationControllerForTransitionRequest:(id)arg0 ;
-(id)animationWrapperViewForLayoutState:(id)arg0 roleMask:(NSUInteger)arg1 interfaceOrientation:(NSInteger)arg2 maskDisplayCorners:(BOOL)arg3 ;
-(id)currentlyValidStatusBarPartIdentifiers;
-(id)initWithSceneManager:(id)arg0 ;
-(id)statusBarDescriberAtPoint:(struct CGPoint )arg0 inView:(id)arg1 pointInSceneLayoutSpace:(struct CGPoint *)arg2 ;
-(id)statusBarDescriberForStatusBarPart:(id)arg0 ;
-(id)statusBarDescribers;
-(id)statusBarPartsForSceneWithIdentifier:(id)arg0 ;
-(id)styleForRegion:(id)arg0 forView:(id)arg1 ;
-(struct CGAffineTransform )_convertTransformFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )_convertTransformFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )_pushedInTransform;
-(struct CGPoint )_convertPointFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_convertPointFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGPoint )arg0 ;
-(struct CGPoint )_updatePointInReferenceCoordinateSpace:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(struct CGRect )_convertRectFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(struct CGRect )arg0 ;
-(struct CGRect )_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect )arg0 ;
-(struct CGRect )_layoutFrameForLayoutRole:(NSInteger)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )_layoutFrameForSize:(struct CGSize )arg0 withRole:(NSInteger)arg1 inInterfaceOrientation:(NSInteger)arg2 frameOptions:(NSUInteger)arg3 ;
-(struct CGRect )_referenceFrameForLayoutElement:(id)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )_referenceFrameForLayoutRole:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 frameOptions:(NSUInteger)arg3 ;
-(struct CGRect )_separatorViewReferenceFrameForLayoutRole:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 frameOptions:(NSUInteger)arg3 ;
-(struct CGRect )_separatorViewReferenceFrameForSpaceConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 frameOptions:(NSUInteger)arg2 ;
-(struct CGRect )_statusBarAvoidanceFrameForLayoutState:(id)arg0 ;
-(struct CGRect )_statusBarAvoidanceFrameForLayoutState:(id)arg0 layoutRole:(NSInteger)arg1 ;
-(struct CGRect )_updateRectInReferenceCoordinateSpace:(struct CGRect )arg0 withBlock:(id)arg1 ;
-(struct CGRect )frameForSceneIdentifier:(id)arg0 inView:(id)arg1 ;
-(struct CGRect )referenceFrameForEntity:(id)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )referenceFrameForUniqueIdentifier:(id)arg0 inLayoutState:(id)arg1 ;
-(struct CGRect )statusBarAvoidanceFrame;
-(struct CGSize )_layoutSizeForLayoutRole:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 layoutState:(id)arg2 ;
-(struct CGSize )_layoutSizeForLayoutRole:(NSInteger)arg0 spaceConfiguration:(NSInteger)arg1 peekConfiguration:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 frameOptions:(NSUInteger)arg4 ;
-(struct UIEdgeInsets )_statusBarEdgeInsetsForLayoutState:(id)arg0 ;
-(struct UIEdgeInsets )pointerInteractionHitTestInsetsForView:(id)arg0 ;
-(unsigned int)_anchorEdgeForLayoutRole:(NSInteger)arg0 ;
-(unsigned int)_anchorEdgeForLayoutRole:(NSInteger)arg0 inInterfaceOrientation:(NSInteger)arg1 ;
-(unsigned int)_convertAnchorEdge:(unsigned int)arg0 toLayoutOrientation:(NSInteger)arg1 ;
-(unsigned int)_layoutSpaceAnchorEdgeForLayoutRole:(NSInteger)arg0 ;
-(void)_addLayoutElementViewController:(id)arg0 forLayoutElement:(id)arg1 entity:(id)arg2 ;
-(void)_addSingleSceneForTransitionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_beginLayoutStateTransitionWithTransitionContext:(id)arg0 ;
-(void)_beginRequiringPushedInWallpaperForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)_configureHomeGrabberForLayoutStateTransition;
-(void)_configureHomeGrabberForSettingsChangeWithDiff:(id)arg0 transitionContext:(id)arg1 ;
-(void)_createOrDestroyHomeGrabberRotationViewIfNecessary;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)arg0 ;
-(void)_endRequiringPushedInWallpaperForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)_fadeStatusBarStylesBetweenFromAndToViewControllersWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_noteKeyboardIsForMedusaWithOwningScene:(id)arg0 ;
-(void)_noteKeyboardIsNotForMedusa;
-(void)_orderFrontLayoutElementViewController:(id)arg0 ;
-(void)_orderFrontLayoutElementViewControllerForLayoutRole:(NSInteger)arg0 ;
-(void)_orderFrontOverlayViews;
-(void)_performJiggleHintAnimationForApplicationSceneHandle:(id)arg0 completion:(id)arg1 ;
-(void)_popOutForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)_pushInForReason:(id)arg0 animationFactory:(id)arg1 ;
-(void)_removeAppForTransitionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_replaceSingleSceneForTransitionRequest:(id)arg0 animationSettings:(id)arg1 completion:(id)arg2 ;
-(void)_resizeAppViewsWithAnimationSettings:(id)arg0 completion:(id)arg1 ;
-(void)_rotateAppViewsWithAnimationSettings:(id)arg0 completion:(id)arg1 ;
-(void)_setMaskDisplayCorners:(BOOL)arg0 forReason:(id)arg1 ;
-(void)_setUpObservationWithCurrentEntities:(id)arg0 previousEntities:(id)arg1 ;
-(void)_slideOverAndFadeElementOffscreenForTransitionRequest:(id)arg0 completion:(id)arg1 ;
-(void)_updateAuxiliaryViews;
-(void)_updateAuxiliaryViewsWhichWantToAnimateDuringRotation;
-(void)_updateHomeGrabberEdgeProtectAndAutoHideForAppRequest;
-(void)_updateHomeGrabberEdgeProtectAndAutoHideWithResetDelay:(CGFloat)arg0 unhideDelay:(CGFloat)arg1 ;
-(void)_updateKeyboardHomeAffordanceAssertion;
-(void)_updateSuppressingHomeAffordanceBounce;
-(void)_updateViewControllerNubViewHighlightState:(id)arg0 forKeyboardFocusSceneID:(id)arg1 ;
-(void)_updateWallpaperStyleAndBackgroundColorWithAnimationFactory:(id)arg0 ;
-(void)betaLaunchHandle:(id)arg0 activateIfNeededEndedWithResult:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionWillEndWithTransitionContext:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;
-(void)setUserResizing:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif