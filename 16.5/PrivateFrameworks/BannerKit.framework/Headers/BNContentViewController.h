// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNCONTENTVIEWCONTROLLER_H
#define BNCONTENTVIEWCONTROLLER_H

@class UIViewController, NSMutableSet, UIPanGestureRecognizer, NSArray, NSString;
@protocol UIGestureRecognizerDelegate, BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate, BNPresentable, BNPanGestureProxyPrivate, UIViewControllerAnimatedTransitioning, BNConsidering, BNPresentingDelegate, BNLayoutManaging, BNPosting;


#import "BNTieredArray.h"
#import "BNTransitionContext.h"

@interface BNContentViewController : UIViewController <UIGestureRecognizerDelegate, BNPanGestureProxyDelegate, BNPresentedBannerAnimationCustomizing, BNPresentingPrivate>

 {
    BNTieredArray *_presentables;
    NSMutableSet *_presentingPresentables;
    NSMutableSet *_dismissingPresentables;
    NSMutableSet *_transitioningDelegates;
    UIPanGestureRecognizer *_panGesture;
    id<BNPresentable> *_presentableForActiveGesture;
    CGRect _presentedFrameForPresentableForActiveGesture;
    id<BNPanGestureProxyPrivate> *_panGestureProxyForActivePresentable;
    BNTransitionContext *_activeBannerTransitionContext;
    id<UIViewControllerAnimatedTransitioning> *_activeBannerTransitionAnimator;
}


@property (readonly, copy, nonatomic) NSArray *allPresentables;
@property (readonly, nonatomic) NSObject<BNConsidering> *authority; // ivar: _authority
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNPresentingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BNLayoutManaging> *layoutManager; // ivar: _layoutManager
@property (weak, nonatomic) NSObject<BNPosting> *poster; // ivar: _poster
@property (readonly, copy, nonatomic) NSArray *presentedPresentables;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *topPresentables;


+(id)_retargetableBannerTransitionAnimatorForAnimator:(id)arg0 ;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isDraggingDismissalEnabledForPresentable:(id)arg0 ;
-(BOOL)_isDraggingEnabledForPresentable:(id)arg0 ;
-(BOOL)_isDraggingInteractionEnabledForPresentable:(id)arg0 ;
-(BOOL)_isLocalDraggingEnabledForPresentable:(id)arg0 ;
-(BOOL)_isPresentableNotice:(id)arg0 ;
-(BOOL)_isTouchOutsideDismissalEnabledForPresentable:(id)arg0 ;
-(BOOL)_resetActiveBannerTransitionAnimator:(id)arg0 ;
-(BOOL)_resetActiveBannerTransitionContextIfComplete:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(BOOL)shouldFenceAnimationsForPresentable:(id)arg0 ;
-(BOOL)shouldOverlapPresentable:(id)arg0 withPresentable:(id)arg1 ;
-(NSInteger)_effectTierForPresentable:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_dismissPresentablesWithIdentification:(id)arg0 reason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 ;
-(id)_newBannerTransitionContextForPresenting:(BOOL)arg0 viewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentableForGestureInView:(id)arg0 ;
-(id)_presentableForScrollEvent:(id)arg0 ;
-(id)_presentableForTouch:(id)arg0 ;
-(id)_presentablesWithIdentification:(id)arg0 requiringUniqueMatch:(BOOL)arg1 ;
-(id)_topPresentable;
-(id)dismissPresentablesWithIdentification:(id)arg0 reason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 ;
-(id)dismissPresentablesWithIdentification:(id)arg0 reason:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithAuthority:(id)arg0 ;
-(id)sizeTransitionAnimationSettingsForPresentable:(id)arg0 ;
-(id)userInterfaceStyleTransitionAnimationSettingsForPresentable:(id)arg0 forTransitionToStyle:(NSInteger)arg1 ;
-(struct CGPoint )_locationOfScrollEvent:(id)arg0 inContainerViewForGesture:(id)arg1 ;
-(struct CGPoint )_locationOfTouch:(id)arg0 inContainerViewForGesture:(id)arg1 ;
-(struct CGPoint )_translationInContainerViewForGesture:(id)arg0 ;
-(struct CGPoint )_velocityInContainerViewForGesture:(id)arg0 ;
-(struct CGPoint )gestureRecognizerProxy:(id)arg0 locationForTouch:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(struct CGPoint )gestureRecognizerProxy:(id)arg0 translationInCoordinateSpace:(id)arg1 ;
-(struct CGPoint )gestureRecognizerProxy:(id)arg0 velocityInCoordinateSpace:(id)arg1 ;
-(struct CGPoint )gestureRecognizerProxy:(id)arg0 visualTranslationInCoordinateSpace:(id)arg1 ;
-(struct CGRect )_dismissedFrameForViewController:(id)arg0 withContainerBounds:(struct CGRect )arg1 ;
-(struct CGRect )_dismissedFrameWithPaddingForViewController:(id)arg0 withContainerBounds:(struct CGRect )arg1 ;
-(struct CGRect )_dismissedFrameWithPaddingForViewController:(id)arg0 withContainerBounds:(struct CGRect )arg1 targetTransform:(struct CGAffineTransform )arg2 ;
-(struct CGRect )_insetFrame:(struct CGRect )arg0 forViewController:(id)arg1 ;
-(struct CGRect )_outsetFrame:(struct CGRect )arg0 forViewController:(id)arg1 ;
-(struct CGRect )_presentedFrame:(BOOL)arg0 forViewController:(id)arg1 withContainerBounds:(struct CGRect )arg2 overshoot:(BOOL)arg3 targetTransform:(struct CGAffineTransform )arg4 ;
-(struct CGRect )_presentedFrameForPresentable:(id)arg0 withContainerBounds:(struct CGRect )arg1 ;
-(struct CGRect )_presentedFrameForViewController:(id)arg0 withContainerBounds:(struct CGRect )arg1 ;
-(struct CGRect )_presentedFrameForViewController:(id)arg0 withContainerBounds:(struct CGRect )arg1 targetTransform:(struct CGAffineTransform )arg2 ;
-(struct CGRect )_presentedFrameForViewController:(id)arg0 withContentFrame:(struct CGRect )arg1 afterContentWithFrame:(struct CGRect )arg2 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_addPresentable:(id)arg0 withTransitioningDelegate:(id)arg1 incrementingTier:(BOOL)arg2 ;
-(void)_dismissPresentable:(id)arg0 withReason:(id)arg1 animated:(BOOL)arg2 userInfo:(id)arg3 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_insertPresentable:(id)arg0 beneathPresentable:(id)arg1 withTransitioningDelegate:(id)arg2 ;
-(void)_insertPresentable:(id)arg0 beneathPresentable:(id)arg1 withTransitioningDelegate:(id)arg2 incrementingTier:(BOOL)arg3 ;
-(void)_postLayoutChangeForVisibleNotifications;
-(void)_removePresentable:(id)arg0 ;
-(void)_resetPresentableForActiveGesture:(id)arg0 ;
-(void)_updateFrameForChildContentContainer:(id)arg0 requiresAnimation:(BOOL)arg1 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)preferredMinimumTopInsetDidInvalidate;
-(void)presentPresentable:(id)arg0 withOptions:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif