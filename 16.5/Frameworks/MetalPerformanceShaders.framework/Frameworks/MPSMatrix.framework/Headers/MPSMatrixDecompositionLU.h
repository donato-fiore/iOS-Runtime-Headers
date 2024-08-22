// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSMATRIXDECOMPOSITIONLU_H
#define MPSMATRIXDECOMPOSITIONLU_H



#import "MPSMatrixUnaryKernel.h"
#import "MPSMatrixMultiplication.h"
#import "MPSMatrixSolveTriangular.h"

@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel

@property (nonatomic) NSUInteger columns; // ivar: _columns
@property (nonatomic) id *copyBlock; // ivar: _copyBlock
@property (nonatomic) MPSMatrixMultiplication *gemmKernel; // ivar: _gemmKernel
@property (nonatomic) NSUInteger rows; // ivar: _rows
@property (nonatomic) MPSMatrixSolveTriangular *trsmKernel; // ivar: _trsmKernel


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 resultMatrix:(id)arg2 pivotIndices:(id)arg3 status:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 pivotIndices:(id)arg4 status:(id)arg5 ;


@end


#endif