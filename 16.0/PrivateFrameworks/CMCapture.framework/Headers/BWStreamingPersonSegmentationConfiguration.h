// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTREAMINGPERSONSEGMENTATIONCONFIGURATION_H
#define BWSTREAMINGPERSONSEGMENTATIONCONFIGURATION_H



#import "BWInferenceConfiguration.h"

@interface BWStreamingPersonSegmentationConfiguration : BWInferenceConfiguration

@property (nonatomic) BOOL cropColorInputToPrimaryCaptureRect; // ivar: _cropColorInputToPrimaryCaptureRect
@property (nonatomic) unsigned int inputRotationAngle; // ivar: _inputRotationAngle
@property (nonatomic) BOOL propagateColorInput; // ivar: _propagateColorInput
@property (nonatomic) BOOL useLowFrameRateOptimizedNetwork; // ivar: _useLowFrameRateOptimizedNetwork




@end


#endif