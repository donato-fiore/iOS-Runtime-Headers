// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNPOOLING_H
#define MPSCNNPOOLING_H



#import "MPSCNNKernel.h"

@interface MPSCNNPooling : MPSCNNKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 strideInPixelsX:(NSUInteger)arg3 strideInPixelsY:(NSUInteger)arg4 ;
-(id)newPlugin;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImages:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationImage:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 strideInPixelsX:(NSUInteger)arg2 strideInPixelsY:(NSUInteger)arg3 ;


@end


#endif