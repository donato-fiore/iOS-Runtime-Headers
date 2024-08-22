// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMODECONFIGURATIONSSTORE_H
#define DNDSMODECONFIGURATIONSSTORE_H

@class NSData, NSString, NSSet;
@protocol DNDSCachedBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSModeConfigurationsStoring, DNDSContactMonitorListener, DNDSBackingStore, DNDSContactMonitoring, DNDSModeConfigurationsStoreDelegate;

#import <Foundation/Foundation.h>

#import "DNDSSyncEngine.h"
#import "DNDSIDSSyncEngine.h"

@interface DNDSModeConfigurationsStore : NSObject <DNDSCachedBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSModeConfigurationsStoring, DNDSContactMonitorListener>

 {
    id<DNDSBackingStore> *_backingStore;
    id<DNDSContactMonitoring> *_contactMonitor;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSData *contactHistoryToken; // ivar: _contactHistoryToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSModeConfigurationsStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *monitoredContacts;
@property (readonly) Class superclass;


-(BOOL)_lock_populateCKRecord:(id)arg0 ;
-(BOOL)_lock_populateDNDSIDSRecord:(id)arg0 ;
-(BOOL)syncEngine:(id)arg0 prepareRecordToSave:(id)arg1 ;
-(BOOL)syncEngine:(id)arg0 wantsRecord:(id)arg1 ;
-(NSUInteger)_lock_writeRecord:(id)arg0 writePartition:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)writeRecord:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)writeRecord:(id)arg0 writePartition:(BOOL)arg1 error:(*id)arg2 ;
-(id)_lock_existingConfigurations;
-(id)_lock_modeConfigurationForCKRecordID:(id)arg0 ;
-(id)_lock_modeConfigurationForDNDSIDSRecordID:(id)arg0 ;
-(id)_lock_modeConfigurationForModeIdentifier:(id)arg0 ;
-(id)_lock_modeIdentifiers;
-(id)_lock_mutableExistingConfigurations;
-(id)_lock_recordIDsForIDSSyncEngine:(id)arg0 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)initWithBackingStore:(id)arg0 syncEngine:(id)arg1 idsSyncEngine:(id)arg2 ;
-(id)readRecordWithError:(*id)arg0 ;
-(id)recordIDsForIDSSyncEngine:(id)arg0 ;
-(id)recordIDsForSyncEngine:(id)arg0 ;
-(id)syncEngine:(id)arg0 recordTypeForRecordID:(id)arg1 ;
-(void)_lock_purgeData;
-(void)_lock_purgeRecordIDs:(id)arg0 ;
-(void)_lock_removeModeConfigurationWithCKRecordID:(id)arg0 ;
-(void)_lock_removeModeConfigurationWithModeIdentifier:(id)arg0 ;
-(void)_lock_updateModeConfigurationWithCKRecord:(id)arg0 ;
-(void)_lock_updateModeConfigurationWithConfiguration:(id)arg0 ;
-(void)_lock_updateModeConfigurationWithDNDSIDSRecord:(id)arg0 ;
-(void)_notifyDelegateOfAvailableModes;
-(void)_purgeData;
-(void)_purgeRecordIDs:(id)arg0 ;
-(void)cachedBackingStoreDidPurgeCache:(id)arg0 ;
-(void)contactMonitor:(id)arg0 didReceiveUpdatedContacts:(id)arg1 deletedContactIdentifiers:(id)arg2 withContactHistoryToken:(id)arg3 ;
-(void)contactMonitor:(id)arg0 didReceiveUpdatedContactsForContactsWithoutIdentifiers:(id)arg1 ;
-(void)idsSyncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)idsSyncEngine:(id)arg0 prepareRecordToSave:(id)arg1 ;
-(void)idsSyncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 ;
-(void)purgeRecordsForIDSSyncEngine:(id)arg0 ;
-(void)purgeRecordsForSyncEngine:(id)arg0 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 ;
-(void)syncEngine:(id)arg0 resolveConflictBetweenClientRecord:(id)arg1 andServerRecord:(id)arg2 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasDeleted:(id)arg1 removingRecordIDs:(id)arg2 ;


@end


#endif