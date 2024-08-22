// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RSSSCHEMARSSCLIENTEVENT_H
#define RSSSCHEMARSSCLIENTEVENT_H

@class NSData;
@protocol SISchemaInnerEventContainer;


#import "SISchemaTopLevelUnionType.h"
#import "RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncObjectAcquisitionStarted.h"
#import "RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested.h"
#import "RSSSchemaRSSSiriVocabSyncCompanionSyncUploadStarted.h"
#import "RSSSchemaRSSClientEventMetadata.h"
#import "SISchemaInstrumentationMessage.h"
#import "RSSSchemaRSSSiriVocabSyncDataDonationFailed.h"
#import "RSSSchemaRSSSiriVocabSyncDataDownloadContext.h"
#import "RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived.h"
#import "RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived.h"
#import "RSSSchemaRSSSiriVocabSyncTokenReceived.h"

@interface RSSSchemaRSSClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>



@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncObjectAcquisitionStarted *companionSyncPluginSyncObjectAcquisitionStarted; // ivar: _companionSyncPluginSyncObjectAcquisitionStarted
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncPluginSyncRequested *companionSyncPluginSyncRequested; // ivar: _companionSyncPluginSyncRequested
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncCompanionSyncUploadStarted *companionSyncUploadStarted; // ivar: _companionSyncUploadStarted
@property (retain, nonatomic) RSSSchemaRSSClientEventMetadata *eventMetadata; // ivar: _eventMetadata
@property (nonatomic) BOOL hasCompanionSyncPluginSyncObjectAcquisitionStarted; // ivar: _hasCompanionSyncPluginSyncObjectAcquisitionStarted
@property (nonatomic) BOOL hasCompanionSyncPluginSyncRequested; // ivar: _hasCompanionSyncPluginSyncRequested
@property (nonatomic) BOOL hasCompanionSyncUploadStarted; // ivar: _hasCompanionSyncUploadStarted
@property (nonatomic) BOOL hasEventMetadata; // ivar: _hasEventMetadata
@property (nonatomic) BOOL hasSyncDataDonationFailed; // ivar: _hasSyncDataDonationFailed
@property (nonatomic) BOOL hasSyncDataDownloadContext; // ivar: _hasSyncDataDownloadContext
@property (nonatomic) BOOL hasSyncDataUpdatedNotificationReceived; // ivar: _hasSyncDataUpdatedNotificationReceived
@property (nonatomic) BOOL hasSyncTokenFetchRequestReceived; // ivar: _hasSyncTokenFetchRequestReceived
@property (nonatomic) BOOL hasSyncTokenReceived; // ivar: _hasSyncTokenReceived
@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDonationFailed *syncDataDonationFailed; // ivar: _syncDataDonationFailed
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataDownloadContext *syncDataDownloadContext; // ivar: _syncDataDownloadContext
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncDataUpdatedNotificationReceived *syncDataUpdatedNotificationReceived; // ivar: _syncDataUpdatedNotificationReceived
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenFetchRequestReceived *syncTokenFetchRequestReceived; // ivar: _syncTokenFetchRequestReceived
@property (retain, nonatomic) RSSSchemaRSSSiriVocabSyncTokenReceived *syncTokenReceived; // ivar: _syncTokenReceived
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


+(int)joinability;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)getComponentId;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(id)suppressMessageUnderConditions;
-(int)getAnyEventType;
-(void)deleteCompanionSyncPluginSyncObjectAcquisitionStarted;
-(void)deleteCompanionSyncPluginSyncRequested;
-(void)deleteCompanionSyncUploadStarted;
-(void)deleteEventMetadata;
-(void)deleteSyncDataDonationFailed;
-(void)deleteSyncDataDownloadContext;
-(void)deleteSyncDataUpdatedNotificationReceived;
-(void)deleteSyncTokenFetchRequestReceived;
-(void)deleteSyncTokenReceived;
-(void)writeTo:(id)arg0 ;


@end


#endif