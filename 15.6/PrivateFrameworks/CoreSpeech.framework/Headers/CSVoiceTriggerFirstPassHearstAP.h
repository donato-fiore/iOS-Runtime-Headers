// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGERFIRSTPASSHEARSTAP_H
#define CSVOICETRIGGERFIRSTPASSHEARSTAP_H

@class NSMutableArray, CSAsset, NSString, CSOSTransaction;
@protocol CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CSAudioProvider.h"
#import "CSAudioStream.h"
#import "CSKeywordAnalyzerNDAPI.h"
#import "CSOpportuneSpeakEventMonitor.h"
#import "CSPhoneCallStateMonitor.h"
#import "CSSiriClientBehaviorMonitor.h"
#import "CSSpeechManager.h"
#import "CSVoiceTriggerEnabledMonitor.h"
#import "CSVoiceTriggerSecondPass.h"

@interface CSVoiceTriggerFirstPassHearstAP : NSObject <CSAudioStreamProvidingDelegate, CSKeywordAnalyzerNDAPIScoreDelegate, CSVoiceTriggerEnabledMonitorDelegate, CSSiriClientBehaviorMonitorDelegate, CSOpportuneSpeakEventMonitorDelegate>



@property (retain, nonatomic) CSAudioProvider *audioProvider; // ivar: _audioProvider
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) NSMutableArray *audioStreamHoldings; // ivar: _audioStreamHoldings
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAPHearstFirstPassEnabled; // ivar: _isAPHearstFirstPassEnabled
@property (nonatomic) BOOL isSecondPassRunning; // ivar: _isSecondPassRunning
@property (nonatomic) BOOL isSiriClientListening; // ivar: _isSiriClientListening
@property (nonatomic) BOOL isVoiceTriggerEnabled; // ivar: _isVoiceTriggerEnabled
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzerNDAPI; // ivar: _keywordAnalyzerNDAPI
@property (nonatomic) float keywordThreshold; // ivar: _keywordThreshold
@property (retain, nonatomic) NSString *opportuneSpeakAudioProviderUUID; // ivar: _opportuneSpeakAudioProviderUUID
@property (retain, nonatomic) CSOpportuneSpeakEventMonitor *opportuneSpeakEventMonitor; // ivar: _opportuneSpeakEventMonitor
@property (retain, nonatomic) CSPhoneCallStateMonitor *phoneCallStateMonitor; // ivar: _phoneCallStateMonitor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup; // ivar: _recordingWillStartGroup
@property (nonatomic) NSUInteger secondChanceHotTillMachTime; // ivar: _secondChanceHotTillMachTime
@property (retain, nonatomic) CSOSTransaction *secondPassTransaction; // ivar: _secondPassTransaction
@property (retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // ivar: _siriClientBehaviorMonitor
@property (retain, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (readonly) Class superclass;
@property (retain, nonatomic) CSVoiceTriggerEnabledMonitor *voiceTriggerEnabledMonitor; // ivar: _voiceTriggerEnabledMonitor
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // ivar: _voiceTriggerSecondPass


-(BOOL)_shouldHearstAPModeEnabled;
-(BOOL)_shouldProcessAudio;
-(id)init;
-(id)initWithSpeechManager:(id)arg0 voiceTriggerEnabledMonitor:(id)arg1 siriClientBehaviorMonitor:(id)arg2 opportuneSpeakEventMonitor:(id)arg3 phoneCallStateMonitor:(id)arg4 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg0 didReceiveEnabled:(BOOL)arg1 ;
-(void)_addAudioStreamHold:(id)arg0 ;
-(void)_cancelLastAudioStreamHold;
-(void)_createSecondPass;
-(void)_handleSecondPassResult:(NSUInteger)arg0 voiceTriggerInfo:(id)arg1 deviceId:(id)arg2 secondChanceCandidate:(BOOL)arg3 error:(id)arg4 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)_startListenWithAudioProviderUUID:(id)arg0 completion:(id)arg1 ;
-(void)_stopListening;
-(void)_teardownSecondPass;
-(void)_transitHearstAPEnable:(BOOL)arg0 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)keywordAnalyzerNDAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)opportuneSpeakEventMonitor:(id)arg0 didStreamStateChanged:(BOOL)arg1 ;
-(void)setAsset:(id)arg0 ;
-(void)shouldProcessAudio:(id)arg0 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)start;


@end


#endif