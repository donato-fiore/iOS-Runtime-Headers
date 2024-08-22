// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWUBINFERENCECONTROLLER_H
#define BWUBINFERENCECONTROLLER_H

@class NSDictionary, NSString, NSArray;
@protocol BWInferenceFormatProvider;


#import "BWStillImageProcessorController.h"
#import "BWInferenceEngine.h"
#import "BWVideoFormat.h"

@interface BWUBInferenceController : BWStillImageProcessorController <BWInferenceFormatProvider>

 {
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


+(id)faceObservationsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)lowResPersonInstanceBoundingBoxesFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)lowResPersonInstanceConfidencesFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)lowResPersonInstanceMasksFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)skinToneClassificationsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(id)smartCameraClassificationsFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct __CVBuffer *)lowResPersonSegmentationMaskFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct __CVBuffer *)personMaskFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct __CVBuffer *)semanticSkinMatteFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct __CVBuffer *)semanticSkyMatteFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct opaqueCMSampleBuffer *)lowResPersonMaskSbufFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct opaqueCMSampleBuffer *)personMaskSbufFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct opaqueCMSampleBuffer *)semanticSkinMatteSbufFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(struct opaqueCMSampleBuffer *)semanticSkyMatteSbufFromSbuf:(struct opaqueCMSampleBuffer *)arg0 ;
+(void)initialize;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg0 ;
-(NSUInteger)type;
-(id)initWithConfiguration:(id)arg0 ;
-(id)inputFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)inputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputFormatForAttachedMediaKey:(id)arg0 ;
-(id)outputVideoFormatForAttachedMediaKey:(id)arg0 ;
-(int)_configureInferenceWithConfiguration:(id)arg0 ;
-(int)enqueueInputForProcessing:(id)arg0 delegate:(id)arg1 ;
-(int)prepareWithPixelBufferPoolProvider:(id)arg0 ;
-(void)_releaseResources;
-(void)cancelProcessing;
-(void)dealloc;


@end


#endif