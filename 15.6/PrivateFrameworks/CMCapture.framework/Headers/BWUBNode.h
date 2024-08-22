// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWUBNODE_H
#define BWUBNODE_H

@class NSSet, NSString, NSMutableDictionary, NSDictionary, NSArray;
@protocol BWNoiseReductionAndFusionProcessorDelegate, BWUBInferenceControllerDelegate, BWDeepFusionProcessorControllerDelegate, BWAdaptiveBracketingController, BWDeferredProcessorControllerDelegate, BWJasperColorStillsExecutorControllerDelegate, BWJasperDisparityProcessorControllerDelegate, BWLearnedNRProcessorControllerDelegate, BWStillImageProcessingSupportProvider, OS_dispatch_queue, BWNoiseReductionAndFusionProcessorControllerConfiguration, BWStillImageProcessingStatusDelegate, OS_dispatch_group, BWNoiseReductionAndFusionProcessorSemanticRenderingInput;


#import "BWNode.h"
#import "BWFigVideoCaptureDevice.h"
#import "BWStillImageNodeConfiguration.h"
#import "BWPixelBufferPool.h"
#import "BWStillImageProcessorCoordinator.h"
#import "BWLearnedNRProcessorControllerConfiguration.h"
#import "BWDeepFusionProcessorControllerConfiguration.h"
#import "BWUBInferenceControllerConfiguration.h"
#import "BWIntelligentDistortionCorrectionProcessorControllerConfiguration.h"
#import "BWDeepZoomProcessorControllerConfiguration.h"
#import "BWStereoDisparityProcessorControllerConfiguration.h"
#import "BWStereoDisparityProcessorInput.h"
#import "BWStillImageProcessorConfiguration.h"
#import "BWNodeInput.h"
#import "BWJasperColorStillsExecutorControllerConfiguration.h"
#import "BWJasperDisparityProcessorControllerConfiguration.h"

