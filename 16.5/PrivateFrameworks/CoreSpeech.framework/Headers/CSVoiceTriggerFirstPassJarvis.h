// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERFIRSTPASSJARVIS_H
#define CSVOICETRIGGERFIRSTPASSJARVIS_H

@class NSMutableArray, CSPlainAudioFileWriter, CSAsset, NSString, CSKeywordAnalyzerNDEAPIResult, CSKeywordAnalyzerNDEAPI;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSSPGEndpointAnalyzerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSAudioProvider.h"
#import "CSAudioStream.h"
#import "CSAudioStreamHolding.h"
#import "CSSPGEndpointAnalyzer.h"
#import "CSVoiceTriggerFirstPassMetrics.h"
#import "CSOtherAppRecordingStateMonitor.h"
#import "CSVoiceTriggerRTModel.h"
#import "CSVoiceTriggerSecondChanceContext.h"
#import "CSSpeechManager.h"
#import "CSVoiceTriggerSecondPass.h"

@interface CSVoiceTriggerFirstPassJarvis : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate, CSActivationEventNotificationHandlerDelegate, CSSPGEndpointAnalyzerDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate>



@property (nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (retain, nonatomic) NSMutableArray *assetConfigWaitingBuffer; // ivar: _assetConfigWaitingBuffer
@property (retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) CSAudioProvider *audioProvider; // ivar: _audioProvider
@property (retain, nonatomic) CSAudioStream *audioStream; // ivar: _audioStream
@property (retain, nonatomic) CSAudioStreamHolding *audioStreamHolding; // ivar: _audioStreamHolding
@property (retain, nonatomic) CSAsset *currentAsset; // ivar: _currentAsset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSVoiceTriggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceId; // ivar: _deviceId
@property (nonatomic) NSUInteger earlyDetectFiredMachTime; // ivar: _earlyDetectFiredMachTime
@property (retain, nonatomic) CSSPGEndpointAnalyzer *endpointAnalyzer; // ivar: _endpointAnalyzer
@property (nonatomic) BOOL firstTimeAssetConfigured; // ivar: _firstTimeAssetConfigured
@property (retain, nonatomic) CSVoiceTriggerFirstPassMetrics *firstpassMetrics; // ivar: _firstpassMetrics
@property (nonatomic) BOOL hasReceivedNDEAPIResult; // ivar: _hasReceivedNDEAPIResult
@property (nonatomic) BOOL hasTriggerCandidate; // ivar: _hasTriggerCandidate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSecondPassRunning; // ivar: _isSecondPassRunning
@property (nonatomic) BOOL isSiriClientListening; // ivar: _isSiriClientListening
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPIResult *jarvisTriggerResult; // ivar: _jarvisTriggerResult
@property (nonatomic) NSUInteger jarvisVoiceTriggerTimeout; // ivar: _jarvisVoiceTriggerTimeout
@property (retain, nonatomic) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI; // ivar: _keywordAnalyzerNDEAPI
@property (nonatomic) NSInteger latestTriggerMode; // ivar: _latestTriggerMode
@property (nonatomic) NSUInteger numProcessedSamples; // ivar: _numProcessedSamples
@property (retain, nonatomic) CSOtherAppRecordingStateMonitor *otherAppRecordingStateMonitor; // ivar: _otherAppRecordingStateMonitor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CSVoiceTriggerRTModel *rtModel; // ivar: _rtModel
@property (retain, nonatomic) CSVoiceTriggerSecondChanceContext *secondChanceContext; // ivar: _secondChanceContext
@property (retain, nonatomic) CSSpeechManager *speechManager; // ivar: _speechManager
@property (readonly) Class superclass;
@property (retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // ivar: _voiceTriggerSecondPass


+(id)jarvisAudioLogDirectory;
+(id)jarvisAudioLoggingFilePath;
+(id)timeStampString;
-(id)init;
-(id)initWithSpeechManager:(id)arg0 otherAppRecordingStateMonitor:(id)arg1 ;
-(void)_cancelAudioStreamHold;
-(void)_clearTriggerCandidate;
-(void)_createSecondPassIfNeeded;
-(void)_didDetectKeywordFromDeviceId:(id)arg0 activationInfo:(id)arg1 triggerHostTime:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_didStartAudioStream;
-(void)_didStopAudioStream;
-(void)_handleAudioChunk:(id)arg0 ;
-(void)_handleJarvisVoiceTriggerFromDeviceId:(id)arg0 activationInfo:(id)arg1 triggerHostTime:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_handleSecondPassResult:(id)arg0 deviceId:(id)arg1 error:(id)arg2 ;
-(void)_holdAudioStreamWithTimeout:(CGFloat)arg0 ;
-(void)_notifyJarvisVoiceTriggerReject;
-(void)_reportJarvisVoiceTriggerFire;
-(void)_requestStartAudioStreamWitContext:(id)arg0 startStreamOption:(id)arg1 completion:(id)arg2 ;
-(void)_reset;
-(void)_setAsset:(id)arg0 ;
-(void)_teardownSecondPass;
-(void)activationEventNotificationHandler:(id)arg0 event:(id)arg1 completion:(id)arg2 ;
-(void)audioStreamProvider:(id)arg0 audioBufferAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 audioChunkForTVAvailable:(id)arg1 ;
-(void)audioStreamProvider:(id)arg0 didStopStreamUnexpectly:(NSInteger)arg1 ;
-(void)keywordAnalyzerNDEAPI:(id)arg0 hasResultAvailable:(id)arg1 forChannel:(NSUInteger)arg2 ;
-(void)reset;
-(void)setAsset:(id)arg0 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStartStreamWithContext:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 withEventUUID:(id)arg4 ;
-(void)siriClientBehaviorMonitor:(id)arg0 didStopStream:(id)arg1 withEventUUID:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStartStreamWithContext:(id)arg1 option:(id)arg2 ;
-(void)siriClientBehaviorMonitor:(id)arg0 willStopStream:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)spgEndpointAnalyzerDidDetectEndpoint:(id)arg0 ;
-(void)start;


@end


#endif