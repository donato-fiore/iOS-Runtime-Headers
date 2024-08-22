// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXAVPLAYERAUDIOSESSION_H
#define PXAVPLAYERAUDIOSESSION_H

@protocol OS_dispatch_queue;


#import "PXAudioSession.h"
#import "PXUpdater.h"

@interface PXAVPlayerAudioSession : PXAudioSession

@property (nonatomic) BOOL isPlaybackDesired; // ivar: _isPlaybackDesired
@property (nonatomic) BOOL isPreparingToPlay; // ivar: _isPreparingToPlay
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *playerQueue; // ivar: _playerQueue
@property (readonly, nonatomic) id *playerQueue_player; // ivar: _playerQueue_player
@property (nonatomic) float playerRate; // ivar: _playerRate
@property (nonatomic) ? playerTime; // ivar: _playerTime
@property (nonatomic) BOOL playerTimeHasChangedSinceSeeking; // ivar: _playerTimeHasChangedSinceSeeking
@property (retain, nonatomic) id *playerTimeObserver; // ivar: _playerTimeObserver
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


+(id)_audioSession;
+(struct OpaqueCMClock *)masterClock;
-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 ;
-(struct ? )currentTime;
-(void)_handleAVAsset:(id)arg0 audioMix:(id)arg1 info:(id)arg2 ;
-(void)_handlePlayerItemFinishedSeekingForPlayback:(id)arg0 ;
-(void)_handlePlayerTime:(struct ? )arg0 ;
-(void)_invalidatePlayerRate;
-(void)_invalidatePlayerVolume;
-(void)_invalidateStatus;
-(void)_loadDurationFromAsset:(id)arg0 ;
-(void)_performPlayerTransaction:(id)arg0 ;
-(void)_playerQueue_performPlayerTransaction:(id)arg0 ;
-(void)_prepareToPlayIfNeeded;
-(void)_update;
-(void)_updatePlayerRate;
-(void)_updatePlayerVolume;
-(void)_updateStatus;
-(void)cancelMediaRequest;
-(void)desiredPlayerVolumeDidChange;
-(void)didPerformChanges;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)performFinalCleanup;
-(void)play;
-(void)prepareToPlay;
-(void)requestMediaWithResultHandler:(id)arg0 ;


@end


#endif