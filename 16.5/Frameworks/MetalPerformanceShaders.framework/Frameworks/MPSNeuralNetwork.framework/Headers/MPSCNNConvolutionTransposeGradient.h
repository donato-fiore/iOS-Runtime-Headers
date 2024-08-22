// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNCONVOLUTIONTRANSPOSEGRADIENT_H
#define MPSCNNCONVOLUTIONTRANSPOSEGRADIENT_H

@protocol MPSCNNConvolutionDataSource;


#import "MPSCNNGradientKernel.h"
#import "MPSCNNConvolutionGradient.h"

@interface MPSCNNConvolutionTransposeGradient : MPSCNNGradientKernel {
    MPSCNNConvolutionGradient *_convolutionGradient;
}


@property (readonly, retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *dataSource;
@property (nonatomic) NSUInteger gradientOption; // ivar: _gradientOption
@property (readonly, nonatomic) NSUInteger groups; // ivar: _groups
@property (readonly, nonatomic) NSUInteger sourceGradientFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) NSUInteger sourceImageFeatureChannels; // ivar: _outputFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)filterHandlesPlugin;
-(BOOL)isResultStateReusedAcrossBatch;
-(NSUInteger)maxBatchSize;
-(id)PeakAtWeights:(id)arg0 ;
-(id)biases;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 weights:(id)arg1 ;
-(id)weights;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadWeightsAndBiasesFromDataSource;
-(void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg0 state:(id)arg1 ;


@end


#endif