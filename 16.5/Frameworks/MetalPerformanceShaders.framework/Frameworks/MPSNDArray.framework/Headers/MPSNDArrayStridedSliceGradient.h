// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYSTRIDEDSLICEGRADIENT_H
#define MPSNDARRAYSTRIDEDSLICEGRADIENT_H



#import "MPSNDArrayUnaryGradientKernel.h"
#import "MPSNDArrayInitializationConstant.h"

@interface MPSNDArrayStridedSliceGradient : MPSNDArrayUnaryGradientKernel {
    MPSNDArrayInitializationConstant *_zeroFillKernel;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)stridesAtSourceIndex;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationArray:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArrays:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationArray:(id)arg4 ;


@end


#endif