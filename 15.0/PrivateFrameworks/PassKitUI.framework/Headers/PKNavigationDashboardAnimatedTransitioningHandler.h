// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKNAVIGATIONDASHBOARDANIMATEDTRANSITIONINGHANDLER_H
#define PKNAVIGATIONDASHBOARDANIMATEDTRANSITIONINGHANDLER_H

@class UIView, UIViewPropertyAnimator, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>

#import "PKPassGroupsViewController.h"
#import "PKNavigationDashboardPassViewController.h"
#import "PKPassthroughView.h"
#import "PKPGSVTransitionInterstitialView.h"

@interface PKNavigationDashboardAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

 {
    PKPassGroupsViewController *_presentingVC;
    UIView *_presentingView;
    PKNavigationDashboardPassViewController *_presentedVC;
    UIView *_presentedView;
    PKPassthroughView *_navigationItemsView;
    id<UIViewControllerContextTransitioning> *_transitionContext;
    CGFloat _animationStartTime;
    BOOL _boostedPresentation;
    BOOL _completed;
    UIViewPropertyAnimator *_alphaPropertyAnimator;
}


@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=wasDragged) BOOL dragged; // ivar: _dragged
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKPGSVTransitionInterstitialView *leadingInterstitialItemView; // ivar: _leadingInterstitialItemView
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPGSVTransitionInterstitialView *trailingInterstitialItemView; // ivar: _trailingInterstitialItemView
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(CGFloat)_contentOffsetAnimationDurationForCollectionView:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_cancelPresentation;
-(void)_clearNavigationItems;
-(void)_completeCancelledPresentation;
-(void)_completePresentation;
-(void)_dismiss;
-(void)_moveGroupView:(id)arg0 toView:(id)arg1 belowView:(id)arg2 ;
-(void)_startPresentation;
-(void)_updateWithTransitionContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)boostPresentation;
-(void)cancel;
-(void)completePresentationImmediately;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif