// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RSSSCHEMARSSSIRIVOCABSYNCTOKENFETCHREQUESTRECEIVED_H
#define RSSSCHEMARSSSIRIVOCABSYNCTOKENFETCHREQUESTRECEIVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSyncTokenFetchRequestTransferLatencyInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger syncTokenFetchRequestTransferLatencyInMs; // ivar: _syncTokenFetchRequestTransferLatencyInMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSyncTokenFetchRequestTransferLatencyInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif