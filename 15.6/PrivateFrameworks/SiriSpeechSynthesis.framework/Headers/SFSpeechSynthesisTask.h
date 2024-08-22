// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSPEECHSYNTHESISTASK_H
#define SFSPEECHSYNTHESISTASK_H

@class NSMutableArray, NSString, NSError, NSCondition;
@protocol SFSpeechSynthesisTaskProtocol, SFSpeechSynthesisTaskPrivateDelegate;

#import <Foundation/Foundation.h>

#import "SFSSInstrumentMetrics.h"
#import "SFSSAudioPlaybackService.h"
#import "SFSpeechSynthesisRequest.h"
#import "SFSSResourceAsset.h"
#import "SFSSVoiceAsset.h"

@interface SFSpeechSynthesisTask : NSObject <SFSpeechSynthesisTaskProtocol>



@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (nonatomic) CGFloat audioPlaybackBufferDuration; // ivar: _audioPlaybackBufferDuration
@property (retain, nonatomic) NSMutableArray *bufferedAudioData; // ivar: _bufferedAudioData
@property (retain, nonatomic) NSMutableArray *bufferedAudios; // ivar: _bufferedAudios
@property (nonatomic) CGFloat bufferedDuration; // ivar: _bufferedDuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFSpeechSynthesisTaskPrivateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFSSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (nonatomic) BOOL isSpeaking; // ivar: _isSpeaking
@property (retain, nonatomic) NSMutableArray *phonemeSequence; // ivar: _phonemeSequence
@property (retain, nonatomic) SFSSAudioPlaybackService *playbackService; // ivar: _playbackService
@property (retain, nonatomic) SFSpeechSynthesisRequest *request; // ivar: _request
@property (retain, nonatomic) SFSSResourceAsset *resourceAsset; // ivar: _resourceAsset
@property (nonatomic) NSInteger speakState; // ivar: _speakState
@property (readonly) Class superclass;
@property (nonatomic) NSInteger synthesisState; // ivar: _synthesisState
@property (retain, nonatomic) NSCondition *synthesisStateCondition; // ivar: _synthesisStateCondition
@property (copy, nonatomic) NSString *taskIdentifer; // ivar: _taskIdentifer
@property (retain, nonatomic) SFSSVoiceAsset *voiceAsset; // ivar: _voiceAsset


-(BOOL)isSpeakRequest;
-(id)cancel;
-(id)initWithRequest:(id)arg0 ;
-(id)pause;
-(id)resume;
-(void)handleSynthesisBegin:(unsigned int)arg0 asbd:(struct AudioStreamBasicDescription )arg1 audioPlaybackBufferDuration:(CGFloat)arg2 voiceAsset:(id)arg3 resourceAsset:(id)arg4 ;
-(void)handleSynthesisChunks:(id)arg0 ;
-(void)handleSynthesisEnd:(id)arg0 ;
-(void)handleSynthesisEndCallback;
-(void)handleSynthesisFrontendFeaturePhoneme:(id)arg0 ;
-(void)handleSynthesisInit;
-(void)initSpeak:(unsigned int)arg0 asbd:(struct AudioStreamBasicDescription )arg1 ;
-(void)start:(id)arg0 ;
-(void)startSpeakIfValid;
-(void)waitForSpeakFinish;


@end


#endif