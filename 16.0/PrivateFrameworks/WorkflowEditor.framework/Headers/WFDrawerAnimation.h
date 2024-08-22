// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDRAWERANIMATION_H
#define WFDRAWERANIMATION_H


#import <Foundation/Foundation.h>

#import "WFDrawerAnimation.h"

@interface WFDrawerAnimation : NSObject {
    NSUInteger _type;
    ? _typeParameters;
    CGFloat _duration;
    CGFloat _delay;
    WFDrawerAnimation *_coordinatedUnitAnimation;
}


@property (readonly, nonatomic) WFDrawerAnimation *coordinatedUnitAnimation;


+(id)animationUsingDefaultSpringWithInitialVelocity:(CGFloat)arg0 delay:(CGFloat)arg1 ;
+(id)animationWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 delay:(CGFloat)arg2 ;
+(id)animationWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 delay:(CGFloat)arg4 ;
+(id)drawerReleaseAnimationWithInitialVelocity:(CGFloat)arg0 ;
-(id)description;
-(id)initUsingDefaultSpringWithInitialVelocity:(CGFloat)arg0 delay:(CGFloat)arg1 ;
-(id)initWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 delay:(CGFloat)arg2 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 delay:(CGFloat)arg4 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(CGFloat)arg3 delay:(CGFloat)arg4 calculateCoordinatedAnimation:(BOOL)arg5 ;
// -(void)applyWithAnimations:(id)arg0 completion:(unk)arg1  ;


@end


#endif