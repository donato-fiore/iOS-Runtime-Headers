// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBGESTUREINITIATEDICONZOOMANIMATIONATTRIBUTESSWITCHERMODIFIER_H
#define SBGESTUREINITIATEDICONZOOMANIMATIONATTRIBUTESSWITCHERMODIFIER_H



#import "SBSwitcherModifier.h"
#import "SBAppLayout.h"

@interface SBGestureInitiatedIconZoomAnimationAttributesSwitcherModifier : SBSwitcherModifier {
    SBAppLayout *_appLayout;
    NSUInteger _gestureEdge;
    CGPoint _liftOffVelocity;
    NSUInteger _iconGridSizeClass;
    BOOL _overshootScaleForWidgetZoomDown;
}




-(CGFloat)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
-(CGFloat)scaleForIndex:(NSUInteger)arg0 ;
-(id)_layoutSettings;
-(id)_positionSettings;
-(id)_scaleSettings;
-(id)_settingsByInterpolatingBetween:(id)arg0 and:(id)arg1 progress:(CGFloat)arg2 ;
-(id)animationAttributesForLayoutElement:(id)arg0 ;
-(id)handleTimerEvent:(id)arg0 ;
-(id)handleTransitionEvent:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 gestureEdge:(NSUInteger)arg1 liftOffVelocity:(struct CGPoint )arg2 ;


@end


#endif