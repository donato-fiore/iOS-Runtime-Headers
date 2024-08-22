// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHVIEWCONTROLLERTRANSITIONANIMATORADAPTER_H
#define SBHVIEWCONTROLLERTRANSITIONANIMATORADAPTER_H

@class NSString;
@protocol SBViewControllerReversibleAnimatedTransitioning, SBHViewControllerTransitionAnimating;

#import <Foundation/Foundation.h>


@interface SBHViewControllerTransitionAnimatorAdapter : NSObject <SBViewControllerReversibleAnimatedTransitioning>



@property (readonly, nonatomic) NSObject<SBHViewControllerTransitionAnimating> *animator; // ivar: _animator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transitionToken; // ivar: _transitionToken


-(BOOL)supportsRestarting;
-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithAnimator:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;
-(void)cancelTransition:(id)arg0 withCompletionSpeed:(CGFloat)arg1 completionCurve:(NSInteger)arg2 ;


@end


#endif