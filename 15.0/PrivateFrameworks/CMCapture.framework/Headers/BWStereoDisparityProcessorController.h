// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTEREODISPARITYPROCESSORCONTROLLER_H
#define BWSTEREODISPARITYPROCESSORCONTROLLER_H

@class FigDisparityGenerator, NSMutableArray, NSDictionary, NSString;
@protocol BWStereoDisparityProcessorInputDelegate, DisparityProcessorInferenceDelegate, BWInferenceFormatProvider;


#import "BWStillImageProcessorController.h"
#import "BWStereoDisparityProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWStereoDisparityRequest.h"
#import "BWInferenceEngine.h"

@interface BWStereoDisparityProcessorController : BWStillImageProcessorController <BWStereoDisparityProcessorInputDelegate, DisparityProcessorInferenceDelegate, BWInferenceFormatProvider>

 {
    BWStereoDisparityProcessorControllerConfiguration *_configuration;
    FigStateMachine *_stateMachine;
    FigDisparityGenerator *_disparityProcessor;
    *opaqueCMFormatDescription _disparityFormatDescription;
    NSMutableArray *_requestQueue;
    BWStereoDisparityRequest *_currentRequest;
    BWInferenceEngine *_inferenceEngine;
    *opaqueCMFormatDescription _refFormatDescription;
    *opaqueCMFormatDescription _auxFormatDescription;
    *opaqueCMFormatDescription _shiftMapFormatDescription;
    NSDictionary *_videoFormatByAttachedMediaKey;
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
-(int)_OSStatusFromDisparityResult:(int)arg0 ;
-(int)_loadSetupAndPrepareDisparityProcessor;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(int)processDisparityInferenceWithReferenceBuffer:(struct __CVBuffer *)arg0 auxBuffer:(struct __CVBuffer *)arg1 outputDisparityBuffer:(struct __CVBuffer *)arg2 ;
-(void)_process;
-(void)_resetProcessor;
-(void)_serviceNextRequest;
-(void)_updateStateIfNeeded;
-(void)cancelProcessing;
-(void)dealloc;
-(void)inputReceivedNewInputData:(id)arg0 ;


@end


#endif