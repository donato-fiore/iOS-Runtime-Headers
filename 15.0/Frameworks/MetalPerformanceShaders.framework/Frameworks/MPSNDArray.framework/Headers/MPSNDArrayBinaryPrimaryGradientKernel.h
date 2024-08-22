// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYBINARYPRIMARYGRADIENTKERNEL_H
#define MPSNDARRAYBINARYPRIMARYGRADIENTKERNEL_H



#import "MPSNDArrayMultiaryGradientKernel.h"

@interface MPSNDArrayBinaryPrimaryGradientKernel : MPSNDArrayMultiaryGradientKernel



+(NSUInteger)expectedVirtualSourceCount;
-(id)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 ;


@end


#endif