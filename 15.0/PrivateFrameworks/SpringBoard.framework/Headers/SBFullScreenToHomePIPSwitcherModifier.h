// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENTOHOMEPIPSWITCHERMODIFIER_H
#define SBFULLSCREENTOHOMEPIPSWITCHERMODIFIER_H



#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBCoplanarSwitcherModifier.h"
#import "SBFullScreenToHomeIconZoomSwitcherModifier.h"

@interface SBFullScreenToHomePIPSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    CGPoint _finalCenter;
    CGFloat _finalScale;
    CGFloat _sourceAlpha;
    BOOL _shouldHide;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
}




-(BOOL)_isIndexSelectedAppLayout:(NSUInteger)arg0 ;
-(BOOL)_shouldApplyMorphToPipToIndex:(NSUInteger)arg0 ;
-(BOOL)clipsToBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isWallpaperRequiredForSwitcher;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(NSInteger)homeScreenBackdropBlurType;
-(NSInteger)wallpaperStyle;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)handleHideMorphToPIPAppLayoutEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 zoomModifier:(id)arg1 appLayout:(id)arg2 ;
-(id)topMostLayoutElements;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGRect )clippingFrameForIndex:(NSUInteger)arg0 withBounds:(struct CGRect )arg1 ;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif