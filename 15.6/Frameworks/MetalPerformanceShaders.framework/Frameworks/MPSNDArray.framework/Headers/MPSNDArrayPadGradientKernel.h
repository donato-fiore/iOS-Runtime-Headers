// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYPADGRADIENTKERNEL_H
#define MPSNDARRAYPADGRADIENTKERNEL_H



#import "MPSNDArrayUnaryGradientKernel.h"

@interface MPSNDArrayPadGradientKernel : MPSNDArrayUnaryGradientKernel

@property (readonly, nonatomic) NSUInteger edgeMode; // ivar: _edgeMode
@property (readonly, nonatomic) MPSNDArrayPaddingSize paddingSize; // ivar: _paddingSize


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 edgeMode:(NSUInteger)arg1 paddingSize:(struct MPSNDArrayPaddingSize )arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif