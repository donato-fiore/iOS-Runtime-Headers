// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMAVPLAYER_H
#define IMAVPLAYER_H

@class AVAudioSession, NSTimer, MPRemoteCommandCenter, NSString, UIWindow, MPNowPlayingInfoCenter, NSURL, NSMutableArray, AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol AVAudioSessionDelegate, IMAVPlayerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "IMPlayerChapterInfo.h"
#import "IMPlayerItem.h"
#import "IMPlayerManifest.h"
#import "IMAVPlayerVideoViewController.h"

@interface IMAVPlayer : NSObject <AVAudioSessionDelegate>



@property (readonly, nonatomic) float actualRate;
@property (readonly, nonatomic) BOOL airplayVideoActive;
@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (nonatomic) NSUInteger autoStop; // ivar: _autoStop
@property (nonatomic) CGFloat autoStopMediaTime; // ivar: _autoStopMediaTime
@property (readonly, nonatomic) CGFloat autoStopTimeRemaining;
@property (retain, nonatomic) NSTimer *autoStopTimer; // ivar: _autoStopTimer
@property (nonatomic) CGFloat autoStopTimerPausedTime; // ivar: _autoStopTimerPausedTime
@property (nonatomic) CGFloat autoStopTimerTime; // ivar: _autoStopTimerTime
@property (nonatomic) NSUInteger backgroundTask; // ivar: _backgroundTask
@property (readonly, nonatomic) BOOL bufferEmpty;
@property (readonly, nonatomic) NSUInteger chapterCount;
@property (nonatomic) NSUInteger chapterMetadataMode; // ivar: _chapterMetadataMode
@property (retain, nonatomic) MPRemoteCommandCenter *commandCenter; // ivar: _commandCenter
@property (readonly, nonatomic) IMPlayerChapterInfo *currentChapter;
@property (nonatomic) NSUInteger currentChapterIndex; // ivar: _currentChapterIndex
@property (retain, nonatomic) IMPlayerItem *currentItem; // ivar: _currentItem
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMAVPlayerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) ? delegateFlags; // ivar: _delegateFlags
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) BOOL externalDisplay; // ivar: _externalDisplay
@property (retain, nonatomic) UIWindow *externalVideoWindow; // ivar: _externalVideoWindow
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fadeOutTimer; // ivar: _fadeOutTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *hdcpTimer; // ivar: _hdcpTimer
@property (retain, nonatomic) MPNowPlayingInfoCenter *infoCenter; // ivar: _infoCenter
@property (readonly, nonatomic) BOOL isPlaybackActive;
@property (readonly, nonatomic) BOOL isPlaybackRequested;
@property (readonly, nonatomic) BOOL isScanning;
@property (readonly, nonatomic) BOOL isSeeking;
@property (nonatomic) BOOL isUpdatingCurrentTime; // ivar: _isUpdatingCurrentTime
@property (retain, nonatomic) NSURL *lastPlayingURL; // ivar: _lastPlayingURL
@property (readonly, nonatomic) NSUInteger loadState;
@property (readonly, nonatomic) CGFloat loadedDuration;
@property (nonatomic) int loops; // ivar: _loops
@property (readonly, nonatomic) IMPlayerManifest *manifest; // ivar: _manifest
@property (retain, nonatomic) id *nowPlayingInfoPeriodicTimeObserver; // ivar: _nowPlayingInfoPeriodicTimeObserver
@property (retain, nonatomic) NSMutableArray *observingTimes; // ivar: _observingTimes
@property (retain, nonatomic) id *periodicTimeObserver; // ivar: _periodicTimeObserver
@property (copy, nonatomic) id *playbackErrorFallback; // ivar: _playbackErrorFallback
@property (nonatomic) NSUInteger playbackSpeed; // ivar: _playbackSpeed
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (nonatomic) BOOL providesVideoView; // ivar: _providesVideoView
@property (nonatomic) float requestedRate;
@property (nonatomic) float scanRate; // ivar: _scanRate
@property (nonatomic) BOOL scrubbing; // ivar: _scrubbing
@property (nonatomic) BOOL seekForward; // ivar: _seekForward
@property (retain, nonatomic) NSTimer *seekTimer; // ivar: _seekTimer
@property (nonatomic) BOOL shouldEnforceHDCP;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) BOOL stateChangeInterruptionFlag; // ivar: _stateChangeInterruptionFlag
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeObserverNeedsUpdate; // ivar: _timeObserverNeedsUpdate
@property (retain, nonatomic) NSMutableArray *timeObservers; // ivar: _timeObservers
@property (retain, nonatomic) AVPlayerLayer *videoLayer; // ivar: _videoLayer
@property (nonatomic) NSUInteger videoScale; // ivar: _videoScale
@property (retain, nonatomic) IMAVPlayerVideoViewController *videoViewController; // ivar: _videoViewController
@property (nonatomic) float volume;
@property (nonatomic) BOOL wasInterrupted; // ivar: _wasInterrupted
@property (nonatomic) BOOL wasInterruptedEarly; // ivar: _wasInterruptedEarly


