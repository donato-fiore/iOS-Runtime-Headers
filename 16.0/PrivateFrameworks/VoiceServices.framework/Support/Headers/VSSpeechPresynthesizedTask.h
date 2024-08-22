// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSPEECHPRESYNTHESIZEDTASK_H
#define VSSPEECHPRESYNTHESIZEDTASK_H

@class NSOperation, NSMutableData, NSString, NSError, VSInstrumentMetrics, VSPresynthesizedAudioRequest;
@protocol VSSpeechSpeakableProtocol, VSSpeechServiceDelegate;


#import "VSAudioPlaybackService.h"
#import "VSSiriInstrumentation.h"

@interface VSSpeechPresynthesizedTask : NSOperation <VSSpeechSpeakableProtocol>



@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) NSMutableData *audioData; // ivar: _audioData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSSpeechServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (retain, nonatomic) VSAudioPlaybackService *playbackService; // ivar: _playbackService
@property (readonly, nonatomic) VSPresynthesizedAudioRequest *request; // ivar: _request
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation; // ivar: _siriInstrumentation
@property (readonly) Class superclass;


-(BOOL)isSpeaking;
-(id)audioPowerProvider;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)taskHash;
-(void)cancel;
-(void)main;
-(void)reportFinish;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(void)reportTimingInfo;
-(void)resume;
-(void)suspend;


@end


#endif