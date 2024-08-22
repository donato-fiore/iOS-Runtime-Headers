// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKCANCELINGANIMATEDTRANSITIONINGHANDLER_H
#define PKCANCELINGANIMATEDTRANSITIONINGHANDLER_H

@class UIViewController, UIView, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface PKCancelingAnimatedTransitioningHandler : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

 {
    UIViewController *_presentingVC;
    UIView *_presentingView;
    UIViewController *_presentedVC;
    UIView *_presentedView;
    id<UIViewControllerContextTransitioning> *_transitionContext;
    BOOL _completed;
}


@property (copy, nonatomic) id *cancelationHandler; // ivar: _cancelationHandler
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_updateWithTransitionContext:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)startInteractiveTransition:(id)arg0 ;


@end


#endif