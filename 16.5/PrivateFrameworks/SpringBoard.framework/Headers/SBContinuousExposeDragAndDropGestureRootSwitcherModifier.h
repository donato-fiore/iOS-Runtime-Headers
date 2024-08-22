// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEDRAGANDDROPGESTUREROOTSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEDRAGANDDROPGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeDragAndDropGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_appLayout;
}




-(NSInteger)gestureType;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 appLayout:(id)arg1 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif