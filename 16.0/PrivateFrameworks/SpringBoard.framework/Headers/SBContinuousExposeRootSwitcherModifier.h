// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEROOTSWITCHERMODIFIER_H
#define SBCONTINUOUSEXPOSEROOTSWITCHERMODIFIER_H



#import "SBFullScreenFluidSwitcherRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeRootSwitcherModifier : SBFullScreenFluidSwitcherRootSwitcherModifier {
    SBAppLayout *_currentAppLayout;
}




-(BOOL)shouldUseWallpaperGradientTreatment;
-(NSInteger)_effectiveEnvironmentMode;
-(id)_adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)_continuousExposeIdentifiersInStripFromIdentifiers:(id)arg0 ignoringAppLayoutOnStage:(id)arg1 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)adjustedContinuousExposeIdentifiersForIdentifiers:(id)arg0 ;
-(id)appLayoutsForContinuousExposeIdentifier:(id)arg0 ;
-(id)floorModifierForTransitionEvent:(id)arg0 ;
-(id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg0 ;
-(id)gestureModifierForGestureEvent:(id)arg0 ;
-(id)handleContinuousExposeIdentifiersChangedEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)highlightModifierForHighlightEvent:(id)arg0 ;
-(id)insertionModifierForInsertionEvent:(id)arg0 ;
-(id)lowEndHardwareModifier;
-(id)multitaskingModifierForEvent:(id)arg0 ;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg0 ;
-(id)removalModifierForRemovalEvent:(id)arg0 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg0 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg0 ;
-(id)userScrollingModifierForScrollEvent:(id)arg0 ;


@end


#endif