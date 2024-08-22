// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWUBNODE_H
#define BWUBNODE_H

@class NSSet, NSString, CMIExternalMemoryResource, NSDictionary, NSMutableDictionary, NSArray;
@protocol BWNoiseReductionAndFusionProcessorDelegate, BWInferenceEngineControllerDelegate, BWDeepFusionProcessorControllerDelegate, BWDeferredCaptureControllerDelegate, BWAdaptiveBracketingController, BWDeferredProcessorControllerDelegate, BWJasperColorStillsExecutorControllerDelegate, BWJasperDisparityProcessorControllerDelegate, BWLearnedNRProcessorControllerDelegate, BWSoftISPProcessorControllerDelegate, BWSWFRProcessorControllerDelegate, BWRedEyeReductionControllerDelegate, BWStillImageProcessingSupportProvider, OS_dispatch_queue, BWNoiseReductionAndFusionProcessorControllerConfiguration, OS_dispatch_group;


#import "BWNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWUBNodeConfiguration.h"
#import "BWNodeInput.h"
#import "BWStillImageProcessorCoordinator.h"
#import "BWPixelBufferPool.h"
#import "BWSoftISPProcessorControllerConfiguration.h"
#import "BWUBSharpnessScoreReferenceFrameSelector.h"
#import "BWLearnedNRProcessorControllerConfiguration.h"
#import "BWDeepFusionProcessorControllerConfiguration.h"
#import "BWInferenceEngineControllerConfiguration.h"
#import "BWStillImageInferences.h"
#import "BWSWFRProcessorControllerConfiguration.h"
#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWIntelligentDistortionCorrectionProcessorControllerConfiguration.h"
#import "BWDeepZoomProcessorControllerConfiguration.h"
#import "BWStereoDisparityProcessorControllerConfiguration.h"
#import "BWStereoDisparityProcessorInput.h"
#import "BWJasperColorStillsExecutorControllerConfiguration.h"
#import "BWJasperDisparityProcessorControllerConfiguration.h"
#import "BWDeferredCaptureControllerConfiguration.h"
#import "BWDeferredCaptureControllerInput.h"

