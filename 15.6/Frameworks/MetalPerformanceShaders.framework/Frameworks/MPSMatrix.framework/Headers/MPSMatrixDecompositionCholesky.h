// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXDECOMPOSITIONCHOLESKY_H
#define MPSMATRIXDECOMPOSITIONCHOLESKY_H



#import "MPSMatrixUnaryKernel.h"

@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel

@property (readonly, nonatomic) BOOL lower; // ivar: _lower
@property (readonly, nonatomic) NSUInteger order; // ivar: _order


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithDevice:(id)arg0 lower:(BOOL)arg1 order:(NSUInteger)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrix:(id)arg1 resultMatrix:(id)arg2 status:(id)arg3 ;


@end


#endif