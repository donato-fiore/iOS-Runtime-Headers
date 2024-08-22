// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHVOICETRIGGERFIRSTPASSSTATISTIC_H
#define MHSCHEMAMHVOICETRIGGERFIRSTPASSSTATISTIC_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHVoiceTriggerFirstPassStatistic : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float firstPassPeakScoreHS; // ivar: _firstPassPeakScoreHS
@property (nonatomic) float firstPassPeakScoreJS; // ivar: _firstPassPeakScoreJS
@property (nonatomic) int firstPassTriggerSource; // ivar: _firstPassTriggerSource
@property (nonatomic) BOOL hasFirstPassPeakScoreHS;
@property (nonatomic) BOOL hasFirstPassPeakScoreJS;
@property (nonatomic) BOOL hasFirstPassTriggerSource;
@property (nonatomic) BOOL hasInvocationTypeId;
@property (nonatomic) BOOL hasKeywordThresholdHS;
@property (nonatomic) BOOL hasKeywordThresholdJS;
@property (nonatomic) BOOL hasMitigationScore;
@property (nonatomic) BOOL hasRecognizerScoreHS;
@property (nonatomic) BOOL hasRecognizerScoreJS;
@property (nonatomic) BOOL hasRepetitionSimilarityScore;
@property (nonatomic) BOOL hasSecondsSinceEpoch;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedScore;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThresholdHS;
@property (nonatomic) BOOL hasTdSpeakerRecognizerCombinedThresholdJS;
@property (nonatomic) BOOL hasTriggerScoreHS;
@property (nonatomic) BOOL hasTriggerScoreJS;
@property (nonatomic) int invocationTypeId; // ivar: _invocationTypeId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float keywordThresholdHS; // ivar: _keywordThresholdHS
@property (nonatomic) float keywordThresholdJS; // ivar: _keywordThresholdJS
@property (nonatomic) float mitigationScore; // ivar: _mitigationScore
@property (nonatomic) float recognizerScoreHS; // ivar: _recognizerScoreHS
@property (nonatomic) float recognizerScoreJS; // ivar: _recognizerScoreJS
@property (nonatomic) float repetitionSimilarityScore; // ivar: _repetitionSimilarityScore
@property (nonatomic) NSInteger secondsSinceEpoch; // ivar: _secondsSinceEpoch
@property (nonatomic) float tdSpeakerRecognizerCombinedScore; // ivar: _tdSpeakerRecognizerCombinedScore
@property (nonatomic) float tdSpeakerRecognizerCombinedThresholdHS; // ivar: _tdSpeakerRecognizerCombinedThresholdHS
@property (nonatomic) float tdSpeakerRecognizerCombinedThresholdJS; // ivar: _tdSpeakerRecognizerCombinedThresholdJS
@property (nonatomic) float triggerScoreHS; // ivar: _triggerScoreHS
@property (nonatomic) float triggerScoreJS; // ivar: _triggerScoreJS


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFirstPassPeakScoreHS;
-(void)deleteFirstPassPeakScoreJS;
-(void)deleteFirstPassTriggerSource;
-(void)deleteInvocationTypeId;
-(void)deleteKeywordThresholdHS;
-(void)deleteKeywordThresholdJS;
-(void)deleteMitigationScore;
-(void)deleteRecognizerScoreHS;
-(void)deleteRecognizerScoreJS;
-(void)deleteRepetitionSimilarityScore;
-(void)deleteSecondsSinceEpoch;
-(void)deleteTdSpeakerRecognizerCombinedScore;
-(void)deleteTdSpeakerRecognizerCombinedThresholdHS;
-(void)deleteTdSpeakerRecognizerCombinedThresholdJS;
-(void)deleteTriggerScoreHS;
-(void)deleteTriggerScoreJS;
-(void)writeTo:(id)arg0 ;


@end


#endif