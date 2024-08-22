// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMATTINGINFERENCECONFIGURATION_H
#define BWMATTINGINFERENCECONFIGURATION_H

@class NSDictionary;
@protocol MTLCommandQueue;


#import "BWInferenceConfiguration.h"

@interface BWMattingInferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) float mainImageDownscalingFactor; // ivar: _mainImageDownscalingFactor
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (nonatomic) BOOL refinedDepthDeliveryEnabled; // ivar: _refinedDepthDeliveryEnabled
@property (retain, nonatomic) NSDictionary *sdofRenderingTuningParameters; // ivar: _sdofRenderingTuningParameters


-(void)dealloc;


@end


#endif