// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXSUM_H
#define MPSMATRIXSUM_H

@class MPSKernel;



@interface MPSMatrixSum : MPSKernel

@property (readonly, nonatomic) NSUInteger columns; // ivar: _columns
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) float neuronA; // ivar: _neuronA
@property (nonatomic) float neuronB; // ivar: _neuronB
@property (nonatomic) float neuronC; // ivar: _neuronC
@property (readonly, nonatomic) float neuronParameterA;
@property (readonly, nonatomic) float neuronParameterB;
@property (readonly, nonatomic) float neuronParameterC;
@property (nonatomic) int neuronType; // ivar: _neuronType
@property (nonatomic) ? resultMatrixOrigin; // ivar: _resultMatrixOrigin
@property (readonly, nonatomic) NSUInteger rows; // ivar: _rows
@property (readonly, nonatomic) BOOL transpose; // ivar: _transpose


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 count:(NSUInteger)arg1 rows:(NSUInteger)arg2 columns:(NSUInteger)arg3 transpose:(BOOL)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 encoder:(id)arg1 sourceMatrices:(id)arg2 resultMatrix:(id)arg3 scaleVector:(id)arg4 offsetVector:(id)arg5 biasVector:(id)arg6 startIndex:(NSUInteger)arg7 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceMatrices:(id)arg1 resultMatrix:(id)arg2 scaleVector:(id)arg3 offsetVector:(id)arg4 biasVector:(id)arg5 startIndex:(NSUInteger)arg6 ;


@end


#endif