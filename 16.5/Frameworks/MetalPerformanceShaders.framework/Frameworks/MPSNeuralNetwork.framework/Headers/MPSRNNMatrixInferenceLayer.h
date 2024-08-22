// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSRNNMATRIXINFERENCELAYER_H
#define MPSRNNMATRIXINFERENCELAYER_H

@class MPSKernel, MPSMatrixMultiplication;



@interface MPSRNNMatrixInferenceLayer : MPSKernel {
    *int layerTypes;
    **void layers;
    **void forwardLayers;
    *int forwardLayerTypes;
    NSUInteger nForwardLayers;
    **void backwardLayers;
    *int backwardLayerTypes;
    NSUInteger nBackwardLayers;
    MPSMatrixMultiplication *gemmKernel;
    MPSMatrixMultiplication *gemmKernelNonTranspose;
}


@property (nonatomic) NSUInteger bidirectionalCombineMode; // ivar: _bidirectionalCombineMode
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) NSUInteger numberOfLayers; // ivar: _numberOfLayers
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (nonatomic) BOOL propagateFullRecurrentRows; // ivar: _propagateFullRecurrentRows
@property (nonatomic) BOOL recurrentOutputIsTemporary; // ivar: _recurrentOutputIsTemporary
@property (nonatomic) BOOL storeAllIntermediateStates; // ivar: _storeAllIntermediateStates


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 rnnDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 rnnDescriptors:(id)arg1 ;
-(id)recurrentStateForBatchSize:(NSUInteger)arg0 ;
-(id)temporaryRecurrentStateForCommandBuffer:(id)arg0 batchSize:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeBidirectionalSequenceToCommandBuffer:(id)arg0 sourceSequence:(id)arg1 destinationForwardMatrices:(id)arg2 destinationBackwardMatrices:(id)arg3 ;
-(void)encodeSequenceToCommandBuffer:(id)arg0 sourceMatrices:(id)arg1 destinationMatrices:(id)arg2 recurrentInputState:(id)arg3 recurrentOutputStates:(id)arg4 ;
-(void)encodeSequenceToCommandBuffer:(id)arg0 sourceMatrices:(id)arg1 sourceOffsets:(*NSUInteger)arg2 destinationMatrices:(id)arg3 destinationOffsets:(*NSUInteger)arg4 recurrentInputState:(id)arg5 recurrentOutputStates:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif