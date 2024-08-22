// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREMOVIEFILERECORDINGSETTINGS_H
#define FIGCAPTUREMOVIEFILERECORDINGSETTINGS_H

@class NSDictionary, NSArray, NSData, NSURL;


#import "FigCaptureRecordingSettings.h"

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings

@property (copy, nonatomic) NSDictionary *audioSettings; // ivar: _audioSettings
@property (nonatomic) ? bravoCameraSelectionConfigurationForRecording; // ivar: _bravoCameraSelectionConfigurationForRecording
@property (nonatomic) BOOL debugMetadataSidecarFileEnabled; // ivar: _debugMetadataSidecarFileEnabled
@property (nonatomic, getter=isIrisMovieRecording) BOOL irisMovieRecording; // ivar: _irisMovieRecording
@property (nonatomic, getter=isIrisRecording) BOOL irisRecording; // ivar: _irisRecording
@property (nonatomic) ? movieFragmentInterval; // ivar: _movieFragmentInterval
@property (copy, nonatomic) NSArray *movieLevelMetadata; // ivar: _movieLevelMetadata
@property (nonatomic) NSUInteger movieStartTimeOverride; // ivar: _movieStartTimeOverride
@property (retain, nonatomic) NSData *personSegmentationBackgroundColorCube; // ivar: _personSegmentationBackgroundColorCube
@property (retain, nonatomic) NSData *personSegmentationForegroundColorCube; // ivar: _personSegmentationForegroundColorCube
@property (nonatomic) BOOL personSegmentationRenderingEnabled; // ivar: _personSegmentationRenderingEnabled
@property (nonatomic) BOOL recordVideoOrientationAndMirroringChanges; // ivar: _recordVideoOrientationAndMirroringChanges
@property (nonatomic) BOOL sendPreviewIOSurface; // ivar: _sendPreviewIOSurface
@property (copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadata; // ivar: _spatialOverCaptureMovieLevelMetadata
@property (copy, nonatomic) NSURL *spatialOverCaptureMovieURL; // ivar: _spatialOverCaptureMovieURL
@property (nonatomic) BOOL videoMirrored; // ivar: _videoMirrored
@property (nonatomic) int videoOrientation; // ivar: _videoOrientation
@property (nonatomic) BOOL videoSTFEnabled; // ivar: _videoSTFEnabled
@property (copy, nonatomic) NSDictionary *videoSettings; // ivar: _videoSettings


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif