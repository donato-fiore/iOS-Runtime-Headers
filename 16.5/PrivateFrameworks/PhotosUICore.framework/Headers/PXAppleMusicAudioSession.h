// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXAPPLEMUSICAUDIOSESSION_H
#define PXAPPLEMUSICAUDIOSESSION_H

@class NSString;
@protocol PXChangeObserver, OS_os_log, PXAppleMusicPlayerController, OS_dispatch_queue;


#import "PXAudioSession.h"

@interface PXAppleMusicAudioSession : PXAudioSession <PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSString *playerClientIdentifier; // ivar: _playerClientIdentifier
@property (retain, nonatomic) NSObject<PXAppleMusicPlayerController> *playerController; // ivar: _playerController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue
@property (nonatomic) BOOL stateQueue_hasSeekedOrPlayed; // ivar: _stateQueue_hasSeekedOrPlayed
@property (nonatomic) BOOL stateQueue_isPreparingToPlay; // ivar: _stateQueue_isPreparingToPlay
@property (nonatomic) NSInteger stateQueue_playerPlaybackState; // ivar: _stateQueue_playerPlaybackState
@property (nonatomic) BOOL stateQueue_shouldPlayWhenPrepared; // ivar: _stateQueue_shouldPlayWhenPrepared
@property (readonly) Class superclass;


-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 ;
-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 playerController:(id)arg5 ;
-(struct ? )currentTime;
-(void)_ensureCurrentPlayerClient;
-(void)_handlePlayerPreparedToPlay:(BOOL)arg0 error:(id)arg1 signpostID:(NSUInteger)arg2 ;
-(void)_handlePlayerTransactionDeclinedWithError:(id)arg0 ;
-(void)_stateQueue_handlePlayerPreparedToPlay:(BOOL)arg0 error:(id)arg1 signpostID:(NSUInteger)arg2 ;
-(void)_stateQueue_playFromTime:(struct ? )arg0 ;
-(void)_updateContentLoudness;
-(void)_updateIsAtEnd;
-(void)_updatePlayerVolume;
-(void)_updateStatus;
-(void)assetDidChange;
-(void)desiredPlayerVolumeDidChange;
-(void)errorDidChange;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pause;
-(void)performFinalCleanup;
-(void)play;
-(void)playFromTime:(struct ? )arg0 ;
-(void)prepareToPlay;


@end


#endif