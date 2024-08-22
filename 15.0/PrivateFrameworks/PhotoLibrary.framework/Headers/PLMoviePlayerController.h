// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMOVIEPLAYERCONTROLLER_H
#define PLMOVIEPLAYERCONTROLLER_H

@class AVPlayerItem, NSString, AVPlayer;
@protocol PLMoviePlayerControllerDelegate;

#import <Foundation/Foundation.h>

#import "PLTVOutWindow.h"
#import "PLMoviePlayerView.h"

@interface PLMoviePlayerController : NSObject {
    AVPlayerItem *_playerItem;
    PLTVOutWindow *_tvOutWindow;
    BOOL _hasPendingTime;
    CGFloat _pendingTime;
    NSUInteger _pendingTimeSnapOption;
    BOOL _forceUpdateCurrentTime;
    BOOL _isExternalPlayback;
    BOOL _exited;
    CGFloat _lastSetCurrentTimeTime;
    BOOL _isSeeking;
    NSUInteger _backgroundTaskId;
    BOOL _audioSessionActive;
    NSString *_originalAudioCategory;
}


@property (nonatomic) BOOL TVOutEnabled; // ivar: _TVOutEnabled
@property (readonly, nonatomic) NSUInteger bufferingState; // ivar: _bufferingState
@property (nonatomic) CGFloat currentTime;
@property (nonatomic) NSObject<PLMoviePlayerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic, setter=_setForceDisableTVOut:) BOOL forceDisableTVOut; // ivar: _forceDisableTVOut
@property (nonatomic) BOOL isActiveController; // ivar: _isActiveController
@property (readonly, nonatomic) BOOL isPreparedForPlayback; // ivar: _isPreparedForPlayback
@property (readonly, nonatomic) float playbackRate;
@property (readonly, nonatomic) NSUInteger playbackState; // ivar: _playbackState
@property (readonly, retain, nonatomic) AVPlayer *player; // ivar: _player
@property (readonly, retain, nonatomic) PLMoviePlayerView *view; // ivar: _view


+(BOOL)_isNetworkSupportedPath:(id)arg0 ;
+(BOOL)_isStreamableAsset:(id)arg0 ;
+(id)AVAssetURLWithPath:(id)arg0 ;
-(BOOL)_allowsExternalPlayback;
-(BOOL)isExternalPlayback;
-(BOOL)videoOutActive;
-(NSInteger)externalPlaybackType;
-(id)_asset;
-(id)init;
-(void)_delayedUpdateFromPendingTime;
-(void)_didEnterBackgroundNotification:(id)arg0 ;
-(void)_didLoadValueOfKey:(id)arg0 forAsset:(id)arg1 ;
-(void)_dispatchOnMainThreadWithBlock:(id)arg0 ;
-(void)_displayVideoView;
-(void)_exitPlayer:(int)arg0 ;
-(void)_loadAsset:(id)arg0 ;
-(void)_pausePlaybackForNotification;
-(void)_playbackFailedWithError:(id)arg0 ;
-(void)_playerItemDidReachEndNotification:(id)arg0 ;
-(void)_playerItemFailedToPlayToEnd:(id)arg0 ;
-(void)_playerItemFailedToPlayToEndNotification:(id)arg0 ;
-(void)_playerRateDidChange:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_restoreTVOutVideoIfNecessary;
-(void)_screenDidConnect:(id)arg0 ;
-(void)_screenDidDisconnect:(id)arg0 ;
-(void)_serverConnectionDidDie:(id)arg0 ;
-(void)_setupPlayer;
-(void)_setupTVOutWindow;
-(void)_simpleRemoteNotification:(id)arg0 ;
-(void)_streamBufferFull;
-(void)_streamLikelyToKeepUp;
-(void)_streamRanDry;
-(void)_streamUnlikelyToKeepUp;
-(void)_tearDownPlayer;
-(void)_tearDownTVOutWindow;
-(void)_unregisterForNotifications;
-(void)_updateBackgroundViewInformation;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(void)_updateFromPendingTime;
-(void)_willBeginSuspendAnimationNotification:(id)arg0 ;
-(void)_willEnterForegroundNotification:(id)arg0 ;
-(void)_willResignNotification:(id)arg0 ;
-(void)_willSuspendNotification:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeActiveController;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)pauseDueToInsufficientData;
-(void)play;
-(void)playDueToEnoughData;
-(void)playFromBeginning;
-(void)requestToBecomeActiveController;
-(void)requestToResignAsActiveController;
-(void)stop;
-(void)tearDownTVOutWindow;
-(void)willResignAsActiveController;


@end


#endif