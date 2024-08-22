// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPARALLAXMOTIONEFFECT_H
#define _UIPARALLAXMOTIONEFFECT_H



#import "UIMotionEffect.h"
#import "UIMotionEffectGroup.h"
#import "UIInterpolatingMotionEffect.h"
#import "_UITiltMotionEffect.h"

@interface _UIParallaxMotionEffect : UIMotionEffect {
    UIMotionEffectGroup *_group;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}


@property (nonatomic) CGFloat horizontalSlideAccelerationBoostFactor;
@property (nonatomic) CGFloat maximumHorizontalTiltAngle;
@property (nonatomic) CGFloat maximumVerticalTiltAngle;
@property (nonatomic) CGFloat rotatingSphereRadius;
@property (nonatomic) UIOffset slideMagnitude; // ivar: _slideMagnitude
@property (nonatomic) CGFloat verticalSlideAccelerationBoostFactor;


-(id)_keyPathsAndRelativeValuesForPose:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset )arg0 ;
-(void)_activateTiltEffectIfNecessary;
-(void)_updateGroupMotionEffect;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif