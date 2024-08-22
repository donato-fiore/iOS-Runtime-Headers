// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSHELFROOTSWITCHERMODIFIER_H
#define SBSHELFROOTSWITCHERMODIFIER_H

@class NSString;
@protocol SBShelfExpansionSwitcherModifierDelegate;


#import "SBFluidSwitcherRootSwitcherModifier.h"

@interface SBShelfRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier <SBShelfExpansionSwitcherModifierDelegate>

 {
    CGRect _portraitContainerBounds;
    CGRect _landscapeContainerBounds;
    BOOL _isRoutingFrameForIndexToFloating;
}


@property (nonatomic) NSUInteger animationStyle; // ivar: _animationStyle
@property (nonatomic) NSUInteger appearanceState; // ivar: _appearanceState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGRect targetFrame; // ivar: _targetFrame


-(CGFloat)floatingDockHeight;
-(NSInteger)headerStyleForIndex:(NSUInteger)arg0 ;
-(id)appLayoutsToResignActive;
-(id)floorModifierForGestureEvent:(id)arg0 ;
-(id)floorModifierForTransitionEvent:(id)arg0 ;
-(id)insertionModifierForInsertionEvent:(id)arg0 ;
-(id)keyboardSuppressionMode;
-(id)multitaskingModifierForEvent:(id)arg0 ;
-(id)orderedVisibleAppLayoutsForShelfExpansionModifier:(id)arg0 ;
-(id)removalModifierForRemovalEvent:(id)arg0 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg0 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg0 ;
-(id)userScrollingModifierForScrollEvent:(id)arg0 ;
-(struct CGRect )containerViewBounds;
-(struct CGRect )defaultBoundsForAppLayout:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(void)_rebuildContainerBounds;
-(void)didMoveToParentModifier:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif