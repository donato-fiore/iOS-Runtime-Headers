// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSELFTRIGGERDETECTOR_H
#define CSSELFTRIGGERDETECTOR_H

@class NSString, CSAudioTimeConverter, CSAsset, CSPolicy, CSKeywordAnalyzerNDAPI, NSHashTable, CSContinuousVoiceTriggerConfig;
@protocol CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSAudioStreamProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioStream.h"
#import "CSSpeechManager.h"

@interface CSSelfTriggerDetector : NSObject <CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate>



@property (retain, nonatomic) NSString *audioProviderUUID; // ivar: _audioProviderUUID
@property (nonatomic) NSUInteger audioSourceType; // ivar: _audioSourceType
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (weak, nonatomic) NSObject<CSAudioStreamProviding> *audioTapProvider; // ivar: _audioTapProvider
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // ivar: _audioTimeConverter
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CSPolicy *enablePolicy; // ivar: _enablePolicy
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isListenPollingStarting; // ivar: _isListenPollingStarting
@property (nonatomic) BOOL isSiriClientListening; // ivar: _isSiriClientListening
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer; // ivar: _keywordAnalyzer
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSUInteger outputAudioChannel; // ivar: _outputAudioChannel
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CSContinuousVoiceTriggerConfig *selfTriggerConfig; // ivar: _selfTriggerConfig
@property (nonatomic) BOOL selfTriggerEnabled; // ivar: _selfTriggerEnabled
@property (weak, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (readonly) Class superclass;


-(BOOL)_shouldReuseBuiltInAudioProvider;
-(id)initWithTargetQueue:(id)arg0 audioTapProvider:(id)arg1 audioSourceType:(NSUInteger)arg2 ;
-(void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg0 ;
-(void)_handleEnablePolicyEvent:(BOOL)arg0 ;
-(void)_keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)_startListenPolling;
-(void)_startListenPollingWithInterval:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_startListenWithCompletion:(id)arg0 ;
-(void)_stopListening;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)start;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif