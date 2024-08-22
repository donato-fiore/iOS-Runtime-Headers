// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARIMAGESENSORSETTINGS_H
#define ARIMAGESENSORSETTINGS_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ARVideoFormat.h"

@interface ARImageSensorSettings : NSObject <NSCopying>



@property (nonatomic) BOOL autoFocusEnabled; // ivar: _autoFocusEnabled
@property (nonatomic) BOOL backFacingCameraGeometricDistortionCorrectionEnabled; // ivar: _backFacingCameraGeometricDistortionCorrectionEnabled
@property (nonatomic) BOOL calibrationDataOutputEnabled; // ivar: _calibrationDataOutputEnabled
@property (nonatomic) BOOL dropsInitialFramesOutsideExposureTargetOffsetThreshold; // ivar: _dropsInitialFramesOutsideExposureTargetOffsetThreshold
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) float maxGainOverride; // ivar: _maxGainOverride
@property (nonatomic) NSUInteger maximumNumberOfInitialFramesDropped; // ivar: _maximumNumberOfInitialFramesDropped
@property (nonatomic) NSUInteger maximumNumberOfTrackedFaces; // ivar: _maximumNumberOfTrackedFaces
@property (copy, nonatomic) NSString *metaData; // ivar: _metaData
@property (nonatomic) BOOL mirrorVideoOutput; // ivar: _mirrorVideoOutput
@property (nonatomic) float negativeExposureTargetOffsetThreshold; // ivar: _negativeExposureTargetOffsetThreshold
@property (nonatomic) float positiveExposureTargetOffsetThreshold; // ivar: _positiveExposureTargetOffsetThreshold
@property (nonatomic) BOOL supportsCapturingHighResolutionFrames; // ivar: _supportsCapturingHighResolutionFrames
@property (retain, nonatomic) ARVideoFormat *videoFormat; // ivar: _videoFormat
@property (nonatomic) BOOL videoHDRAllowed; // ivar: _videoHDRAllowed
@property (nonatomic) BOOL visionDataOutputEnabled; // ivar: _visionDataOutputEnabled
@property (retain, nonatomic) NSDictionary *visionDataOutputParameters; // ivar: _visionDataOutputParameters


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithVideoFormat:(id)arg0 ;


@end


#endif