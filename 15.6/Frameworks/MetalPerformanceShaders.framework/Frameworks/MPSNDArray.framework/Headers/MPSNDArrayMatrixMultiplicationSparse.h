// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNDARRAYMATRIXMULTIPLICATIONSPARSE_H
#define MPSNDARRAYMATRIXMULTIPLICATIONSPARSE_H



#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArrayMatrixMultiplicationSparse : MPSNDArrayMultiaryKernel

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGFloat beta; // ivar: _beta
@property (nonatomic) BOOL denseSparse; // ivar: _denseSparse
@property (nonatomic) NSUInteger sparseRows; // ivar: _sparseRows
@property (nonatomic) BOOL structuredSparse; // ivar: _structuredSparse
@property (nonatomic) BOOL transposeSparse; // ivar: _transposeSparse


+(NSUInteger)expectedVirtualSourceCount;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsNotToBeBroadcast;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif