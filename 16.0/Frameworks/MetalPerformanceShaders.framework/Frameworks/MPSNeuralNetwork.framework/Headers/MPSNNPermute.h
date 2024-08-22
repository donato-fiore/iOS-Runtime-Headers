// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNPERMUTE_H
#define MPSNNPERMUTE_H



#import "MPSCNNKernel.h"

@interface MPSNNPermute : MPSCNNKernel

@property (nonatomic) MPSNNDimensionOrder dimensionOrder; // ivar: _dimensionOrder


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)appendBatchBarrier;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeBatchInternalToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 srcSize:(struct ? )arg5 destSize:(struct ? )arg6 testClipRect:(struct ? )arg7 testMaxClipRect:(struct ? )arg8 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 inStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(id)arg3 destinationImages:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif