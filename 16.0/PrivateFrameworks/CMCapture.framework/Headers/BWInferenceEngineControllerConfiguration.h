// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEENGINECONTROLLERCONFIGURATION_H
#define BWINFERENCEENGINECONTROLLERCONFIGURATION_H

@class NSArray;


#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWVideoFormat.h"

@interface BWInferenceEngineControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (copy, nonatomic) NSArray *enabledInferenceMasks; // ivar: _enabledInferenceMasks
@property (nonatomic) NSUInteger enabledVisionInferences; // ivar: _enabledVisionInferences
@property (nonatomic) BOOL fastMattingEnabled; // ivar: _fastMattingEnabled
@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (nonatomic) BOOL mattingOutputValidContentDetectionEnabled; // ivar: _mattingOutputValidContentDetectionEnabled
@property (nonatomic) int personSemanticsVersion; // ivar: _personSemanticsVersion
@property (nonatomic) BOOL smartCameraClassificationsEnabled; // ivar: _smartCameraClassificationsEnabled


-(id)init;
-(void)dealloc;


@end


#endif