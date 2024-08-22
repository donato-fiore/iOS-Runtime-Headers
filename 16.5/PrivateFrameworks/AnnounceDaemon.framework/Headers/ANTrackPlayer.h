// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANTRACKPLAYER_H
#define ANTRACKPLAYER_H

@class NSString, NSURL, AVAudioSession, NSUUID, ANTimer, NSMutableArray, AVQueuePlayer;
@protocol ANTrackPlayerDelegate, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "ANAudioSessionManager.h"

@interface ANTrackPlayer : NSObject

@property (readonly, nonatomic) NSString *activelyPlayingAnnouncementID;
@property (retain, nonatomic) NSURL *audioFileAtStart; // ivar: _audioFileAtStart
@property (retain, nonatomic) NSURL *audioFileTransition; // ivar: _audioFileTransition
@property (readonly, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (readonly, nonatomic) ANAudioSessionManager *audioSessionManager; // ivar: _audioSessionManager
@property (weak) NSObject<ANTrackPlayerDelegate> *delegate; // ivar: _delegate
@property (weak) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, nonatomic) NSUUID *endpointUUID; // ivar: _endpointUUID
@property (copy, nonatomic) id *handler; // ivar: _handler
@property CGFloat interruptionStart; // ivar: _interruptionStart
@property (retain, nonatomic) ANTimer *interruptionTimer; // ivar: _interruptionTimer
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) NSObject<OS_dispatch_queue> *mainQueue; // ivar: _mainQueue
@property (readonly, nonatomic) int numberActiveTracks;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL playbackPending; // ivar: _playbackPending
@property (nonatomic) NSUInteger playbackState; // ivar: _playbackState
@property (readonly, nonatomic) NSMutableArray *playerItems; // ivar: _playerItems
@property (retain, nonatomic) ANTimer *playerTimer; // ivar: _playerTimer
@property CGFloat previousSkipGoesToPreviousTrackDelta; // ivar: _previousSkipGoesToPreviousTrackDelta
@property (retain, nonatomic) AVQueuePlayer *queuePlayer; // ivar: _queuePlayer
@property (nonatomic) BOOL readyToPlay; // ivar: _readyToPlay
@property CGFloat silenceBetweenEachTrack; // ivar: _silenceBetweenEachTrack
@property CGFloat trimStartTone; // ivar: _trimStartTone
@property CGFloat trimTransitionTone; // ivar: _trimTransitionTone


-(BOOL)_add:(id)arg0 announcementID:(id)arg1 trackType:(NSInteger)arg2 ;
-(BOOL)_addURL:(id)arg0 announcementID:(id)arg1 trackType:(NSInteger)arg2 ;
-(BOOL)_insertAudioBetween;
-(BOOL)add:(id)arg0 announcementID:(id)arg1 ;
-(id)_playerInfoForAVPlayerItem:(id)arg0 ;
-(id)_stringForPlayerItemStatus:(NSInteger)arg0 ;
-(id)_stringForPlayerStatus:(NSInteger)arg0 ;
-(id)_stringForTimeControlStatus:(NSInteger)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)initWithOptions:(NSUInteger)arg0 endpointUUID:(id)arg1 ;
-(id)prepareToPlay;
-(void)_addObserverForPlayer:(id)arg0 ;
-(void)_callDelegateWithBlock:(id)arg0 ;
-(void)_configureAudioSession;
-(void)_deregisterForNotificationsWithAudioSession:(id)arg0 ;
-(void)_handleInterruptionEndedAndShouldResume:(BOOL)arg0 ;
-(void)_handleReadyToPlayWithCompletionHandler:(id)arg0 ;
-(void)_playWithCompletionHandler:(id)arg0 ;
-(void)_registerForNotificationsWithAudioSession:(id)arg0 ;
-(void)_removeItemObserverForPlayer:(id)arg0 ;
-(void)_removeObserverForPlayer:(id)arg0 ;
-(void)_resumePlaybackAfterInterruptionAtTimeInterval:(CGFloat)arg0 ;
-(void)_stopAndUpdatePlaybackState:(NSUInteger)arg0 ;
-(void)_stopPlaybackAndFailWithItem:(id)arg0 error:(id)arg1 ;
-(void)audioSessionInterruptionHandler:(id)arg0 ;
-(void)audioSessionMediaServicesLostHandler:(id)arg0 ;
-(void)dealloc;
-(void)end;
-(void)handleInterruptionDelay:(CGFloat)arg0 ;
-(void)nextInternalSync;
-(void)nextWithCompletionHandler:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)playInternalWithCompletionHandler:(id)arg0 ;
-(void)playWithCompletionHandler:(id)arg0 ;
-(void)playerItemPlayedToEndHandler:(id)arg0 ;
-(void)playerRateChangedHandler:(id)arg0 ;
-(void)previousInternalSync;
-(void)previousWithCompletionHandler:(id)arg0 ;
-(void)stopInternalSync;
-(void)stopWithCompletionHandler:(id)arg0 ;


@end


#endif