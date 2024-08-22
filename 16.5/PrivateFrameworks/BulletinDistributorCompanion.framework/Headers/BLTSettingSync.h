// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTSETTINGSYNC_H
#define BLTSETTINGSYNC_H

@class NSMutableDictionary, NSString;
@protocol BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSyncSupportedAppListDelegate, OS_dispatch_queue;


#import "BLTSettingSyncInternal.h"
#import "BLTSectionInfoList.h"
#import "BLTSettingSyncSendQueue.h"
#import "BLTSectionInfoSyncCoordinator.h"
#import "BLTSectionInfoListBridgeProvider.h"
#import "BLTSyncSupportedAppList.h"
#import "BLTWatchKitAppList.h"

@interface BLTSettingSync : BLTSettingSyncInternal <BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSyncSupportedAppListDelegate>

 {
    BLTSectionInfoList *_sectionInfoList;
    BLTSettingSyncSendQueue *_settingSendQueue;
    NSUInteger _settingSyncSendQueueMaxConcurrentSendCount;
    BLTSectionInfoSyncCoordinator *_sectionInfoSyncCoordinator;
    NSObject<OS_dispatch_queue> *_sectionInfoSyncCoordinatorQueue;
    BOOL _initialSyncPerformed;
    BLTSectionInfoListBridgeProvider *_bridgeProvider;
    NSMutableDictionary *_reloadBBCompletions;
    BLTSyncSupportedAppList *_syncSupportedAppList;
    BLTWatchKitAppList *_watchKitAppList;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isSectionInfoSentCacheEmpty;
-(BOOL)sectionInfoList:(id)arg0 override:(id)arg1 shouldApplyToSectionInfoForSectionID:(id)arg2 ;
-(BOOL)sectionInfoListSectionIDHadDisplayedCriticalBulletins:(id)arg0 ;
-(NSUInteger)_fetchSettingSyncMaxCountOverride;
-(NSUInteger)_fetchSyncState;
-(NSUInteger)performSyncIfNeededForSectionID:(id)arg0 gizmoSectionInfo:(id)arg1 completion:(id)arg2 ;
-(id)_filteredAlertingSectionIDs:(id)arg0 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg0 ;
-(id)initWithSectionConfiguration:(id)arg0 queue:(id)arg1 ;
-(id)initWithSectionConfiguration:(id)arg0 queue:(id)arg1 watchKitAppList:(id)arg2 ;
-(id)originalSettings;
-(id)overriddenSettings;
-(id)settingOverrides;
-(id)settingsDescriptionForSectionIDs:(id)arg0 ;
-(id)universalSectionIDForSectionID:(id)arg0 ;
// -(void)_addReloadBBCompletion:(id)arg0 sectionID:(unk)arg1  ;
// -(void)_callAndRemoveReloadBBCompletion:(id)arg0 sectionID:(unk)arg1  ;
-(void)_callReloadBBCompletionsForSectionID:(id)arg0 ;
-(void)_initSettingSyncSendQueueMaxConcurrentSendCount;
-(void)_sendSectionSubtypeParameterIcons:(id)arg0 sectionID:(id)arg1 waitForAcknowledgement:(BOOL)arg2 spoolToFile:(BOOL)arg3 andCompletion:(id)arg4 ;
// -(void)_sendSpooledSyncWithCompletion:(id)arg0 withProgress:(unk)arg1  ;
-(void)_sendSyncSupportedAppListWithInstalled:(id)arg0 removed:(id)arg1 ;
-(void)_setupSectionInfoListWithCompletion:(id)arg0 ;
-(void)_spoolInitialSync;
-(void)_storeSyncState:(NSUInteger)arg0 ;
// -(void)_updateAllBBSectionsWithCompletion:(id)arg0 withProgress:(unk)arg1 spoolToFile:(id)arg2  ;
-(void)clearSectionInfoSentCache;
-(void)dealloc;
-(void)handleAllSyncComplete;
-(void)makeAuthorizationPermanentForSectionID:(id)arg0 ;
-(void)observer:(id)arg0 noteSectionParametersChanged:(id)arg1 forSectionID:(id)arg2 ;
// -(void)performInitialSyncWithProgress:(id)arg0 completion:(unk)arg1  ;
-(void)removeSectionWithSectionID:(id)arg0 ;
-(void)sectionConfiguration:(id)arg0 addedSectionIDs:(id)arg1 removedSectionIDs:(id)arg2 ;
-(void)sectionInfoList:(id)arg0 makeAuthorizationPermanentForSectionID:(id)arg1 ;
-(void)sectionInfoList:(id)arg0 receivedRemoveSectionWithSectionID:(id)arg1 transaction:(id)arg2 ;
-(void)sectionInfoList:(id)arg0 receivedUpdatedSectionInfoForSectionID:(id)arg1 transaction:(id)arg2 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg0 completion:(id)arg1 ;
-(void)sendOverrideOnly:(id)arg0 sectionID:(id)arg1 spoolToFile:(BOOL)arg2 ;
-(void)sendRemoveSectionWithSectionID:(id)arg0 sent:(id)arg1 ;
// -(void)sendSectionInfosWithSectionIDs:(id)arg0 completion:(id)arg1 spoolToFile:(unk)arg2  ;
-(void)setNotificationsLevel:(NSUInteger)arg0 sectionID:(id)arg1 mirror:(BOOL)arg2 fromRemote:(BOOL)arg3 ;
-(void)setSectionInfo:(id)arg0 completion:(id)arg1 ;
-(void)setSectionInfo:(id)arg0 keypaths:(id)arg1 completion:(id)arg2 ;
-(void)spoolSectionInfoWithCompletion:(id)arg0 ;
-(void)syncSupportedAppListUpdated:(id)arg0 ;


@end


#endif