@interface BWUBNode : BWNode <BWNoiseReductionAndFusionProcessorDelegate, BWInferenceEngineControllerDelegate, BWDeepFusionProcessorControllerDelegate, BWDeferredCaptureControllerDelegate, BWAdaptiveBracketingController, BWDeferredProcessorControllerDelegate, BWJasperColorStillsExecutorControllerDelegate, BWJasperDisparityProcessorControllerDelegate, BWLearnedNRProcessorControllerDelegate, BWSoftISPProcessorControllerDelegate, BWSWFRProcessorControllerDelegate, BWRedEyeReductionControllerDelegate, BWStillImageProcessingSupportProvider>

 {
    BOOL _resourcesReleased;
    BWFigVideoCaptureDevice *_device;
    BWUBNodeConfiguration *_nodeConfiguration;
    NSSet *_supportedPortTypes;
    BWNodeInput *_sensorRawInput;
    NSString *_previousCaptureRequestIdentifier;
    NSInteger _currentSettingsID;
    NSString *_currentCaptureRequestIdentifier;
    BWStillImageProcessorCoordinator *_processorCoordinator;
    NSObject<OS_dispatch_queue> *_processorCoordinatorWorkerQueue;
    os_unfair_lock_s _processorCoordinatorLock;
    os_unfair_lock_s _processingSupportProviderLock;
    NSObject<OS_dispatch_queue> *_emitQueue;
    BOOL _useSharedExternalMemoryResourceForProcessorControllers;
    BOOL _sharedExternalMemoryResourceForProcessorControllersSetUp;
    CMIExternalMemoryResource *_sharedExternalMemoryResource;
    BWPixelBufferPool *_noiseReductionAndFusionProcessorOutputIntermediatePool;
    BWSoftISPProcessorControllerConfiguration *_softISPProcessorControllerConfiguration;
    NSDictionary *_softISPOutputPoolByPixelFormat;
    NSMutableDictionary *_softISPRemainingInputsByPortType;
    NSMutableDictionary *_softISPLastMainFrameByPortType;
    NSMutableDictionary *_softISPRemainingDisparitySbufsByCaptureFrameFlagsByPortType;
    NSDictionary *_ultraHighResolutionPoolByPixelFormat;
    BWUBSharpnessScoreReferenceFrameSelector *_ultraHighResolutionSharpnessScoreReferenceFrameSelector;
    NSMutableDictionary *_sensorRawErrorRecoveryFrameByPortType;
    NSUInteger _nrProcessorControllerType;
    id<BWNoiseReductionAndFusionProcessorControllerConfiguration> *_nrProcessorControllerConfiguration;
    NSMutableDictionary *_nrProcessorInputsByPortType;
    NSMutableDictionary *_emittedOrEnqueuedReferenceFrameIDByPortType;
    NSMutableDictionary *_nrfusionModeByCaptureRequestIdentifier;
    BWLearnedNRProcessorControllerConfiguration *_learnedNRProcessorControllerConfiguration;
    NSMutableDictionary *_learnedNRInputByPortType;
    BWDeepFusionProcessorControllerConfiguration *_deepFusionProcessorControllerConfiguration;
    NSMutableDictionary *_deepFusionProcessorInputByPortType;
    NSObject<OS_dispatch_queue> *_deepFusionProcessorControllerQueue;
    BWPixelBufferPool *_syntheticIntermediatesPool;
    BWPixelBufferPool *_fusionMapPool;
    BWPixelBufferPool *_deepFusionEnhancedResolutionPool;
    BWPixelBufferPool *_deepFusionEnhancedResolutionDemosaicedRawPool;
    BWInferenceEngineControllerConfiguration *_inferenceControllerConfiguration;
    NSMutableDictionary *_inferenceControllerInputByPortType;
    NSObject<OS_dispatch_queue> *_inferenceControllerQueue;
    NSObject<OS_dispatch_group> *_inferenceControllerGroup;
    BWPixelBufferPool *_intermediateInferenceInputPool;
    NSDictionary *_inferenceOutputPoolsByAttachedMediaKey;
    BWStillImageInferences *_inferences;
    *opaqueCMSampleBuffer _inferenceOutputSampleBuffer;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
    *OpaqueVTPixelTransferSession _inferenceInputPixelTransferSession;
    *opaqueCMFormatDescription _inferenceAttachedMediaFormatDescription;
    NSDictionary *_providedInferenceAttachedMediaModesByAttachedMediaKey;
    BWSWFRProcessorControllerConfiguration *_swfrProcessorControllerConfiguration;
    NSMutableDictionary *_swfrProcessorControllerInputByPortType;
    NSMutableDictionary *_swfrRawRedEyeReductionAuxImageByPortType;
    BWStillImageProcessorControllerConfiguration *_redEyeReductionConfiguration;
    NSMutableDictionary *_redEyeReductionInputByPortType;
    BWIntelligentDistortionCorrectionProcessorControllerConfiguration *_intelligentDistortionCorrectionControllerConfiguration;
    NSMutableDictionary *_intelligentDistortionCorrectionProcessorInputByPortType;
    NSMutableDictionary *_remainingIntelligentDistortionCorrectionProcessorInputsByPortType;
    unsigned int _lowResPersonSegmentationMaskWidth;
    unsigned int _lowResPersonSegmentationMaskHeight;
    NSArray *_portTypesWithIntelligentDistortionCorrectionSupport;
    NSArray *_captureTypesWithIntelligentDistortionCorrectionSupport;
    BWDeepZoomProcessorControllerConfiguration *_deepZoomProcessorControllerConfiguration;
    NSMutableDictionary *_deepZoomProcessorInputByPortType;
    BWStereoDisparityProcessorControllerConfiguration *_stereoDisparityProcessorControllerConfiguration;
    BWStereoDisparityProcessorInput *_stereoDisparityProcessorInput;
    int _stereoDisparityRemainingProcessorInputs;
    NSObject<OS_dispatch_queue> *_stereoDisparityProcessorControllerQueue;
    NSMutableDictionary *_clientBracketEmittedOrEnqueuedReferenceFrameIDByPortTypeAndSequenceNumber;
    NSMutableDictionary *_stereoDisparityClientBracketProcessorInputsBySequenceNumber;
    BWNodeInput *_pointCloudInput;
    os_unfair_lock_s _pointCloudLock;
    BOOL _discardPointClouds;
    BWJasperColorStillsExecutorControllerConfiguration *_jasperColorStillsExecutorConfiguration;
    NSMutableDictionary *_jasperColorStillsExecutorInputByPortType;
    BWJasperDisparityProcessorControllerConfiguration *_jasperDisparityProcessorControllerConfiguration;
    NSMutableDictionary *_jasperDisparityProcessorInputByPortType;
    BWDeferredCaptureControllerConfiguration *_deferredCaptureControllerConfiguration;
    BWDeferredCaptureControllerInput *_deferredCaptureControllerInput;
    *opaqueCMSampleBuffer _deferredCaptureProxyOrErrorRecoverySbuf;
    NSMutableDictionary *_deferredProcessorInputByPortType;
    int _dcOutputBufferCount;
    int _demosaicedRawOutputBufferCount;
    *opaqueCMFormatDescription _sushiRawFormatDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BWNodeInput *pointCloudInput;
@property (readonly, nonatomic) BWNodeInput *sensorRawInput;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)demosaicedRawSupportedForCaptureType:(int)arg0 ;
-(BOOL)intelligentDistortionCorrectionSupportedForCaptureType:(int)arg0 portType:(id)arg1 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg0 wait:(BOOL)arg1 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg0 frameStatistics:(id)arg1 stationary:(BOOL)arg2 detectedObjects:(id)arg3 ;
-(id)initWithNodeConfiguration:(id)arg0 captureDevice:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;
-(id)processorController:(id)arg0 newInferencesForProcessorInput:(id)arg1 ;
-(id)processorCoordinator;
-(int)processorController:(id)arg0 processRawErrorRecoveryFrameForProcessorInput:(id)arg1 failureMetadata:(id)arg2 ;
-(struct __CVBuffer *)processorController:(id)arg0 newOutputPixelBufferForProcessorInput:(id)arg1 type:(NSUInteger)arg2 ;
-(struct __CVBuffer *)processorController:(id)arg0 newOutputPixelBufferForProcessorInput:(id)arg1 type:(NSUInteger)arg2 dimensions:(struct ? )arg3 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)didSelectFormat:(id)arg0 forOutput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)processorController:(id)arg0 didDetermineReferenceFrame:(struct opaqueCMSampleBuffer *)arg1 processorInput:(id)arg2 err:(int)arg3 ;
-(void)processorController:(id)arg0 didFinishProcessingBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 type:(NSUInteger)arg3 captureFrameFlags:(NSUInteger)arg4 rawThumbnailsBuffer:(struct __CVBuffer *)arg5 rawThumbnailsMetadata:(id)arg6 processorInput:(id)arg7 err:(int)arg8 ;
-(void)processorController:(id)arg0 didFinishProcessingInferenceAttachedMediaMetadata:(id)arg1 processorInput:(id)arg2 ;
-(void)processorController:(id)arg0 didFinishProcessingInput:(id)arg1 err:(int)arg2 ;
-(void)processorController:(id)arg0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 type:(NSUInteger)arg2 processorInput:(id)arg3 err:(int)arg4 ;
-(void)processorController:(id)arg0 didFinshProcessingInference:(id)arg1 inferenceAttachmentKey:(id)arg2 processorInput:(id)arg3 err:(int)arg4 ;
-(void)processorController:(id)arg0 didFinshProcessingInferenceBuffer:(struct __CVBuffer *)arg1 inferenceAttachedMediaKey:(id)arg2 processorInput:(id)arg3 err:(int)arg4 ;
-(void)processorController:(id)arg0 didSelectFusionMode:(int)arg1 processorInput:(id)arg2 ;
-(void)processorController:(id)arg0 didSelectLowLightReferenceFrame:(struct opaqueCMSampleBuffer *)arg1 processorInput:(id)arg2 ;
-(void)processorController:(id)arg0 didSelectNewReferenceFrameWithPTS:(struct ? )arg1 transform:(id)arg2 processorInput:(id)arg3 ;
-(void)processorController:(id)arg0 willAddBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 bufferType:(NSUInteger)arg3 processorInput:(id)arg4 ;
-(void)processorController:(id)arg0 willAddSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 processorInput:(id)arg2 ;
-(void)processorController:(id)arg0 willProcessRedEyeReductionForProcessorInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)stopAdaptiveBracketingForSettings:(id)arg0 withGroup:(int)arg1 ;


@end


#endif