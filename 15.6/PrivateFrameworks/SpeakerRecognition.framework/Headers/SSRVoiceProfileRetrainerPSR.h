// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRVOICEPROFILERETRAINERPSR_H
#define SSRVOICEPROFILERETRAINERPSR_H

@class NSDictionary, NSURL, NSString, NSData;
@protocol EARSyncPSRAudioProcessorDelegate, SSRVoiceProfileRetrainer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionScorer.h"
#import "SSRVoiceProfile.h"

@interface SSRVoiceProfileRetrainerPSR : NSObject <EARSyncPSRAudioProcessorDelegate, SSRVoiceProfileRetrainer>

 {
    NSUInteger _maximumSpeakerVectors;
    float _psrScore;
    float _bestTriggerScore;
    BOOL _psrTimedout;
}


@property (retain, nonatomic) NSDictionary *comparativeModels; // ivar: _comparativeModels
@property (retain, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (retain, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (nonatomic) NSUInteger currUttLengthInMs; // ivar: _currUttLengthInMs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL implicitTrainingRequired;
@property (readonly, nonatomic) NSURL *modelFilePath;
@property (nonatomic) NSUInteger processedAudioDurationMs; // ivar: _processedAudioDurationMs
@property (retain, nonatomic) NSURL *psrModelFilePath; // ivar: _psrModelFilePath
@property (retain, nonatomic) SSRSpeakerRecognitionScorer *psrScorer; // ivar: _psrScorer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (readonly, nonatomic) NSUInteger retrainerType;
@property (nonatomic) NSUInteger spIdType; // ivar: _spIdType
@property (retain, nonatomic) NSData *speakerVector; // ivar: _speakerVector
@property (nonatomic) NSUInteger speakerVectorSize; // ivar: _speakerVectorSize
@property (readonly) Class superclass;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile; // ivar: _voiceProfile


-(BOOL)needsRetrainingWithAudioFiles:(id)arg0 ;
-(BOOL)resetModelForRetraining;
-(id)_composeSpeakerConfusionWithScores:(id)arg0 forProfiles:(id)arg1 ;
-(id)_logSpeakerConfusion:(id)arg0 forProfileArray:(id)arg1 withPrependString:(id)arg2 ;
-(id)_processAudioFile:(id)arg0 withPSRProcessor:(id)arg1 ;
-(id)_processSpeakerVector:(id)arg0 withSize:(NSUInteger)arg1 withScorers:(id)arg2 processedAudioDurationMs:(NSUInteger)arg3 ;
-(id)initWithVoiceRetrainingContext:(id)arg0 ;
-(id)purgeConfusionInformationWithPolicy:(id)arg0 ;
-(void)_logSpeakerConfusionWithExplicitScores:(id)arg0 withImplicitScores:(id)arg1 withPurgeUtterances:(NSUInteger)arg2 forProfile:(id)arg3 forConfigVersion:(id)arg4 ;
// -(void)addUtterances:(id)arg0 withPolicy:(id)arg1 withCompletion:(unk)arg2  ;
-(void)dealloc;
-(void)purgeLastSpeakerEmbedding;


@end


#endif