+(BOOL)isMaxSpeed:(NSUInteger)arg0 ;
+(BOOL)isMinSpeed:(NSUInteger)arg0 ;
+(NSUInteger)decrementPlaybackSpeed:(NSUInteger)arg0 ;
+(NSUInteger)incrementPlaybackSpeed:(NSUInteger)arg0 ;
+(NSUInteger)playbackSpeedForRate:(float)arg0 ;
+(float)rateForPlaybackSpeed:(NSUInteger)arg0 ;
+(id)sharedPlayer;
+(void)performOnAvSessionQueue:(id)arg0 ;
+(void)performOnMainQueue:(id)arg0 ;
-(BOOL)_pause;
-(BOOL)_pause:(BOOL)arg0 ;
-(BOOL)_validatePlay;
-(BOOL)hasChapters;
-(BOOL)isAtEnd;
-(BOOL)isDurationReady;
-(BOOL)isStalled;
-(BOOL)nextRemote;
-(BOOL)pause;
-(BOOL)play;
-(BOOL)previousRemote;
-(BOOL)previousRemote:(BOOL)arg0 ;
-(BOOL)stop;
-(BOOL)togglePlayPause;
-(float)storedVolume;
-(id)init;
-(id)initWithCommandCenter:(id)arg0 infoCenter:(id)arg1 audioSession:(id)arg2 ;
-(id)stillFrameAt:(CGFloat)arg0 maxSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(struct ? )_skipToPreviousThreshold;
-(void)_assertMainThread;
-(void)_clearAutoStopTimmer;
-(void)_configureAudioSessionWithCompletion:(id)arg0 ;
-(void)_createPlayer;
-(void)_failedToPlayToEndNotification:(id)arg0 ;
-(void)_pauseAutoStopTimer;
-(void)_postNotificationName:(id)arg0 userInfo:(id)arg1 ;
-(void)_primitiveSetCurrentItem:(id)arg0 ;
-(void)_setChapterIndex:(NSUInteger)arg0 ;
-(void)_setupAutoStopTimer;
-(void)_updateForCurrentRateAndTimeControlStatus;
-(void)_updatePlayerForCurrentItem;
-(void)_updatePlayerTimeCompleted:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_updatePlayerToCurrentTime:(id)arg0 ;
-(void)addCMTimeObserver:(struct ? )arg0 ;
-(void)addPeriodicTimeObservers;
-(void)addTimeObserver:(CGFloat)arg0 ;
-(void)becomeActiveMediaPlayer;
-(void)beginBackgroundTask;
-(void)cancelFadeOut;
-(void)cancelSeek;
-(void)clearAutoStop;
-(void)clearTimeObservers;
-(void)configureAudioSessionAndSetActive:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)dealloc;
-(void)endBackgroundTask;
-(void)endSeek;
-(void)enforceAutoStopForMode:(NSUInteger)arg0 ;
-(void)fadeOut;
-(void)fadeOutWithDuration:(CGFloat)arg0 ;
-(void)fadeOutWithDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)forceTriggerTimeObserverAt:(CGFloat)arg0 ;
-(void)handleAudioSessionInterruption:(id)arg0 ;
-(void)handlePlayerInterruption:(id)arg0 ;
-(void)hdcpTimer:(id)arg0 ;
-(void)nextChapter;
-(void)nextMediaItem;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)onChaptersLoaded:(id)arg0 ;
-(void)onRouteChange:(id)arg0 ;
-(void)onSeekTimer:(id)arg0 ;
// -(void)play:(id)arg0 interruptionEvent:(unk)arg1  ;
-(void)playerItemDidReachEnd:(id)arg0 ;
-(void)previousChapter;
-(void)previousMediaItem;
-(void)registerAVSessionCategoryAndMode;
-(void)removeAllTimeObservers;
-(void)removeCMTimeObserver:(struct ? )arg0 ;
-(void)removePeriodicTimeObservers;
-(void)removeTimeObserver:(CGFloat)arg0 ;
-(void)scanWithRate:(float)arg0 ;
-(void)sendItemEndedNotification;
-(void)sendPeriodicTimeEvent:(CGFloat)arg0 duration:(CGFloat)arg1 finished:(BOOL)arg2 ;
-(void)setupChapterAtTime:(CGFloat)arg0 ;
-(void)setupChapterTimeObservers;
-(void)setupTimeObserver:(id)arg0 ;
-(void)sleep;
-(void)startSeek:(BOOL)arg0 ;
-(void)stopObservingPlayer:(id)arg0 ;
-(void)stopObservingPlayerItem:(id)arg0 ;
-(void)toggleVideoAspectScaleMode;
-(void)triggerTimeObserverAt:(id)arg0 ;
-(void)updateInfoCenterPlaybackState;
-(void)updateNowPlayingDurationSnapshot;
-(void)updateNowPlayingMetadataIncludingArtwork:(BOOL)arg0 ;
-(void)updateRateForCurrentState;
-(void)updateRateForCurrentState:(id)arg0 ;
-(void)updateTimeObservers;


@end


#endif