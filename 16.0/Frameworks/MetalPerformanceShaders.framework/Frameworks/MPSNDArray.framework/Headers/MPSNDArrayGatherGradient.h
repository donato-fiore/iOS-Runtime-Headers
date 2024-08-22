// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYGATHERGRADIENT_H
#define MPSNDARRAYGATHERGRADIENT_H



#import "MPSNDArrayBinaryPrimaryGradientKernel.h"

@interface MPSNDArrayGatherGradient : MPSNDArrayBinaryPrimaryGradientKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 primarySourceArray:(id)arg1 secondarySourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5 ;


@end


#endif