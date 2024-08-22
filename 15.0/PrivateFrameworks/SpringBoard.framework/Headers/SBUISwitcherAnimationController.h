// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUISWITCHERANIMATIONCONTROLLER_H
#define SBUISWITCHERANIMATIONCONTROLLER_H

@class NSString;
@protocol SBUIAnimationControllerObserver;


#import "SBUIWorkspaceAnimationController.h"
#import "SBMainSwitcherViewController.h"

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>



@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible; // ivar: _interruptible
@property (copy, nonatomic) id *animationBlock; // ivar: _animationBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBMainSwitcherViewController *switcherViewController; // ivar: _switcherViewController


-(BOOL)isInterruptible;
-(BOOL)isReasonableMomentToInterrupt;
-(BOOL)shouldResignActiveForAnimation;
-(id)_layoutState;
-(id)_previousLayoutState;
-(id)animationSettings;
-(id)initWithWorkspaceTransitionRequest:(id)arg0 switcherViewController:(id)arg1 childAnimationControllers:(id)arg2 animationBlock:(id)arg3 ;
-(void)_addSignpostsForAnimationEnd;
-(void)_addSignpostsForAnimationStart;
-(void)_didComplete;
-(void)_startAnimation;
-(void)_updatePPTsForAnimationEnd;
-(void)_updatePPTsForAnimationStart;
-(void)animationControllerDidFinishAnimation:(id)arg0 ;


@end


#endif