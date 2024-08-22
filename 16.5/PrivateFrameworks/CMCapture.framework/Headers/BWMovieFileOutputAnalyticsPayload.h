// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWMOVIEFILEOUTPUTANALYTICSPAYLOAD_H
#define BWMOVIEFILEOUTPUTANALYTICSPAYLOAD_H

@class NSDictionary, NSString;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWMovieFileOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (retain, nonatomic) NSDictionary *APSModeByPortType; // ivar: _APSModeByPortType
@property (nonatomic) int activeDeviceMask; // ivar: _activeDeviceMask
@property (nonatomic) BOOL afDriverShortOccurred; // ivar: _afDriverShortOccurred
@property (nonatomic) float averageSystemPressureLevel; // ivar: _averageSystemPressureLevel
@property (retain, nonatomic) NSDictionary *cameraSwitchStatistics; // ivar: _cameraSwitchStatistics
@property (nonatomic) BOOL cinematicVideoEnabled; // ivar: _cinematicVideoEnabled
@property (nonatomic) BWCoreAnalyticsMovieRecordingCinematicVideoStatistics cinematicVideoMovieRecordingStats; // ivar: _cinematicVideoMovieRecordingStats
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition; // ivar: _devicePosition
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat durationFront; // ivar: _durationFront
@property (nonatomic) CGFloat durationFrontSuperWide; // ivar: _durationFrontSuperWide
@property (nonatomic) CGFloat durationRearSuperWide; // ivar: _durationRearSuperWide
@property (nonatomic) CGFloat durationRearTele; // ivar: _durationRearTele
@property (nonatomic) CGFloat durationRearWide; // ivar: _durationRearWide
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hdrVideo; // ivar: _hdrVideo
@property (nonatomic) int height; // ivar: _height
@property (nonatomic) int maxSystemPressureLevel; // ivar: _maxSystemPressureLevel
@property (nonatomic) float maxUIZoomDuringVideoRecording; // ivar: _maxUIZoomDuringVideoRecording
@property (nonatomic) float minUIZoomDuringVideoRecording; // ivar: _minUIZoomDuringVideoRecording
@property (nonatomic) NSInteger movieFileSize; // ivar: _movieFileSize
@property (nonatomic) float nominalFramerate; // ivar: _nominalFramerate
@property (nonatomic) NSUInteger numberOfFramesDroppedDueToFormatWriterQueueFull; // ivar: _numberOfFramesDroppedDueToFormatWriterQueueFull
@property (nonatomic) NSUInteger numberOfISPFrames; // ivar: _numberOfISPFrames
@property (nonatomic) NSUInteger numberOfISPFramesDropped; // ivar: _numberOfISPFramesDropped
@property (nonatomic) float percentageOfAvailableDataStorageAfterWritingMovie; // ivar: _percentageOfAvailableDataStorageAfterWritingMovie
@property (nonatomic) BOOL proresVideo; // ivar: _proresVideo
@property (nonatomic) *BWCoreAnalyticsMovieRecordingSphereAFStatistics sphereAFStatistics; // ivar: _sphereAFStatistics
@property (retain, nonatomic) NSDictionary *sphereModeByPortType; // ivar: _sphereModeByPortType
@property (nonatomic) float startingUIZoom; // ivar: _startingUIZoom
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemPressureFactors; // ivar: _systemPressureFactors
@property (nonatomic) NSInteger timeToCriticalSystemPressureInMS; // ivar: _timeToCriticalSystemPressureInMS
@property (nonatomic) NSInteger totalNANDReadBytesDuringRecording; // ivar: _totalNANDReadBytesDuringRecording
@property (nonatomic) NSInteger totalNANDWriteBytesDuringRecording; // ivar: _totalNANDWriteBytesDuringRecording
@property (nonatomic) NSUInteger totalNumberOfFramesDropped; // ivar: _totalNumberOfFramesDropped
@property (retain, nonatomic) NSDictionary *variableFrameRateStatistics; // ivar: _variableFrameRateStatistics
@property (retain, nonatomic) NSString *videoCodec; // ivar: _videoCodec
@property (nonatomic) BOOL videoMirrored; // ivar: _videoMirrored
@property (nonatomic) int videoOrientation; // ivar: _videoOrientation
@property (nonatomic) *BWCoreAnalyticsMovieRecordingVideoSTFStatistics videoSTFStatistics; // ivar: _videoSTFStatistics
@property (nonatomic) int width; // ivar: _width


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif