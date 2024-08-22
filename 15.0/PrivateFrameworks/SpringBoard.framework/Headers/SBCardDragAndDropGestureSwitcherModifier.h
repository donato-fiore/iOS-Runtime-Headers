// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCARDDRAGANDDROPGESTURESWITCHERMODIFIER_H
#define SBCARDDRAGANDDROPGESTURESWITCHERMODIFIER_H

@class NSUUID;


#import "SBGestureSwitcherModifier.h"
#import "SBAppLayout.h"
#import "SBSwitcherDropRegionContext.h"
#import "SBCardDropSwitcherModifier.h"

@interface SBCardDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_draggingAppLayout;
    NSInteger _draggingLayoutRole;
    SBAppLayout *_draggingLeafAppLayout;
    SBAppLayout *_intersectingAppLayout;
    NSInteger _intersectingLayoutRole;
    SBAppLayout *_intersectingLeafAppLayout;
    SBAppLayout *_previouslyIntersectingAppLayout;
    CGPoint _translation;
    CGPoint _location;
    BOOL _gestureEnded;
    BOOL _isScrolling;
    NSUUID *_gestureID;
    SBSwitcherDropRegionContext *_dropRegionContext;
    NSUInteger _currentDropRegion;
    SBCardDropSwitcherModifier *_dropModifier;
}




-(BOOL)isLayoutRoleBlurred:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleDraggable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleKillable:(NSInteger)arg0 inAppLayout:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)isLayoutRoleMatchMovedToScene:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)isLayoutRoleSelectable:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(BOOL)shouldAccessoryDrawShadowForAppLayout:(id)arg0 ;
-(BOOL)shouldScaleContentToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldScaleOverlayToFillBoundsAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldShowBackdropViewAtIndex:(NSUInteger)arg0 ;
-(BOOL)shouldUseAnchorPointToPinLayoutRolesToSpace:(NSUInteger)arg0 ;
-(BOOL)shouldUseNonuniformSnapshotScalingForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)dimmingAlphaForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(CGFloat)titleAndIconOpacityForIndex:(NSUInteger)arg0 ;
-(NSUInteger)blurTargetPreferenceForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleBlurProgressEvent:(id)arg0 ;
-(id)handleGestureEvent:(id)arg0 ;
-(id)handleSceneReadyEvent:(id)arg0 ;
-(id)handleScrollEvent:(id)arg0 ;
-(id)handleSwitcherDropEvent:(id)arg0 ;
-(id)initWithGestureID:(id)arg0 ;
-(id)visibleAppLayouts;
-(struct CGRect )frameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withBounds:(struct CGRect )arg2 ;
-(struct CGRect )fullyPresentedFrameForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 ;
-(struct UIRectCornerRadii )cornerRadiiForLayoutRole:(NSInteger)arg0 inAppLayout:(id)arg1 withCornerRadii:(struct UIRectCornerRadii )arg2 ;


@end


#endif