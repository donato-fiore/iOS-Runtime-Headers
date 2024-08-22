// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMAINSWITCHERROOTSWITCHERMODIFIER_H
#define SBMAINSWITCHERROOTSWITCHERMODIFIER_H



#import "SBFluidSwitcherRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBMainSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier {
    CGSize _fullScreenCardSize;
    CGSize _floatingCardSize;
    NSInteger _environmentMode;
    BOOL _floatingSwitcherVisible;
    BOOL _isInPeekState;
    SBAppLayout *_appLayout;
    SBAppLayout *_floatingAppLayout;
    NSInteger _floatingConfiguration;
}




-(BOOL)_correctFloorModifierToHandleEvent;
-(id)_createNewDefaultFloorModifier;
-(id)_newMultitaskingModifierForEnvironmentMode:(NSInteger)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)floorModifierForGestureEvent:(id)arg0 ;
-(id)floorModifierForTransitionEvent:(id)arg0 ;
-(id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg0 ;
-(id)gestureModifierForGestureEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)highlightModifierForHighlightEvent:(id)arg0 ;
-(id)init;
-(id)insertionModifierForInsertionEvent:(id)arg0 ;
-(id)multitaskingModifierForEvent:(id)arg0 ;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg0 ;
-(id)removalModifierForRemovalEvent:(id)arg0 ;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(id)shelfModifierForTransitionEvent:(id)arg0 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg0 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg0 ;
-(id)userScrollingModifierForScrollEvent:(id)arg0 ;
-(void)_ensureModifier:(id)arg0 startsInFinalStateOfEvent:(id)arg1 ;
-(void)_setCardSizesWithEvent:(id)arg0 ;


@end


#endif