// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIAEVALUATIONSUMMARYREPORTED_H
#define PLUSSCHEMAPLUSMEDIAEVALUATIONSUMMARYREPORTED_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "PLUSSchemaPLUSMediaConfiguredState.h"
#import "SISchemaUUID.h"
#import "PLUSSchemaPLUSMediaSuggestionEvaluation.h"

@interface PLUSSchemaPLUSMediaEvaluationSummaryReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) PLUSSchemaPLUSMediaConfiguredState *configuredState; // ivar: _configuredState
@property (copy, nonatomic) NSArray *groundTruthSummaries; // ivar: _groundTruthSummaries
@property (nonatomic) BOOL hasConfiguredState; // ivar: _hasConfiguredState
@property (nonatomic) BOOL hasOriginalRequestId; // ivar: _hasOriginalRequestId
@property (nonatomic) BOOL hasPlayUserFeedback;
@property (nonatomic) BOOL hasResultCandidateId; // ivar: _hasResultCandidateId
@property (nonatomic) BOOL hasSuggestionEvaluation; // ivar: _hasSuggestionEvaluation
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalRequestId; // ivar: _originalRequestId
@property (nonatomic) int playUserFeedback; // ivar: _playUserFeedback
@property (copy, nonatomic) NSString *resultCandidateId; // ivar: _resultCandidateId
@property (retain, nonatomic) PLUSSchemaPLUSMediaSuggestionEvaluation *suggestionEvaluation; // ivar: _suggestionEvaluation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)groundTruthSummariesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addGroundTruthSummaries:(id)arg0 ;
-(void)clearGroundTruthSummaries;
-(void)deleteConfiguredState;
-(void)deleteGroundTruthSummaries;
-(void)deleteOriginalRequestId;
-(void)deletePlayUserFeedback;
-(void)deleteResultCandidateId;
-(void)deleteSuggestionEvaluation;
-(void)writeTo:(id)arg0 ;


@end


#endif