// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNREDUCTIONSPATIALMEANGRADIENTNODE_H
#define MPSNNREDUCTIONSPATIALMEANGRADIENTNODE_H



#import "MPSNNGradientFilterNode.h"

@interface MPSNNReductionSpatialMeanGradientNode : MPSNNGradientFilterNode



+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;
-(*void)newFilterNode;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 gradientState:(id)arg2 ;


@end


#endif