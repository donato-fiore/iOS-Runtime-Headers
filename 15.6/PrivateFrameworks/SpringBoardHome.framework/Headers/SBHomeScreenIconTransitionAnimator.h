// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHOMESCREENICONTRANSITIONANIMATOR_H
#define SBHOMESCREENICONTRANSITIONANIMATOR_H

@class NSString;
@protocol SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning, SBViewControllerContextTransitioning, SBHomeScreenIconTransitionAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "SBHIconAnimationSettings.h"
#import "SBNestingViewController.h"
#import "SBIconAnimator.h"

@interface SBHomeScreenIconTransitionAnimator : NSObject <SBIconAnimatorDelegate, SBViewControllerInteractiveAnimatedTransitioning>

 {
    id<SBViewControllerContextTransitioning> *_transitionContext;
    NSUInteger _transitionToken;
    SBHIconAnimationSettings *_currentSettings;
    NSUInteger _currentOperation;
    BOOL _receivedFirstInteractiveUpdate;
    BOOL _needsTransitionTokenIncrementOnNextUpdate;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) SBNestingViewController *childViewController; // ivar: _childViewController
@property (readonly, nonatomic) NSUInteger currentOperation;
@property (readonly, nonatomic) SBHIconAnimationSettings *currentSettings;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHomeScreenIconTransitionAnimatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIconAnimator *iconAnimator; // ivar: _iconAnimator
@property (nonatomic) CGFloat initialDelay; // ivar: _initialDelay
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation
@property (readonly, nonatomic, getter=wasRestarted) BOOL restarted;
@property (readonly) Class superclass;


-(BOOL)iconAnimator:(id)arg0 canAlterViewHierarchyDuringCleanupUsingBlock:(id)arg1 ;
-(BOOL)supportsRestarting;
-(CGFloat)percentComplete;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithIconAnimator:(id)arg0 childViewController:(id)arg1 operation:(NSUInteger)arg2 ;
-(id)transitionAnimationFactory:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)cancel;
-(void)cancelTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)completeImmediately;
-(void)finishInteractiveTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;
-(void)iconAnimatorWasInvalidated:(id)arg0 ;
-(void)restart;
-(void)reverse;
-(void)updateTransition:(id)arg0 withPercentComplete:(CGFloat)arg1 ;


@end


#endif