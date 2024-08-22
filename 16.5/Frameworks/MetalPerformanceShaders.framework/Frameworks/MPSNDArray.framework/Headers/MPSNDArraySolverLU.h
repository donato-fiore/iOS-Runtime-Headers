// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYSOLVERLU_H
#define MPSNDARRAYSOLVERLU_H

@class MPSMatrixSolveLU;


#import "MPSNDArrayMultiaryKernel.h"

@interface MPSNDArraySolverLU : MPSNDArrayMultiaryKernel {
    MPSMatrixSolveLU *_mslu;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)initWithDevice:(id)arg0 sourceCount:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif