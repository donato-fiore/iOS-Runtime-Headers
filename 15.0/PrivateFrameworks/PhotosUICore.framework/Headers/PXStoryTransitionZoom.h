// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYTRANSITIONZOOM_H
#define PXSTORYTRANSITIONZOOM_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"

@interface PXStoryTransitionZoom : PXStoryConcreteTransition {
    float _scaleRelativeFactor;
    BOOL _zoomingOut;
    CAMediaTimingFunction *_animationCurve;
    CAMediaTimingFunction *_effectCurveBeforeMidpoint;
    CAMediaTimingFunction *_effectCurveAfterMidpoint;
}




-(CGFloat)clipAlphaForTime:(struct ? )arg0 ;
-(id)initWithTransitionInfo:(struct ? )arg0 effect:(id)arg1 ;
-(id)initWithTransitionInfo:(struct ? )arg0 event:(NSInteger)arg1 clipLayouts:(id)arg2 ;
-(void)_configureWithTransitionInfo:(struct ? )arg0 ;
-(void)configureEffectForTime:(struct ? )arg0 ;
-(void)timeDidChange;
-(void)wasStopped;


@end


#endif