// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERANIMATIONCONTROLLER_H
#define SBFLUIDSWITCHERANIMATIONCONTROLLER_H

@class NSString;
@protocol SBUIAnimationControllerObserver;


#import "SBUIBlockAnimationController.h"

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController <SBUIAnimationControllerObserver>



@property (copy, nonatomic) id *animationCompletion; // ivar: _animationCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFluidSwitcherAnimationController;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 animationSettings:(id)arg1 animationBlock:(id)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg0 ;


@end


#endif