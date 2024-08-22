// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKGIZMODATABASE_H
#define NPKGIZMODATABASE_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSData, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKGizmoDatabase : NSObject {
    *sqlite3 _database;
    *sqlite3_stmt _deleteStatement;
    *sqlite3_stmt _insertStatement;
    *sqlite3_stmt _insertDiffStatement;
    *sqlite3_stmt _selectPassDataStatement;
    *sqlite3_stmt _selectPassAndImageSetsDataStatement;
    *sqlite3_stmt _selectPassDiffStatement;
    *sqlite3_stmt _updateDeletePendingStatement;
    *sqlite3_stmt _selectDeletePendingStatement;
    *sqlite3_stmt _updatePreferredAIDStatement;
    *sqlite3_stmt _selectPreferredAIDStatement;
    *sqlite3_stmt _insertTransactionStatement;
    *sqlite3_stmt _removeTransactionStatement;
    *sqlite3_stmt _removeTransactionWithServiceIdentifier;
    *sqlite3_stmt _selectTransactionsStatement;
    *sqlite3_stmt _selectTransactionsStatementWithSource;
    *sqlite3_stmt _selectTransactionsStatementWithoutSource;
    *sqlite3_stmt _selectTransactionWithIdentifierStatement;
    *sqlite3_stmt _selectTransactionWithServiceIdentifierStatement;
    *sqlite3_stmt _insertTransactionSourceIdentifierForPassStatement;
    *sqlite3_stmt _selectTransactionSourceIdentifierForTransactionWithIdentifierStatement;
    *sqlite3_stmt _selectTransactionSourceIdentifierForTransactionWithServiceIdentifierStatement;
    *sqlite3_stmt _selectTransactionSourceIdentifierForPassUniqueIdentifierStatement;
    *sqlite3_stmt _selectPassUniqueIdentifierForTransactionSourceIdentifierStatement;
    *sqlite3_stmt _deleteTransactionSourceIdentifierForPassStatement;
    *sqlite3_stmt _deleteTransactionsForTransactionSourceStatement;
    *sqlite3_stmt _trimTransactionsForTransactionSourceStatement;
    *sqlite3_stmt _selectTransitAppletStateForPassStatement;
    *sqlite3_stmt _updateTransitAppletStateForPassStatement;
    *sqlite3_stmt _insertEphemeralTransactionStatement;
    *sqlite3_stmt _deleteEphemeralTransactionByTransactionSourceIdentifierStatement;
    *sqlite3_stmt _currentEphemeralTransactionIdentifierStatement;
    *sqlite3_stmt _selectLastAddValueAmountForPassStatement;
    *sqlite3_stmt _updateLastAddValueAmountForPassStatement;
    *sqlite3_stmt _selectPendingAddValueDateForPassStatement;
    *sqlite3_stmt _updatePendingAddValueDateForPassStatement;
    *sqlite3_stmt _selectBalancesForPassStatement;
    *sqlite3_stmt _updateBalancesForPassStatement;
    *sqlite3_stmt _selectSubcredentialsForPassStatement;
    *sqlite3_stmt _updateSubcredentialsForPassStatement;
    NSObject<OS_dispatch_queue> *_dbQueue;
    BOOL _isInTransaction;
    NSMutableDictionary *_manifest;
    NSMutableArray *_passDescriptions;
    NSArray *_libraryHashes;
    int _externallyChangedBroadcasts;
    BOOL _sendingLocalNotifyDatabaseChanged;
    BOOL _needsMoreLocalNotifyDatabaseChanged;
}


