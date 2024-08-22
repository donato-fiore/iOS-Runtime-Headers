// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWIRISMOVIEINFO_H
#define BWIRISMOVIEINFO_H

@class NSString, NSURL, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "BWStats.h"
#import "FigCaptureSemanticStyle.h"
#import "FigCaptureMovieFileRecordingSettings.h"

@interface BWIrisMovieInfo : NSObject <NSCopying>

 {
    ? _stillTimeOffsetToVideoPrerollStartInMilliseconds;
    ? _stillTimeOffsetToVideoPrerollStopInMilliseconds;
    ? _stillTimeOffsetToAudioPrerollStartInMilliseconds;
    ? _stillTimeOffsetToAudioPrerollStopInMilliseconds;
}


@property (nonatomic) ? audioOffset; // ivar: _audioOffset
@property (nonatomic) ? beginTrimMasterPTS; // ivar: _beginTrimMasterPTS
@property (readonly, nonatomic) BOOL containsTrims;
@property (copy, nonatomic) BWStats *fileCoordinatorToWriterMovingWindowLatencyStats; // ivar: _fileCoordinatorToWriterMovingWindowLatencyStats
@property (nonatomic, getter=isFinalEnqueuedIrisRequest) BOOL finalEnqueuedIrisRequest; // ivar: _finalEnqueuedIrisRequest
@property (nonatomic, getter=isFinalReferenceMovie) BOOL finalReferenceMovie; // ivar: _finalReferenceMovie
@property (nonatomic) BOOL isOverlappingRequest; // ivar: _isOverlappingRequest
@property (nonatomic) BOOL limitStillImageTransformDuringVitalityPlayback; // ivar: _limitStillImageTransformDuringVitalityPlayback
@property (readonly, nonatomic) NSString *livePhotoMetadataStillImageKeyFrameSettingsID;
@property (nonatomic) ? masterMovieStartTime; // ivar: _masterMovieStartTime
@property (retain, nonatomic) NSURL *masterMovieURL; // ivar: _masterMovieURL
@property (nonatomic, getter=isMomentCaptureMovieRecording) BOOL momentCaptureMovieRecording; // ivar: _isMomentCaptureMovieRecording
@property (nonatomic) ? momentCaptureMovieRecordingMasterEndTime; // ivar: _momentCaptureMovieRecordingMasterEndTime
@property (nonatomic) ? movieEndTime; // ivar: _movieEndTime
@property (nonatomic) ? movieEndingVideoPTS; // ivar: _movieEndingVideoPTS
@property (copy, nonatomic) NSArray *movieLevelMetadataForSDOFOriginalMovie; // ivar: _movieLevelMetadataForSDOFOriginalMovie
@property (nonatomic) ? movieStartTime; // ivar: _movieStartTime
@property (nonatomic) BOOL movieStartTimeRequiresCutting; // ivar: _movieStartTimeRequiresCutting
@property (nonatomic) ? movieTrimEndTime; // ivar: _movieTrimEndTime
@property (nonatomic) ? movieTrimStartTime; // ivar: _movieTrimStartTime
@property (nonatomic) CGSize nonDestructiveCropSize; // ivar: _nonDestructiveCropSize
@property (readonly, nonatomic) int numberOfRequestedVariants;
@property (nonatomic, getter=isOriginalPhotoRecording) BOOL originalPhotoRecording; // ivar: _originalPhotoRecording
@property (retain, nonatomic) NSURL *outputMovieURL; // ivar: _outputMovieURL
@property (copy, nonatomic) NSURL *outputURLForSDOFOriginalMovie; // ivar: _outputURLForSDOFOriginalMovie
@property (nonatomic) unsigned int requestedSDOFVariants; // ivar: _requestedSDOFVariants
@property (readonly, nonatomic) FigCaptureSemanticStyle *semanticStyle; // ivar: _semanticStyle
@property (readonly, nonatomic) FigCaptureMovieFileRecordingSettings *settings; // ivar: _settings
@property (nonatomic) BOOL spatialOverCaptureExpected; // ivar: _spatialOverCaptureExpected
@property (retain, nonatomic) NSURL *spatialOverCaptureMasterMovieURL; // ivar: _spatialOverCaptureMasterMovieURL
@property (retain, nonatomic) NSURL *spatialOverCaptureOutputMovieURL; // ivar: _spatialOverCaptureOutputMovieURL
@property (retain, nonatomic) NSURL *spatialOverCaptureTemporaryMovieURL; // ivar: _spatialOverCaptureTemporaryMovieURL
@property (copy, nonatomic) BWStats *stagingNodeOverallVideoFrameReceptionStats; // ivar: _stagingNodeOverallVideoFrameReceptionStats
@property (copy, nonatomic) BWStats *stagingNodeValveActiveVideoFrameReceptionStats; // ivar: _stagingNodeValveActiveVideoFrameReceptionStats
@property (readonly, nonatomic) CGFloat stillImageCaptureAbsoluteStartTime; // ivar: _stillImageCaptureAbsoluteStartTime
@property (readonly, nonatomic) ? stillImageCaptureHostTime; // ivar: _stillImageCaptureHostTime
@property (nonatomic) ? stillImageCaptureTime; // ivar: _stillImageCaptureTime
@property (readonly, nonatomic) int stillImageCaptureType; // ivar: _stillImageCaptureType
@property (nonatomic) BOOL stillImageEncoderKeyFrameEmitted; // ivar: _stillImageEncoderKeyFrameEmitted
@property (nonatomic) BOOL stillImageVISKeyFrameTagged; // ivar: _stillImageVISKeyFrameTagged
@property (nonatomic) ? stillTimeOffsetToAudioPrerollStartTime; // ivar: _stillTimeOffsetToAudioPrerollStartTime
@property (nonatomic) ? stillTimeOffsetToAudioPrerollStopTime; // ivar: _stillTimeOffsetToAudioPrerollStopTime
@property (nonatomic) ? stillTimeOffsetToVideoPrerollStartTime; // ivar: _stillTimeOffsetToVideoPrerollStartTime
@property (nonatomic) ? stillTimeOffsetToVideoPrerollStopTime; // ivar: _stillTimeOffsetToVideoPrerollStopTime
@property (retain, nonatomic) NSURL *temporaryMovieURL; // ivar: _temporaryMovieURL
@property (copy, nonatomic) NSURL *temporaryURLForSDOFOriginalMovie; // ivar: _temporaryURLForSDOFOriginalMovie
@property (nonatomic) float vitalityScore; // ivar: _vitalityScore
@property (nonatomic, getter=isVitalityScoreValid) BOOL vitalityScoreValid; // ivar: _vitalityScoreValid
@property (nonatomic) unsigned int vitalityScoringVersion; // ivar: _vitalityScoringVersion


+(id)emptyIrisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg0 ;
+(id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg0 stillImageCaptureTime:(struct ? )arg1 stillImageCaptureHostTime:(struct ? )arg2 stillImageCaptureAbsoluteStartTime:(CGFloat)arg3 stillImageCaptureType:(int)arg4 originalPhotoRecording:(BOOL)arg5 semanticStyle:(id)arg6 ;
+(id)livePhotoMetadataStillImageKeyFrameSettingsIDForSettingsID:(NSInteger)arg0 isOriginalPhotoRecording:(BOOL)arg1 ;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg0 ;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg0 stillImageCaptureTime:(struct ? )arg1 stillImageCaptureHostTime:(struct ? )arg2 stillImageCaptureAbsoluteStartTime:(CGFloat)arg3 stillImageCaptureType:(int)arg4 originalPhotoRecording:(BOOL)arg5 semanticStyle:(id)arg6 ;
-(id)copyMovieInfosForRequestedSDOFVariants;
-(id)copySpatialOverCaptureVariant;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;
-(void)setMomentCaptureRecordingStillImageCaptureHostTimeOverride:(struct ? )arg0 stillImageCaptureTimeOverride:(struct ? )arg1 ;


@end


#endif