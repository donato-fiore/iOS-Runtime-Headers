// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWUBPROCESSORCONTROLLER_H
#define BWUBPROCESSORCONTROLLER_H

@class NSSet, UBProcessor, UBPrepareDescriptor, NSDictionary, NSMutableArray, NSString;
@protocol BWUBProcessorInputDelegate, UBProcessorDelegate, BWNoiseReductionAndFusionProcessorController;


#import "BWStillImageProcessorController.h"
#import "BWUBProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWUBProcessorRequest.h"

@interface BWUBProcessorController : BWStillImageProcessorController <BWUBProcessorInputDelegate, UBProcessorDelegate, BWNoiseReductionAndFusionProcessorController>

 {
    BWUBProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    UBProcessor *_ubProcessor;
    UBPrepareDescriptor *_prepareDescriptor;
    Class _ubFusionOutputClass;
    Class _ubProgressiveBracketingStatisticsClass;
    Class _ubProgressiveBracketingParametersClass;
    NSDictionary *_adaptiveBracketingCaptureParametersByPortType;
    Class _ubDeepFusionOutputClass;
    UBPrepareDescriptor *_deepFusionPrepareDescriptor;
    *opaqueCMFormatDescription _outputFormatDescription;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
    *opaqueCMFormatDescription _gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWUBProcessorRequest *_currentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int progressiveLowLightFusionBatchSize;
@property (readonly) Class superclass;


+(BOOL)lazilyAllocatesDeepFusionOutputBuffers;
+(void)initialize;
-(BOOL)finishProcessingCurrentInputNow;
-(NSUInteger)type;
-(id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:(id)arg0 ;
-(id)adaptiveBracketingParametersForDigitalFlashMode:(int)arg0 frameStatistics:(id)arg1 stationary:(BOOL)arg2 detectedObjects:(id)arg3 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)processorGetInferenceResults:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 processErrorRecoveryFrame:(BOOL)arg2 processOriginalImage:(BOOL)arg3 processToneMapping:(BOOL)arg4 processInferenceInputImage:(BOOL)arg5 clientBracketSequenceNumber:(int)arg6 processSemanticRendering:(BOOL)arg7 provideInferenceInputImageForProcessing:(BOOL)arg8 inferencesAvailable:(BOOL)arg9 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)input:(id)arg0 addFrame:(struct opaqueCMSampleBuffer *)arg1 isReferenceFrame:(BOOL)arg2 ;
-(void)inputReceivedAllFrames:(id)arg0 ;
-(void)processor:(id)arg0 didCompleteProcessingForSurfaceID:(unsigned int)arg1 ;
-(void)processor:(id)arg0 didEnqueueProcessingForSurfaceID:(unsigned int)arg1 ;
-(void)processor:(id)arg0 didSelectFusionMode:(int)arg1 ;
-(void)processor:(id)arg0 outputReadyWithFrameType:(int)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 outputMetadata:(id)arg3 error:(int)arg4 ;


@end


#endif