// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNPOOLINGGRADIENT_H
#define MPSCNNPOOLINGGRADIENT_H



#import "MPSCNNGradientKernel.h"

@interface MPSCNNPoolingGradient : MPSCNNGradientKernel

@property (nonatomic) ? sourceSize; // ivar: _sourceSize


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 strideInPixelsX:(NSUInteger)arg2 strideInPixelsY:(NSUInteger)arg3 ;


@end


#endif