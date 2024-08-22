// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBGRIDSWITCHERMODIFIER_H
#define SBGRIDSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBGridLayoutSwitcherModifier.h"
#import "_SBGridFloorSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBGridSwitcherModifier : SBSwitcherModifier {
    SBGridLayoutSwitcherModifier *_gridLayoutModifier;
    _SBGridFloorSwitcherModifier *_floorModifier;
    NSUInteger _ongoingAppLayoutRemovals;
    SBAppLayout *_activeAppLayoutInSwitcher;
    CGRect _containerViewBounds_lastBounds;
}




-(char)activityModeForAppLayout:(id)arg0 ;
-(char)jetsamModeForAppLayout:(id)arg0 ;
-(id)foregroundAppLayouts;
-(id)gridLayoutModifier;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwipeToKillEvent:(id)arg0 ;
-(id)handleTapAppLayoutEvent:(id)arg0 ;
-(id)handleTapOutsideToDismissEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)topMostLayoutElements;
-(struct CGRect )containerViewBounds;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif