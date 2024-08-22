// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENFLUIDSWITCHERROOTSWITCHERMODIFIER_H
#define SBFULLSCREENFLUIDSWITCHERROOTSWITCHERMODIFIER_H



#import "SBFluidSwitcherRootSwitcherModifier.h"

@interface SBFullScreenFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier



-(BOOL)shouldUseBackgroundWallpaperTreatmentForIndex:(NSUInteger)arg0 ;
-(Class)_defaultMultitaskingModifierClass;
-(NSInteger)_effectiveEnvironmentMode;
-(id)_entityRemovalModifierForMainTransitionEvent:(id)arg0 ;
-(id)_newMultitaskingModifier;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)floorModifierForGestureEvent:(id)arg0 ;
-(id)floorModifierForTransitionEvent:(id)arg0 ;
-(id)gestureModifierForGestureEvent:(id)arg0 ;
-(id)insertionModifierForInsertionEvent:(id)arg0 ;
-(id)lowEndHardwareModifier;
-(id)multitaskingModifierForEvent:(id)arg0 ;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg0 ;
-(id)removalModifierForRemovalEvent:(id)arg0 ;
-(id)shelfModifierForTransitionEvent:(id)arg0 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg0 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg0 ;
-(id)userScrollingModifierForScrollEvent:(id)arg0 ;


@end


#endif