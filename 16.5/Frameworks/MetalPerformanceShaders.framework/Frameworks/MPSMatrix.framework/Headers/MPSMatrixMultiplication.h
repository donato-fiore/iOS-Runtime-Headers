// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSMATRIXMULTIPLICATION_H
#define MPSMATRIXMULTIPLICATION_H

@class MPSKernel, MPSNDArrayMatrixMultiplication;
@protocol MPSExternalMatrixMultiplication;



@interface MPSMatrixMultiplication : MPSKernel {
    BOOL _useTiling;
    id<MPSExternalMatrixMultiplication> *_plugin;
    *unk _encode;
    MPSNDArrayMatrixMultiplication *_ndArrayKernel;
}


@property (nonatomic) NSUInteger K; // ivar: _K
@property (nonatomic) NSUInteger M; // ivar: _M
@property (nonatomic) NSUInteger N; // ivar: _N
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger batchStart; // ivar: _batchStart
@property (nonatomic) CGFloat beta; // ivar: _beta
@property (nonatomic) ? leftMatrixOrigin; // ivar: _leftMatrixOrigin
@property (nonatomic) ? resultMatrixOrigin; // ivar: _resultMatrixOrigin
@property (nonatomic) ? rightMatrixOrigin; // ivar: _rightMatrixOrigin
@property (nonatomic) BOOL transA; // ivar: _transA
@property (nonatomic) BOOL transB; // ivar: _transB


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 resultRows:(NSUInteger)arg1 resultColumns:(NSUInteger)arg2 interiorColumns:(NSUInteger)arg3 ;
-(id)initWithDevice:(id)arg0 transposeLeft:(BOOL)arg1 transposeRight:(BOOL)arg2 resultRows:(NSUInteger)arg3 resultColumns:(NSUInteger)arg4 interiorColumns:(NSUInteger)arg5 alpha:(CGFloat)arg6 beta:(CGFloat)arg7 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 encoder:(id)arg1 leftMatrix:(id)arg2 rightMatrix:(id)arg3 resultMatrix:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 leftMatrix:(id)arg1 rightMatrix:(id)arg2 resultMatrix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif