// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYGATHERNDGRADIENT_H
#define MPSNDARRAYGATHERNDGRADIENT_H



#import "MPSNDArrayBinaryPrimaryGradientKernel.h"

@interface MPSNDArrayGatherNDGradient : MPSNDArrayBinaryPrimaryGradientKernel

@property (nonatomic) NSUInteger batchDimensions; // ivar: _batchDimensions


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif