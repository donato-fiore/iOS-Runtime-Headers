// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRSPEAKERANALYZERPSR_H
#define SSRSPEAKERANALYZERPSR_H

@class NSURL, NSString, EARSyncPSRAudioProcessor, NSArray, NSDictionary;
@protocol EARSyncPSRAudioProcessorDelegate, SSRSpeakerAnalyzerPSRDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionContext.h"

@interface SSRSpeakerAnalyzerPSR : NSObject <EARSyncPSRAudioProcessorDelegate>

 {
    BOOL _triggerPhraseDetectedOnTap;
    NSUInteger _numSamplesProecssed;
}


@property (retain, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (retain, nonatomic) SSRSpeakerRecognitionContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRSpeakerAnalyzerPSRDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EARSyncPSRAudioProcessor *psrAudioProcessor; // ivar: _psrAudioProcessor
@property (retain, nonatomic) NSArray *psrScorers; // ivar: _psrScorers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *voiceProfilesExpModelFilePaths; // ivar: _voiceProfilesExpModelFilePaths
@property (retain, nonatomic) NSDictionary *voiceProfilesModelFilePaths; // ivar: _voiceProfilesModelFilePaths


-(BOOL)_isSpeakerVectorValid:(id)arg0 speakerVectorSize:(NSUInteger)arg1 fromPsrAudioProcessor:(id)arg2 ;
-(id)_processSpeakerVector:(id)arg0 withSize:(NSUInteger)arg1 processedAudioDurationMs:(NSUInteger)arg2 ;
-(id)getVoiceRecognizerResults;
-(id)initWithVoiceRecognitionContext:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(id)resetForNewRequest;
-(void)dealloc;
-(void)endAudio;
-(void)processAudioData:(id)arg0 ;
-(void)psrAudioProcessor:(id)arg0 finishedWithFinalSpeakerVector:(id)arg1 speakerVectorSize:(NSUInteger)arg2 processedAudioDurationMs:(NSUInteger)arg3 ;
-(void)psrAudioProcessor:(id)arg0 hasSpeakerVector:(id)arg1 speakerVectorSize:(NSUInteger)arg2 processedAudioDurationMs:(NSUInteger)arg3 ;


@end


#endif