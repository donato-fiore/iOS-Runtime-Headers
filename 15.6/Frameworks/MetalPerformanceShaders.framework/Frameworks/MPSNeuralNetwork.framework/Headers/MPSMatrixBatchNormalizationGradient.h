// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXBATCHNORMALIZATIONGRADIENT_H
#define MPSMATRIXBATCHNORMALIZATIONGRADIENT_H

@class MPSMatrixBinaryKernel;



@interface MPSMatrixBatchNormalizationGradient : MPSMatrixBinaryKernel

@property (nonatomic) float epsilon; // ivar: _epsilon
@property (nonatomic) float neuronA; // ivar: _neuronA
@property (nonatomic) float neuronB; // ivar: _neuronB
@property (nonatomic) float neuronC; // ivar: _neuronC
@property (nonatomic) int neuronType; // ivar: _neuronType
@property (nonatomic) NSUInteger sourceInputFeatureChannels; // ivar: _sourceInputFeatureChannels
@property (nonatomic) NSUInteger sourceNumberOfFeatureVectors; // ivar: _sourceNumberOfFeatureVectors


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 gradientMatrix:(id)arg1 inputMatrix:(id)arg2 meanVector:(id)arg3 varianceVector:(id)arg4 gammaVector:(id)arg5 betaVector:(id)arg6 resultGradientForDataMatrix:(id)arg7 resultGradientForGammaVector:(id)arg8 resultGradientForBetaVector:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif