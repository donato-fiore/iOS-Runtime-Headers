// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPHASESOUNDEVENT_H
#define REPHASESOUNDEVENT_H

@class PHASEEngine, PHASESource, PHASEListener, PHASEMixerParameters, PHASESoundEventNodeDefinition, AVAudioSession, AUAudioUnit, PHASEExternalOutputStream, PHASEExternalOutputStreamController, PHASESoundEvent;
@protocol PHASEExternalStreamDelegate;

#import <Foundation/Foundation.h>

#import "REPHASESoundPrepareState.h"

@interface REPHASESoundEvent : NSObject <PHASEExternalStreamDelegate>

 {
    queue<REPHASESoundEventCommandState, std::deque<REPHASESoundEventCommandState>> _commandQueue;
    NSUInteger _state;
    atomic<bool> _isStopping;
    PHASEEngine *_engine;
    PHASESource *_source;
    PHASEListener *_listener;
    PHASEMixerParameters *_mixerParameters;
    PHASESoundEventNodeDefinition *_rootNode;
    recursive_mutex _stateChangeMutex;
    recursive_mutex _commandQueueMutex;
    optional<double> _stationaryTime;
    id *_soundEventFactory;
}


@property (readonly) AVAudioSession *audioSession; // ivar: _audioSession
@property (retain, nonatomic) AUAudioUnit *audioUnit; // ivar: _audioUnit
@property (nonatomic) float cachedDirectSendLevel; // ivar: _cachedDirectSendLevel
@property (nonatomic) float cachedPlaybackSpeed; // ivar: _cachedPlaybackSpeed
@property (nonatomic) float cachedReverbSendLevel; // ivar: _cachedReverbSendLevel
@property (retain, nonatomic) PHASEExternalOutputStream *externalStream; // ivar: _externalStream
@property (readonly, nonatomic) PHASEExternalOutputStreamController *externalStreamController; // ivar: _externalStreamController
@property (copy, nonatomic) id *playbackStateChangeHandler; // ivar: _playbackStateChangeHandler
@property (retain, nonatomic) REPHASESoundPrepareState *prepareState; // ivar: _prepareState
@property (readonly, nonatomic) PHASESoundEvent *soundEvent; // ivar: _soundEvent
@property (readonly) NSUInteger state;


+(void)controllerWithEngine:(id)arg0 streamUUID:(id)arg1 mixerDefinition:(id)arg2 source:(id)arg3 listener:(id)arg4 normalizationMode:(int)arg5 calibrationMode:(int)arg6 calibrationLevel:(CGFloat)arg7 callback:(id)arg8 ;
+(void)eventWithEngine:(id)arg0 streamUUID:(id)arg1 mixerDefinition:(id)arg2 source:(id)arg3 listener:(id)arg4 normalizationMode:(int)arg5 calibrationMode:(int)arg6 calibrationLevel:(CGFloat)arg7 audioSession:(id)arg8 callback:(id)arg9 ;
+(void)eventWithEngine:(id)arg0 streamUUID:(id)arg1 prepareState:(id)arg2 maximumFramesToRender:(unsigned int)arg3 audioSession:(id)arg4 callback:(id)arg5 ;
-(BOOL)_pause;
-(BOOL)_resume;
-(BOOL)_seekToTime:(CGFloat)arg0 ;
-(BOOL)_startWithCompletionHandler:(id)arg0 ;
-(BOOL)_stopAndDestroy;
-(BOOL)seekToTime:(CGFloat)arg0 ;
-(NSUInteger)changeToState:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithAudioSession:(id)arg0 ;
-(id)initWithEngine:(id)arg0 rootNode:(id)arg1 source:(id)arg2 listener:(id)arg3 mixerParameters:(id)arg4 audioSession:(id)arg5 outError:(*id)arg6 ;
-(id)initWithSoundEventFactory:(id)arg0 ;
-(id)paramForKey:(id)arg0 ;
-(void)pause;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)resume;
-(void)stopAndDestroy;
-(void)stream:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)updateCommandQueue;


@end


#endif