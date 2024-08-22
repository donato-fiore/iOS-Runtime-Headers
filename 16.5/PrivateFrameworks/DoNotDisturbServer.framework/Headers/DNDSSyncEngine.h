// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSYNCENGINE_H
#define DNDSSYNCENGINE_H

@class NSMapTable, CKContainer, NSString;
@protocol DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, CKSyncEngineDataSource, DNDSSyncEngineMetadataStoring, DNDSSyncEngineSynchronizing, OS_dispatch_queue, OS_dispatch_source, DNDSSyncEngineLastChanceDataStoring, DNDSKeybagStateProviding;

#import <Foundation/Foundation.h>


@interface DNDSSyncEngine : NSObject <DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, CKSyncEngineDataSource>

 {
    id<DNDSSyncEngineMetadataStoring> *_store;
    id<DNDSSyncEngineSynchronizing> *_syncEngine;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_syncEngineQueue;
    NSObject<OS_dispatch_source> *_accountUpdateSource;
    NSMapTable *_sourcesByZoneName;
    id<DNDSSyncEngineMetadataStoring> *_metadataStore;
    id<DNDSSyncEngineLastChanceDataStoring> *_lastChanceStore;
    ? _state;
    BOOL _allowSyncEngineCreation;
    CKContainer *_container;
    id<DNDSKeybagStateProviding> *_keybag;
}


@property (readonly, nonatomic) NSUInteger cloudSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLocalChanges;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSyncAvailable) BOOL syncAvailable;
@property (readonly, nonatomic, getter=isSyncEnabled) BOOL syncEnabled;
@property (nonatomic, getter=isSyncPreferenceEnabled) BOOL syncPreferenceEnabled;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


+(id)sharedInstance;
-(BOOL)_lock_encryptionAvailable;
-(BOOL)syncEngine:(id)arg0 shouldFetchChangesForZoneID:(id)arg1 ;
-(NSInteger)_lock_currentAccountStatus;
-(id)_lock_currentUserRecordID;
-(id)_lock_dataSourceForRecord:(id)arg0 ;
-(id)_lock_dataSourceForZoneID:(id)arg0 ;
-(id)_lock_dataSources;
-(id)_lock_syncEngine;
-(id)_zoneIDForRecord:(id)arg0 ;
-(id)initWithMetadataStore:(id)arg0 lastChanceDataStore:(id)arg1 keybag:(id)arg2 syncEnabled:(BOOL)arg3 ;
-(id)initWithMetadataStore:(id)arg0 lastChanceDataStore:(id)arg1 syncEngine:(id)arg2 keybag:(id)arg3 syncEnabled:(BOOL)arg4 ;
-(id)lastChanceRecordForRecordID:(id)arg0 ;
-(id)syncEngine:(id)arg0 recordToSaveForRecordID:(id)arg1 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)_cloudKitAccountChanged:(id)arg0 ;
-(void)_fetchAccountStateWithCompletionHandler:(id)arg0 ;
-(void)_handleAccountFetchWithUpdatedUserRecordID:(id)arg0 updatedAccountStatus:(NSInteger)arg1 updatedEncryptionAvailable:(BOOL)arg2 updatedSyncEnabled:(BOOL)arg3 ;
-(void)_initialSyncForDataSource:(id)arg0 withZoneName:(id)arg1 ;
-(void)_initialSyncForDataSources;
-(void)_lock_destroySyncEngine;
-(void)_lock_purgeData;
-(void)_lock_setCurrentAccountStatus:(NSInteger)arg0 ;
-(void)_lock_setCurrentUserRecordID:(id)arg0 ;
-(void)_lock_setEncryptionAvailable:(BOOL)arg0 ;
-(void)_migrateOldStoresWithSyncEnabledState:(BOOL)arg0 ;
-(void)_purgeDataFromDataSources;
-(void)_retryLastChanceRecords;
-(void)_retryLastChanceRecordsForDataSource:(id)arg0 withZoneName:(id)arg1 ;
-(void)_syncEngineQueue_updateAccountWithSyncEnabledState:(BOOL)arg0 ;
-(void)_updateAccountWithCurrentSyncEnabledState;
-(void)_updateAccountWithSyncEnabledState:(BOOL)arg0 ;
-(void)addRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)addRecordZonesToSave:(id)arg0 recordZoneIDsToDelete:(id)arg1 ;
-(void)fetchChanges:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)handleDeletedRecordID:(id)arg0 ;
-(void)handleFetchedRecord:(id)arg0 ;
-(void)keybagDidUnlockForTheFirstTime:(id)arg0 ;
-(void)pairedDeviceDidChange;
-(void)purgeZoneWithID:(id)arg0 ;
-(void)removeZoneWithID:(id)arg0 ;
-(void)sendChangesWithCompletionHandler:(id)arg0 ;
-(void)setDataSource:(id)arg0 forZoneName:(id)arg1 ;
-(void)setTesting:(BOOL)arg0 ;
-(void)sync:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)syncEngine:(id)arg0 didDeleteRecordWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didUpdateMetadata:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecord:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasDeleted:(id)arg1 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasPurged:(id)arg1 ;


@end


#endif