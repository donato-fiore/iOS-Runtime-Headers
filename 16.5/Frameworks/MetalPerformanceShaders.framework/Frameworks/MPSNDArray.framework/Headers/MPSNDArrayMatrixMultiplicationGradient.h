// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYMATRIXMULTIPLICATIONGRADIENT_H
#define MPSNDARRAYMATRIXMULTIPLICATIONGRADIENT_H



#import "MPSNDArrayMultiaryGradientKernel.h"

@interface MPSNDArrayMatrixMultiplicationGradient : MPSNDArrayMultiaryGradientKernel

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGFloat beta; // ivar: _beta


+(BOOL)supportsPostfixForDevice:(*void)arg0 ;
+(BOOL)supportsPrefixForDevice:(*void)arg0 ;
+(NSUInteger)expectedVirtualSourceCount;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(NSUInteger)maxSupportedDimensionsForSourceArrays:(id)arg0 destinationArray:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 sourceGradientIndex:(NSUInteger)arg2 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif