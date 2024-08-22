// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXUIVIEWCONTROLLERSWIPEDOWNTRANSITION_H
#define PXUIVIEWCONTROLLERSWIPEDOWNTRANSITION_H

@class UIView, UIPanGestureRecognizer;
@protocol UIViewControllerContextTransitioning;


#import "PXUIViewControllerZoomTransition.h"
#import "PXSwipeDownTracker.h"

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition {
    BOOL _didAnimate;
    BOOL _shouldHandleGestureEnd;
    BOOL _didHandleGestureEnd;
}


@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (retain, nonatomic) PXSwipeDownTracker *swipeDownTracker; // ivar: _swipeDownTracker
@property (nonatomic) CGPoint swipeViewInitialCenter; // ivar: _swipeViewInitialCenter
@property (retain, nonatomic) UIView *swipedView; // ivar: _swipedView
@property (retain, nonatomic) NSObject<UIViewControllerContextTransitioning> *transitionContext; // ivar: _transitionContext


+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg0 detailViewController:(id)arg1 ;
-(BOOL)isInteractive;
-(void)_handleGestureEndIfNeeded;
-(void)_updateDimmingViewOrder;
-(void)animateTransition:(id)arg0 ;


@end


#endif