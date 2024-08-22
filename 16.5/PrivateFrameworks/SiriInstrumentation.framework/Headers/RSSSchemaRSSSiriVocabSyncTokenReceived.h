// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RSSSCHEMARSSSIRIVOCABSYNCTOKENRECEIVED_H
#define RSSSCHEMARSSSIRIVOCABSYNCTOKENRECEIVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RSSSchemaRSSSiriVocabSyncTokenReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSyncTokenTransferLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int reason; // ivar: _reason
@property (nonatomic) NSUInteger syncTokenTransferLatencyInMs; // ivar: _syncTokenTransferLatencyInMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteReason;
-(void)deleteSyncTokenTransferLatencyInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif