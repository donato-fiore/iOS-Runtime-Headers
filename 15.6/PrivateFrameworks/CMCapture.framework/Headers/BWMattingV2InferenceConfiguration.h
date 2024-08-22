// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMATTINGV2INFERENCECONFIGURATION_H
#define BWMATTINGV2INFERENCECONFIGURATION_H

@class NSDictionary;
@protocol MTLCommandQueue;


#import "BWInferenceConfiguration.h"

@interface BWMattingV2InferenceConfiguration : BWInferenceConfiguration

@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (nonatomic) unsigned int enabledMattes; // ivar: _enabledMattes
@property (nonatomic) float mainImageDownscalingFactor; // ivar: _mainImageDownscalingFactor
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType; // ivar: _sensorConfigurationsByPortType
@property (nonatomic) BOOL submitWithoutSynchronization; // ivar: _submitWithoutSynchronization
@property (nonatomic) int tuningConfiguration; // ivar: _tuningConfiguration


-(void)dealloc;


@end


#endif