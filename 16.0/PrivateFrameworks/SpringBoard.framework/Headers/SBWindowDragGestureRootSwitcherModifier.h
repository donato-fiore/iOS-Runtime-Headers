// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWDRAGGESTUREROOTSWITCHERMODIFIER_H
#define SBWINDOWDRAGGESTUREROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBWindowDragGestureRootSwitcherModifier : SBGestureRootSwitcherModifier {
    SBAppLayout *_selectedAppLayout;
    SBAppLayout *_currentAppLayout;
    SBAppLayout *_currentFloatingAppLayout;
    NSInteger _currentFloatingConfiguration;
    CGPoint _gestureVelocity;
}




-(NSInteger)gestureType;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithSelectedAppLayout:(id)arg0 currentAppLayout:(id)arg1 currentFloatingAppLayout:(id)arg2 currentFloatingConfiguration:(NSInteger)arg3 ;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif