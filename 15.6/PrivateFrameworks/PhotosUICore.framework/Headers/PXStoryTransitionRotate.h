// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSITIONROTATE_H
#define PXSTORYTRANSITIONROTATE_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"

@interface PXStoryTransitionRotate : PXStoryConcreteTransition {
    CGFloat _angle;
    CAMediaTimingFunction *_transformAnimationCurve;
    CAMediaTimingFunction *_effectAnimationCurve;
}




-(CGFloat)clipAlphaForTime:(struct ? )arg0 ;
-(id)initWithTransitionInfo:(struct ? )arg0 effect:(id)arg1 auxiliaryEffect:(id)arg2 ;
-(id)initWithTransitionInfo:(struct ? )arg0 event:(NSInteger)arg1 clipLayouts:(id)arg2 ;
-(void)_configureWithTransitionInfo:(struct ? )arg0 ;
-(void)configureEffectForTime:(struct ? )arg0 ;
-(void)timeDidChange;
-(void)wasStopped;


@end


#endif