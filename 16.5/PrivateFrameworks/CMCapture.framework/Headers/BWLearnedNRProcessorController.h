// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWLEARNEDNRPROCESSORCONTROLLER_H
#define BWLEARNEDNRPROCESSORCONTROLLER_H

@class NSMutableArray, NSString;
@protocol BWLearnedNRInputDelegate, BWInferenceFormatProvider;


#import "BWStillImageProcessorController.h"
#import "BWLearnedNRProcessorControllerConfiguration.h"
#import "FigStateMachine.h"
#import "BWLearnedNRRequest.h"
#import "BWInferenceEngine.h"

@interface BWLearnedNRProcessorController : BWStillImageProcessorController <BWLearnedNRInputDelegate, BWInferenceFormatProvider>

 {
    BWLearnedNRProcessorControllerConfiguration *_configuration;
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
    BWLearnedNRRequest *_currentRequest;
    BOOL _inferenceEnginePrepared;
    BWInferenceEngine *_inferenceEngine;
    *opaqueCMFormatDescription _inputImageFormatDescription;
    *opaqueCMFormatDescription _outputFormatDescription;
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
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(int)prepareWithPixelBufferPoolProvider:(id)arg0 ;
-(void)cancelProcessing;
-(void)dealloc;
-(void)input:(id)arg0 setInputFrame:(struct opaqueCMSampleBuffer *)arg1 ;


@end


#endif