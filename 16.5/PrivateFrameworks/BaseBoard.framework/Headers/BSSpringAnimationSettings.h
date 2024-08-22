// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSSPRINGANIMATIONSETTINGS_H
#define BSSPRINGANIMATIONSETTINGS_H



#import "BSAnimationSettings.h"

@interface BSSpringAnimationSettings : BSAnimationSettings

@property (readonly, nonatomic) CGFloat damping;
@property (readonly, nonatomic) CGFloat epsilon;
@property (readonly, nonatomic) CGFloat initialVelocity;
@property (readonly, nonatomic) CGFloat mass;
@property (readonly, nonatomic) CGFloat stiffness;


+(id)settingsWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 ;
+(id)settingsWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 ;
+(id)settingsWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 delay:(CGFloat)arg4 timingFunction:(id)arg5 ;
+(id)settingsWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 initialVelocity:(CGFloat)arg4 ;
+(id)settingsWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 epsilon:(CGFloat)arg3 timingFunction:(id)arg4 ;
+(id)settingsWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 timingFunction:(id)arg3 ;
-(id)init;


@end


#endif