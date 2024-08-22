// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEWINDOWDRAGROOTSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEWINDOWDRAGROOTSWITCHERMODIFIER_H



#import "SBGestureRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeWindowDragRootSwitcherModifier : SBGestureRootSwitcherModifier

@property (readonly, nonatomic) SBAppLayout *initialAppLayout; // ivar: _initialAppLayout


-(NSInteger)gestureType;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)appLayoutsToResignActive;
-(id)debugPotentialChildModifiers;
-(id)gestureChildModifierForGestureEvent:(id)arg0 activeTransitionModifier:(id)arg1 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithStartingEnvironmentMode:(NSInteger)arg0 initialAppLayout:(id)arg1 ;
-(id)keyboardSuppressionMode;
-(id)transitionChildModifierForMainTransitionEvent:(id)arg0 activeGestureModifier:(id)arg1 ;


@end


#endif