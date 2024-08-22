// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYMULTIARYKERNEL_H
#define MPSNDARRAYMULTIARYKERNEL_H



#import "MPSNDArrayMultiaryBase.h"

@interface MPSNDArrayMultiaryKernel : MPSNDArrayMultiaryBase {
    *unk _encode;
}




+(BOOL)supportsPostfixForDevice:(*void)arg0 ;
+(BOOL)supportsPrefixForDevice:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationGradientArrayDescriptorsForSourceArrays:(id)arg0 sourceGradient:(id)arg1 sourceState:(id)arg2 ;
-(id)destinationGradientsSupported;
-(id)encodeGradientsToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 resultState:(*id)arg2 outputStateIsTemporary:(BOOL)arg3 ;
-(id)firstGradientDestinationFromDestinationGradients:(id)arg0 outMaxNumDimensions:(*NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(void)encodeGradientsToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationGradients:(id)arg4 ;
-(void)encodeGradientsToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationGradients:(id)arg4 kernelDAGObject:(id)arg5 ;
-(void)encodeGradientsToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationGradients:(id)arg5 kernelDAGObject:(id)arg6 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 destinationArray:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 resultState:(id)arg2 destinationArray:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 resultState:(id)arg2 destinationArray:(id)arg3 kernelDAGObject:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArray:(id)arg3 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 resultState:(id)arg3 destinationArray:(id)arg4 kernelDAGObject:(id)arg5 ;


@end


#endif