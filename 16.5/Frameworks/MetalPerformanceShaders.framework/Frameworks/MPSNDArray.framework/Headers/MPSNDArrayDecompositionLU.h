// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYDECOMPOSITIONLU_H
#define MPSNDARRAYDECOMPOSITIONLU_H

@class MPSMatrixDecompositionLU;


#import "MPSNDArrayMultiaryMultiDestinationKernel.h"
#import "MPSNDArrayIdentity.h"

@interface MPSNDArrayDecompositionLU : MPSNDArrayMultiaryMultiDestinationKernel {
    MPSMatrixDecompositionLU *_mlu;
    MPSNDArrayIdentity *_identity;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeToCommandEncoder:(id)arg0 commandBuffer:(id)arg1 sourceArrays:(id)arg2 destinationArrays:(id)arg3 status:(id)arg4 ;


@end


#endif