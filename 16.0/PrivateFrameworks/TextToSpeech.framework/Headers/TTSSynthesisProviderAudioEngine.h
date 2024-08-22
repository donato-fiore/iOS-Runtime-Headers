// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSYNTHESISPROVIDERAUDIOENGINE_H
#define TTSSYNTHESISPROVIDERAUDIOENGINE_H

@class NSNumber, AVAudioFormat, AVAudioUnit, AVAudioFile, AVAudioEngine;
@protocol TTSSynthesisProviderHandlerDelegate, OS_dispatch_queue, TTSSynthesisProviderAudioEngineProtocol;

#import <Foundation/Foundation.h>

#import "TTSSynthesisProviderRequestHandler.h"
#import "TTSSynthesisProviderAudioOutput.h"

@interface TTSSynthesisProviderAudioEngine : NSObject <TTSSynthesisProviderHandlerDelegate>



@property (retain, nonatomic) NSNumber *audioUnitObservedToken; // ivar: _audioUnitObservedToken
@property (readonly) AVAudioFormat *audioUnitOutputFormat;
@property (retain, nonatomic) AVAudioUnit *avAudioUnit; // ivar: _avAudioUnit
@property (copy, nonatomic) id *bufferCallback; // ivar: _bufferCallback
@property (retain, nonatomic) TTSSynthesisProviderRequestHandler *currentRequestHandler; // ivar: _currentRequestHandler
@property (nonatomic) NSUInteger deferredPlayerState; // ivar: _deferredPlayerState
@property (copy, nonatomic) id *deferredReplyBlock; // ivar: _deferredReplyBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *deferredStateChangeQueue; // ivar: _deferredStateChangeQueue
@property (weak, nonatomic) NSObject<TTSSynthesisProviderAudioEngineProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) AVAudioFile *file; // ivar: _file
@property (nonatomic) BOOL isSynthesizingSilently; // ivar: _isSynthesizingSilently
@property (copy, nonatomic) id *markerBlock; // ivar: _markerBlock
@property (retain, nonatomic) AVAudioEngine *offlineEngine; // ivar: _offlineEngine
@property (nonatomic) BOOL offlineRenderingInProgress; // ivar: _offlineRenderingInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *offlineRenderingQueue; // ivar: _offlineRenderingQueue
@property (retain, nonatomic) TTSSynthesisProviderAudioOutput *offlineToRealtimePlayer; // ivar: _offlineToRealtimePlayer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue; // ivar: _playbackQueue
@property (nonatomic) NSUInteger playerState; // ivar: _playerState


+(void)safelyCallStartCompletionForRequest:(id)arg0 didStart:(BOOL)arg1 ;
-(BOOL)_setupAudioUnitForVoice:(id)arg0 ;
-(BOOL)_setupAudioUnitForVoice:(id)arg0 remote:(BOOL)arg1 ;
-(BOOL)_setupOfflineEngine;
-(BOOL)_startPlaying;
-(BOOL)isSpeechActive;
-(float)markerByteOffsetScalingFactor;
-(id)audioUnit;
-(id)audioUnitOutputBus;
-(id)init;
-(void)_finishRequestRendering;
-(void)_handleMarkerPlayback:(id)arg0 forRequest:(id)arg1 ;
-(void)_pausePlaying;
-(void)_safelyCallDeferredReplyBlock:(BOOL)arg0 ;
-(void)_stopPlaying;
-(void)continueSpeechRequest:(id)arg0 ;
-(void)dealloc;
-(void)didGeneratePlayableBuffers:(id)arg0 forRequest:(id)arg1 ;
-(void)pauseAtMark:(NSInteger)arg0 reply:(id)arg1 ;
-(void)pauseImmediately:(id)arg0 ;
-(void)playBuffers:(id)arg0 forRequest:(id)arg1 ;
-(void)prewarmAudioUnitForVoice:(id)arg0 ;
-(void)receivedMarkers:(id)arg0 forRequest:(id)arg1 ;
-(void)renderSpeechRequest:(id)arg0 ;
-(void)renderWithObserver:(id)arg0 ;
-(void)startSynthesizingSpeechRequest:(id)arg0 reply:(id)arg1 ;
// -(void)startSynthesizingSpeechRequest:(id)arg0 withBufferCallback:(id)arg1 silently:(unk)arg2 reply:(BOOL)arg3  ;
-(void)stopAtMark:(NSInteger)arg0 reply:(id)arg1 ;
-(void)stopImmediately:(id)arg0 ;


@end


#endif