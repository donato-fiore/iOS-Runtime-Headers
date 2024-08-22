// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYLOGSOFTMAXGRADIENT_H
#define MPSNDARRAYLOGSOFTMAXGRADIENT_H



#import "MPSNDArrayUnaryGradientKernel.h"

@interface MPSNDArrayLogSoftMaxGradient : MPSNDArrayUnaryGradientKernel

@property (nonatomic) NSUInteger axis; // ivar: _axis


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 axis:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif