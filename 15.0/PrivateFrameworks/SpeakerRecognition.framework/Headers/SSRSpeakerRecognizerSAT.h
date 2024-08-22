// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRSPEAKERRECOGNIZERSAT_H
#define SSRSPEAKERRECOGNIZERSAT_H

@class NSString, NSDictionary;
@protocol SSRSpeakerAnalyzerSATDelegate, SSRSpeakerRecognizer, SSRSpeakerRecognizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerAnalyzerSAT.h"
#import "SSRSpeakerRecognitionContext.h"

@interface SSRSpeakerRecognizerSAT : NSObject <SSRSpeakerAnalyzerSATDelegate, SSRSpeakerRecognizer>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRSpeakerRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger extraSamplesAtStart; // ivar: _extraSamplesAtStart
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *invocationStyleStr; // ivar: _invocationStyleStr
@property (readonly, nonatomic) NSDictionary *lastScoreCard;
@property (retain, nonatomic) NSDictionary *lastSpeakerInfo; // ivar: _lastSpeakerInfo
@property (nonatomic) NSUInteger numTdTiSamplesProcessed; // ivar: _numTdTiSamplesProcessed
@property (nonatomic) BOOL processingEnded; // ivar: _processingEnded
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) SSRSpeakerAnalyzerSAT *satAnalyzer; // ivar: _satAnalyzer
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx; // ivar: _spIdCtx
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tdEndInSampleCount; // ivar: _tdEndInSampleCount
@property (nonatomic) NSUInteger totalNumSamplesReceived; // ivar: _totalNumSamplesReceived


-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(void)_initializeWithContext:(id)arg0 ;
-(void)dealloc;
-(void)endAudio;
-(void)processAudioData:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)resetWithContext:(id)arg0 ;
-(void)voiceRecognitionSATAnalyzer:(id)arg0 hasVoiceRecognitionInfo:(id)arg1 ;
-(void)voiceRecognitionSATAnalyzerFinishedProcessing:(id)arg0 withVoiceRecognitionInfo:(id)arg1 ;


@end


#endif