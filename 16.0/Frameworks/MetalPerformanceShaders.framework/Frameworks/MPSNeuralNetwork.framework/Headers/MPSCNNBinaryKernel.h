// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNBINARYKERNEL_H
#define MPSCNNBINARYKERNEL_H

@class MPSKernel;
@protocol MPSImageAllocator, MPSNNPadding;


#import "MPSExternalCNNBinary.h"

@interface MPSCNNBinaryKernel : MPSKernel {
    MPSExternalCNNBinary *_plugin;
    BOOL _pluginSupportsBatchEncode;
    BOOL _supportsBroadcasting;
    int _checkFlags;
    *unk _encode;
    *unk _batchEncode;
    *void _encodeData;
    NSUInteger _pluginOptions;
}


@property (nonatomic) ? clipRect; // ivar: _clipRect
@property (nonatomic) NSUInteger destinationFeatureChannelOffset; // ivar: _destinationFeatureChannelOffset
@property (retain, nonatomic) NSObject<MPSImageAllocator> *destinationImageAllocator; // ivar: _destinationImageAllocator
@property (readonly, nonatomic) BOOL isBackwards; // ivar: _isBackwards
@property (readonly, nonatomic) BOOL isStateModified;
@property (retain, nonatomic) NSObject<MPSNNPadding> *padding; // ivar: _padding
@property (readonly, nonatomic) NSUInteger primaryDilationRateX; // ivar: _primaryDilationRateX
@property (readonly, nonatomic) NSUInteger primaryDilationRateY; // ivar: _primaryDilationRateY
@property (nonatomic) NSUInteger primaryEdgeMode; // ivar: _primaryEdgeMode
@property (readonly, nonatomic) NSUInteger primaryKernelHeight; // ivar: _primaryKernelHeight
@property (readonly, nonatomic) NSUInteger primaryKernelWidth; // ivar: _primaryKernelWidth
@property (nonatomic) ? primaryOffset; // ivar: _primaryOffset
@property (nonatomic) NSUInteger primarySourceFeatureChannelMaxCount; // ivar: _primarySourceFeatureChannelMaxCount
@property (nonatomic) NSUInteger primarySourceFeatureChannelOffset; // ivar: _primarySourceFeatureChannelOffset
@property (nonatomic) NSUInteger primaryStrideInPixelsX; // ivar: _primaryStrideInPixelsX
@property (nonatomic) NSUInteger primaryStrideInPixelsY; // ivar: _primaryStrideInPixelsY
@property (readonly, nonatomic) NSUInteger secondaryDilationRateX; // ivar: _secondaryDilationRateX
@property (readonly, nonatomic) NSUInteger secondaryDilationRateY; // ivar: _secondaryDilationRateY
@property (nonatomic) NSUInteger secondaryEdgeMode; // ivar: _secondaryEdgeMode
@property (readonly, nonatomic) NSUInteger secondaryKernelHeight; // ivar: _secondaryKernelHeight
@property (readonly, nonatomic) NSUInteger secondaryKernelWidth; // ivar: _secondaryKernelWidth
@property (nonatomic) ? secondaryOffset; // ivar: _secondaryOffset
@property (nonatomic) NSUInteger secondarySourceFeatureChannelMaxCount; // ivar: _secondarySourceFeatureChannelMaxCount
@property (nonatomic) NSUInteger secondarySourceFeatureChannelOffset; // ivar: _secondarySourceFeatureChannelOffset
@property (nonatomic) NSUInteger secondaryStrideInPixelsX; // ivar: _secondaryStrideInPixelsX
@property (nonatomic) NSUInteger secondaryStrideInPixelsY; // ivar: _secondaryStrideInPixelsY


-(BOOL)appendBatchBarrier;
-(BOOL)filterHandlesPlugin;
-(BOOL)isResultStateReusedAcrossBatch;
-(BOOL)setPlugin:(id)arg0 ;
-(NSUInteger)batchEncodingStorageSizeForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(NSUInteger)encodingStorageSizeForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 destinationStates:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 inStates:(id)arg3 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 destinationStates:(*id)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 inStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 destinationState:(*id)arg3 destinationStateIsTemporary:(BOOL)arg4 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(*id)arg4 destinationStateIsTemporary:(BOOL)arg5 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)plugin;
-(id)resultStateBatchForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)resultStateForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(id)temporaryResultStateBatchForCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(struct MPSRegion )primarySourceRegionForDestinationSize:(struct ? )arg0 ;
-(struct MPSRegion )secondarySourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)copyToBinaryGradientState:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 primaryImages:(id)arg1 secondaryImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 inStates:(id)arg4 destinationImages:(id)arg5 ;
-(void)encodeInternalBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImages:(id)arg2 secondaryImages:(id)arg3 inStates:(id)arg4 destinationImages:(id)arg5 clipRect:(struct ? )arg6 ;
-(void)encodeInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 subBatchIndex:(NSUInteger)arg6 batchSize:(NSUInteger)arg7 clipRect:(struct ? )arg8 ;
-(void)encodeToCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 subBatchIndex:(NSUInteger)arg6 batchSize:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif