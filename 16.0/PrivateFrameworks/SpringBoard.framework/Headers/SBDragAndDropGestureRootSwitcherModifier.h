// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDRAGANDDROPGESTUREROOTSWITCHERMODIFIER_H
#define SBDRAGANDDROPGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBDragAndDropGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    BOOL _floatingSwitcherVisible;
    SBAppLayout *_fullScreenAppLayout;
}




-(NSInteger)gestureType;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleSwitcherDropEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 floatingSwitcherVisible:(BOOL)arg1 fullScreenAppLayout:(id)arg2 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif