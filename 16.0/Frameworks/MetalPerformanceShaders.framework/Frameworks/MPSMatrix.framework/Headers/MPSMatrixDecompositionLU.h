// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXDECOMPOSITIONLU_H
#define MPSMATRIXDECOMPOSITIONLU_H



#import "MPSMatrixUnaryKernel.h"
#import "MPSMatrixMultiplication.h"
#import "MPSMatrixSolveTriangular.h"

@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel {
    MPSMatrixMultiplication *_gemmKernel;
    MPSMatrixSolveTriangular *_trsmKernel;
}


@property (readonly, nonatomic) NSUInteger columns; // ivar: _columns
@property (readonly, nonatomic) NSUInteger rows; // ivar: _rows


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 resultMatrix:(id)arg2 pivotIndices:(id)arg3 status:(id)arg4 ;


@end


#endif