// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSIRIINLINETTSSTREAMTASK_H
#define VSSIRIINLINETTSSTREAMTASK_H

@class NSOperation, NSString, NSError, NSMutableArray, VSInstrumentMetrics, NSDate, NSCondition, VSSpeechRequest, VSAudioData, SATTSSpeechSynthesisResource, SATTSSpeechSynthesisVoice;
@protocol VSDeviceTTSCoreDelegate, VSSpeechSpeakableProtocol, VSSpeechServiceDelegate;


#import "VSDeviceTTSCore.h"
#import "VSAudioPlaybackService.h"
#import "VSSiriInstrumentation.h"

@interface VSSiriInlineTTSStreamTask : NSOperation <VSDeviceTTSCoreDelegate, VSSpeechSpeakableProtocol>



@property (nonatomic) CGFloat bufferDurationLimit; // ivar: _bufferDurationLimit
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSSpeechServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSDeviceTTSCore *deviceTTSCore; // ivar: _deviceTTSCore
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *finalTimingInfo; // ivar: _finalTimingInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) NSDate *playbackBeginDate; // ivar: _playbackBeginDate
@property (retain, nonatomic) VSAudioPlaybackService *playbackServices; // ivar: _playbackServices
@property (retain, nonatomic) NSCondition *refreshTimeoutCondition; // ivar: _refreshTimeoutCondition
@property (retain, nonatomic) VSSpeechRequest *request; // ivar: _request
@property (retain, nonatomic) VSAudioData *serverAudio; // ivar: _serverAudio
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation; // ivar: _siriInstrumentation
@property (retain, nonatomic) NSString *streamID; // ivar: _streamID
@property (retain, nonatomic) SATTSSpeechSynthesisResource *streamingResource; // ivar: _streamingResource
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *streamingVoice; // ivar: _streamingVoice
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeoutValue; // ivar: _timeoutValue


-(BOOL)isSpeaking;
-(BOOL)waitForNewData:(CGFloat)arg0 ;
-(id)audioPowerProvider;
-(id)init;
-(id)initWithRequest:(id)arg0 withStreamID:(id)arg1 ;
-(id)taskHash;
-(id)voiceKey;
-(void)cancel;
-(void)dealloc;
-(void)handleBegin:(id)arg0 ;
-(void)handleChunk:(id)arg0 ;
-(void)handleEnd:(id)arg0 ;
-(void)handleStreamNotification:(id)arg0 ;
-(void)main;
-(void)reportFinish;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(void)reportTimingInfo;
-(void)resume;
-(void)signalNewDataWithError:(id)arg0 ;
-(void)startPlayback;
-(void)suspend;
-(void)synthesisCore:(id)arg0 didReceiveAudio:(id)arg1 ;
-(void)synthesisCore:(id)arg0 didReceiveWordTimingInfo:(id)arg1 ;


@end


#endif