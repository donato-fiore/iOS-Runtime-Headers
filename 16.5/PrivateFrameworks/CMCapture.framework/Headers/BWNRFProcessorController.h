// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNRFPROCESSORCONTROLLER_H
#define BWNRFPROCESSORCONTROLLER_H

@class NSSet, NSString, NRFPrepareDescriptor, NSDictionary, NSMutableArray;
@protocol BWNRFProcessorInputDelegate, NRFProcessorDelegate, BWNoiseReductionAndFusionProcessorController, NRFProcessor, OS_dispatch_queue;


#import "BWStillImageProcessorController.h"
#import "BWNRFProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWNRFProcessorRequest.h"

@interface BWNRFProcessorController : BWStillImageProcessorController <BWNRFProcessorInputDelegate, NRFProcessorDelegate, BWNoiseReductionAndFusionProcessorController>

 {
    BWNRFProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    id<NRFProcessor> *_nrfProcessor;
    NSString *_nrfProcessorClassName;
    NRFPrepareDescriptor *_prepareDescriptor;
    NRFPrepareDescriptor *_ubPrepareDescriptor;
    Class _nrfUBFusionOutputClass;
    Class _nrfProgressiveBracketingStatisticsClass;
    Class _nrfProgressiveBracketingParametersClass;
    NSDictionary *_adaptiveBracketingCaptureParametersByPortType;
    Class _nrfDeepFusionOutputClass;
    NRFPrepareDescriptor *_deepFusionPrepareDescriptor;
    Class _nrfCompletionStatusClass;
    NSObject<OS_dispatch_queue> *_completionStatusQueue;
    *opaqueCMFormatDescription _outputFormatDescription;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
    *opaqueCMFormatDescription _demosaicedRawFormatDescription;
    *opaqueCMFormatDescription _gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWNRFProcessorRequest *_currentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int progressiveLowLightFusionBatchSize;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)finishProcessingCurrentInputNow;
-(NSUInteger)type;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg0 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg0 frameStatistics:(id)arg1 stationary:(BOOL)arg2 detectedObjects:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)metalImageBufferProcessor;
-(id)processorGetInferenceResults:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 processErrorRecoveryFrame:(BOOL)arg2 processOriginalImage:(BOOL)arg3 processToneMapping:(BOOL)arg4 processInferenceInputImage:(BOOL)arg5 clientBracketSequenceNumber:(int)arg6 processSemanticRendering:(BOOL)arg7 provideInferenceInputImageForProcessing:(BOOL)arg8 inferencesAvailable:(BOOL)arg9 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)input:(id)arg0 addFrame:(struct opaqueCMSampleBuffer *)arg1 isReferenceFrame:(BOOL)arg2 ;
-(void)inputReceivedAllFrames:(id)arg0 ;
-(void)inputReceivedProcessedRawErrorRecoveryFrame:(id)arg0 ;
-(void)processor:(id)arg0 didCompleteProcessingForSurfaceID:(unsigned int)arg1 ;
-(void)processor:(id)arg0 didEnqueueProcessingForSurfaceID:(unsigned int)arg1 ;
-(void)processor:(id)arg0 didSelectFusionMode:(int)arg1 ;
-(void)processor:(id)arg0 didSelectProgressiveFusionReferenceFrameIndex:(int)arg1 ;
-(void)processor:(id)arg0 outputReadyWithFrameType:(int)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 outputMetadata:(id)arg3 error:(int)arg4 ;


@end


#endif