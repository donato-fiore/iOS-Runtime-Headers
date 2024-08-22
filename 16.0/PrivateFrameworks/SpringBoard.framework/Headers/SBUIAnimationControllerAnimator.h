// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUIANIMATIONCONTROLLERANIMATOR_H
#define SBUIANIMATIONCONTROLLERANIMATOR_H

@class NSString;
@protocol SBViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "SBUIAnimationController.h"

@interface SBUIAnimationControllerAnimator : NSObject <SBViewControllerAnimatedTransitioning>



@property (readonly, weak, nonatomic) SBUIAnimationController *animationController; // ivar: _animationController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)init;
-(id)initWithAnimationController:(id)arg0 ;
-(id)transitionAnimationFactory:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif