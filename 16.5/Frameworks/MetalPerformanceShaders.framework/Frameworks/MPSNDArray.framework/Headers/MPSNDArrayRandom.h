// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYRANDOM_H
#define MPSNDARRAYRANDOM_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArrayRandom : MPSNDArrayUnaryKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif