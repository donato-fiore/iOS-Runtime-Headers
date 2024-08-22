// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNMULTIARYKERNEL_H
#define MPSCNNMULTIARYKERNEL_H

@class MPSKernel;
@protocol MPSImageAllocator, MPSNNPadding;



@interface MPSCNNMultiaryKernel : MPSKernel {
    *NNKernelSourceParams _srcInfo;
    BOOL _supportsBroadcasting;
    int _checkFlags;
    *unk _batchEncode;
    *void _encodeData;
}


@property (nonatomic) ? clipRect; // ivar: _clipRect
@property (nonatomic) NSUInteger destinationFeatureChannelOffset; // ivar: _destinationFeatureChannelOffset
@property (retain, nonatomic) NSObject<MPSImageAllocator> *destinationImageAllocator; // ivar: _destinationImageAllocator
@property (readonly, nonatomic) BOOL isBackwards; // ivar: _isBackwards
@property (readonly, nonatomic) BOOL isStateModified;
@property (retain, nonatomic) NSObject<MPSNNPadding> *padding; // ivar: _padding
@property (readonly, nonatomic) NSUInteger sourceCount; // ivar: _srcCount


-(BOOL)appendBatchBarrier;
-(BOOL)isResultStateReusedAcrossBatch;
-(NSUInteger)dilationRateX;
-(NSUInteger)dilationRateXatIndex:(NSUInteger)arg0 ;
-(NSUInteger)dilationRateY;
-(NSUInteger)dilationRateYatIndex:(NSUInteger)arg0 ;
-(NSUInteger)edgeMode;
-(NSUInteger)edgeModeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelHeight;
-(NSUInteger)kernelHeightAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelWidth;
-(NSUInteger)kernelWidthAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)maxBatchSize;
-(NSUInteger)sourceFeatureChannelMaxCount;
-(NSUInteger)sourceFeatureChannelMaxCountAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)sourceFeatureChannelOffset;
-(NSUInteger)sourceFeatureChannelOffsetAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)strideInPixelsX;
-(NSUInteger)strideInPixelsXatIndex:(NSUInteger)arg0 ;
-(NSUInteger)strideInPixelsY;
-(NSUInteger)strideInPixelsYatIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationState:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 inState:(id)arg2 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationState:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(id)resultStateBatchForSourceImages:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImages:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(struct ? )offset;
-(struct ? )offsetAtIndex:(NSUInteger)arg0 ;
-(void)copyToGradientState:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 inStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeInternalBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 clipRect:(struct ? )arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 inState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDilationRateX:(NSUInteger)arg0 ;
-(void)setDilationRateX:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setDilationRateY:(NSUInteger)arg0 ;
-(void)setDilationRateY:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setEdgeMode:(NSUInteger)arg0 ;
-(void)setEdgeMode:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setKernelHeight:(NSUInteger)arg0 ;
-(void)setKernelHeight:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setKernelWidth:(NSUInteger)arg0 ;
-(void)setKernelWidth:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setOffset:(struct ? )arg0 ;
-(void)setOffset:(struct ? )arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSourceFeatureChannelMaxCount:(NSUInteger)arg0 ;
-(void)setSourceFeatureChannelMaxCount:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSourceFeatureChannelOffset:(NSUInteger)arg0 ;
-(void)setSourceFeatureChannelOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setStrideInPixelsX:(NSUInteger)arg0 ;
-(void)setStrideInPixelsX:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setStrideInPixelsY:(NSUInteger)arg0 ;
-(void)setStrideInPixelsY:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif