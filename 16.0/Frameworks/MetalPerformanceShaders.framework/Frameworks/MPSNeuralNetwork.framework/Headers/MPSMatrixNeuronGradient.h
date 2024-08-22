// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSMATRIXNEURONGRADIENT_H
#define MPSMATRIXNEURONGRADIENT_H

@class MPSMatrixBinaryKernel;
@protocol MTLBuffer;



@interface MPSMatrixNeuronGradient : MPSMatrixBinaryKernel {
    id<MTLBuffer> *neuronAParamBuf;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
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
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 gradientMatrix:(id)arg1 inputMatrix:(id)arg2 biasVector:(id)arg3 resultGradientForDataMatrix:(id)arg4 resultGradientForBiasVector:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNeuronToPReLUWithParametersA:(id)arg0 ;


@end


#endif