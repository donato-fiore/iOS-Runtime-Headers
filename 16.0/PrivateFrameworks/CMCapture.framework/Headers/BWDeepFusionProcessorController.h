// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEEPFUSIONPROCESSORCONTROLLER_H
#define BWDEEPFUSIONPROCESSORCONTROLLER_H

@class NSSet, NSMutableArray, NSString;
@protocol BWDeepFusionProcessorInputDelegate, IBPDeepFusionProcessorDelegate, IBPDeepFusionProcessor, IBPDeepFusionPrepareDescriptor;


#import "BWStillImageProcessorController.h"
#import "BWDeepFusionProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWDeepFusionProcessorRequest.h"

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate, IBPDeepFusionProcessorDelegate>

 {
    BWDeepFusionProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    int _processorVersion;
    id<IBPDeepFusionProcessor> *_deepFusionProcessor;
    id<IBPDeepFusionPrepareDescriptor> *_prepareDescriptor;
    Class _deepFusionOutputClass;
    *opaqueCMFormatDescription _outputFormatDescription;
    *opaqueCMFormatDescription _inferenceInputFormatDescription;
    *opaqueCMFormatDescription _demosaicedRawFormatDescription;
    *opaqueCMFormatDescription _inferenceAttachedMediaFormatDescription;
    *opaqueCMFormatDescription _gainMapFormatDescription;
    NSMutableArray *_requestQueue;
    BWDeepFusionProcessorRequest *_currentRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(NSUInteger)type;
-(id)externalMemoryDescriptor;
-(id)initWithConfiguration:(id)arg0 ;
-(id)metalImageBufferProcessor;
-(id)processorGetInferenceResults:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)addInferencesForInput:(id)arg0 ;
-(void)beginProcessingCachedBuffersForInput:(id)arg0 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)input:(id)arg0 addInputBuffer:(id)arg1 ;
-(void)processor:(id)arg0 outputReadyWithBufferType:(int)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 outputMetadata:(id)arg3 error:(int)arg4 ;


@end


#endif