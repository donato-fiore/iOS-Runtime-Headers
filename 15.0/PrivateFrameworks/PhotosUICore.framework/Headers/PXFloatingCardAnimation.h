// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFLOATINGCARDANIMATION_H
#define PXFLOATINGCARDANIMATION_H


#import <Foundation/Foundation.h>

#import "PXFloatingCardAnimation.h"

@interface PXFloatingCardAnimation : NSObject {
    NSUInteger _type;
    ? _typeParameters;
    CGFloat _duration;
    CGFloat _delay;
    PXFloatingCardAnimation *_coordinatedUnitAnimation;
}


@property (readonly, nonatomic) PXFloatingCardAnimation *coordinatedUnitAnimation;


+(id)animationUsingDefaultSpringWithInitialVelocity:(CGFloat)arg0 delay:(CGFloat)arg1 ;
+(id)animationWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 delay:(CGFloat)arg2 ;
+(id)animationWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 delay:(CGFloat)arg4 ;
+(id)drawerReleaseAnimationWithInitialVelocity:(CGFloat)arg0 ;
-(id)description;
-(id)initUsingDefaultSpringWithInitialVelocity:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(id)initWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 delay:(CGFloat)arg2 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 delay:(CGFloat)arg4 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 delay:(CGFloat)arg4 calculateCoordinatedAnimation:(BOOL)arg5 ;
// -(void)applyAnimations:(id)arg0 completion:(unk)arg1  ;


@end


#endif