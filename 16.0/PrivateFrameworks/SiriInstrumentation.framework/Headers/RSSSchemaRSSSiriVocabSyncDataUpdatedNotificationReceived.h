// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RSSSCHEMARSSSIRIVOCABSYNCDATAUPDATEDNOTIFICATIONRECEIVED_H
#define RSSSCHEMARSSSIRIVOCABSYNCDATAUPDATEDNOTIFICATIONRECEIVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSyncDataUpdateNotificationLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger syncDataUpdateNotificationLatencyInMs; // ivar: _syncDataUpdateNotificationLatencyInMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSyncDataUpdateNotificationLatencyInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif