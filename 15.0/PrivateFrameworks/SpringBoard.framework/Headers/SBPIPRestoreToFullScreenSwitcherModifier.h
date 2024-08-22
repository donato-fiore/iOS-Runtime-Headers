// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPIPRESTORETOFULLSCREENSWITCHERMODIFIER_H
#define SBPIPRESTORETOFULLSCREENSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBFullScreenToHomeIconZoomSwitcherModifier.h"

@interface SBPIPRestoreToFullScreenSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
}




-(BOOL)_isFromAppLayout:(NSUInteger)arg0 ;
-(BOOL)_isToAppLayout:(NSUInteger)arg0 ;
-(BOOL)clipsToBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)completesWhenChildrenComplete;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_layoutSettings;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 zoomModifier:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 withBounds:(struct CGRect )arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;


@end


#endif