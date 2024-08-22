// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYMULTIARYGRADIENTKERNEL_H
#define MPSNDARRAYMULTIARYGRADIENTKERNEL_H



#import "MPSNDArrayMultiaryBase.h"

@interface MPSNDArrayMultiaryGradientKernel : MPSNDArrayMultiaryBase {
    NSUInteger _sourceGradientIndex;
}




-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 sourceGradientIndex:(NSUInteger)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationArray:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationArray:(id)arg4 kernelDAGObject:(id)arg5 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 kernelDAGObject:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif