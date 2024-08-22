// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSENDERPERSISTENCE_H
#define EDSENDERPERSISTENCE_H

@class EMBlockedSenderManager, CNContactStore, EFLazyCache, NSString;
@protocol EDMessageChangeHookResponder, EDProtectedDatabasePersistenceReconciliationMergeHandler, EDPersistenceDatabaseSchemaProvider;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDPersistenceHookRegistry.h"

@interface EDSenderPersistence : NSObject <EDMessageChangeHookResponder, EDProtectedDatabasePersistenceReconciliationMergeHandler, EDPersistenceDatabaseSchemaProvider>

 {
    os_unfair_lock_s _syncStartedLock;
    os_unfair_lock_s _contactStoreLock;
}


@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager; // ivar: _blockedSenderManager
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, nonatomic) EFLazyCache *databaseIDToEmailAddressCache; // ivar: _databaseIDToEmailAddressCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EFLazyCache *emailAddressToBucketCache; // ivar: _emailAddressToBucketCache
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (readonly) Class superclass;


+(id)addJoinsForSenderBucketToSelectStatement:(id)arg0 withSourceAddressColumn:(id)arg1 ;
+(id)senderAddressesTableSchema;
+(id)sendersTableSchema;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)_addAddressesWithDatabaseIDs:(id)arg0 toSenderWithDatabaseID:(id)arg1 connection:(id)arg2 error:(*id)arg3 ;
-(BOOL)_addNewSender:(id)arg0 toBucket:(NSInteger)arg1 connection:(id)arg2 ;
-(BOOL)_addNewSenderWithAddressIDs:(id)arg0 contactIdentifier:(id)arg1 toBucket:(NSInteger)arg2 connection:(id)arg3 senderDatabaseID:(*NSInteger)arg4 ;
-(BOOL)_addNewSendersForEmailAddresses:(id)arg0 toBucket:(NSInteger)arg1 connection:(id)arg2 newSenders:(*id)arg3 ;
-(BOOL)_blockOrUnblockSendersForAddresses:(id)arg0 block:(BOOL)arg1 blockedAddressDatabaseIDs:(id)arg2 connection:(id)arg3 addressesToUpdate:(*id)arg4 ;
-(BOOL)_moveSenderWithDatabaseID:(NSInteger)arg0 toBucket:(NSInteger)arg1 connection:(id)arg2 ;
-(NSInteger)_bucketForSenderAddress:(id)arg0 ;
-(NSInteger)_bucketForSenderWithDatabaseID:(NSInteger)arg0 connection:(id)arg1 ;
-(NSInteger)bucketForSenderAddress:(id)arg0 ;
-(NSUInteger)handleReconciliationMergeErrorForTable:(id)arg0 columnName:(id)arg1 statement:(id)arg2 journalRowID:(id)arg3 protectedRowID:(id)arg4 connection:(id)arg5 rowsUpdated:(*NSUInteger)arg6 error:(*id)arg7 ;
-(id)_addressIDsForAddresses:(id)arg0 connection:(id)arg1 ;
-(id)_addressIDsGroupedByContactsForAddressesByContact:(id)arg0 withConnection:(id)arg1 addressesByID:(*id)arg2 ;
-(id)_addressesGroupedByContactForAddresses:(id)arg0 unmatchedAddresses:(*id)arg1 otherAddressesByContact:(*id)arg2 ;
-(id)_addressesGroupedBySimpleAddressForAddresses:(id)arg0 ;
-(id)_addressesToDatabaseIDsForSelect:(id)arg0 addressColumns:(id)arg1 connection:(id)arg2 error:(*id)arg3 ;
-(id)_addressesToDatabaseIDsForSimpleAddresses:(id)arg0 connection:(id)arg1 ;
-(id)_combineDictionary:(id)arg0 withDictionary:(id)arg1 ;
-(id)_contactIdentifierForSenderWithDatabaseID:(NSInteger)arg0 connection:(id)arg1 ;
-(id)_emailAddressForDatabaseID:(id)arg0 connection:(id)arg1 ;
-(id)_moveSenderWithSimpleEmailAddresses:(id)arg0 toBucket:(NSInteger)arg1 sync:(BOOL)arg2 userInitiated:(BOOL)arg3 transactionGeneration:(*NSInteger)arg4 ;
-(id)_newlyBlockedAddressesForBlockedAddressDatabaseIDs:(id)arg0 connection:(id)arg1 ;
-(id)_newlyUnblockedAddressesForBlockedAddressDatabaseIDs:(id)arg0 connection:(id)arg1 ;
-(id)_simpleAddressesForAddresses:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 blockedSenderManager:(id)arg1 hookRegistry:(id)arg2 contactStore:(id)arg3 ;
-(id)relevantSendersForSearch;
-(void)_blockedSendersDidChange:(id)arg0 ;
-(void)_invalidateCaches;
-(void)_invalidateCachesForAddresses:(id)arg0 ;
-(void)_moveAddressesFromSentMessagesToPrimaryForMessages:(id)arg0 ;
-(void)_moveSenderWithEmailAddresses:(id)arg0 toBucket:(NSInteger)arg1 sync:(BOOL)arg2 userInitiated:(BOOL)arg3 ;
-(void)_reloadBlockedSendersWithAddresses:(id)arg0 ;
-(void)_setIsBlocked:(BOOL)arg0 forAddresses:(id)arg1 ;
// -(void)_updateBlockedSendersWithBlockedSenderAddresses:(id)arg0 newlyBlockedAddresses:(id)arg1 newlyUnblockedAddresses:(unk)arg2  ;
-(void)addAddresses:(id)arg0 toSender:(id)arg1 ;
-(void)moveSenderWithEmailAddresses:(id)arg0 toBucket:(NSInteger)arg1 ;
-(void)persistenceDidAddMessages:(id)arg0 generationWindow:(id)arg1 ;
-(void)removeAddresses:(id)arg0 fromSender:(id)arg1 ;
-(void)scheduleRecurringActivity;
-(void)test_tearDown;


@end


#endif