// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBITEMRESIZEGESTUREROOTSWITCHERMODIFIER_H
#define SBITEMRESIZEGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"

@interface SBItemResizeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier

@property (readonly, nonatomic) NSInteger selectedLayoutRole; // ivar: _selectedLayoutRole


-(NSInteger)gestureType;
-(id)appLayoutsToResignActive;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 selectedLayoutRole:(NSInteger)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif