// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSGLOBALCONFIGURATIONSTORE_H
#define DNDSGLOBALCONFIGURATIONSTORE_H

@class NSString;
@protocol DNDSBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSGlobalConfigurationStoring, DNDSBackingStore, DNDSGlobalConfigurationStoreDelegate;

#import <Foundation/Foundation.h>

#import "DNDSSyncEngine.h"
#import "DNDSIDSSyncEngine.h"
#import "DNDSGlobalConfiguration.h"

@interface DNDSGlobalConfigurationStore : NSObject <DNDSBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSGlobalConfigurationStoring>

 {
    id<DNDSBackingStore> *_backingStore;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    DNDSGlobalConfiguration *_configuration;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSGlobalConfigurationStoreDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)syncEngine:(id)arg0 prepareRecordToSave:(id)arg1 ;
-(NSInteger)syncEngine:(id)arg0 wantsRecord:(id)arg1 ;
-(NSUInteger)_lock_writeRecord:(id)arg0 writePartition:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)writeRecord:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)writeRecord:(id)arg0 writePartition:(BOOL)arg1 error:(*id)arg2 ;
-(id)_createConfigurationFromCKRecord:(id)arg0 ;
-(id)_createConfigurationFromDNDSIDSRecord:(id)arg0 ;
-(id)_lock_existingConfiguration;
-(id)_lock_mutableExistingConfigurationInStore:(id)arg0 ;
-(id)backingStore:(id)arg0 migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(NSUInteger)arg2 toVersionNumber:(NSUInteger)arg3 ;
-(id)initWithBackingStore:(id)arg0 syncEngine:(id)arg1 idsSyncEngine:(id)arg2 ;
-(id)readRecordWithError:(*id)arg0 ;
-(id)recordIDsForIDSSyncEngine:(id)arg0 ;
-(id)recordIDsForSyncEngine:(id)arg0 ;
-(id)syncEngine:(id)arg0 recordTypeForRecordID:(id)arg1 ;
-(void)_lock_prepareCKRecordToSave:(id)arg0 ;
-(void)_lock_prepareDNDSIDSRecordToSave:(id)arg0 ;
-(void)_lock_purgeData;
-(void)_lock_updateConfigurationWithCKRecord:(id)arg0 ;
-(void)_lock_updateConfigurationWithDNDSIDSRecord:(id)arg0 ;
-(void)_notifyDelegateOfConfigurationChange;
-(void)_populateCKRecord:(id)arg0 withGlobalConfiguration:(id)arg1 ;
-(void)_populateDNDSIDSRecord:(id)arg0 withGlobalConfiguration:(id)arg1 ;
-(void)_purgeData;
-(void)globalConfigurationSyncManager:(id)arg0 didReceiveUpdatedGlobalConfiguration:(id)arg1 ;
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