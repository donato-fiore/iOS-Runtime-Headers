// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSPEECHSYNTHESIZER_H
#define SVXSPEECHSYNTHESIZER_H

@class VSSpeechSynthesizer, NSMutableArray, NSMutableSet, NSString;
@protocol VSSpeechSynthesizerDelegate, SVXModuleInstance, SVXClientAudioSystemServicing;

#import <Foundation/Foundation.h>

#import "SVXModule.h"
#import "SVXSessionManager.h"
#import "SVXAudioStreamingAnnouncer.h"
#import "SVXSpeechSynthesisAnnouncer.h"
#import "SVXSpeechSynthesisConfiguration.h"
#import "SVXSpeechSynthesisContext.h"

@interface SVXSpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate, SVXModuleInstance>

 {
    SVXModule *_module;
    VSSpeechSynthesizer *_impl;
    SVXSessionManager *_sessionManager;
    SVXAudioStreamingAnnouncer *_audioStreamingAnnouncer;
    SVXSpeechSynthesisAnnouncer *_announcer;
    SVXSpeechSynthesisConfiguration *_currentConfiguration;
    SVXSpeechSynthesisContext *_currentSpeakingContext;
    id<SVXClientAudioSystemServicing> *_clientAudioSystemServicing;
    NSMutableArray *_pendingContexts;
    NSMutableSet *_synthesizingContexts;
    BOOL _needsPrewarm;
    NSUInteger _ttsSignpostInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)creationContextFromInstrumentMetrics:(id)arg0 ;
-(BOOL)_continueContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_startPresynthesizedAudioRequestForContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_startSpeechRequestForContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_useStreamingAudio;
-(NSUInteger)_numberOfContexts;
-(id)_configuredSpeechRequestForContext:(id)arg0 ;
-(id)_speechSynthesizer;
-(id)initWithModule:(id)arg0 ;
-(void)_beginUpdateAudioPowerWithCompletion:(id)arg0 ;
-(void)_cancelPendingContextsAtIndexes:(id)arg0 ;
-(void)_cancelPendingContextsWithOperationType:(NSInteger)arg0 ;
-(void)_cancelPendingSpeakingContextWithRequest:(id)arg0 ;
-(void)_cancelPendingSpeakingContextsWithPriorityBelow:(NSInteger)arg0 ;
-(void)_configureWithConfiguration:(id)arg0 ;
-(void)_endUpdateAudioPower;
-(void)_enqueueContext:(id)arg0 ;
-(void)_finalizeContext:(id)arg0 withResultType:(NSInteger)arg1 utterance:(id)arg2 error:(id)arg3 ;
-(void)_handleDidFinishPresynthesizedAudioRequest:(id)arg0 instrumentMetrics:(id)arg1 error:(id)arg2 ;
-(void)_handleDidFinishSpeakingWithSpeechRequest:(id)arg0 instrumentMetrics:(id)arg1 ;
-(void)_handleDidFinishSpeakingWithSpeechRequest:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleDidFinishSynthesizingForSpeechRequest:(id)arg0 instrumentMetrics:(id)arg1 error:(id)arg2 ;
-(void)_handleDidGenerateAudioChunkData:(id)arg0 forSpeechRequest:(id)arg1 ;
-(void)_handleDidReceiveSpeechWordTimingInfoArray:(id)arg0 forSpeechRequest:(id)arg1 ;
-(void)_handleDidStartPresynthesizedAudioRequest:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)_handleDidStartSpeakingWithSpeechRequest:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)_handleDidStopPresynthesizedAudioRequest:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_prewarm;
-(void)_prewarmWithContext:(id)arg0 ;
-(void)_processPendingContexts;
-(void)_startContext:(id)arg0 ;
-(void)_stopCurrentSpeakingContextWithInterruptionBehavior:(NSInteger)arg0 ;
-(void)_stopCurrentSpeakingContextWithRequest:(id)arg0 withInterruptionBehavior:(NSInteger)arg1 ;
-(void)addListener:(id)arg0 ;
-(void)beginUpdateAudioPowerWithCompletion:(id)arg0 ;
-(void)cancelPendingRequests;
-(void)cancelRequest:(id)arg0 ;
-(void)dealloc;
-(void)endUpdateAudioPower;
// -(void)enqueueRequest:(id)arg0 languageCode:(id)arg1 voiceName:(id)arg2 gender:(NSInteger)arg3 audioSessionID:(unsigned int)arg4 preparation:(id)arg5 finalization:(unk)arg6 taskTracker:(id)arg7 analyticsContext:(unk)arg8  ;
-(void)languageCodeChanged:(id)arg0 ;
-(void)outputVoiceChanged:(id)arg0 ;
-(void)prewarm;
-(void)prewarmRequest:(id)arg0 ;
-(void)removeListener:(id)arg0 ;
-(void)speechSynthesizer:(id)arg0 didFinishPresynthesizedAudioRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didStartPresynthesizedAudioRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStopPresynthesizedAudioRequest:(id)arg1 atEnd:(BOOL)arg2 error:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 withRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 withSynthesisRequest:(id)arg1 didGenerateAudioChunk:(id)arg2 ;
-(void)startWithModuleInstanceProvider:(id)arg0 platformDependencies:(id)arg1 ;
-(void)stopCurrentRequestWithInterruptionBehavior:(NSInteger)arg0 ;
-(void)stopRequest:(id)arg0 withInterruptionBehavior:(NSInteger)arg1 ;
-(void)stopWithModuleInstanceProvider:(id)arg0 ;
// -(void)synthesizeRequest:(id)arg0 audioChunkHandler:(id)arg1 taskTracker:(unk)arg2 analyticsContext:(id)arg3 completion:(id)arg4  ;
-(void)updateWithConfiguration:(id)arg0 ;


@end


#endif