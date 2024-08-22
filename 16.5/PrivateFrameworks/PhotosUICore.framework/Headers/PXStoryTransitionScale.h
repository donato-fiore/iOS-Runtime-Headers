// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYTRANSITIONSCALE_H
#define PXSTORYTRANSITIONSCALE_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"

@interface PXStoryTransitionScale : PXStoryConcreteTransition {
    CGFloat _scaleRelativeFactor;
    BOOL _zoomingOut;
    CAMediaTimingFunction *_orderedAboveAnimationCurve;
    CAMediaTimingFunction *_orderedBelowAnimationCurve;
}




-(CGFloat)clipAlphaForTime:(struct ? )arg0 ;
-(id)initWithTransitionInfo:(struct ? )arg0 event:(NSInteger)arg1 clipLayouts:(id)arg2 ;
-(void)_configureWithTransitionInfo:(struct ? )arg0 ;
-(void)timeDidChange;
-(void)wasStopped;


@end


#endif