// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXVALUESPRINGANIMATION_H
#define _PXVALUESPRINGANIMATION_H

@class PXValueAnimation;



@interface _PXValueSpringAnimation : PXValueAnimation {
    CGFloat _A;
    CGFloat _B;
    CGFloat _omega0;
}




+(CGFloat)durationOfSpringAnimationWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 velocity:(CGFloat)arg3 epsilon:(CGFloat)arg4 ;
-(CGFloat)approximateVelocity;
-(CGFloat)currentValue;
-(id)initWithDuration:(CGFloat)arg0 currentMediaTime:(CGFloat)arg1 spec:(struct _PXValueAnimationSpec )arg2 ;
-(id)initWithFromValue:(CGFloat)arg0 currentMediaTime:(CGFloat)arg1 spec:(struct _PXValueAnimationSpec )arg2 ;


@end


#endif