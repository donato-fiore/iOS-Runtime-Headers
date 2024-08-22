// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNKERNEL_H
#define MPSCNNKERNEL_H

@class MPSKernel;
@protocol MPSImageAllocator, MPSNNPadding;


#import "MPSExternalCNNUnary.h"

@interface MPSCNNKernel : MPSKernel {
    MPSExternalCNNUnary *_plugin;
    BOOL _pluginSupportsBatchEncode;
    NSUInteger _maxBatchSize;
    int _checkFlags;
    *unk _encode;
    *unk _batchEncode;
    *void _encodeData;
    NSUInteger _pluginOptions;
}


@property (nonatomic) ? clipRect; // ivar: _clipRect
@property (nonatomic) NSUInteger destinationFeatureChannelOffset; // ivar: _destinationFeatureChannelOffset
@property (retain, nonatomic) NSObject<MPSImageAllocator> *destinationImageAllocator; // ivar: _destinationImageAllocator
@property (readonly, nonatomic) NSUInteger dilationRateX; // ivar: _dilationRateX
@property (readonly, nonatomic) NSUInteger dilationRateY; // ivar: _dilationRateY
@property (nonatomic) NSUInteger edgeMode; // ivar: _edgeMode
@property (readonly, nonatomic) BOOL isBackwards; // ivar: _isBackwards
@property (readonly, nonatomic) BOOL isStateModified;
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (nonatomic) ? offset; // ivar: _offset
@property (retain, nonatomic) NSObject<MPSNNPadding> *padding; // ivar: _padding
@property (nonatomic) NSUInteger sourceFeatureChannelMaxCount; // ivar: _sourceFeatureChannelMaxCount
@property (nonatomic) NSUInteger sourceFeatureChannelOffset; // ivar: _sourceFeatureChannelOffset
@property (readonly, nonatomic) NSUInteger strideInPixelsX; // ivar: _strideInPixelsX
@property (readonly, nonatomic) NSUInteger strideInPixelsY; // ivar: _strideInPixelsY


-(BOOL)appendBatchBarrier;
-(BOOL)filterHandlesPlugin;
-(BOOL)isResultStateReusedAcrossBatch;
-(BOOL)pluginSupportsBatchEncode;
-(BOOL)setPlugin:(id)arg0 ;
-(NSUInteger)batchEncodingStorageSizeForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(NSUInteger)encodingStorageSizeForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 kernelOffset:(struct ? *)arg4 ;
-(id)destinationImageWithCommandBuffer:(id)arg0 sourceImage:(id)arg1 inState:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 inStates:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 destinationStates:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationStates:(*id)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 inState:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceState:(id)arg2 destinationState:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 sourceState:(id)arg3 destinationState:(*id)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)init;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)plugin;
-(id)resultStateBatchForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)sourcePositionOfTopLeftCornerOfFilterWindow;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)copyToGradientState:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 inStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeInternalBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 clipRect:(struct ? )arg5 ;
-(void)encodeInternalToCommputeEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 subBatchIndex:(NSUInteger)arg5 batchSize:(NSUInteger)arg6 clipRect:(struct ? )arg7 shouldHandleCompoundImageNatively:(BOOL)arg8 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 inState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 inState:(id)arg2 destinationImage:(id)arg3 subBatchIndex:(NSUInteger)arg4 batchSize:(NSUInteger)arg5 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 subBatchIndex:(NSUInteger)arg5 batchSize:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif