// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYSCANGRADIENT_H
#define MPSNDARRAYSCANGRADIENT_H



#import "MPSNDArrayUnaryGradientKernel.h"

@interface MPSNDArrayScanGradient : MPSNDArrayUnaryGradientKernel

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (nonatomic) BOOL exclusive; // ivar: _exclusive
@property (readonly, nonatomic) int operation; // ivar: _operation
@property (nonatomic) BOOL reverse; // ivar: _reverse


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 axis:(NSUInteger)arg1 operation:(int)arg2 exclusive:(BOOL)arg3 reverse:(BOOL)arg4 ;


@end


#endif