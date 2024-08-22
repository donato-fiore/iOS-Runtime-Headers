// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRUDESCRIPTOR_H
#define MPSGRUDESCRIPTOR_H

@protocol MPSCNNConvolutionDataSource;


#import "MPSRNNDescriptor.h"

@interface MPSGRUDescriptor : MPSRNNDescriptor

@property (nonatomic) BOOL flipOutputGates; // ivar: _flipOutputGates
@property (nonatomic) float gatePnormValue; // ivar: _gatePnormValue
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputGateInputWeights; // ivar: _inputGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputGateRecurrentWeights; // ivar: _inputGateRecurrentWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputGateInputGateWeights; // ivar: _outputGateInputGateWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputGateInputWeights; // ivar: _outputGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputGateRecurrentWeights; // ivar: _outputGateRecurrentWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *recurrentGateInputWeights; // ivar: _recurrentGateInputWeights
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *recurrentGateRecurrentWeights; // ivar: _recurrentGateRecurrentWeights


+(id)createGRUDescriptorWithInputFeatureChannels:(NSUInteger)arg0 outputFeatureChannels:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithInputFeatureChannels:(NSUInteger)arg0 outputFeatureChannels:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif