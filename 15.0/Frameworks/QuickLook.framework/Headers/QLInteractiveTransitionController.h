// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLINTERACTIVETRANSITIONCONTROLLER_H
#define QLINTERACTIVETRANSITIONCONTROLLER_H

@class NSString;
@protocol UIViewControllerInteractiveTransitioning;


#import "QLTransitionController.h"

@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning>

 {
    CGFloat _initialTransitioningViewWidth;
}


@property (nonatomic) CGFloat completeProgress; // ivar: _completeProgress
@property (readonly, nonatomic) NSInteger completionCurve;
@property (readonly, nonatomic) CGFloat completionSpeed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)_performForcedDismissal;
-(void)completeTransition:(BOOL)arg0 withDuration:(CGFloat)arg1 ;
-(void)startInteractiveTransition:(id)arg0 ;
-(void)updateTransitionWithProgress:(CGFloat)arg0 ;
-(void)updateTransitionWithProgress:(CGFloat)arg0 isFinal:(BOOL)arg1 ;


@end


#endif