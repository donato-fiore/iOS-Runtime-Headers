// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RSSSCHEMARSSCLIENTEVENT_H
#define RSSSCHEMARSSCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "RSSSchemaRSSClientEventMetadata.h"
#import "RSSSchemaRSSSiriVocabSyncDataDonationFailed.h"
#import "RSSSchemaRSSSiriVocabSyncDataDownloadContext.h"
#import "RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived.h"
#import "RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived.h"
#import "RSSSchemaRSSSiriVocabSyncTokenReceived.h"

@interface RSSSchemaRSSClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RSSSchemaRSSClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasSyncDataDonationFailed; // ivar: _hasSyncDataDonationFailed
@property (nonatomic) BOOL hasSyncDataDownloadContext; // ivar: _hasSyncDataDownloadContext
@property (nonatomic) BOOL hasSyncDataUpdatedNotificationReceived; // ivar: _hasSyncDataUpdatedNotificationReceived
@property (nonatomic) BOOL hasSyncTokenFetchRequestReceived; // ivar: _hasSyncTokenFetchRequestReceived
@property (nonatomic) BOOL hasSyncTokenReceived; // ivar: _hasSyncTokenReceived
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDonationFailed *syncDataDonationFailed; // ivar: _syncDataDonationFailed
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadContext *syncDataDownloadContext; // ivar: _syncDataDownloadContext
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived *syncDataUpdatedNotificationReceived; // ivar: _syncDataUpdatedNotificationReceived
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived *syncTokenFetchRequestReceived; // ivar: _syncTokenFetchRequestReceived
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenReceived *syncTokenReceived; // ivar: _syncTokenReceived
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteEventMetadata;
-(void)deleteSyncDataDonationFailed;
-(void)deleteSyncDataDownloadContext;
-(void)deleteSyncDataUpdatedNotificationReceived;
-(void)deleteSyncTokenFetchRequestReceived;
-(void)deleteSyncTokenReceived;
-(void)writeTo:(id)arg0 ;


@end


#endif