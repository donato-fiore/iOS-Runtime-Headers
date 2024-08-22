// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMLCOMPUTEOBJECTDETECTORDESCRIPTOR_H
#define TCMLCOMPUTEOBJECTDETECTORDESCRIPTOR_H

@class MLCTensor, NSDictionary;

#import <Foundation/Foundation.h>


@interface TCMLComputeObjectDetectorDescriptor : NSObject

@property (retain, nonatomic) MLCTensor *inputTensor; // ivar: _inputTensor
@property (nonatomic) NSUInteger outputChannels; // ivar: _outputChannels
@property (retain, nonatomic) NSDictionary *weights; // ivar: _weights


-(BOOL)isComplete;
-(id)addCommonLayersWithIndex:(NSUInteger)arg0 outputChannels:(NSUInteger)arg1 source:(id)arg2 graph:(id)arg3 ;
-(id)batchNormLayerForIndex:(NSUInteger)arg0 ;
-(id)convLayerForIndex:(NSUInteger)arg0 outputChannels:(NSUInteger)arg1 ;


@end


#endif