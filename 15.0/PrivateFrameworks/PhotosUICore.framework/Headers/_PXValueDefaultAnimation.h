// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXVALUEDEFAULTANIMATION_H
#define _PXVALUEDEFAULTANIMATION_H

@class PXValueAnimation;



@interface _PXValueDefaultAnimation : PXValueAnimation {
    CGFloat _initialValue;
    NSInteger _curve;
}




-(CGFloat)approximateVelocity;
-(CGFloat)currentValue;
-(id)initWithDuration:(CGFloat)arg0 currentMediaTime:(CGFloat)arg1 spec:(struct _PXValueAnimationSpec )arg2 ;
-(id)initWithFromValue:(CGFloat)arg0 currentMediaTime:(CGFloat)arg1 spec:(struct _PXValueAnimationSpec )arg2 ;


@end


#endif