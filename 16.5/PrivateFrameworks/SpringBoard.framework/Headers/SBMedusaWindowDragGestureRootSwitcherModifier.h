// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDUSAWINDOWDRAGGESTUREROOTSWITCHERMODIFIER_H
#define SBMEDUSAWINDOWDRAGGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBMedusaWindowDragGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_selectedLeafAppLayout;
    SBAppLayout *_currentMainAppLayout;
    SBAppLayout *_currentFloatingAppLayout;
    NSInteger _currentFloatingConfiguration;
    CGPoint _gestureVelocity;
}




-(NSInteger)gestureType;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithSelectedLeafAppLayout:(id)arg0 currentMainAppLayout:(id)arg1 currentFloatingAppLayout:(id)arg2 currentFloatingConfiguration:(NSInteger)arg3 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif