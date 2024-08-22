// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNCONVOLUTIONGRADIENTSTATE_H
#define MPSCNNCONVOLUTIONGRADIENTSTATE_H

@class NSString;
@protocol MPSImageSizeEncodingState, MTLBuffer;


#import "MPSNNGradientState.h"
#import "MPSCNNConvolution.h"

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState>

 {
    BOOL _initialized;
    id<MTLBuffer> *_intermediateWeightsBuffer;
    id<MTLBuffer> *_intermeidateBiasesBuffer;
    NSUInteger _numReductionBlocks;
    BOOL _needReductionInN;
    BOOL _needReductionInXY;
    unsigned int _weightsLayout;
    NSUInteger _dimSizeN;
}


@property (readonly, retain, nonatomic) MPSCNNConvolution *convolution; // ivar: _convolution
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gradientForBiases;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gradientForWeights;
@property (readonly, nonatomic) unsigned int gradientForWeightsLayout;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfBiasGradients;
@property (readonly, nonatomic) NSUInteger numberOfWeightGradients;
@property (readonly, nonatomic) NSUInteger sourceHeight;
@property (readonly, nonatomic) NSUInteger sourceWidth;
@property (readonly) Class superclass;


+(id)temporaryStateWithCommandBuffer:(id)arg0 resourceList:(id)arg1 convolution:(id)arg2 ;
+(id)temporaryStateWithCommandBuffer:(id)arg0 resourceList:(id)arg1 convolution:(id)arg2 weightsLayout:(unsigned int)arg3 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 convolution:(id)arg2 ;
-(id)initWithDevice:(id)arg0 resourceList:(id)arg1 convolution:(id)arg2 weightsLayout:(unsigned int)arg3 ;
-(id)initWithResource:(id)arg0 ;
-(id)initWithResource:(id)arg0 weightsLayout:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif