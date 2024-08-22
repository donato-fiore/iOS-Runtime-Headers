// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWLIVEPHOTOMOVIEANALYTICSPAYLOAD_H
#define BWLIVEPHOTOMOVIEANALYTICSPAYLOAD_H

@class NSString, NSDictionary;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWLivePhotoMovieAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>



@property (nonatomic) int clientIDType; // ivar: _clientIDType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int errorStatus; // ivar: _errorStatus
@property (nonatomic) CGFloat fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds; // ivar: _fileCoordinatorToWriterMovingWindowLatencyAverageInMilliseconds
@property (nonatomic) CGFloat fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds; // ivar: _fileCoordinatorToWriterMovingWindowLatencyMaximumInMilliseconds
@property (nonatomic) CGFloat fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds; // ivar: _fileCoordinatorToWriterMovingWindowLatencyMinimumInMilliseconds
@property (nonatomic) NSInteger fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples; // ivar: _fileCoordinatorToWriterMovingWindowLatencyNumberOfSamples
@property (nonatomic) CGFloat fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds; // ivar: _fileCoordinatorToWriterMovingWindowLatencyStandardDeviationInMilliseconds
@property (nonatomic) BOOL hasStillImagePTS; // ivar: _hasStillImagePTS
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL longPressMovie; // ivar: _longPressMovie
@property (nonatomic) CGFloat movieDurationInSeconds; // ivar: _movieDurationInSeconds
@property (nonatomic) BOOL originalRecording; // ivar: _originalRecording
@property (nonatomic) BOOL overlappingCapture; // ivar: _overlappingCapture
@property (nonatomic) BOOL recordingSucceeded; // ivar: _recordingSucceeded
@property (nonatomic) int sessionStatus; // ivar: _sessionStatus
@property (nonatomic) CGFloat stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeOverallAverageTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) CGFloat stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeOverallMaximumTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) CGFloat stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeOverallMinimumTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) NSInteger stagingNodeOverallNumberOfVideoFramesReceived; // ivar: _stagingNodeOverallNumberOfVideoFramesReceived
@property (nonatomic) CGFloat stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeOverallStandardDeviationOfTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) CGFloat stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeValveActiveAverageTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) CGFloat stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeValveActiveMaximumTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) CGFloat stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeValveActiveMinimumTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) NSInteger stagingNodeValveActiveNumberOfVideoFramesReceived; // ivar: _stagingNodeValveActiveNumberOfVideoFramesReceived
@property (nonatomic) CGFloat stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds; // ivar: _stagingNodeValveActiveStandardDeviationOfTimeBetweenVideoFramesInMilliseconds
@property (nonatomic) CGFloat stillTimeOffsetInSeconds; // ivar: _stillTimeOffsetInSeconds
@property (nonatomic) CGFloat stillTimeOffsetToAudioPrerollStartInMilliseconds; // ivar: _stillTimeOffsetToAudioPrerollStartInMilliseconds
@property (nonatomic) CGFloat stillTimeOffsetToAudioPrerollStopInMilliseconds; // ivar: _stillTimeOffsetToAudioPrerollStopInMilliseconds
@property (nonatomic) CGFloat stillTimeOffsetToVideoPrerollStartInMilliseconds; // ivar: _stillTimeOffsetToVideoPrerollStartInMilliseconds
@property (nonatomic) CGFloat stillTimeOffsetToVideoPrerollStopInMilliseconds; // ivar: _stillTimeOffsetToVideoPrerollStopInMilliseconds
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *transitionVitalityFeatures; // ivar: _transitionVitalityFeatures
@property (nonatomic) CGFloat transitionVitalityScoreV1; // ivar: _transitionVitalityScoreV1


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif