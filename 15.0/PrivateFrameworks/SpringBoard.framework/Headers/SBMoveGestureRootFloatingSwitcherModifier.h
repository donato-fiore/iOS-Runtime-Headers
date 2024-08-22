// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMOVEGESTUREROOTFLOATINGSWITCHERMODIFIER_H
#define SBMOVEGESTUREROOTFLOATINGSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"

@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier

@property (nonatomic) NSInteger currentFloatingConfiguration; // ivar: _currentFloatingConfiguration
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation


-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(NSInteger)gestureType;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithInitialFloatingConfiguration:(NSInteger)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif