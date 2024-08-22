// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXVECTORMULTIPLICATION_H
#define MPSMATRIXVECTORMULTIPLICATION_H

@protocol MPSExternalMatrixVectorMultiplication;


#import "MPSMatrixBinaryKernel.h"

@interface MPSMatrixVectorMultiplication : MPSMatrixBinaryKernel {
    id<MPSExternalMatrixVectorMultiplication> *_plugin;
    NSUInteger _batchStart;
    NSUInteger _batchSize;
    ? _resultMatrixOrigin;
    ? _primarySourceMatrixOrigin;
    ? _secondarySourceMatrixOrigin;
}


@property (nonatomic) NSUInteger M; // ivar: _M
@property (nonatomic) NSUInteger N; // ivar: _N
@property (readonly, nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) CGFloat beta; // ivar: _beta
@property (readonly, nonatomic) BOOL transpose; // ivar: _transpose


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)batchSize;
-(NSUInteger)batchStart;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 rows:(NSUInteger)arg1 columns:(NSUInteger)arg2 ;
-(id)initWithDevice:(id)arg0 transpose:(BOOL)arg1 rows:(NSUInteger)arg2 columns:(NSUInteger)arg3 alpha:(CGFloat)arg4 beta:(CGFloat)arg5 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 inputVector:(id)arg2 resultVector:(id)arg3 ;
-(void)setBatchSize:(NSUInteger)arg0 ;
-(void)setBatchStart:(NSUInteger)arg0 ;
-(void)setPrimarySourceMatrixOrigin:(struct ? )arg0 ;
-(void)setResultMatrixOrigin:(struct ? )arg0 ;
-(void)setSecondarySourceMatrixOrigin:(struct ? )arg0 ;


@end


#endif