@property (readonly) *sqlite3_stmt currentEphemeralTransactionIdentifierStatement;
@property (readonly) *sqlite3 database;
@property (readonly) *sqlite3_stmt deleteEphemeralTransactionByTransactionSourceIdentifierStatement;
@property (readonly) *sqlite3_stmt deleteStatement;
@property (readonly) *sqlite3_stmt deleteTransactionSourceIdentifierForPassStatement;
@property (readonly) *sqlite3_stmt deleteTransactionsForTransactionSourceStatement;
@property (readonly) *sqlite3_stmt insertDiffStatement;
@property (readonly) *sqlite3_stmt insertEphemeralTransactionStatement;
@property (readonly) *sqlite3_stmt insertStatement;
@property (readonly) *sqlite3_stmt insertTransactionSourceIdentifierForPassStatement;
@property (readonly) NSData *libraryHash;
@property (readonly) NSDictionary *manifestHashes;
@property (readonly, nonatomic) NSUInteger numberOfPasses;
@property (nonatomic) BOOL passDBIsAvailable; // ivar: _passDBIsAvailable
@property (readonly) NSArray *passDescriptions;
@property (readonly) *sqlite3_stmt selectLastAddValueAmountForPassStatement;
@property (readonly) *sqlite3_stmt selectPassAndImageSetsDataStatement;
@property (readonly) *sqlite3_stmt selectPassDataStatement;
@property (readonly) *sqlite3_stmt selectPassDiffStatement;
@property (readonly) *sqlite3_stmt selectPendingAddValueDateForPassStatement;
@property (readonly) *sqlite3_stmt selectPreferredAIDStatement;
@property (readonly) *sqlite3_stmt selectTransactionWithIdentifierStatement;
@property (readonly) *sqlite3_stmt selectTransactionWithServiceIdentifierStatement;
@property (readonly) *sqlite3_stmt selectTransitAppletStateForPassStatement;
@property (readonly) *sqlite3_stmt trimTransactionsForTransactionSourceStatement;
@property (readonly) *sqlite3_stmt updateDeletePendingStatement;
@property (readonly) *sqlite3_stmt updateLastAddValueAmountForPassStatement;
@property (readonly) *sqlite3_stmt updatePendingAddValueDateForPassStatement;
@property (readonly) *sqlite3_stmt updatePreferredAIDStatement;
@property (readonly) *sqlite3_stmt updateTransitAppletStateForPassStatement;


