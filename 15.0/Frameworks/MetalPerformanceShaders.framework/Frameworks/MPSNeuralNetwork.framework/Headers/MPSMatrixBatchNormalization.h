// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXBATCHNORMALIZATION_H
#define MPSMATRIXBATCHNORMALIZATION_H

@class MPSMatrixUnaryKernel;



@interface MPSMatrixBatchNormalization : MPSMatrixUnaryKernel

@property (nonatomic) BOOL computeStatistics; // ivar: _computeStatistics
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
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 meanVector:(id)arg2 varianceVector:(id)arg3 gammaVector:(id)arg4 betaVector:(id)arg5 resultMatrix:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif