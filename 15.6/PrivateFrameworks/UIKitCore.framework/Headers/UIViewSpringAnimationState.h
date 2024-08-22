// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWSPRINGANIMATIONSTATE_H
#define UIVIEWSPRINGANIMATIONSTATE_H



#import "UIViewAnimationState.h"

@interface UIViewSpringAnimationState : UIViewAnimationState {
    CGFloat _mass;
    CGFloat _stiffness;
    CGFloat _damping;
    CGFloat _velocity;
}




+(id)defaultSpringAnimationForKey:(id)arg0 mass:(CGFloat)arg1 stiffness:(CGFloat)arg2 damping:(CGFloat)arg3 velocity:(CGFloat)arg4 ;
+(void)computeDerivedSpringParameters:(CGFloat)arg0 zeta:(CGFloat)arg1 mass:(CGFloat)arg2 velocity:(CGFloat)arg3 epsilon:(CGFloat)arg4 stiffness:(*CGFloat)arg5 damping:(*CGFloat)arg6 ;
+(void)computeDerivedSpringParameters:(CGFloat)arg0 zeta:(CGFloat)arg1 mass:(CGFloat)arg2 velocity:(CGFloat)arg3 epsilon:(CGFloat)arg4 stiffness:(*CGFloat)arg5 damping:(*CGFloat)arg6 debugging:(*id)arg7 ;
-(id)_defaultAnimationForKey:(id)arg0 ;
-(id)animationForLayer:(id)arg0 forKey:(id)arg1 forView:(id)arg2 ;
-(void)generateSpringPropertiesForDuration:(CGFloat)arg0 damping:(CGFloat)arg1 velocity:(CGFloat)arg2 ;
// -(void)setupWithDuration:(CGFloat)arg0 delay:(CGFloat)arg1 view:(id)arg2 options:(NSUInteger)arg3 factory:(id)arg4 parentState:(id)arg5 start:(id)arg6 completion:(unk)arg7  ;


@end


#endif