+(NSInteger)maxDatabaseVersion;
+(NSUInteger)latestWatchOSMajorVersion;
+(id)_migrationDataSource;
+(id)_migrationDelegateQueue;
+(id)sharedDatabase;
+(void)setMigrationDataSource:(id)arg0 ;
-(BOOL)_executeSQL:(id)arg0 ;
-(BOOL)_getDeletePendingForUniqueID:(id)arg0 ;
-(BOOL)_migrateDatabase:(id)arg0 ;
-(BOOL)_preconditionsMetForDatabaseOpen;
-(BOOL)_removePassWithUniqueIDLocked:(id)arg0 ;
-(BOOL)_repairEncodedImagesDuringMigration:(id)arg0 ;
-(BOOL)_table:(id)arg0 containsColumn:(id)arg1 ;
-(BOOL)_updateAvailableActionsDuringMigration:(id)arg0 ;
-(BOOL)_updateCompleteLocalHashesDuringMigration:(id)arg0 ;
-(BOOL)_updateCompleteRemoteHashesDuringMigration;
-(BOOL)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg0 ;
-(BOOL)_updateDevicePaymentApplicationsDuringMigration:(id)arg0 ;
-(BOOL)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg0 ;
-(BOOL)_updateEncodedImageSetsDuringMigration:(id)arg0 ;
-(BOOL)_updateEncodedPaymentPassDuringMigration:(id)arg0 ;
-(BOOL)_updateExpressPassTypesMaskDuringMigration:(id)arg0 ;
-(BOOL)_updateFrontAndBackFieldBucketsDuringMigration:(id)arg0 ;
-(BOOL)_updateHasStoredValueDuringMigration:(id)arg0 ;
-(BOOL)_updateHasUserSelectableContactlessPaymentApplications:(id)arg0 ;
-(BOOL)_updateIngestedDatesDuringMigration:(id)arg0 ;
-(BOOL)_updateIssuerCountryCodesDuringMigration:(id)arg0 ;
-(BOOL)_updateLocalizedDescriptionDuringMigration:(id)arg0 ;
-(BOOL)_updateNFCPayloadDuringMigration:(id)arg0 ;
-(BOOL)_updateOrganizationNamesDuringMigration:(id)arg0 ;
-(BOOL)_updatePrimaryContactlessAndInAppPaymentApplicationsDuringMigration:(id)arg0 ;
-(BOOL)_updatePrivateLabelAndCobrandDuringMigration:(id)arg0 ;
-(BOOL)_updateSettingsDuringMigration:(id)arg0 ;
-(BOOL)_updateTransactionSourceIdentifiersDuringMigration:(id)arg0 ;
-(BOOL)hasPassesMatchingPassDescriptionPredicate:(id)arg0 ;
-(NSInteger)_databaseVersionExists:(*BOOL)arg0 valid:(*BOOL)arg1 ;
-(id)_currentEphemeralTransactionIdentifierForTransactionSourceIdentifier:(id)arg0 ;
-(id)_decodeObjectOfClass:(Class)arg0 fromStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(id)_decodeObjectOfClasses:(id)arg0 fromStatement:(struct sqlite3_stmt *)arg1 column:(int)arg2 ;
-(id)_diffForUniqueIDLocked:(id)arg0 ;
-(id)_getPreferredPaymentApplicationForPaymentPass:(id)arg0 aid:(*id)arg1 ;
-(id)_lastAddValueAmountForPassWithUniqueIDLocked:(id)arg0 ;
-(id)_libraryHashLockedForWatchOSMajorVersion:(NSUInteger)arg0 ;
-(id)_passForUniqueIDLocked:(id)arg0 includeImageSets:(BOOL)arg1 ;
-(id)_passUniqueIdentifierForTransactionSourceIdentifierLocked:(id)arg0 ;
-(id)_paymentBalancesForPassWithUniqueIDLocked:(id)arg0 ;
-(id)_pendingAddValueDateForPassWithUniqueIDLocked:(id)arg0 ;
-(id)_subcredentialsForPassWithUniqueIDLocked:(id)arg0 ;
-(id)_transactionSourceIdentifierForPassUniqueIdentifierLocked:(id)arg0 ;
-(id)_transactionSourceIdentifierForTransactionWithIdentifierLocked:(id)arg0 ;
-(id)_transactionSourceIdentifierForTransactionWithServiceIdentifierLocked:(id)arg0 ;
-(id)_transactionWithIdentifierLocked:(id)arg0 ;
-(id)_transactionWithServiceIdentifierLocked:(id)arg0 ;
-(id)_transactionsForTransactionSourceIdentifierLocked:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 orderByDate:(NSInteger)arg5 limit:(NSUInteger)arg6 ;
-(id)_transitAppletStateForPassWithUniqueIDLocked:(id)arg0 ;
-(id)currentEphemeralTransactionIdentifierForTransactionSourceIdentifier:(id)arg0 ;
-(id)diffForUniqueID:(id)arg0 ;
-(id)filteredPassesUsingPassDescriptionPredicate:(id)arg0 includeImageSets:(BOOL)arg1 ;
-(id)init;
-(id)lastAddValueAmountForPassWithUniqueID:(id)arg0 ;
-(id)libraryHashForWatchOSMajorVersion:(NSUInteger)arg0 ;
-(id)manifestHashesForWatchOSMajorVersion:(NSUInteger)arg0 ;
-(id)passForUniqueID:(id)arg0 ;
-(id)passForUniqueID:(id)arg0 includeImageSets:(BOOL)arg1 ;
-(id)passUniqueIDForTransactionSourceIdentifier:(id)arg0 ;
-(id)paymentBalancesForPassWithUniqueID:(id)arg0 ;
-(id)pendingAddValueDateForPassWithUniqueID:(id)arg0 ;
-(id)preferredPaymentApplicationForPaymentPass:(id)arg0 ;
-(id)rebuildDatabaseWithPasses:(id)arg0 ;
-(id)removePassWithUniqueID:(id)arg0 ;
-(id)restoreBlockForVolatilePassData:(SEL)arg0 ;
-(id)savePass:(id)arg0 isLocalPass:(BOOL)arg1 ;
-(id)subcredentialsForPassWithUniqueID:(id)arg0 ;
-(id)transactionSourceIdentifierForPassWithUniqueID:(id)arg0 ;
-(id)transactionSourceIdentifierForTransactionWithIdentifier:(id)arg0 ;
-(id)transactionSourceIdentifierForTransactionWithServiceIdentifier:(id)arg0 ;
-(id)transactionSourcesForPassWithUniqueID:(id)arg0 ;
-(id)transactionWithIdentifier:(id)arg0 ;
-(id)transactionWithServiceIdentifier:(id)arg0 ;
-(id)transactionsForTransactionSourceIdentifier:(id)arg0 withTransactionSource:(NSUInteger)arg1 withBackingData:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(NSInteger)arg5 limit:(NSInteger)arg6 ;
-(id)transitAppletStateForPassWithUniqueID:(id)arg0 ;
-(struct sqlite3_stmt *)insertTransactionStatement;
-(struct sqlite3_stmt *)removeTransactionStatement;
-(struct sqlite3_stmt *)removeTransactionWithServiceIdentifierStatement;
-(struct sqlite3_stmt *)selectBalancesForPassStatement;
-(struct sqlite3_stmt *)selectDeletePendingStatement;
-(struct sqlite3_stmt *)selectPassUniqueIdentifierForTransactionSourceIdentifierStatement;
-(struct sqlite3_stmt *)selectSubcredentialsForPassStatement;
-(struct sqlite3_stmt *)selectTransactionSourceIdentifierForPassUniqueIdentifierStatement;
-(struct sqlite3_stmt *)selectTransactionSourceIdentifierForTransactionWithIdentifierStatement;
-(struct sqlite3_stmt *)selectTransactionSourceIdentifierForTransactionWithServiceIdentifierStatement;
-(struct sqlite3_stmt *)selectTransactionsStatementWithTransactionSource:(NSUInteger)arg0 orderByDate:(NSInteger)arg1 ;
-(struct sqlite3_stmt *)updateBalancesForPassStatement;
-(struct sqlite3_stmt *)updateSubcredentialsForPassStatement;
-(void)_attemptDatabaseOpen;
-(void)_createTransactionSourceIdentifierIfNecessaryForPassWithUniqueIDLocked:(id)arg0 ;
-(void)_enumerateAllPassesForMigration:(id)arg0 ;
-(void)_executeSQLQuery:(id)arg0 processResultsBlock:(id)arg1 ;
-(void)_handleDatabaseChangedExternally;
-(void)_handleFirstUnlock;
-(void)_handleHasMigrationDataSource;
-(void)_inQueue_teardownDB;
-(void)_insertDatabaseVersionRow:(NSInteger)arg0 ;
-(void)_loadInitialManifestLocked;
-(void)_notifyDatabaseChangedExternally;
-(void)_notifyDatabaseChangedWithNoop:(BOOL)arg0 ;
-(void)_notifyDatabaseChangedWithNoop:(BOOL)arg0 firstUnlock:(BOOL)arg1 ;
-(void)_notifyForFirstUnlock;
-(void)_performTransactionWithBlock:(id)arg0 ;
-(void)_rebuildDatabaseWithPassesFromCompanionPasses;
-(void)_removeTransactionSourceIdentifierForPassWithUniqueIDLocked:(id)arg0 ;
-(void)_removeTransactionWithIdentifier:(id)arg0 ;
-(void)_removeTransactionWithServiceIdentifierLocked:(id)arg0 forTransactionSourceIdentifier:(id)arg1 ;
-(void)_removeTransactionsForTransactionSource:(id)arg0 ;
-(void)_saveDiffLocked:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)_savePassLocked:(id)arg0 locallyAdded:(BOOL)arg1 wasUpdate:(*BOOL)arg2 ;
-(void)_saveTransaction:(id)arg0 forTransactionSourceIdentifier:(id)arg1 withPaymentCredentialType:(NSInteger)arg2 shouldTrim:(BOOL)arg3 ;
-(void)_saveTransactionLocked:(id)arg0 forTransactionSourceIdentifier:(id)arg1 ;
-(void)_setCurrentEphemeralTransactionIdentifier:(id)arg0 forTransactionSourceIdentifier:(id)arg1 ;
-(void)_setLastAddValueAmountLocked:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)_setPaymentBalancesLocked:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)_setPendingAddValueDateLocked:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)_setSubcredentialsLocked:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)_setTransitAppletStateLocked:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)_trimTransactionsForTransactionSourceIdentifierLocked:(id)arg0 withPaymentCredentialType:(NSInteger)arg1 ;
-(void)_updateDatabaseVersionRow:(NSInteger)arg0 ;
-(void)_verifyPassDataIsUnarchivedCorrectlyWithData:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)dealloc;
// -(void)enumerateAllPassesAndDescriptionsWithBlock:(id)arg0 includeImageSets:(unk)arg1  ;
// -(void)enumerateAllPassesWithBlock:(id)arg0 includeImageSets:(unk)arg1  ;
-(void)removeTransactionWithIdentifier:(id)arg0 ;
-(void)removeTransactionsForTransactionSource:(id)arg0 ;
-(void)saveDiff:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)saveTransaction:(id)arg0 forPass:(id)arg1 ;
-(void)setCurrentEphemeralTransactionIdentifier:(id)arg0 forTransactionSourceIdentifier:(id)arg1 ;
-(void)setDeletePending:(BOOL)arg0 forUniqueID:(id)arg1 ;
-(void)setLastAddValueAmount:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)setPaymentBalances:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)setPendingAddValueDate:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)setPreferredPaymentApplication:(id)arg0 forPaymentPass:(id)arg1 ;
-(void)setSubcredentials:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)setTransitAppletState:(id)arg0 forPassWithUniqueID:(id)arg1 ;
-(void)teardownDB;


@end


#endif