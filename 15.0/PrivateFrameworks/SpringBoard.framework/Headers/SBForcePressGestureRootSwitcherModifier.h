// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFORCEPRESSGESTUREROOTSWITCHERMODIFIER_H
#define SBFORCEPRESSGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBSwitcherModifier.h"

@interface SBForcePressGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBSwitcherModifier *_multitaskingModifier;
}




-(NSInteger)gestureType;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 multitaskingModifier:(id)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif