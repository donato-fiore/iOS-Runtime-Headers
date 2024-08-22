// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGEARCAPTUREOPTIONS_H
#define VGEARCAPTUREOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VGEarCaptureOptions : NSObject

@property (nonatomic) float bboxVisibilityThreshold; // ivar: _bboxVisibilityThreshold
@property (retain, nonatomic) NSString *debugDataPath; // ivar: _debugDataPath
@property (nonatomic) float earOcclusionThreshold; // ivar: _earOcclusionThreshold
@property (nonatomic) float earPresenceThreshold; // ivar: _earPresenceThreshold
@property (nonatomic) unsigned int imageHeight; // ivar: _imageHeight
@property (nonatomic) unsigned int imageWidth; // ivar: _imageWidth
@property (nonatomic) float landmarkVisibilityThreshold; // ivar: _landmarkVisibilityThreshold
@property (nonatomic) float motionBlurFilterThreshold; // ivar: _motionBlurFilterThreshold
@property (nonatomic) float percentileDetectionConfidence; // ivar: _percentileDetectionConfidence
@property (nonatomic) NSUInteger pitchCount; // ivar: _pitchCount
@property (nonatomic) float pitchLimit; // ivar: _pitchLimit
@property (nonatomic) float pitchSensitivity; // ivar: _pitchSensitivity
@property (nonatomic) BOOL useMotionBlurFilter; // ivar: _useMotionBlurFilter
@property (nonatomic) BOOL writeDebugData; // ivar: _writeDebugData
@property (nonatomic) NSUInteger yawCount; // ivar: _yawCount
@property (nonatomic) float yawLimit; // ivar: _yawLimit
@property (nonatomic) float yawSensitivity; // ivar: _yawSensitivity


+(BOOL)defaultUseMotionBlurFilter;
+(NSUInteger)defaultPitchCount;
+(NSUInteger)defaultYawCount;
+(float)defaultAngleSensitivity;
+(float)defaultBboxVisibilityThreshold;
+(float)defaultEarOcclusionThreshold;
+(float)defaultEarPresenceThreshold;
+(float)defaultLandmarkVisibilityThreshold;
+(float)defaultMotionBlurFilterThreshold;
+(float)defaultPercentileDetectionConfidence;
+(float)defaultPitchLimit;
+(float)defaultYawLimit;
+(id)defaultPitchAngles;
+(id)defaultYawAngles;
+(id)getAnglesListWithCount:(unsigned int)arg0 limit:(float)arg1 ;
+(unsigned int)defaultImageHeight;
+(unsigned int)defaultImageWidth;
-(id)description;
-(id)init;


@end


#endif