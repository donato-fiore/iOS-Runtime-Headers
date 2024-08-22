// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXSOLVETRIANGULAR_H
#define MPSMATRIXSOLVETRIANGULAR_H

@class MPSMatrix;


#import "MPSMatrixBinaryKernel.h"

@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel {
    MPSMatrix *_workspace;
}


@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) NSUInteger numberOfRightHandSides; // ivar: _numberOfRightHandSides
@property (nonatomic) NSUInteger order; // ivar: _order
@property (readonly, nonatomic) BOOL right; // ivar: _right
@property (readonly, nonatomic) BOOL transpose; // ivar: _transpose
@property (readonly, nonatomic) BOOL unit; // ivar: _unit
@property (readonly, nonatomic) BOOL upper; // ivar: _upper


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 right:(BOOL)arg1 upper:(BOOL)arg2 transpose:(BOOL)arg3 unit:(BOOL)arg4 order:(NSUInteger)arg5 numberOfRightHandSides:(NSUInteger)arg6 alpha:(CGFloat)arg7 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 rightHandSideMatrix:(id)arg2 solutionMatrix:(id)arg3 ;


@end


#endif