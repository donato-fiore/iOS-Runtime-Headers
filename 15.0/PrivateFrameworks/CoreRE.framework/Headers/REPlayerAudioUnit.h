// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REPLAYERAUDIOUNIT_H
#define REPLAYERAUDIOUNIT_H

@class AUAudioUnit, AUAudioUnitBusArray, AVAudioEngine, AVAudioMixerNode, AVAudioPlayerNode;
@protocol OS_dispatch_queue;



@interface REPlayerAudioUnit : AUAudioUnit {
    AUAudioUnitBusArray *_outputBusArray;
    AVAudioEngine *_engine;
    AVAudioMixerNode *_sampleRateConverter;
    AVAudioPlayerNode *_playingNode;
    atomic<bool> _didHitStop;
    atomic<bool> _looping;
    id *_resource;
    mutex _engineConfigurationMutex;
    shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
    id *_playingNodeRenderBlock;
    id *_sampleRateConverterRenderBlock;
    *OpaqueAudioComponentInstance _playingNodeAudioUnit;
    NSUInteger _currentMachStartTime;
    ? _currentEventTime;
    atomic<REAudioPlaybackState> _playbackState;
    atomic<unsigned int> _playedFrames;
    atomic<bool> _shouldDispatchCompletion;
    vector<float, std::allocator<float>> _fadeWindow;
    NSUInteger _currentFadeIndex;
    atomic<FadeState> _nextFadeState;
    FadeState _currentFadeState;
}


@property (readonly) BOOL isPrepared;
@property (nonatomic) unsigned char missedPlayStrategy; // ivar: _missedPlayStrategy
@property (copy) id *playbackStateDidChange; // ivar: _playbackStateDidChange
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // ivar: _serialWorkQueue
@property (readonly) NSUInteger state;


-(BOOL)allocateRenderResourcesAndReturnError:(*id)arg0 ;
-(CGFloat)sampleRate;
-(id)channelCapabilities;
-(id)initWithComponentDescription:(struct AudioComponentDescription )arg0 options:(unsigned int)arg1 error:(*id)arg2 ;
-(id)internalRenderBlock:(SEL)arg0 ;
-(id)outputBusses;
-(void)_playbackCompletionCallback;
-(void)changePlaybackStateTo:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deallocateRenderResources;
-(void)prepareToPlayBuffer:(id)arg0 withLayoutTag:(unsigned int)arg1 looping:(BOOL)arg2 ;
-(void)prepareToPlayFile:(id)arg0 withLayoutTag:(unsigned int)arg1 looping:(BOOL)arg2 ;
-(void)scheduleMachStartTime:(NSUInteger)arg0 fromEventTime:(struct ? )arg1 useMissedPlayStrategy:(BOOL)arg2 ;
-(void)stop;


@end


#endif