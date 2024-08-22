// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPFUSIONPROCESSORCONTROLLER_H
#define BWDEEPFUSIONPROCESSORCONTROLLER_H

@class NSSet, NSMutableArray, NSString;
@protocol BWDeepFusionProcessorInputDelegate, IBPDeepFusionProcessor, IBPDeepFusionPrepareDescriptor;


#import "BWStillImageProcessorController.h"
#import "BWDeepFusionProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWDeepFusionProcessorRequest.h"

@interface BWDeepFusionProcessorController : BWStillImageProcessorController <BWDeepFusionProcessorInputDelegate>

 {
    BWDeepFusionProcessorControllerConfiguration *_configuration;
    NSSet *_supportedPortTypes;
    FigStateMachine *_stateMachine;
    id<IBPDeepFusionProcessor> *_deepFusionProcessor;
    id<IBPDeepFusionPrepareDescriptor> *_prepareDescriptor;
    Class _deepFusionOutputClass;
    *opaqueCMFormatDescription _outputFormatDescription;
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
-(id)initWithConfiguration:(id)arg0 ;
-(int)_loadSetupAndPrepareDeepFusionProcessor;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(void)_process;
-(void)_propagateDemosaicedRawPixelBuffer:(struct __CVBuffer *)arg0 demosaicedRawMetadata:(id)arg1 outputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 error:(int)arg3 ;
-(void)_propagateInferenceAttachedMedia:(id)arg0 input:(id)arg1 outputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)_resetProcessor;
-(void)_serviceNextRequest;
-(void)_setupProcessor;
-(void)_updateStateIfNeeded;
-(void)addInferencesForInput:(id)arg0 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)input:(id)arg0 addType:(NSUInteger)arg1 ;


@end


#endif