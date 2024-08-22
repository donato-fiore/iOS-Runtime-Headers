// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRSPEAKERRECOGNITIONCONTROLLER_H
#define SSRSPEAKERRECOGNITIONCONTROLLER_H

@class NSString, NSDictionary;
@protocol SSRSpeakerRecognitionOrchestratorDelegate, SSRSpeakerRecognitionControllerDelegate;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionContext.h"
#import "SSRSpeakerRecognitionOrchestrator.h"

@interface SSRSpeakerRecognitionController : NSObject <SSRSpeakerRecognitionOrchestratorDelegate>



@property (retain, nonatomic) SSRSpeakerRecognitionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRSpeakerRecognitionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *lastScoreCard; // ivar: _lastScoreCard
@property (retain, nonatomic) SSRSpeakerRecognitionOrchestrator *orchestrator; // ivar: _orchestrator
@property (readonly) Class superclass;


-(id)getLatestSpeakerInfo;
-(id)initWithContext:(id)arg0 withDelegate:(id)arg1 error:(*id)arg2 ;
-(id)resetWithContext:(id)arg0 ;
-(void)endAudio;
-(void)processAudio:(id)arg0 withNumberOfSamples:(NSUInteger)arg1 ;
-(void)voiceRecognitionOrchestrator:(id)arg0 hasVoiceRecognitionInfo:(id)arg1 ;
-(void)voiceRecognitionOrchestratorFinishedProcessing:(id)arg0 withFinalVoiceRecognitionInfo:(id)arg1 ;


@end


#endif