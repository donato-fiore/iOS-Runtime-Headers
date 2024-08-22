// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSOSPREYTTSCORE_H
#define VSOSPREYTTSCORE_H

@class NSOperation, NSCondition, NSError, VSInstrumentMetrics, VSSpeechInternalSettings, VSSpeechRequest, VSVoiceAsset, VSVoiceResourceAsset;
@protocol VSOspreyTTSCoreDelegate, OS_dispatch_queue;


#import "VSSiriServerConfiguration.h"
#import "VSServerTTSClient.h"
#import "VSTimeoutCondition.h"

@interface VSOspreyTTSCore : NSOperation

@property (nonatomic) CGFloat bufferDurationLimit; // ivar: _bufferDurationLimit
@property (weak, nonatomic) NSObject<VSOspreyTTSCoreDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // ivar: _delegateCallbackQueue
@property (nonatomic) BOOL didReceiveAudio; // ivar: _didReceiveAudio
@property (retain, nonatomic) NSCondition *didReceiveAudioCondition; // ivar: _didReceiveAudioCondition
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (weak, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings; // ivar: _internalSettings
@property (readonly, nonatomic) VSSpeechRequest *request; // ivar: _request
@property (retain, nonatomic) VSSiriServerConfiguration *serverConfig; // ivar: _serverConfig
@property (retain, nonatomic) VSServerTTSClient *serverTTSClient; // ivar: _serverTTSClient
@property (retain, nonatomic) VSTimeoutCondition *timeoutCondition; // ivar: _timeoutCondition
@property (retain, nonatomic) VSVoiceAsset *voice; // ivar: _voice
@property (retain, nonatomic) VSVoiceResourceAsset *voiceResource; // ivar: _voiceResource


-(CGFloat)timeout;
-(id)initWithRequest:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)performRoundTripOspreyTTS;
-(void)performStreamingOspreyTTS;
-(void)waitUntilFinishedIfAudioReceivedWithin:(CGFloat)arg0 ;


@end


#endif