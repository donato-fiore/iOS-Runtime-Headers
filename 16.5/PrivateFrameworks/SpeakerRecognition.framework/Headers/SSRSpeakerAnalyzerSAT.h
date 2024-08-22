// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRSPEAKERANALYZERSAT_H
#define SSRSPEAKERANALYZERSAT_H

@class NSURL, NSArray, NSDictionary;
@protocol SSRSpeakerAnalyzerSATDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionContext.h"

@interface SSRSpeakerAnalyzerSAT : NSObject {
    *void _novDetect;
    NSUInteger _numSamplesProcessed;
    BOOL _triggerPhraseDetectedOnTap;
}


@property (retain, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (retain, nonatomic) SSRSpeakerRecognitionContext *context; // ivar: _context
@property (weak, nonatomic) NSObject<SSRSpeakerAnalyzerSATDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (retain, nonatomic) NSArray *satScorers; // ivar: _satScorers
@property (retain, nonatomic) NSDictionary *scoreCard; // ivar: _scoreCard
@property (retain, nonatomic) NSDictionary *voiceProfilesExpModelFilePaths; // ivar: _voiceProfilesExpModelFilePaths
@property (retain, nonatomic) NSDictionary *voiceProfilesModelFilePaths; // ivar: _voiceProfilesModelFilePaths


-(id)_getAnalyzedResult;
-(id)_getSuperVectorWithEndPoint:(NSUInteger)arg0 ;
-(id)_processSuperVector:(id)arg0 withSize:(NSUInteger)arg1 processedAudioDurationMs:(NSUInteger)arg2 isFinal:(BOOL)arg3 ;
-(id)_updateScoreCardForFinalResult:(BOOL)arg0 ;
-(id)getVoiceRecognizerResults;
-(id)initWithVoiceRecognitionContext:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(id)resetForNewRequest;
-(void)dealloc;
-(void)endAudio;
-(void)processAudioData:(id)arg0 numSamples:(NSUInteger)arg1 ;


@end


#endif