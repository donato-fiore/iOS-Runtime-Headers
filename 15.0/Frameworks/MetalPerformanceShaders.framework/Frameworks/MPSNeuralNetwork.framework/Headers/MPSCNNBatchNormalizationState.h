// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNBATCHNORMALIZATIONSTATE_H
#define MPSCNNBATCHNORMALIZATIONSTATE_H



#import "MPSNNGradientState.h"
#import "MPSCNNBatchNormalization.h"

@interface MPSCNNBatchNormalizationState : MPSNNGradientState {
    NSUInteger _accumulationCount;
    NSUInteger _numberOfFeatureChannels;
    float _epsilon;
}


@property (readonly, retain, nonatomic) MPSCNNBatchNormalization *batchNormalization; // ivar: _batchNormalization


+(id)temporaryStateWithCommandBuffer:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 epsilon:(float)arg2 batchNormalization:(id)arg3 ;
-(id)beta;
-(id)gamma;
-(id)gradientForBeta;
-(id)gradientForGamma;
-(id)initDeferredWithDevice:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 epsilon:(float)arg2 batchNormalization:(id)arg3 ;
-(id)mean;
-(id)variance;
-(void)dealloc;
-(void)reset;


@end


#endif