// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSPRINGANIMATIONSETTINGS_H
#define HUSPRINGANIMATIONSETTINGS_H

@class CASpringAnimation;


#import "HUAnimationSettings.h"

@interface HUSpringAnimationSettings : HUAnimationSettings

@property (nonatomic) CGFloat completionEpsilon; // ivar: _completionEpsilon
@property (nonatomic) CGFloat damping;
@property (nonatomic) CGFloat initialVelocity;
@property (nonatomic) CGFloat mass;
@property (readonly, nonatomic) CASpringAnimation *springAnimation; // ivar: _springAnimation
@property (nonatomic) CGFloat stiffness;


+(id)criticallyDampedSpringSettings;
-(CGFloat)delay;
-(CGFloat)duration;
-(CGFloat)interpolatedProgressForProgress:(CGFloat)arg0 ;
-(CGFloat)speed;
-(float)repeatCount;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_initWithSpringAnimation:(id)arg0 completionEpsilon:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)timingFunction;
-(void)_updateDuration;
-(void)setDelay:(CGFloat)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setRepeatCount:(float)arg0 ;
-(void)setSpeed:(CGFloat)arg0 ;
-(void)setTimingFunction:(id)arg0 ;


@end


#endif