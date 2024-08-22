// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RSSSCHEMARSSSIRIVOCABSYNCCOMPANIONSYNCPLUGINSYNCREQUESTED_H
#define RSSSCHEMARSSSIRIVOCABSYNCCOMPANIONSYNCPLUGINSYNCREQUESTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSyncData;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int syncData; // ivar: _syncData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSyncData;
-(void)writeTo:(id)arg0 ;


@end


#endif