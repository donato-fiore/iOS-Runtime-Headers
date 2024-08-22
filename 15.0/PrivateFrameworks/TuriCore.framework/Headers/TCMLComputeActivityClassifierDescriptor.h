// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMLCOMPUTEACTIVITYCLASSIFIERDESCRIPTOR_H
#define TCMLCOMPUTEACTIVITYCLASSIFIERDESCRIPTOR_H

@class MLCTensor, NSDictionary;

#import <Foundation/Foundation.h>


@interface TCMLComputeActivityClassifierDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *inputTensor; // ivar: _inputTensor
@property (nonatomic) NSUInteger outputChannels; // ivar: _outputChannels
@property (retain, nonatomic) MLCTensor *outputTensor; // ivar: _outputTensor
@property (retain, nonatomic) NSDictionary *weights; // ivar: _weights


-(BOOL)isComplete;
-(id)addBatchNormLayerWithSource:(id)arg0 graph:(id)arg1 ;
-(id)addConvLayerWithOutputChannels:(NSUInteger)arg0 source:(id)arg1 graph:(id)arg2 ;
-(id)addDenseLayerWithIndex:(NSUInteger)arg0 outputChannels:(NSUInteger)arg1 source:(id)arg2 graph:(id)arg3 ;
-(id)addLSTMLayerWithInputSize:(NSUInteger)arg0 outputSize:(NSUInteger)arg1 source:(id)arg2 graph:(id)arg3 ;


@end


#endif