// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTRANSITIONPAN_H
#define PXSTORYTRANSITIONPAN_H

@class CAMediaTimingFunction;


#import "PXStoryConcreteTransition.h"
#import "PXStoryPanTransitionConfiguration.h"

@interface PXStoryTransitionPan : PXStoryConcreteTransition {
    PXStoryPanTransitionConfiguration *_configuration;
    CAMediaTimingFunction *_effectCurveBeforeMidpoint;
    CAMediaTimingFunction *_effectCurveAfterMidpoint;
    CAMediaTimingFunction *_movementCurve;
}




+(id)panWithConfiguration:(id)arg0 ;
+(id)panWithEffect:(id)arg0 transitionInfo:(struct ? )arg1 ;
-(void)_configureClipLayoutsContentBoundsForTime:(struct ? )arg0 ;
-(void)configureEffectForTime:(struct ? )arg0 ;
-(void)timeDidChange;
-(void)wasStopped;


@end


#endif