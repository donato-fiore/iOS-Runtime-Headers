// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRPERSONALIZEDLANGUAGEMODELMETRICS_H
#define DODMLASRSCHEMADODMLASRPERSONALIZEDLANGUAGEMODELMETRICS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "DODMLASRSchemaDODMLASREvaluationMetrics.h"
#import "DODMLASRSchemaDODMLASRModelMetrics.h"
#import "DODMLASRSchemaDODMLASRTranscriptionMetrics.h"

@interface DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) DODMLASRSchemaDODMLASREvaluationMetrics *evaluationMetrics; // ivar: _evaluationMetrics
@property (nonatomic) BOOL hasEvaluationMetrics; // ivar: _hasEvaluationMetrics
@property (nonatomic) BOOL hasModelMetrics; // ivar: _hasModelMetrics
@property (nonatomic) BOOL hasTranscriptionMetrics; // ivar: _hasTranscriptionMetrics
@property (nonatomic) BOOL hasUserLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRModelMetrics *modelMetrics; // ivar: _modelMetrics
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptionMetrics *transcriptionMetrics; // ivar: _transcriptionMetrics
@property (nonatomic) int userLocale; // ivar: _userLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEvaluationMetrics;
-(void)deleteModelMetrics;
-(void)deleteTranscriptionMetrics;
-(void)deleteUserLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif