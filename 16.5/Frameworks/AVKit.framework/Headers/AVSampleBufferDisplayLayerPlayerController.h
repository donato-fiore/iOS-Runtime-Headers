// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSAMPLEBUFFERDISPLAYLAYERPLAYERCONTROLLER_H
#define AVSAMPLEBUFFERDISPLAYLAYERPLAYERCONTROLLER_H

@protocol AVPictureInPictureSampleBufferPlaybackDelegate;


#import "AVPlayerController.h"
#import "AVValueTiming.h"
#import "AVPictureInPictureController.h"
#import "AVSampleBufferDisplayLayerPlaybackDelegateAdapter.h"
#import "AVPictureInPicturePlaybackState.h"
#import "AVObservationController.h"

@interface AVSampleBufferDisplayLayerPlayerController : AVPlayerController {
    AVValueTiming *_timing;
}


@property (nonatomic) ? contentTimeRange; // ivar: _contentTimeRange
@property (nonatomic) CGSize enqueuedBufferDimensions; // ivar: _enqueuedBufferDimensions
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isPictureInPictureAvailable) BOOL pictureInPictureAvailable; // ivar: _pictureInPictureAvailable
@property (weak, nonatomic) AVPictureInPictureController *pictureInPictureController; // ivar: _pictureInPictureController
@property (weak, nonatomic) NSObject<AVPictureInPictureSampleBufferPlaybackDelegate> *playbackDelegate; // ivar: _playbackDelegate
@property (retain, nonatomic) AVSampleBufferDisplayLayerPlaybackDelegateAdapter *playbackDelegateAdapter; // ivar: _playbackDelegateAdapter
@property (copy, nonatomic) AVPictureInPicturePlaybackState *playbackState; // ivar: _playbackState
@property (retain, nonatomic) AVObservationController *sbdlObservationController; // ivar: _sbdlObservationController
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger timeControlStatus; // ivar: _timeControlStatus


+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingMaxTiming;
+(id)keyPathsForValuesAffectingPaused;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingTimeControlStatus;
+(id)keyPathsForValuesAffectingTiming;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasSeekableLiveStreamingContent;
-(BOOL)isPictureInPicturePossible;
-(BOOL)isPlaying;
-(CGFloat)_effectiveRate;
-(CGFloat)contentDuration;
-(CGFloat)contentDurationWithinEndTimes;
-(CGFloat)currentTimeWithinEndTimes;
-(CGFloat)rate;
-(id)init;
-(id)maxTiming;
-(id)minTiming;
-(id)timing;
-(struct ? )_currentSBDLTime;
-(struct CGSize )contentDimensions;
-(void)_startObservation;
-(void)_updateBackgroundAudioPlaybackPolicy;
-(void)_updatePlaybackStateTiming;
-(void)_updateStatus;
-(void)dealloc;
-(void)invalidatePlaybackState;
-(void)pauseForAllCoordinatedPlaybackParticipants:(BOOL)arg0 ;
-(void)seekByTimeInterval:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)setPictureInPictureInterrupted:(BOOL)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg0 ;


@end


#endif