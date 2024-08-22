// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUVIEWCONTROLLERTRANSITION_H
#define PUVIEWCONTROLLERTRANSITION_H

@class UIPercentDrivenInteractiveTransition, NSString;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerContextTransitioning;

#import <Foundation/Foundation.h>


@interface PUViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>

 {
    id<UIViewControllerContextTransitioning> *_transitionContext;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat imageModulationIntensity;
@property (nonatomic, getter=isInteractive, setter=_setInteractive:) BOOL interactive; // ivar: _interactive
@property (nonatomic, setter=_setInteractiveProgress:) CGFloat interactiveProgress; // ivar: _interactiveProgress
@property (nonatomic) BOOL startedInteractively; // ivar: _startedInteractively
@property (readonly) Class superclass;
@property (nonatomic) CGFloat visibleInteractiveProgress; // ivar: _visibleInteractiveProgress


+(id)interactionControllerForAnimationController:(id)arg0 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)_newInteractiveTransition;
-(id)containerView;
-(id)fromViewController;
-(id)initWithDuration:(CGFloat)arg0 ;
-(id)interactiveTransition;
-(id)toViewController;
-(id)transitionContext;
-(struct CGRect )finalFromViewFrame;
-(struct CGRect )finalToViewFrame;
-(struct CGRect )initialFromViewFrame;
-(struct CGRect )initialToViewFrame;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)cancelInteractiveTransition;
-(void)completeTransition:(BOOL)arg0 ;
-(void)didCompleteTransitionAnimation;
-(void)finishInteractiveTransition;
-(void)setTransitionContext:(id)arg0 ;
-(void)updateInteractiveTransitionProgress:(CGFloat)arg0 ;
-(void)updateInteractiveTransitionProgress:(CGFloat)arg0 visibleTransitionProgress:(CGFloat)arg1 ;


@end


#endif