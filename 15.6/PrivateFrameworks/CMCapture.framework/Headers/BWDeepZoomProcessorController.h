// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPZOOMPROCESSORCONTROLLER_H
#define BWDEEPZOOMPROCESSORCONTROLLER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol BWDeepZoomProcessorInputDelegate, BWInferenceFormatProvider;


#import "BWStillImageProcessorController.h"
#import "BWDeepZoomProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWDeepZoomProcessorRequest.h"
#import "BWInferenceEngine.h"
#import "BWDeepZoomInferenceConfiguration.h"

@interface BWDeepZoomProcessorController : BWStillImageProcessorController <BWDeepZoomProcessorInputDelegate, BWInferenceFormatProvider>

 {
    BWDeepZoomProcessorControllerConfiguration *_configuration;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWDeepZoomProcessorRequest *_currentRequest;
    BWInferenceEngine *_inferenceEngine;
    NSMutableDictionary *_videoFormatByAttachedMediaKey;
    BWDeepZoomInferenceConfiguration *_inferenceConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(int)_loadSetupAndPrepareDeepZoomProcessor;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(int)prepareWithPixelBufferPoolProvider:(id)arg0 ;
-(void)_process;
-(void)_serviceNextRequest;
-(void)_setupProcessor;
-(void)_updateStateIfNeeded;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputSampleBufferReceived:(id)arg0 ;


@end


#endif