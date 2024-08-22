// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOINJECTIONREMORAENGINE_H
#define CSAUDIOINJECTIONREMORAENGINE_H

@class CSAudioCircularBuffer, NSString, NSUUID;
@protocol CSAudioInjectionEngineDelegate, OS_dispatch_queue;


#import "CSAudioInjectionEngine.h"
#import "CSAudioInjectionDevice.h"
#import "CSKeywordAnalyzerNDAPI.h"

@interface CSAudioInjectionRemoraEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate>



@property (retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // ivar: _circularBuffer
@property (weak, nonatomic) CSAudioInjectionDevice *connectedDevice; // ivar: _connectedDevice
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAudioInjectionEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForwarding; // ivar: _isForwarding
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // ivar: _keywordAnalyzer
@property (nonatomic) NSUInteger lastDetectedVoiceTriggerBeginSampleCount; // ivar: _lastDetectedVoiceTriggerBeginSampleCount
@property (nonatomic) NSUInteger lastForwardedSampleCount; // ivar: _lastForwardedSampleCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) BOOL voiceTriggerEnabled; // ivar: _voiceTriggerEnabled


-(BOOL)alwaysOnVoiceTriggerEnabled;
-(BOOL)injectAudio:(id)arg0 ;
// -(BOOL)injectAudio:(id)arg0 withScaleFactor:(float)arg1 playbackStarted:(id)arg2 completion:(unk)arg3  ;
-(BOOL)isAlwaysOnVoiceTriggerAvailable;
-(BOOL)isRecording;
-(id)initWithStreamHandleId:(NSUInteger)arg0 ;
-(void)attachDevice:(id)arg0 ;
-(void)audioEngineAudioChunkForTvAvailable:(id)arg0 audioChunk:(id)arg1 ;
-(void)audioEngineBufferAvailable:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 buffer:(id)arg2 remoteVAD:(id)arg3 atTime:(NSUInteger)arg4 ;
-(void)audioEngineDidStartRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 successfully:(BOOL)arg2 error:(id)arg3 ;
-(void)audioEngineDidStopRecord:(id)arg0 audioStreamHandleId:(NSUInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)setAlwaysOnVoiceTriggerEnabled:(BOOL)arg0 ;
-(void)start;
-(void)startAudioStreamWithOption:(id)arg0 ;
-(void)stop;
-(void)stopAudioStream;


@end


#endif