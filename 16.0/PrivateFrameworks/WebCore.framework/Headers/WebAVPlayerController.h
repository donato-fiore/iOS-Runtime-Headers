// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBAVPLAYERCONTROLLER_H
#define WEBAVPLAYERCONTROLLER_H

@class NSArray, NSString, AVValueTiming, AVPlayerController;

#import <Foundation/Foundation.h>

#import "WebAVMediaSelectionOption.h"

@interface WebAVPlayerController : NSObject {
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    BOOL _pictureInPictureInterrupted;
    BOOL _muted;
    WeakPtr<WebCore::PlaybackSessionModel, WTF::EmptyCounter> _delegate;
    WeakPtr<WebCore::PlaybackSessionInterfaceAVKit, WTF::EmptyCounter> _playbackSessionInterface;
    CGFloat _defaultPlaybackRate;
    CGFloat _rate;
    BOOL _liveStreamEventModePossible;
    BOOL _isScrubbing;
    BOOL _allowsPictureInPicture;
    CGFloat _seekToTime;
}


@property BOOL allowsExternalPlayback; // ivar: _allowsExternalPlayback
@property (retain) NSArray *audioMediaSelectionOptions; // ivar: _audioMediaSelectionOptions
@property BOOL canPause; // ivar: _canPause
@property BOOL canPlay; // ivar: _canPlay
@property BOOL canScanBackward; // ivar: _canScanBackward
@property (readonly) BOOL canScanForward;
@property BOOL canSeek; // ivar: _canSeek
@property (readonly) BOOL canSeekFrameBackward;
@property (readonly) BOOL canSeekFrameForward;
@property (readonly) BOOL canSeekToBeginning;
@property (readonly) BOOL canSeekToEnd;
@property BOOL canTogglePlayback; // ivar: _canTogglePlayback
@property CGSize contentDimensions; // ivar: _contentDimensions
@property CGFloat contentDuration; // ivar: _contentDuration
@property CGFloat contentDurationWithinEndTimes; // ivar: _contentDurationWithinEndTimes
@property (retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property (retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property CGFloat defaultPlaybackRate;
@property *void delegate;
@property (getter=isExternalPlaybackActive) BOOL externalPlaybackActive; // ivar: _externalPlaybackActive
@property (retain) NSString *externalPlaybackAirPlayDeviceLocalizedName; // ivar: _externalPlaybackAirPlayDeviceLocalizedName
@property NSInteger externalPlaybackType; // ivar: _externalPlaybackType
@property (readonly) BOOL hasAudioMediaSelectionOptions;
@property (readonly) BOOL hasContentChapters; // ivar: _hasContentChapters
@property BOOL hasEnabledAudio; // ivar: _hasEnabledAudio
@property BOOL hasEnabledVideo; // ivar: _hasEnabledVideo
@property (readonly) BOOL hasLegibleMediaSelectionOptions;
@property (readonly) BOOL hasMediaSelectionOptions;
@property BOOL hasVideo; // ivar: _hasVideo
@property (readonly) BOOL isScrubbing;
@property (readonly) BOOL isSeeking;
@property (retain) NSArray *legibleMediaSelectionOptions; // ivar: _legibleMediaSelectionOptions
@property CGFloat liveUpdateInterval; // ivar: _liveUpdateInterval
@property (retain) NSArray *loadedTimeRanges; // ivar: _loadedTimeRanges
@property (readonly) CGFloat maxTime;
@property (retain, nonatomic) AVValueTiming *maxTiming; // ivar: _maxTiming
@property (readonly) CGFloat minTime;
@property (retain, nonatomic) AVValueTiming *minTiming; // ivar: _minTiming
@property (getter=isMuted) BOOL muted;
@property (getter=isPictureInPictureInterrupted) BOOL pictureInPictureInterrupted;
@property (readonly, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property *void playbackSessionInterface;
@property (retain) AVPlayerController *playerControllerProxy; // ivar: _playerControllerProxy
@property (getter=isPlaying) BOOL playing;
@property (readonly, getter=isPlayingOnExternalScreen) BOOL playingOnExternalScreen;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // ivar: _playingOnSecondScreen
@property CGFloat rate;
@property (readonly) CGFloat seekToTime;
@property (retain) NSArray *seekableTimeRanges; // ivar: _seekableTimeRanges
@property CGFloat seekableTimeRangesLastModifiedTime; // ivar: _seekableTimeRangesLastModifiedTime
@property NSInteger status; // ivar: _status
@property (retain) AVValueTiming *timing; // ivar: _timing
@property CGFloat volume;


+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
-(BOOL)hasLiveStreamingContent;
-(BOOL)hasSeekableLiveStreamingContent;
-(CGFloat)currentTimeWithinEndTimes;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)player;
-(void)beginScanningBackward:(id)arg0 ;
-(void)beginScanningForward:(id)arg0 ;
-(void)beginScrubbing:(id)arg0 ;
-(void)dealloc;
-(void)endScanningBackward:(id)arg0 ;
-(void)endScanningForward:(id)arg0 ;
-(void)endScrubbing:(id)arg0 ;
-(void)gotoEndOfSeekableRanges:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause:(id)arg0 ;
-(void)play:(id)arg0 ;
-(void)seekByTimeInterval:(CGFloat)arg0 ;
-(void)seekByTimeInterval:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)seekChapterBackward:(id)arg0 ;
-(void)seekChapterForward:(id)arg0 ;
-(void)seekToBeginning:(id)arg0 ;
-(void)seekToEnd:(id)arg0 ;
-(void)seekToTime:(CGFloat)arg0 ;
-(void)seekToTime:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)setAllowsPictureInPicture:(BOOL)arg0 ;
-(void)setCurrentTimeWithinEndTimes:(CGFloat)arg0 ;
-(void)skipBackwardThirtySeconds:(id)arg0 ;
-(void)toggleMuted:(id)arg0 ;
-(void)togglePlayback:(id)arg0 ;
-(void)togglePlaybackEvenWhenInBackground:(id)arg0 ;
-(void)updateMinMaxTiming;
-(void)volumeChanged:(CGFloat)arg0 ;


@end


#endif