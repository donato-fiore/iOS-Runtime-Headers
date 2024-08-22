// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFULLSCREENTOHOMESYSTEMAPERTURESWITCHERMODIFIER_H
#define SBFULLSCREENTOHOMESYSTEMAPERTURESWITCHERMODIFIER_H

@class NSUUID;


#import "SBTransitionSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBCoplanarSwitcherModifier.h"
#import "SBFullScreenToHomeIconZoomSwitcherModifier.h"

@interface SBFullScreenToHomeSystemApertureSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
    NSUInteger _direction;
    NSUUID *_suppressionIdentifier;
    CGRect _expandedCardFrame;
    CGPoint _expandedCardCenter;
    CGPoint _liftOffCardVelocity;
    CGFloat _initialCardScale;
    BOOL _showShadow;
    BOOL _bounced;
    BOOL _tucked;
    BOOL _jindoIntersectsIntialCardFrame;
    BOOL _shouldClipRegionAboveSystemAperture;
    BOOL _unblurred;
}




-(BOOL)_isEffectivelyHome;
-(BOOL)_isIndexZoomAppLayout:(NSUInteger)arg0 ;
-(BOOL)_shouldApplyEffectsToIndex:(NSUInteger)arg0 ;
-(BOOL)completesWhenChildrenComplete;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(BOOL)systemApertureRequiresHeavyShadowForTransition;
-(CGFloat)opacityForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(CGFloat)rootContentViewBlurRadius;
-(CGFloat)rotationAngleForIndex:(NSUInteger)arg0 ;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_blurItemContainerParameters;
-(id)_collapseMeshForNormalizedXDelta:(CGFloat)arg0 ;
-(id)_expandMeshForIndex:(NSUInteger)arg0 ;
-(id)_systemApertureSettings;
-(id)_tuckInAtEndMeshForNormalizedXDelta:(CGFloat)arg0 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)appLayoutsToCacheSnapshots;
-(id)handleRepositionProgressEvent:(id)arg0 ;
-(id)initWithTransitionID:(id)arg0 zoomModifier:(id)arg1 appLayout:(id)arg2 direction:(NSUInteger)arg3 expandedCardFrame:(struct CGRect )arg4 cardScale:(CGFloat)arg5 cardVelocity:(struct CGPoint )arg6 ;
-(id)meshTransformForIndex:(NSUInteger)arg0 ;
-(id)repositionProgressNotificationsForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)systemApertureTransitioningAppLayouts;
-(id)topMostLayoutElements;
-(id)transitionDidEnd;
-(id)transitionWillBegin;
-(id)visibleAppLayouts;
-(id)visibleHomeAffordanceLayoutElements;
-(struct CGPoint )_collapsedTransitionTargetForZoomDown:(BOOL)arg0 ;
-(struct CGPoint )expandedSourcePositionForSystemApertureTransition;
-(struct CGRect )frameForIndex:(NSUInteger)arg0 ;
-(struct CGRect )rootContentViewMaskRect;
-(struct UIRectCornerRadii )cornerRadiiForIndex:(NSUInteger)arg0 ;
-(void)didMoveToParentModifier:(id)arg0 ;


@end


#endif