// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAAGGREGATEDMETRICS_H
#define SISCHEMAAGGREGATEDMETRICS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVoiceTriggerMetrics.h"

@interface SISchemaAggregatedMetrics : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasVoiceTrigger; // ivar: _hasVoiceTrigger
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaVoiceTriggerMetrics *voiceTrigger; // ivar: _voiceTrigger


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteVoiceTrigger;
-(void)writeTo:(id)arg0 ;


@end


#endif