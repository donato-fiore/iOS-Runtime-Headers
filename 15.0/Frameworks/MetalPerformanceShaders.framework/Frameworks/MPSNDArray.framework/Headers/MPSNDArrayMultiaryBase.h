// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYMULTIARYBASE_H
#define MPSNDARRAYMULTIARYBASE_H

@class MPSKernel, MPSKernelDAGObject;
@protocol MPSNDArrayAllocator;



@interface MPSNDArrayMultiaryBase : MPSKernel {
    NSUInteger _srcCount;
    *void _encodeData;
    *unk _encodeGradient;
    MPSKernelDAGObject *_defaultKernelDAG;
    MPSKernelDAGObject *_defaultGradientDAG;
}


@property (retain, nonatomic) NSObject<MPSNDArrayAllocator> *destinationArrayAllocator; // ivar: _destinationArrayAllocator


+(NSUInteger)expectedVirtualSourceCount;
-(NSUInteger)edgeModeAtSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(NSUInteger)maxSupportedDimensionsForSourceArrays:(id)arg0 destinationArray:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)destinationStrides;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(id)reshapeFitToTileToCommandBuffer:(id)arg0 currentSource:(id)arg1 kernelDimension:(NSUInteger)arg2 dimensionsToBeRetained;
-(id)resultStateForSourceArrays:(id)arg0 sourceStates:(id)arg1 destinationArray:(id)arg2 ;
-(id)stridesAtSourceIndex;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceStates:(id)arg2 destinationArray:(id)arg3 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 sourceState:(id)arg2 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(struct ? )dilationRatesForSourceIndex:(NSUInteger)arg0 ;
-(struct ? )kernelSizesForSourceIndex:(NSUInteger)arg0 ;
-(struct ? )offsetsAtSourceIndex:(NSUInteger)arg0 ;
-(struct ? )stridesForSourceIndex:(NSUInteger)arg0 ;
-(void)copyToGradientState:(id)arg0 sourceArrays:(id)arg1 sourceStates:(id)arg2 destinationArray:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)kernelDAGObjectSetup:(*id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 destination:(id)arg3 ;


@end


#endif