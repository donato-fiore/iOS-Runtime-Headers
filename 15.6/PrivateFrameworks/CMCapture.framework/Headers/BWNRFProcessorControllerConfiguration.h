// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWNRFPROCESSORCONTROLLERCONFIGURATION_H
#define BWNRFPROCESSORCONTROLLERCONFIGURATION_H

@class NSString, NSDictionary, NSArray;
@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration, MTLCommandQueue;


#import "BWStillImageProcessorConfiguration.h"
#import "BWVideoFormat.h"
#import "FigStillImageSharedProcessingResources.h"

@interface BWNRFProcessorControllerConfiguration : BWStillImageProcessorConfiguration <BWNoiseReductionAndFusionProcessorControllerConfiguration>



@property (nonatomic) BOOL alwaysAllowModifyingInputBuffers; // ivar: _alwaysAllowModifyingInputBuffers
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deepFusionEnabled; // ivar: _deepFusionEnabled
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
@property (nonatomic) BOOL personInstanceMasksDeliveryEnabled; // ivar: _personInstanceMasksDeliveryEnabled
@property (retain, nonatomic) NSDictionary *rawColorCalibrationsByPortType; // ivar: _rawColorCalibrationsByPortType
@property (retain, nonatomic) NSDictionary *rawLensShadingCorrectionCoefficientsByPortType; // ivar: _rawLensShadingCorrectionCoefficientsByPortType
@property (nonatomic) BOOL semanticRenderingEnabled; // ivar: _semanticRenderingEnabled
@property (nonatomic) BOOL semanticStyleRenderingEnabled; // ivar: _semanticStyleRenderingEnabled
@property (retain, nonatomic) NSArray *sensorConfigurations;
@property (retain, nonatomic) FigStillImageSharedProcessingResources *sharedResources; // ivar: _sharedResources
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif