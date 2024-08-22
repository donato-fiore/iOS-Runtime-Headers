// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSMATRIXNEURON_H
#define MPSMATRIXNEURON_H

@class MPSMatrixUnaryKernel;
@protocol MTLBuffer;



@interface MPSMatrixNeuron : MPSMatrixUnaryKernel {
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
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 biasVector:(id)arg2 resultMatrix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNeuronToPReLUWithParametersA:(id)arg0 ;


@end


#endif