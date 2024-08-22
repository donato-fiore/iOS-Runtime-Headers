// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTRANSITIONWIPE_H
#define PXSTORYTRANSITIONWIPE_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"
#import "PXStoryWipeTransitionConfiguration.h"

@interface PXStoryTransitionWipe : PXStoryConcreteTransition {
    PXStoryWipeTransitionConfiguration *_configuration;
    CAMediaTimingFunction *_animationCurve;
    CGFloat _dividerAnimationDurationFraction;
    CGFloat _reverseDividerAnimationDurationFraction;
}




-(id)initWithConfiguration:(id)arg0 ;
-(void)timeDidChange;
-(void)wasStopped;


@end


#endif