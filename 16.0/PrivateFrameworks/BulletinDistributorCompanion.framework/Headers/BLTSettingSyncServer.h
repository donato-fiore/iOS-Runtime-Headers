// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTSETTINGSYNCSERVER_H
#define BLTSETTINGSYNCSERVER_H

@class NSString;
@protocol BLTSettingsSendSerializerDelegate, BLTSettingSyncing, BLTRemoteGlobalSettingsSyncServerRemoteEndpoint, BLTSettingSyncingClient;


#import "BLTRemoteObject.h"
#import "BLTSettingsSendSerializerPassthrough.h"
#import "BLTPreviouslySentMessageStore.h"

@interface BLTSettingSyncServer : BLTRemoteObject <BLTSettingsSendSerializerDelegate, BLTSettingSyncing, BLTRemoteGlobalSettingsSyncServerRemoteEndpoint>

 {
    BLTSettingsSendSerializerPassthrough *_settingSendSerializer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BLTSettingSyncingClient> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionInfoPreviouslySentMessageStore; // ivar: _sectionInfoPreviouslySentMessageStore
@property (retain, nonatomic) BLTPreviouslySentMessageStore *sectionSubtypeParametersIconsPreviouslySentMessageStore; // ivar: _sectionSubtypeParametersIconsPreviouslySentMessageStore
@property (readonly) Class superclass;


-(BOOL)isSectionInfoSentCacheEmpty;
-(id)init;
-(void)_handleResponse:(id)arg0 ;
-(void)clearSectionInfoSentCache;
-(void)handleFileURL:(id)arg0 extraMetadata:(id)arg1 ;
-(void)handleRemoveSectionRequest:(id)arg0 ;
-(void)handleSetNotificationsAlertLevelRequest:(id)arg0 ;
-(void)handleSetNotificationsCriticalAlertRequest:(id)arg0 ;
-(void)handleSetNotificationsGroupingRequest:(id)arg0 ;
-(void)handleSetNotificationsSoundRequest:(id)arg0 ;
-(void)handleSetRemoteGlobalSettingsRequest:(id)arg0 ;
-(void)handleSetRemoteGlobalSpokenSettingEnabledRequest:(id)arg0 ;
-(void)handleSetSectionInfoRequest:(id)arg0 ;
-(void)handleSetSectionInfoResponse:(id)arg0 ;
-(void)handleSetSectionSubtypeParametersIconRequest:(id)arg0 ;
-(void)handleSetSectionSubtypeParametersIconResponse:(id)arg0 ;
-(void)registerProtobufHandlers;
-(void)remoteGlobalSettingsSyncServer:(id)arg0 sendChangeset:(id)arg1 ;
-(void)removeSectionInfoSentCacheForSectionID:(id)arg0 ;
-(void)removeSectionWithSectionID:(id)arg0 ;
-(void)removeSectionWithSectionID:(id)arg0 sent:(id)arg1 ;
-(void)sendRemoteGlobalSpokenSettingEnabled:(BOOL)arg0 date:(id)arg1 ;
// -(void)sendSpooledRequestsNowWithSent:(id)arg0 withAcknowledgement:(unk)arg1  ;
-(void)setNotificationsCriticalAlertEnabled:(int)arg0 sectionID:(id)arg1 ;
-(void)setNotificationsGrouping:(int)arg0 sectionID:(id)arg1 ;
-(void)setNotificationsGrouping:(int)arg0 sectionID:(id)arg1 spoolToFile:(BOOL)arg2 ;
-(void)setNotificationsLevel:(NSUInteger)arg0 sectionID:(id)arg1 mirror:(BOOL)arg2 ;
-(void)setNotificationsLevel:(NSUInteger)arg0 sectionID:(id)arg1 mirror:(BOOL)arg2 spoolToFile:(BOOL)arg3 ;
-(void)setNotificationsSoundEnabled:(int)arg0 sectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg0 completion:(id)arg1 ;
// -(void)setSectionInfo:(id)arg0 withSent:(id)arg1 withAcknowledgement:(unk)arg2 keypaths:(id)arg3 spoolToFile:(unk)arg4  ;
-(void)setSectionSubtypeParametersIcon:(id)arg0 forSectionID:(id)arg1 forSubtypeID:(NSInteger)arg2 ;
// -(void)setSectionSubtypeParametersIcon:(id)arg0 forSectionID:(id)arg1 forSubtypeID:(NSInteger)arg2 withQueue:(id)arg3 withSent:(id)arg4 withAcknowledgement:(unk)arg5 spoolToFile:(id)arg6  ;
-(void)updateGlobalSettings:(id)arg0 ;


@end


#endif