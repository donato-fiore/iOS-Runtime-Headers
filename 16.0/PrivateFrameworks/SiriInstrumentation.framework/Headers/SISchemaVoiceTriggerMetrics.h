// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAVOICETRIGGERMETRICS_H
#define SISCHEMAVOICETRIGGERMETRICS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHVoiceTriggerFirstPassDailyMetadata.h"

@interface SISchemaVoiceTriggerMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int explicitUtterances; // ivar: _explicitUtterances
@property (retain, nonatomic) MHSchemaMHVoiceTriggerFirstPassDailyMetadata *firstPassMetadata; // ivar: _firstPassMetadata
@property (copy, nonatomic) NSArray *firstPassStatistics; // ivar: _firstPassStatistics
@property (nonatomic) int firstPassTriggers; // ivar: _firstPassTriggers
@property (nonatomic) BOOL hasExplicitUtterances;
@property (nonatomic) BOOL hasFirstPassMetadata; // ivar: _hasFirstPassMetadata
@property (nonatomic) BOOL hasFirstPassTriggers;
@property (nonatomic) BOOL hasImplicitUtterances;
@property (nonatomic) int implicitUtterances; // ivar: _implicitUtterances
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)firstPassStatisticsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addFirstPassStatistics:(id)arg0 ;
-(void)clearFirstPassStatistics;
-(void)deleteExplicitUtterances;
-(void)deleteFirstPassMetadata;
-(void)deleteFirstPassStatistics;
-(void)deleteFirstPassTriggers;
-(void)deleteImplicitUtterances;
-(void)writeTo:(id)arg0 ;


@end


#endif