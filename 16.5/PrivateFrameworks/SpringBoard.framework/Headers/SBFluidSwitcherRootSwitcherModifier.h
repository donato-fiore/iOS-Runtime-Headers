// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERROOTSWITCHERMODIFIER_H
#define SBFLUIDSWITCHERROOTSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"

@interface SBFluidSwitcherRootSwitcherModifier : SBSwitcherModifier {
    BOOL _hasPerformedInitialSetup;
}




-(id)_handleEvent:(id)arg0 ;
-(id)_highlightModifierKeyForAppLayout:(id)arg0 ;
-(id)_reduceMotionModifier;
-(id)_swipeToKillModifierKeyForAppLayout:(id)arg0 ;
-(id)floorModifier;
-(id)floorModifierForGestureEvent:(id)arg0 ;
-(id)floorModifierForTransitionEvent:(id)arg0 ;
-(id)focusedAppModifierForUpdateFocusedAppLayoutEvent:(id)arg0 ;
-(id)gestureModifierForGestureEvent:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleHighlightEvent:(id)arg0 ;
-(id)handleInsertionEvent:(id)arg0 ;
-(id)handleReduceMotionChangedEvent:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwipeToKillEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)handleUpdateFocusedAppLayoutEvent:(id)arg0 ;
-(id)highlightModifierForHighlightEvent:(id)arg0 ;
-(id)insertionModifierForInsertionEvent:(id)arg0 ;
-(id)lowEndHardwareModifier;
-(id)multitaskingModifier;
-(id)multitaskingModifierForEvent:(id)arg0 ;
-(id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg0 ;
-(id)removalModifierForRemovalEvent:(id)arg0 ;
-(id)responseForProposedChildResponse:(id)arg0 childModifier:(id)arg1 event:(id)arg2 ;
-(id)shelfModifierForTransitionEvent:(id)arg0 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg0 ;
-(id)transientlyVisibleSlideOverTongueModifier;
-(id)transientlyVisibleSlideOverTongueModifierForEvent:(id)arg0 ;
-(id)transitionModifierForInlineTransitionEvent:(id)arg0 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg0 ;
-(id)userScrollingModifierForScrollEvent:(id)arg0 ;
-(void)_setup;
-(void)_updateFloorModifierWithGestureEvent:(id)arg0 ;
-(void)_updateFloorModifierWithProposedFloorModifier:(id)arg0 ;
-(void)_updateFloorModifierWithTransitionEvent:(id)arg0 ;
-(void)_updateLowEndHardwareModifier;
-(void)_updateMultitaskingModifierWithEvent:(id)arg0 ;
-(void)_updateReduceMotionModifierWithReduceMotionChangedEvent:(id)arg0 ;
-(void)_updateTransientlyVisibleSlideOverTongueModifierWithEvent:(id)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)verifyInternalIntegrityAfterHandlingEvent:(id)arg0 ;


@end


#endif