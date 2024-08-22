// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXPURELYINTERACTIVETRANSITION_H
#define PRXPURELYINTERACTIVETRANSITION_H

@class UIPercentDrivenInteractiveTransition, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;



@interface PRXPurelyInteractiveTransition : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;


@end


#endif