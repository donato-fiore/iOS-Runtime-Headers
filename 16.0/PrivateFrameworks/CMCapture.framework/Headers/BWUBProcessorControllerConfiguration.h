// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWUBPROCESSORCONTROLLERCONFIGURATION_H
#define BWUBPROCESSORCONTROLLERCONFIGURATION_H

@class NSString, NSDictionary;
@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration, MTLCommandQueue;


#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWVideoFormat.h"

@interface BWUBProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration>



@property (nonatomic) BOOL alwaysAllowModifyingInputBuffers; // ivar: _alwaysAllowModifyingInputBuffers
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deepFusionEnabled; // ivar: _deepFusionEnabled
@property (retain, nonatomic) BWVideoFormat *deepFusionInputFormat; // ivar: _deepFusionInputFormat
@property (nonatomic) BOOL deepFusionWaitForProcessingToFinish; // ivar: _deepFusionWaitForProcessingToFinish
@property (nonatomic) BOOL deferredProcessingEnabled;
@property (nonatomic) BOOL demosaicedRawEnabled; // ivar: _demosaicedRawEnabled
@property (nonatomic) unsigned int demosaicedRawPixelFormat; // ivar: _demosaicedRawPixelFormat
@property (nonatomic) BOOL depthDataDeliveryEnabled; // ivar: _depthDataDeliveryEnabled
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int figThreadPriority; // ivar: _figThreadPriority
@property (nonatomic) BOOL fusionEnabled; // ivar: _fusionEnabled
@property (nonatomic) float gainMapMainImageDownscalingFactor; // ivar: _gainMapMainImageDownscalingFactor
@property (nonatomic) int greenGhostMitigationVersion; // ivar: _greenGhostMitigationVersion
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (nonatomic) BOOL lowLightFusionEnabled; // ivar: _lowLightFusionEnabled
@property (retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue;
@property (retain, nonatomic) BWVideoFormat *outputFormat; // ivar: _outputFormat
@property (nonatomic) BOOL quadraSupportEnabled; // ivar: _quadraSupportEnabled
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType; // ivar: _rawColorCalibrationsByPortType
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType; // ivar: _rawLensShadingCorrectionCoefficientsByPortType
@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (readonly) Class superclass;
@property (nonatomic) ? ultraHighResolutionDimensions; // ivar: _ultraHighResolutionDimensions


-(void)dealloc;


@end


#endif