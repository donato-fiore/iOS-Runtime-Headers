// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCEMBEDDINGGPUDEVICEOPS_H
#define MLCEMBEDDINGGPUDEVICEOPS_H

@class NSArray, NSNumber;


#import "MLCGPUDeviceOps.h"

@interface MLCEmbeddingGPUDeviceOps : MLCGPUDeviceOps

@property (copy, nonatomic) NSArray *embeddingParams; // ivar: _embeddingParams
@property (retain, nonatomic) id *gradientForWeights; // ivar: _gradientForWeights
@property (copy, nonatomic) NSNumber *paddingIndex; // ivar: _paddingIndex
@property (nonatomic) BOOL scaleGradientByFrequency; // ivar: _scaleGradientByFrequency


+(id)deviceOps;
-(id)initWithForwardKernel:(id)arg0 gradientKernel:(id)arg1 ;


@end


#endif