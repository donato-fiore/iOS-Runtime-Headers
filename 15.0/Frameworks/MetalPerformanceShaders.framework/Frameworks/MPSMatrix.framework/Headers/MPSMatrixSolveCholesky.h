// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXSOLVECHOLESKY_H
#define MPSMATRIXSOLVECHOLESKY_H



#import "MPSMatrixBinaryKernel.h"
#import "MPSMatrixSolveTriangular.h"

@interface MPSMatrixSolveCholesky : MPSMatrixBinaryKernel {
    MPSMatrixSolveTriangular *_trsmT;
    MPSMatrixSolveTriangular *_trsmN;
}


@property (nonatomic) NSUInteger numberOfRightHandSides; // ivar: _numberOfRightHandSides
@property (nonatomic) NSUInteger order; // ivar: _order
@property (readonly, nonatomic) BOOL upper; // ivar: _upper


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 upper:(BOOL)arg1 order:(NSUInteger)arg2 numberOfRightHandSides:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 rightHandSideMatrix:(id)arg2 solutionMatrix:(id)arg3 ;


@end


#endif