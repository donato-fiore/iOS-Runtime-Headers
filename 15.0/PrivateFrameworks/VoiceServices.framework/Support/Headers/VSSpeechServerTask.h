// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPEECHSERVERTASK_H
#define VSSPEECHSERVERTASK_H

@class NSOperation, NSString, NSArray, NSError, VSInstrumentMetrics, VSSpeechInternalSettings, VSSpeechRequest, VSAudioData;
@protocol VSDeviceTTSCoreDelegate, VSOspreyTTSCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechEagerProtocol, VSSpeechServiceDelegate;


#import "VSCachingService.h"
#import "VSOspreyTTSCore.h"
#import "VSAudioPlaybackService.h"
#import "VSSiriServerConfiguration.h"
#import "VSSiriInstrumentation.h"
#import "VSSpeechServerTask.h"
#import "VSDeviceTTSCore.h"

@interface VSSpeechServerTask : NSOperation <VSDeviceTTSCoreDelegate, VSOspreyTTSCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechEagerProtocol>



@property (retain, nonatomic) VSCachingService *cachingService; // ivar: _cachingService
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *deferredTTSTimingInfo; // ivar: _deferredTTSTimingInfo
@property (weak, nonatomic) NSObject<VSSpeechServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings; // ivar: _internalSettings
@property (nonatomic) BOOL isEagerCache; // ivar: _isEagerCache
@property (retain, nonatomic) VSOspreyTTSCore *ospreyCore; // ivar: _ospreyCore
@property (retain, nonatomic) VSAudioPlaybackService *playbackService; // ivar: _playbackService
@property (nonatomic) _opaque_pthread_mutex_t racingMutex; // ivar: _racingMutex
@property (nonatomic) BOOL readyForEagerTask; // ivar: _readyForEagerTask
@property (retain, nonatomic) VSSpeechRequest *request; // ivar: _request
@property (retain, nonatomic) VSAudioData *serverAudio; // ivar: _serverAudio
@property (retain, nonatomic) VSSiriServerConfiguration *serverTTSConfig; // ivar: _serverTTSConfig
@property (nonatomic) BOOL shouldSpeak; // ivar: _shouldSpeak
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation; // ivar: _siriInstrumentation
@property (retain, nonatomic) VSSpeechServerTask *speakTask; // ivar: _speakTask
@property (nonatomic) BOOL speechStartReported; // ivar: _speechStartReported
@property (readonly) Class superclass;
@property (retain, nonatomic) VSDeviceTTSCore *synthesisCore; // ivar: _synthesisCore
@property (nonatomic) _opaque_pthread_cond_t timeoutCondition; // ivar: _timeoutCondition
@property (nonatomic) BOOL useDeviceSynthesis; // ivar: _useDeviceSynthesis
@property (nonatomic) BOOL useServerResponse; // ivar: _useServerResponse
@property (retain, nonatomic) NSArray *wordTimingInfo; // ivar: _wordTimingInfo


-(BOOL)isSpeaking;
-(BOOL)shouldDeferDeviceTTS;
-(id)audioPowerProvider;
-(id)eagerTaskHashForRequest:(id)arg0 ;
-(id)enqueueAudioData:(id)arg0 ;
-(id)handleDeviceSynthesis:(id)arg0 timingInfo:(id)arg1 ;
-(id)handleServerResponse:(id)arg0 timingInfo:(id)arg1 ;
-(id)init;
-(id)initWithRequest:(id)arg0 shouldSpeak:(BOOL)arg1 ;
-(id)taskHash;
-(id)voiceKey;
-(void)broadcastTimeoutCondition;
-(void)cancel;
-(void)dealloc;
-(void)fallbackToDeviceSynthesis;
-(void)main;
-(void)ospreyCore:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)ospreyCore:(id)arg0 didReceiveAudio:(id)arg1 wordTimingInfo:(id)arg2 ;
-(void)proceedWithServerTTS;
-(void)proceedWithSpeechCache:(id)arg0 ;
-(void)reportFinish;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(void)reportTimingInfo;
-(void)resume;
-(void)speakRetryPhrase;
-(void)suspend;
-(void)synthesisCore:(id)arg0 didReceiveAudio:(id)arg1 ;
-(void)synthesisCore:(id)arg0 didReceiveWordTimingInfo:(id)arg1 ;
-(void)writeAudioIfNeeded:(id)arg0 ;


@end


#endif