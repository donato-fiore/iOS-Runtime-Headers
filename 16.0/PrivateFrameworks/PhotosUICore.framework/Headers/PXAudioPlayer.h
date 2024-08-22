// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAUDIOPLAYER_H
#define PXAUDIOPLAYER_H

@class NSTimer, NSString, NSError;
@protocol PXChangeObserver, PXAudioSessionAVAudioSessionDelegate, PXAudioPlayerAVAudioSessionDelegate, PXAudioAsset, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXAudioSession.h"
#import "PXCurrentTimeRecord.h"

@interface PXAudioPlayer : PXObservable <PXChangeObserver, PXAudioSessionAVAudioSessionDelegate>

 {
    ? _updateFlags;
}


@property (weak, nonatomic) NSObject<PXAudioPlayerAVAudioSessionDelegate> *audioSessionDelegate; // ivar: _audioSessionDelegate
@property (retain, nonatomic) NSObject<PXAudioAsset> *currentAsset; // ivar: _currentAsset
@property (nonatomic) ? currentAssetDuration; // ivar: _currentAssetDuration
@property (readonly, nonatomic) PXAudioSession *currentAudioSession;
@property (readonly, nonatomic) ? currentTime;
@property (retain, nonatomic) NSTimer *currentTimeRecordUpdateTimer; // ivar: _currentTimeRecordUpdateTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredPlayState; // ivar: _desiredPlayState
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAtEnd; // ivar: _isAtEnd
@property (retain, nonatomic) PXCurrentTimeRecord *mainQueue_currentTimeRecord; // ivar: _mainQueue_currentTimeRecord
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionsQueue; // ivar: _sessionsQueue
@property (retain, nonatomic, setter=sessionsQueue_setCurrentSession:) PXAudioSession *sessionsQueue_currentSession; // ivar: _sessionsQueue_currentSession
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) float targetLoudnessInLKFS; // ivar: _targetLoudnessInLKFS
@property (readonly, nonatomic) float volume; // ivar: _volume


-(id)AVAudioSessionForAudioSession:(id)arg0 ;
-(id)_createAudioSessionForAsset:(id)arg0 startTime:(struct ? )arg1 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)lcdStringForSize:(struct CGSize )arg0 ;
-(void)_handleCurrentTimeRecordUpdateTimer;
-(void)_invalidateCurrentSessionState;
-(void)_invalidateCurrentTimeRecord;
-(void)_invalidateCurrentTimeRecordUpdateTimer;
-(void)_invalidateState;
-(void)_sessionsQueue_handleOutgoingSession:(id)arg0 ;
-(void)_sessionsQueue_updateCurrentSessionStateWithDesiredPlayState:(NSInteger)arg0 ;
-(void)_update;
-(void)_updateCurrentSessionState;
-(void)_updateCurrentTimeRecord;
-(void)_updateCurrentTimeRecordUpdateTimer;
-(void)_updateState;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pause;
-(void)performChanges:(id)arg0 ;
-(void)playFromStartTime:(struct ? )arg0 ;
-(void)replayFromTime:(struct ? )arg0 ;


@end


#endif