// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRSPEAKERRECOGNIZERPSR_H
#define SSRSPEAKERRECOGNIZERPSR_H

@class NSString, NSDictionary;
@protocol SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer, SSRSpeakerRecognizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerAnalyzerPSR.h"
#import "SSRSpeakerRecognitionContext.h"

@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRSpeakerRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger endInSampleCount; // ivar: _endInSampleCount
@property (nonatomic) NSUInteger extraSamplesAtStart; // ivar: _extraSamplesAtStart
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *invocationStyleStr; // ivar: _invocationStyleStr
@property (readonly, nonatomic) NSDictionary *lastScoreCard;
@property (retain, nonatomic) NSDictionary *lastSpeakerInfo; // ivar: _lastSpeakerInfo
@property (nonatomic) NSUInteger numSamplesProcessed; // ivar: _numSamplesProcessed
@property (nonatomic) BOOL processingEnded; // ivar: _processingEnded
@property (retain, nonatomic) SSRSpeakerAnalyzerPSR *psrAnalyzer; // ivar: _psrAnalyzer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx; // ivar: _spIdCtx
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger totalNumSamplesReceived; // ivar: _totalNumSamplesReceived
@property (nonatomic) NSUInteger vtEndInSampleCount; // ivar: _vtEndInSampleCount


-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_initializeWithContext:(id)arg0 ;
-(void)dealloc;
-(void)endAudio;
-(void)processAudioData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithContext:(id)arg0 ;
-(void)voiceRecognitionPSRAnalyzer:(id)arg0 hasVoiceRecognitionInfo:(id)arg1 ;
-(void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)arg0 withVoiceRecognitionInfo:(id)arg1 ;


@end


#endif