// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSMATRIXSOLVELU_H
#define MPSMATRIXSOLVELU_H



#import "MPSMatrixBinaryKernel.h"
#import "MPSMatrixSolveTriangular.h"

@interface MPSMatrixSolveLU : MPSMatrixBinaryKernel

@property (nonatomic) NSUInteger numberOfRightHandSides; // ivar: _numberOfRightHandSides
@property (nonatomic) NSUInteger order; // ivar: _order
@property (readonly, nonatomic) BOOL transpose; // ivar: _transpose
@property (nonatomic) MPSMatrixSolveTriangular *trsmL; // ivar: _trsmL
@property (nonatomic) MPSMatrixSolveTriangular *trsmU; // ivar: _trsmU


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 transpose:(BOOL)arg1 order:(NSUInteger)arg2 numberOfRightHandSides:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 rightHandSideMatrix:(id)arg2 pivotIndices:(id)arg3 solutionMatrix:(id)arg4 ;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 pivotIndices:(id)arg4 solutionMatrix:(id)arg5 ;


@end


#endif