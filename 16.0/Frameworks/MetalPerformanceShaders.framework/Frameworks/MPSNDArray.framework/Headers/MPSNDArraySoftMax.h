// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNDARRAYSOFTMAX_H
#define MPSNDARRAYSOFTMAX_H



#import "MPSNDArrayUnaryKernel.h"

@interface MPSNDArraySoftMax : MPSNDArrayUnaryKernel

@property (nonatomic) NSUInteger axis; // ivar: _axis


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 axis:(NSUInteger)arg1 ;
-(id)reshapeFitToTileToCommandBuffer:(id)arg0 currentSource:(id)arg1 kernelDimension:(NSUInteger)arg2 dimensionsToBeRetained;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif