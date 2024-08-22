// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCEENGINECONTROLLERINPUT_H
#define BWINFERENCEENGINECONTROLLERINPUT_H

@class NSArray;


#import "BWStillImageProcessorControllerInput.h"

@interface BWInferenceEngineControllerInput : BWStillImageProcessorControllerInput

@property (copy, nonatomic) NSArray *enabledInferenceMasks; // ivar: _enabledInferenceMasks
@property (nonatomic) NSUInteger enabledVisionInferences; // ivar: _enabledVisionInferences
@property (readonly, nonatomic) BOOL expectsMoreData; // ivar: _expectsMoreData
@property (readonly, nonatomic) *opaqueCMSampleBuffer inferenceImage; // ivar: _inferenceImage
@property (readonly, nonatomic) *opaqueCMSampleBuffer propagationImage; // ivar: _propagationImage
@property (nonatomic) BOOL smartCameraClassificationsEnabled; // ivar: _smartCameraClassificationsEnabled


-(id)description;
-(id)initWithSettings:(id)arg0 portType:(id)arg1 ;
-(void)addInferenceImage:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)addInferenceImage:(struct opaqueCMSampleBuffer *)arg0 propagationImage:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)dealloc;


@end


#endif