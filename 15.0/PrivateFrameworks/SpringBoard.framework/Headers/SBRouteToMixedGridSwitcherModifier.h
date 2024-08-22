// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBROUTETOMIXEDGRIDSWITCHERMODIFIER_H
#define SBROUTETOMIXEDGRIDSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBMixedGridSwitcherModifier.h"

@interface SBRouteToMixedGridSwitcherModifier : SBTransitionSwitcherModifier {
    SBMixedGridSwitcherModifier *_mixedGridModifier;
    BOOL _isTransitioningOutOfAppSwitcher;
}


@property (nonatomic) BOOL reversesFloatingCardDirection;


-(CGFloat)contentPageViewScaleForAppLayout:(id)arg0 ;
-(CGFloat)snapshotScaleForAppLayout:(id)arg0 ;
-(id)adjustedAppLayoutsForAppLayouts:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 mixedGridModifier:(id)arg1 ;
-(id)scrollViewAttributes;
-(struct CGPoint )restingOffsetForScrollOffset:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;


@end


#endif