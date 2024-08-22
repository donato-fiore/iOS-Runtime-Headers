// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYUNARYGRADIENTKERNEL_H
#define MPSNDARRAYUNARYGRADIENTKERNEL_H



#import "MPSNDArrayMultiaryGradientKernel.h"

@interface MPSNDArrayUnaryGradientKernel : MPSNDArrayMultiaryGradientKernel



+(NSUInteger)expectedVirtualSourceCount;
-(id)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceArray:(id)arg1 sourceGradient:(id)arg2 gradientState:(id)arg3 destinationArray:(id)arg4 ;


@end


#endif