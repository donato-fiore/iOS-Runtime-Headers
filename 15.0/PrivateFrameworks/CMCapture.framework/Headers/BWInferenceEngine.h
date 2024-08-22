// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCEENGINE_H
#define BWINFERENCEENGINE_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSDictionary;
@protocol BWInferenceResourceProvider;

#import <Foundation/Foundation.h>

#import "BWInferenceScheduler.h"
#import "BWInferenceDependencyProvider.h"
#import "BWEspressoInferenceAdapter.h"
#import "BWEspressoInferenceContext.h"
#import "BWMetalInferenceContext.h"
#import "BWVisionInferenceAdapter.h"
#import "BWVisionInferenceContext.h"
#import "BWVideoDepthInferenceAdapter.h"
#import "BWFusionTrackerInferenceAdapter.h"
#import "BWVideoProcessingInferenceAdapter.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWFigCaptureISPProcessingSession.h"

@interface BWInferenceEngine : NSObject <BWInferenceResourceProvider>

 {
    BWInferenceScheduler *_scheduler;
    NSUInteger _connection;
    unsigned int _priority;
    BWInferenceDependencyProvider *_dependencyProvider;
    BWEspressoInferenceAdapter *_espressoAdapter;
    BWEspressoInferenceContext *_cpuContext;
    BWEspressoInferenceContext *_gpuContext;
    BWEspressoInferenceContext *_convContext;
    BWEspressoInferenceContext *_aneContext;
    BWMetalInferenceContext *_defaultDeviceMetalContext;
    BWVisionInferenceAdapter *_visionAdapter;
    BWVisionInferenceContext *_visionContext;
    BWVideoDepthInferenceAdapter *_videoDepthAdapter;
    BWFusionTrackerInferenceAdapter *_fusionTrackerAdapter;
    BWVideoProcessingInferenceAdapter *_videoProcessingAdapter;
    BWFigVideoCaptureDevice *_captureDevice;
    BWFigCaptureISPProcessingSession *_ispProcessingSession;
    NSMutableArray *_inferenceRequirements;
    NSMutableArray *_videoRequirementsPossiblyReceivingAttachedMedia;
    NSMutableArray *_videoRequirementsPossiblyProvidingAttachedMedia;
    NSMutableDictionary *_lazyInputVideoRequirementsByAttachedMediaKey;
    NSMutableDictionary *_lazyOutputVideoRequirementsByAttachedMediaKey;
    NSMutableSet *_unresolvedAttachedMediaKeysPreventingProvidedVideoRequirements;
}


@property (readonly, nonatomic, getter=isConfiguredForInference) BOOL configuredForInference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *providedVideoRequirementsByAttachedMediaKey;
@property (readonly, nonatomic) BOOL requiresDeviceOrientationMetadata; // ivar: _requiresDeviceOrientationMetadata
@property (readonly) Class superclass;


+(BOOL)isConvolutionEngineSupported;
+(BOOL)isNeuralEngineSupported;
+(int)allowedPixelBufferCompressionLevel;
+(int)allowedPixelBufferCompressionType;
+(unsigned int)allowedBufferCompressionDirectionForExecutionTarget:(int)arg0 ;
+(void)initialize;
-(id)defaultDeviceMetalContext;
-(id)espressoContextForExecutionTarget:(int)arg0 ;
-(id)initWithCaptureDevice:(id)arg0 scheduler:(id)arg1 priority:(unsigned int)arg2 ;
-(id)initWithCaptureDevice:(id)arg0 scheduler:(id)arg1 priority:(unsigned int)arg2 shareIntermediateBuffer:(BOOL)arg3 ;
-(id)ispProcessingSessionForExecutionTarget:(int)arg0 ;
-(id)visionContextForExecutionTarget:(int)arg0 ;
-(int)_prepareProcessingSessionIfNecessary;
-(int)addInferenceOfType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 ;
-(int)enableIntermediateBufferSharingWithNetworksLoadedFromPath:(id)arg0 ;
-(int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(int)performInferencesOnSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 skippingInferencesWithTypes:(id)arg2 ;
-(int)prepareForInferenceWithFormatProvider:(id)arg0 ;
-(int)prepareForInferenceWithFormatProvider:(id)arg0 pixelBufferPoolProvider:(id)arg1 ;
-(int)prepareForInputInferenceVideoFormat:(id)arg0 attachedMediaKey:(id)arg1 ;
-(int)prepareForInputVideoFormat:(id)arg0 attachedMediaKey:(id)arg1 ;
-(int)prewarmInferencesUsingLimitedMemory:(BOOL)arg0 ;
-(void)_addInferenceRequirementForProvider:(id)arg0 configuration:(id)arg1 ;
-(void)_invalidateProcessingSessionIfNecessary;
-(void)_prepareDependenciesByRequirementIfNecessary;
-(void)_prepareProvidedVideoRequirementsIfNecessary;
-(void)dealloc;


@end


#endif