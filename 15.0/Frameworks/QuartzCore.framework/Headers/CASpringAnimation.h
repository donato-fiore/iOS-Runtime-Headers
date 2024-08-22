// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASPRINGANIMATION_H
#define CASPRINGANIMATION_H



#import "CABasicAnimation.h"

@interface CASpringAnimation : CABasicAnimation

@property CGFloat damping;
@property CGFloat initialVelocity;
@property CGFloat mass;
@property (readonly) CGFloat settlingDuration;
@property CGFloat stiffness;
@property CGFloat velocity;


+(id)defaultValueForKey:(id)arg0 ;
-(*void)_copyRenderAnimationForLayer:(id)arg0 ;
-(BOOL)_setCARenderAnimation:(*void)arg0 layer:(id)arg1 ;
-(CGFloat)_timeFunction:(CGFloat)arg0 ;
-(CGFloat)durationForEpsilon:(CGFloat)arg0 ;
-(float)_solveForInput:(float)arg0 ;
-(unsigned int)_propertyFlagsForLayer:(id)arg0 ;


@end


#endif