// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNGRADIENTKERNEL_H
#define MPSCNNGRADIENTKERNEL_H



#import "MPSCNNBinaryKernel.h"

@interface MPSCNNGradientKernel : MPSCNNBinaryKernel

@property (nonatomic) NSInteger kernelOffsetX; // ivar: _kernelOffsetX
@property (nonatomic) NSInteger kernelOffsetY; // ivar: _kernelOffsetY


-(BOOL)isStateModified;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceGradients:(id)arg1 sourceImages:(id)arg2 gradientStates:(id)arg3 ;
-(id)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
-(id)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)resultStateForPrimaryImage:(id)arg0 secondaryImage:(id)arg1 sourceStates:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 primaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceGradients:(id)arg1 sourceImages:(id)arg2 gradientStates:(id)arg3 destinationGradients:(id)arg4 ;
-(void)encodeBatchToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceGradients:(id)arg2 sourceImages:(id)arg3 gradientStates:(id)arg4 destinationGradients:(id)arg5 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 destinationGradient:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)readBinaryGradientState:(id)arg0 isSecondarySourceFilter:(BOOL)arg1 ;
-(void)readGradientState:(id)arg0 ;


@end


#endif