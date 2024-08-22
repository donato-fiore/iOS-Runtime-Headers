// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMETOSWITCHERSWITCHERMODIFIER_H
#define SBHOMETOSWITCHERSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBSwitcherModifier.h"

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

@property (readonly, nonatomic) NSInteger direction; // ivar: _direction
@property (readonly, nonatomic) SBSwitcherModifier *multitaskingModifier; // ivar: _multitaskingModifier


-(BOOL)isEffectivelyHome;
-(CGFloat)containerStatusBarAnimationDuration;
-(id)_dismissForEmptySwitcherResponseName;
-(id)appLayoutToScrollToDuringTransition;
-(id)handleTimerEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 direction:(NSInteger)arg1 multitaskingModifier:(id)arg2 ;
-(id)transitionWillBegin;
-(id)transitionWillUpdate;


@end


#endif