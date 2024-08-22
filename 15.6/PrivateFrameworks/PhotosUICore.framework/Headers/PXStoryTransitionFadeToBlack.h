// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSITIONFADETOBLACK_H
#define PXSTORYTRANSITIONFADETOBLACK_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"

@interface PXStoryTransitionFadeToBlack : PXStoryConcreteTransition {
    CAMediaTimingFunction *_animationCurve;
}




-(CGFloat)clipAlphaForTime:(struct ? )arg0 ;
-(id)initWithTransitionInfo:(struct ? )arg0 event:(NSInteger)arg1 clipLayouts:(id)arg2 ;


@end


#endif