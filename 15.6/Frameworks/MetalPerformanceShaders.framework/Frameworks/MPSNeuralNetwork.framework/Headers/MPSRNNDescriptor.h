// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSRNNDESCRIPTOR_H
#define MPSRNNDESCRIPTOR_H

@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>


@interface MPSRNNDescriptor : NSObject

@property (nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *inputTransform; // ivar: _inputTransform
@property (nonatomic) NSUInteger internalKernelSelector; // ivar: _internalKernelSelector
@property (nonatomic) NSUInteger layerSequenceDirection; // ivar: _layerSequenceDirection
@property (nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *outputTransform; // ivar: _outputTransform
@property (retain, nonatomic) NSObject<MPSCNNConvolutionDataSource> *recurrentOutputTransform; // ivar: _recurrentOutputTransform
@property (nonatomic) BOOL useFloat32Weights; // ivar: _useFloat32Weights
@property (nonatomic) BOOL useLayerInputUnitTransformMode; // ivar: _useLayerInputUnitTransformMode


-(id)init;
-(void)dealloc;


@end


#endif