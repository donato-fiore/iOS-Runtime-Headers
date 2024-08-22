// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEGESTUREROOTFLOATINGSWITCHERMODIFIER_H
#define SBHOMEGESTUREROOTFLOATINGSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBSwitcherModifier.h"

@interface SBHomeGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
    NSInteger _floatingConfiguration;
}




-(NSInteger)gestureType;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)initWithMultitaskingModifier:(id)arg0 floatingConfiguration:(NSInteger)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;
-(struct CGRect )_frameWithScaleAppliedForIndex:(NSUInteger)arg0 ;


@end


#endif