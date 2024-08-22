// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAUDIOSESSION_H
#define PXAUDIOSESSION_H

@class NSNumber, NSString, NSError;
@protocol PXInternalMutableAudioSession, PXAudioSessionState, PXAudioAsset, PXAudioSessionAVAudioSessionDelegate, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXAudioSession : PXObservable <PXInternalMutableAudioSession, PXAudioSessionState>

 {
    PXUpdater *_updater;
}


@property (readonly, nonatomic) NSObject<PXAudioAsset> *asset; // ivar: _asset
@property (weak, nonatomic) NSObject<PXAudioSessionAVAudioSessionDelegate> *audioSessionDelegate; // ivar: _audioSessionDelegate
@property (readonly, nonatomic) NSNumber *contentLoudnessInLKFS; // ivar: _contentLoudnessInLKFS
@property (readonly, nonatomic) NSNumber *contentPeakDecibels; // ivar: _contentPeakDecibels
@property (readonly, nonatomic) ? currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) float desiredPlayerVolume; // ivar: _desiredPlayerVolume
@property (nonatomic) ? duration; // ivar: _duration
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAtEnd; // ivar: _isAtEnd
@property (nonatomic) BOOL isReadyToPlay; // ivar: _isReadyToPlay
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) ? startTime; // ivar: _startTime
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) float targetLoudnessInLKFS; // ivar: _targetLoudnessInLKFS
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)adoptAssetIfPossible:(id)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 volume:(float)arg1 startTime:(struct ? )arg2 queue:(id)arg3 audioSessionDelegate:(id)arg4 ;
-(id)mutableChangeObject;
-(id)state;
-(void)_invalidateDesiredPlayerVolume;
-(void)_updateDesiredPlayerVolume;
-(void)didPerformChanges;
-(void)pause;
-(void)performChanges:(id)arg0 ;
-(void)performFinalCleanup;
-(void)performInternalChanges:(id)arg0 ;
-(void)play;
-(void)playFromTime:(struct ? )arg0 ;
-(void)prepareToPlay;


@end


#endif