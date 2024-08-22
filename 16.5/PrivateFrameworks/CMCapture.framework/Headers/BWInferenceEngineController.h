// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCEENGINECONTROLLER_H
#define BWINFERENCEENGINECONTROLLER_H

@class NSString, NSDictionary, NSArray;
@protocol BWInferenceEngineControllerInputDelegate, BWInferenceFormatProvider;


#import "BWStillImageProcessorController.h"
#import "BWInferenceEngine.h"
#import "BWVideoFormat.h"

@interface BWInferenceEngineController : BWStillImageProcessorController <BWInferenceEngineControllerInputDelegate, BWInferenceFormatProvider>

 {
    NSString *_contextName;
    BOOL _inferenceEnginePrepared;
    BWInferenceEngine *_inferenceEngine;
    BWVideoFormat *_inputFormat;
    NSDictionary *_inferenceOutputFormatByAttachedMediaKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *providedAttachedMediaKeys;
@property (readonly) Class superclass;


+(BOOL)usesCustomProcessingFlow;
+(id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)lowResPersonInstanceBoundingBoxesFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)lowResPersonInstanceConfidencesFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)lowResPersonInstanceMasksFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)skinToneClassificationsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)smartCameraClassificationsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct __CVBuffer *)inferenceMaskFromSbuf:(struct opaqueCMSampleBuffer *)arg0 attachedMediaKey:(id)arg1 ;
+(struct opaqueCMSampleBuffer *)inferenceMaskSbufFromSbuf:(struct opaqueCMSampleBuffer *)arg0 attachedMediaKey:(id)arg1 ;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(id)_suppressedInferenceTypesForInput:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 contextName:(id)arg1 ;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)requestForInput:(id)arg0 delegate:(id)arg1 errOut:(*int)arg2 ;
-(int)prepare;
-(int)prepareWithPixelBufferPoolProvider:(id)arg0 ;
-(int)process;
-(void)dealloc;
-(void)inputReceivedNewData:(id)arg0 ;
-(void)reset;


@end


#endif