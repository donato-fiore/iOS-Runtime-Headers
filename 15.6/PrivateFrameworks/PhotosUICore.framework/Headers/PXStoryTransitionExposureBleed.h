// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSITIONEXPOSUREBLEED_H
#define PXSTORYTRANSITIONEXPOSUREBLEED_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"

@interface PXStoryTransitionExposureBleed : PXStoryConcreteTransition {
    CAMediaTimingFunction *_beforeMidpointAnimationCurve;
}




-(CGFloat)clipAlphaForTime:(struct ? )arg0 ;
-(id)initWithTransitionInfo:(struct ? )arg0 effect:(id)arg1 ;
-(id)initWithTransitionInfo:(struct ? )arg0 event:(NSInteger)arg1 clipLayouts:(id)arg2 ;
-(void)configureEffectForTime:(struct ? )arg0 ;


@end


#endif