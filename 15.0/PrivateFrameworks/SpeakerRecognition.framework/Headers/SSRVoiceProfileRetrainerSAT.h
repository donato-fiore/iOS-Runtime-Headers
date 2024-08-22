// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRVOICEPROFILERETRAINERSAT_H
#define SSRVOICEPROFILERETRAINERSAT_H

@class NSDictionary, NSURL, NSString, NSData;
@protocol SSRVoiceProfileRetrainer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSRSpeakerRecognitionScorer.h"
#import "SSRVoiceProfile.h"

@interface SSRVoiceProfileRetrainerSAT : NSObject <SSRVoiceProfileRetrainer>

 {
    NSUInteger _maximumSpeakerVectors;
    float _bestTriggerScore;
}


@property (retain, nonatomic) NSDictionary *comparativeModels; // ivar: _comparativeModels
@property (retain, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL implicitTrainingRequired;
@property (readonly, nonatomic) NSURL *modelFilePath;
@property (nonatomic) NSUInteger processedAudioDurationMs; // ivar: _processedAudioDurationMs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (readonly, nonatomic) NSUInteger retrainerType;
@property (retain, nonatomic) NSURL *satModelFilePath; // ivar: _satModelFilePath
@property (retain, nonatomic) SSRSpeakerRecognitionScorer *satScorer; // ivar: _satScorer
@property (nonatomic) NSUInteger spIdType; // ivar: _spIdType
@property (retain, nonatomic) NSData *superVector; // ivar: _superVector
@property (nonatomic) NSUInteger superVectorSize; // ivar: _superVectorSize
@property (readonly) Class superclass;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile; // ivar: _voiceProfile


-(BOOL)needsRetrainingWithAudioFiles:(id)arg0 ;
-(BOOL)resetModelForRetraining;
-(id)_processAudioFile:(id)arg0 withSATProcessor:(id)arg1 ;
-(id)_processSuperVector:(id)arg0 withSize:(NSUInteger)arg1 withScorers:(id)arg2 processedAudioDurationMs:(NSUInteger)arg3 ;
-(id)initWithVoiceRetrainingContext:(id)arg0 ;
-(id)purgeConfusionInformationWithPolicy:(id)arg0 ;
// -(void)addUtterances:(id)arg0 withPolicy:(id)arg1 withCompletion:(unk)arg2  ;
-(void)purgeLastSpeakerEmbedding;


@end


#endif