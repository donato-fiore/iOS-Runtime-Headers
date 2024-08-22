// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSWIPETOKILLSWITCHERMODIFIER_H
#define SBSWIPETOKILLSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBHighlightSwitcherModifier.h"

@interface SBSwipeToKillSwitcherModifier : SBSwitcherModifier {
    NSInteger _layoutRole;
    SBAppLayout *_appLayout;
    SBAppLayout *_leafAppLayout;
    BOOL _fadeOutSwipedItems;
    CGFloat _progress;
    CGPoint _translation;
    CGFloat _decelerationTargetProgress;
    BOOL _isDragging;
    BOOL _hasPrepared;
    BOOL _simulatingPostRemovalState;
    NSUInteger _interpolationDirection;
    SBHighlightSwitcherModifier *_highlightModifier;
}




-(BOOL)_dragHasBeenReleasedTowardKill;
-(BOOL)clipsToUnobscuredMarginAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)lighteningAlphaForIndex:(NSUInteger)arg0 ;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOffsetForIndex:(NSUInteger)arg0 ;
-(CGFloat)shadowOpacityForLayoutRole:(NSInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)titleOpacityForIndex:(NSUInteger)arg0 ;
-(CGFloat)wallpaperOverlayAlphaForIndex:(NSUInteger)arg0 ;
-(NSUInteger)_interpolatingAdjacentIndexForIndex:(NSUInteger)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleRemovalEvent:(id)arg0 ;
-(id)handleSwipeToKillEvent:(id)arg0 ;
-(id)initWithLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 fadeOutSwipedItems:(BOOL)arg2 ;
-(id)visibleAppLayouts;
-(struct CGPoint )contentViewOffsetForAccessoriesOfAppLayout:(id)arg0 ;
-(struct CGPoint )contentViewOffsetForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;
-(void)_calculateInterpolationDirection;
-(void)_performBlockWhileSimulatingPostRemovalAppLayoutState:(id)arg0 ;


@end


#endif