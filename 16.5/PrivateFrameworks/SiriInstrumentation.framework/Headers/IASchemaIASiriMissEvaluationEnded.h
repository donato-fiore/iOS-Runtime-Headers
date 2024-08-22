// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IASCHEMAIASIRIMISSEVALUATIONENDED_H
#define IASCHEMAIASIRIMISSEVALUATIONENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "IASchemaIAVoiceTriggerEventSummary.h"

@interface IASchemaIASiriMissEvaluationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsSiriMiss;
@property (nonatomic) BOOL hasVoiceTriggerSummary; // ivar: _hasVoiceTriggerSummary
@property (nonatomic) BOOL isSiriMiss; // ivar: _isSiriMiss
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) IASchemaIAVoiceTriggerEventSummary *voiceTriggerSummary; // ivar: _voiceTriggerSummary


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsSiriMiss;
-(void)deleteVoiceTriggerSummary;
-(void)writeTo:(id)arg0 ;


@end


#endif