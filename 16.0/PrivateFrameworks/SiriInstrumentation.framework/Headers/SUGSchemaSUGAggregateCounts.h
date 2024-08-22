// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUGSCHEMASUGAGGREGATECOUNTS_H
#define SUGSCHEMASUGAGGREGATECOUNTS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SUGSchemaSUGAggregateCounts : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLast28DaysBucket;
@property (nonatomic) BOOL hasLastDayCount;
@property (nonatomic) BOOL hasLastWeekBucket;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int last28DaysBucket; // ivar: _last28DaysBucket
@property (nonatomic) unsigned int lastDayCount; // ivar: _lastDayCount
@property (nonatomic) unsigned int lastWeekBucket; // ivar: _lastWeekBucket


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLast28DaysBucket;
-(void)deleteLastDayCount;
-(void)deleteLastWeekBucket;
-(void)writeTo:(id)arg0 ;


@end


#endif