@interface BWUBNode : BWNode <BWNoiseReductionAndFusionProcessorDelegate, BWUBInferenceControllerDelegate, BWDeepFusionProcessorControllerDelegate, BWAdaptiveBracketingController, BWDeferredProcessorControllerDelegate, BWJasperColorStillsExecutorControllerDelegate, BWJasperDisparityProcessorControllerDelegate, BWLearnedNRProcessorControllerDelegate, BWStillImageProcessingSupportProvider>

 {
    BWFigVideoCaptureDevice *_device;
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSSet *_supportedPortTypes;
    ? _outputDimensions;
    BWPixelBufferPool *_noiseReductionAndFusionProcessorOutputIntermediatePool;
    NSString *_previousCaptureRequestIdentifier;
    NSInteger _currentSettingsID;
    NSString *_currentCaptureRequestIdentifier;
    unsigned int _priority;
    NSObject<OS_dispatch_queue> *_emitQueue;
    BWStillImageProcessorCoordinator *_processorCoordinator;
    NSObject<OS_dispatch_queue> *_processorCoordinatorWorkerQueue;
    os_unfair_lock_s _processorCoordinatorLock;
    os_unfair_lock_s _processingSupportProviderLock;
    NSUInteger _nrProcessorControllerType;
    id<BWNoiseReductionAndFusionProcessorControllerConfiguration> *_nrProcessorControllerConfiguration;
    NSMutableDictionary *_nrProcessorInputByPortType;
    NSMutableDictionary *_remainingNRProcessorInputsByPortType;
    NSMutableDictionary *_emittedOrEnqueuedReferenceFrameIDByPortType;
    id<BWStillImageProcessingStatusDelegate> *_referenceFrameSelectionDelegate;
    int _stillImageFusionScheme;
    BWLearnedNRProcessorControllerConfiguration *_learnedNRProcessorControllerConfiguration;
    NSMutableDictionary *_learnedNRInputByPortType;
    BWDeepFusionProcessorControllerConfiguration *_deepFusionProcessorControllerConfiguration;
    NSMutableDictionary *_deepFusionProcessorInputByPortType;
    NSObject<OS_dispatch_queue> *_deepFusionProcessorControllerQueue;
    int _maxDeepFusionOutputCount;
    BWPixelBufferPool *_syntheticIntermediatesPool;
    BWPixelBufferPool *_syntheticFusionMapPool;
    BWUBInferenceControllerConfiguration *_inferenceControllerConfiguration;
    NSObject<OS_dispatch_queue> *_inferenceControllerQueue;
    NSObject<OS_dispatch_group> *_inferenceControllerGroup;
    BWPixelBufferPool *_intermediateInferenceInputPool;
    NSDictionary *_inferenceOutputPoolsByAttachedMediaKey;
    id<BWNoiseReductionAndFusionProcessorSemanticRenderingInput> *_semanticRenderingInput;
    *opaqueCMSampleBuffer _inferenceOutputSampleBuffer;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
    *OpaqueVTPixelTransferSession _inferenceInputPixelTransferSession;
    float _inferenceMainImageDownscalingFactor;
    NSDictionary *_providedInferenceAttachedMediaByMode;
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
    BWStillImageProcessorConfiguration *_redEyeReductionConfiguration;
    NSMutableDictionary *_redEyeReductionInputByPortType;
    BWNodeInput *_pointCloudInput;
    os_unfair_lock_s _pointCloudLock;
    BOOL _discardPointClouds;
    BWJasperColorStillsExecutorControllerConfiguration *_jasperColorStillsExecutorConfiguration;
    NSMutableDictionary *_jasperColorStillsExecutorInputByPortType;
    BWJasperDisparityProcessorControllerConfiguration *_jasperDisparityProcessorControllerConfiguration;
    NSMutableDictionary *_jasperDisparityProcessorInputByPortType;
    BOOL _deferredProcessingSupportEnabled;
    BOOL _deferredPhotoProcessorEnabled;
    int _deferredCompressionProfile;
    NSMutableDictionary *_deferredProcessorInputByPortType;
    BWPixelBufferPool *_ubOutputDeferredPool;
    *opaqueCMSampleBuffer _deepFusionProxyOrErrorRecoverySbuf;
    int _minimumOutputBufferCount;
    int _maxNumberOfBurstCapturesAllowedInFlight;
    int _dcOutputBufferCount;
    int _demosaicedRawOutputBufferCount;
    *opaqueCMFormatDescription _sushiRawFormatDescription;
    ? _depthOutputDimensions;
    BOOL _generateLiDARDepth;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_generateDisparityForSettings:(id)arg0 ;
-(BOOL)_isDeepZoomProcessingEnabled;
-(BOOL)_isPersonInstanceMasksDeliveryEnabled;
-(BOOL)_isSemanticRenderingCaptureType:(int)arg0 captureFlags:(NSUInteger)arg1 ;
-(BOOL)_processingNeededForNoiseReductionAndFusionProcessorInput:(id)arg0 ;
-(BOOL)_referenceOrClientBracketFrameEmissionNeededForProcessorInput:(id)arg0 ;
-(BOOL)_requiresResizedOutputDimensionsWithInputWidth:(NSUInteger)arg0 inputHeight:(NSUInteger)arg1 ;
-(BOOL)_shouldEnableInferencePersonMaskDeliveryAndProvideInfoWhetherMasksContainValidContent;
-(BOOL)_shouldPassthroughWithStillImageSettings:(id)arg0 ;
-(BOOL)_waitForInferenceIfNeededForProcessorInput:(id)arg0 ;
-(BOOL)alwaysAllowModifyingInputBuffers;
-(BOOL)deepFusionPreprocessingSupportEnabled;
-(BOOL)deepFusionSupportEnabled;
-(BOOL)deepFusionWaitForPreprocessingToFinish;
-(BOOL)demosaicedRawEnabled;
-(BOOL)demosaicedRawSupportedForCaptureType:(int)arg0 ;
-(BOOL)depthDataDeliveryEnabled;
-(BOOL)digitalFlashSupportEnabled;
-(BOOL)fusionSupportEnabled;
-(BOOL)intelligentDistortionCorrectionEnabled;
-(BOOL)intelligentDistortionCorrectionSupportedForCaptureType:(int)arg0 portType:(id)arg1 ;
-(BOOL)learnedNRSupportEnabled;
-(BOOL)redEyeReductionEnabled;
-(BOOL)semanticStyleRenderingEnabled;
-(float)gainMapMainImageDownscalingFactor;
-(float)inferenceMainImageDownscalingFactor;
-(id)_bufferTypesExcludingErrorRecoveryTypesForCaptureSettings:(id)arg0 ;
-(id)_bufferTypesForCaptureSettings:(id)arg0 ;
-(id)_errorRecoveryBufferTypesForBufferTypes:(id)arg0 ;
-(id)_inferenceAttachedMediaRequiredForDemosaicedRawCaptureWithInferenceOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(id)arg1 ;
-(id)_inferenceAttachedMediaRequiredForDepthProcessing:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(id)arg1 ;
-(id)_inferenceOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 ;
-(id)_processingOrderByPortTypeForSettings:(id)arg0 ;
-(id)_standardNROutputRouterWithExpectedQueue:(SEL)arg0 ;
-(id)_ubInferenceInputRouter:(SEL)arg0 ;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg0 wait:(BOOL)arg1 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg0 frameStatistics:(id)arg1 stationary:(BOOL)arg2 detectedObjects:(id)arg3 ;
-(id)initWithNodeConfiguration:(id)arg0 captureDevice:(id)arg1 sensorConfigurations:(id)arg2 inputIs10Bit:(BOOL)arg3 retainedBufferCount:(int)arg4 outputBufferCount:(int)arg5 minimumOutputBufferCount:(int)arg6 maxNumberOfBurstCapturesAllowedInFlight:(int)arg7 outputPoolBackPressureEnabled:(BOOL)arg8 deferredProcessingSupportEnabled:(BOOL)arg9 deferredPhotoProcessorEnabled:(BOOL)arg10 stillImageFusionScheme:(int)arg11 figThreadPriority:(unsigned int)arg12 depthOutputDimensions:(struct ? )arg13 generateLiDARDepth:(BOOL)arg14 ;
-(id)nodeSubType;
-(id)nodeType;
-(id)pointCloudInput;
-(id)portTypesWithGeometricDistortionCorrectionEnabled;
-(id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)arg0 format:(id)arg1 ;
-(id)processorController:(id)arg0 newSemanticRenderingInputForProcessorInput:(id)arg1 ;
-(id)processorCoordinator;
-(id)providedInferenceAttachedMediaByMode;
-(id)rawColorCalibrationsByPortType;
-(id)rawLensShadingCorrectionCoefficientsByPortType;
-(id)referenceFrameSelectionDelegate;
-(id)sharedResources;
-(int)_handlePointCloudSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(int)_scaleInferenceInputForRedEyeReductionFromPixelBuffer:(struct __CVBuffer *)arg0 outputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(int)_setupProcessingStateForClientBracketWithSettings:(id)arg0 processingPlan:(id)arg1 ;
-(int)_setupProcessingStateForDeepFusionWithSettings:(id)arg0 processingPlan:(id)arg1 ;
-(int)_setupProcessingStateForDeepZoomWithSettings:(id)arg0 sequenceNumber:(unsigned int)arg1 portType:(id)arg2 queueProvidingInput:(id)arg3 processingPlan:(id)arg4 ;
-(int)_setupProcessingStateForDisparityIfNeededWithSettings:(id)arg0 sequenceNumber:(unsigned int)arg1 processingPlan:(id)arg2 ;
-(int)_setupProcessingStateForIntelligentDistortionCorrectionIfNeededWithSettings:(id)arg0 sequenceNumber:(unsigned int)arg1 portType:(id)arg2 queueProvidingInput:(id)arg3 processingPlan:(id)arg4 ;
-(int)_setupProcessingStateForJasperDisparityIfNeededWithSettings:(id)arg0 processingPlan:(id)arg1 ;
-(int)_setupProcessingStateForPointCloudDepthIfNeededWithSettings:(id)arg0 processingPlan:(id)arg1 ;
-(int)_setupProcessingStateForSingleImageCaptureWithSettings:(id)arg0 processingPlan:(id)arg1 ;
-(int)_setupProcessingStateWithSettings:(id)arg0 ;
-(int)_singleImageProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 settings:(id)arg1 portType:(id)arg2 ;
-(int)deepZoomVersion;
-(int)fsdNetStereoImagesAlignment;
-(int)greenGhostMitigationVersion;
-(int)horizontalSensorBinningFactor;
-(int)intelligentDistortionCorrectionVersion;
-(int)maxDeepFusionOutputCount;
-(int)semanticRenderingVersion;
-(int)verticalSensorBinningFactor;
-(struct ? )disparityOutputDimensions;
-(struct ? )outputDimensions;
-(struct __CVBuffer *)processorController:(id)arg0 newOutputPixelBufferForProcessorInput:(id)arg1 type:(NSUInteger)arg2 ;
-(unsigned int)demosaicedRawPixelFormat;
-(void)_commitDeferredBuffer:(struct __CVBuffer *)arg0 bufferType:(NSUInteger)arg1 metadata:(id)arg2 processorInput:(id)arg3 ;
-(void)_configureInferenceController;
-(void)_emitError:(int)arg0 processorInput:(id)arg1 description:(id)arg2 ;
-(void)_emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 description:(id)arg1 ;
-(void)_handleClientBracketFrameEmissionForProcessorInput:(id)arg0 clientBracketFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_handleDeepFusionError:(int)arg0 processorInput:(id)arg1 ;
-(void)_handleLidarDepthPointCloudSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_handleReferenceFrameEmissionForProcessorInput:(id)arg0 ;
-(void)_handleSupplementalPointCloudSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_inferenceProcessSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 settings:(id)arg1 portType:(id)arg2 ;
-(void)_infoForCaptureType:(int)arg0 isSupportedCaptureTypeOut:(*BOOL)arg1 isFusionCaptureTypeOut:(*BOOL)arg2 ;
-(void)_processorControllerDidFinishProcessingInputForPortType:(id)arg0 processorType:(NSUInteger)arg1 ;
-(void)_propagateSushiRawDNGDictionaryWithOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 requestedDimensions:(struct ? )arg1 requiresGDCInformation:(BOOL)arg2 ;
-(void)_removeNonPropagatedAttachedMediaFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_resetProcessingState;
-(void)_resetProcessingStateIfDone;
-(void)_setupDeferredProcessingWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)_setupProcessorCoordinator;
-(void)addInferencesToIntelligentDistortionCorrectionInputForPortType:(id)arg0 lowResPersonMask:(struct __CVBuffer *)arg1 faceDetectionObservations:(id)arg2 ;
-(void)commitDeferredSkinMask:(struct __CVBuffer *)arg0 skyMask:(struct __CVBuffer *)arg1 lowResPersonMask:(struct __CVBuffer *)arg2 personMask:(struct __CVBuffer *)arg3 lowResPersonInstanceMasks:(id)arg4 lowResPersonInstanceConfidences:(id)arg5 lowResPersonInstanceBoundingBoxes:(id)arg6 skinToneClassifications:(id)arg7 faceObservations:(id)arg8 processorInput:(id)arg9 ;
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
-(void)processorController:(id)arg0 didFinishProcessingBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 type:(NSUInteger)arg3 processorInput:(id)arg4 err:(int)arg5 ;
-(void)processorController:(id)arg0 didFinishProcessingInput:(id)arg1 err:(int)arg2 ;
-(void)processorController:(id)arg0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 type:(NSUInteger)arg2 processorInput:(id)arg3 err:(int)arg4 ;
-(void)processorController:(id)arg0 didProcessInferencesForSkinMask:(*void)arg1 skyMask:(*void)arg2 lowResPersonMask:(*void)arg3 personMask:(*void)arg4 lowResPersonInstanceMasks:(id)arg5 lowResPersonInstanceConfidences:(id)arg6 lowResPersonInstanceBoundingBoxes:(id)arg7 skinToneClassifications:(id)arg8 inferenceAttachedMediaMetadata:(id)arg9 faceObservations:(id)arg10 processorInput:(id)arg11 err:(int)arg12 ;
-(void)processorController:(id)arg0 didSelectFusionMode:(int)arg1 processorInput:(id)arg2 ;
-(void)processorController:(id)arg0 didSelectLowLightReferenceFrame:(struct opaqueCMSampleBuffer *)arg1 processorInput:(id)arg2 ;
-(void)processorController:(id)arg0 didSelectNewReferenceFrameWithPTS:(struct ? )arg1 transform:(id)arg2 processorInput:(id)arg3 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setAlwaysAllowModifyingInputBuffers:(BOOL)arg0 ;
-(void)setDeepFusionPreprocessingSupportEnabled:(BOOL)arg0 ;
-(void)setDeepFusionSupportEnabled:(BOOL)arg0 ;
-(void)setDeepFusionWaitForPreprocessingToFinish:(BOOL)arg0 ;
-(void)setDeepZoomVersion:(int)arg0 ;
-(void)setDemosaicedRawEnabled:(BOOL)arg0 ;
-(void)setDemosaicedRawPixelFormat:(unsigned int)arg0 ;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg0 ;
-(void)setDigitalFlashSupportEnabled:(BOOL)arg0 ;
-(void)setDisparityOutputDimensions:(struct ? )arg0 ;
-(void)setFsdNetStereoImagesAlignment:(int)arg0 ;
-(void)setFusionSupportEnabled:(BOOL)arg0 ;
-(void)setGainMapMainImageDownscalingFactor:(float)arg0 ;
-(void)setGreenGhostMitigationVersion:(int)arg0 ;
-(void)setHorizontalSensorBinningFactor:(int)arg0 ;
-(void)setInferenceMainImageDownscalingFactor:(float)arg0 ;
-(void)setIntelligentDistortionCorrectionEnabled:(BOOL)arg0 geometricDistortionCorrectionEnabled:(BOOL)arg1 portTypesWithGeometricDistortionCorrectionEnabled:(id)arg2 geometricDistortionCorrectionExpandedImageDimensions:(struct ? )arg3 intelligentDistortionCorrectionVersion:(int)arg4 intelligentDistortionCorrectionAppliesFinalDimensions:(BOOL)arg5 horizontalSensorBinningFactor:(int)arg6 verticalSensorBinningFactor:(int)arg7 ;
-(void)setLearnedNRSupportEnabled:(BOOL)arg0 ;
-(void)setMaxDeepFusionOutputCount:(int)arg0 ;
-(void)setOutputDimensions:(struct ? )arg0 ;
-(void)setProvidedInferenceAttachedMediaByMode:(id)arg0 ;
-(void)setRawColorCalibrationsByPortType:(id)arg0 ;
-(void)setRawLensShadingCorrectionCoefficientsByPortType:(id)arg0 ;
-(void)setRedEyeReductionEnabled:(BOOL)arg0 ;
-(void)setReferenceFrameSelectionDelegate:(id)arg0 ;
-(void)setSemanticRenderingVersion:(int)arg0 semanticDevelopmentVersion:(int)arg1 personSemanticsVersion:(int)arg2 ;
-(void)setSemanticStyleRenderingEnabled:(BOOL)arg0 ;
-(void)setSharedResources:(id)arg0 ;
-(void)setVerticalSensorBinningFactor:(int)arg0 ;
-(void)stopAdaptiveBracketingForSettings:(id)arg0 withGroup:(int)arg1 ;


@end


#endif