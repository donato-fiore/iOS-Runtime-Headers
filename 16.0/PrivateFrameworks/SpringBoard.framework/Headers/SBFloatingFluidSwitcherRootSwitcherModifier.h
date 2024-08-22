// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATINGFLUIDSWITCHERROOTSWITCHERMODIFIER_H
#define SBFLOATINGFLUIDSWITCHERROOTSWITCHERMODIFIER_H



#import "SBFluidSwitcherRootSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBFloatingFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

@property (retain, nonatomic) SBAppLayout *activeAppLayout; // ivar: _activeAppLayout
@property (nonatomic) CGRect containerViewBounds; // ivar: _containerViewBounds
@property (nonatomic) NSInteger floatingConfiguration; // ivar: _floatingConfiguration
@property (nonatomic, getter=isFloatingSwitcherVisible) BOOL floatingSwitcherVisible; // ivar: _floatingSwitcherVisible
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation


-(Class)_defaultMultitaskingModifierClass;
-(id)_entityRemovalModifierForEvent:(id)arg0 ;
-(id)_newMultitaskingModifier;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appExposeAccessoryButtonsBundleIdentifier;
-(id)appLayoutsToEnsureExistForMainTransitionEvent:(id)arg0 ;
-(id)floorModifierForGestureEvent:(id)arg0 ;
-(id)floorModifierForTransitionEvent:(id)arg0 ;
-(id)gestureModifierForGestureEvent:(id)arg0 ;
-(id)handleEvent:(id)arg0 ;
-(id)highlightModifierForHighlightEvent:(id)arg0 ;
-(id)init;
-(id)insertionModifierForInsertionEvent:(id)arg0 ;
-(id)lowEndHardwareModifier;
-(id)multitaskingModifierForEvent:(id)arg0 ;
-(id)removalModifierForRemovalEvent:(id)arg0 ;
-(id)shelfModifierForTransitionEvent:(id)arg0 ;
-(id)swipeToKillModifierForSwipeToKillEvent:(id)arg0 ;
-(id)topMostLayoutElements;
-(id)transientlyVisibleSlideOverTongueModifierForEvent:(id)arg0 ;
-(id)transitionModifierForMainTransitionEvent:(id)arg0 ;
-(id)userScrollingModifierForScrollEvent:(id)arg0 ;
-(void)_updateContainerViewBounds;
-(void)setDelegate:(id)arg0 ;


@end


#endif