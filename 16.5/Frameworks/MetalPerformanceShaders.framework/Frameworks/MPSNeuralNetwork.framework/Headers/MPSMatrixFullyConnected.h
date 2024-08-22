// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSMATRIXFULLYCONNECTED_H
#define MPSMATRIXFULLYCONNECTED_H

@class MPSMatrixBinaryKernel;
@protocol MTLBuffer, MPSExternalMatrixFullyConnected;



@interface MPSMatrixFullyConnected : MPSMatrixBinaryKernel {
    *unk _encode;
    id<MTLBuffer> *neuronAParamBuf;
    id<MPSExternalMatrixFullyConnected> *_plugin;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) float neuronA; // ivar: _neuronA
@property (nonatomic) float neuronB; // ivar: _neuronB
@property (nonatomic) float neuronC; // ivar: _neuronC
@property (nonatomic) int neuronType; // ivar: _neuronType
@property (nonatomic) NSUInteger sourceInputFeatureChannels; // ivar: _sourceInputFeatureChannels
@property (nonatomic) NSUInteger sourceNumberOfFeatureVectors; // ivar: _sourceNumberOfFeatureVectors
@property (nonatomic) NSUInteger sourceOutputFeatureChannels; // ivar: _sourceOutputFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(float)neuronParameterA;
-(float)neuronParameterB;
-(float)neuronParameterC;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 inputMatrix:(id)arg1 weightMatrix:(id)arg2 biasVector:(id)arg3 resultMatrix:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNeuronToPReLUWithParametersA:(id)arg0 ;


@end


#endif