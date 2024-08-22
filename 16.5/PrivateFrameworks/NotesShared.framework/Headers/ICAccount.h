// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICACCOUNT_H
#define ICACCOUNT_H

@class NSString, NSSet, NSData, NSPersonNameComponents, NSDate, NSManagedObjectID, NSPersistentStore, CKRecordID, NSDictionary;
@protocol ICCloudObject, ICAccountObject, ICAccountCryptoStrategy;


#import "ICNoteContainer.h"
#import "ICAccountData.h"
#import "ICAccountProxy.h"
#import "ICFolder.h"

@interface ICAccount : ICNoteContainer <ICCloudObject, ICAccountObject>



@property (retain, nonatomic) ICAccountData *accountData;
@property (retain, nonatomic) ICAccountProxy *accountProxy; // ivar: _accountProxy
@property (nonatomic) int accountType;
@property (readonly, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSSet *attachments;
@property (readonly) NSObject<ICAccountCryptoStrategy> *cryptoStrategy;
@property (retain, nonatomic) NSData *cryptoVerifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICFolder *defaultFolder; // ivar: _defaultFolder
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *deviceMigrationStates;
@property (nonatomic) BOOL didAddObservers; // ivar: _didAddObservers
@property (nonatomic) BOOL didAddTrashObservers; // ivar: _didAddTrashObservers
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didFinishMigration;
@property (nonatomic) BOOL didMigrateOnMac;
@property (readonly, nonatomic) NSString *dsid; // ivar: _dsid
@property (retain, nonatomic) NSSet *folders;
@property (retain, nonatomic) NSPersonNameComponents *fullName; // ivar: fullName
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *hashtags;
@property (retain, nonatomic) NSSet *inlineAttachments;
@property (retain, nonatomic) NSSet *invitations;
@property (readonly, nonatomic) BOOL isDataSeparated;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isLocalAccount;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isValidObject;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (retain, nonatomic) NSSet *legacyTombstones;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (retain, nonatomic) NSSet *media;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (retain, nonatomic) NSSet *notes;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) NSSet *ownerInverse;
@property (readonly, nonatomic) NSPersistentStore *persistentStore;
@property (retain, nonatomic) NSString *primaryEmail; // ivar: primaryEmail
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSDictionary *replicaIDToBundleIdentifier;
@property (retain, nonatomic) NSSet *serverChangeTokens;
@property (copy, nonatomic) NSData *serverSideUpdateTaskContinuationToken;
@property (nonatomic) unsigned short serverSideUpdateTaskFailureCount;
@property (copy, nonatomic) NSString *serverSideUpdateTaskLastAttemptedBuild;
@property (copy, nonatomic) NSString *serverSideUpdateTaskLastAttemptedVersion;
@property (copy, nonatomic) NSString *serverSideUpdateTaskLastCompletedBuild;
@property (copy, nonatomic) NSString *serverSideUpdateTaskLastCompletedVersion;
@property (nonatomic) BOOL storeDataSeparately;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) ICFolder *trashFolder; // ivar: _trashFolder
@property (copy, nonatomic) NSString *userRecordName;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, nonatomic) NSString *username; // ivar: _username
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;


+(BOOL)clearAccountForAppleCloudKitTable;
+(BOOL)hasActiveCloudKitAccountInContext:(id)arg0 ;
+(BOOL)hasModernAccountInContext:(id)arg0 ;
+(BOOL)hidesSystemPaperNotesInCustomFolders;
+(BOOL)isCloudKitAccountAvailable;
+(BOOL)isCloudKitAccountAvailableInContext:(id)arg0 ;
+(NSUInteger)numberOfCloudKitAccountsInContext:(id)arg0 onlyMigrated:(BOOL)arg1 ;
+(id)accountUtilities;
+(id)accountWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)accountsMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)accountsWithAccountType:(int)arg0 context:(id)arg1 ;
+(id)activeAccountWithUserRecordName:(id)arg0 context:(id)arg1 ;
+(id)allAccountIdentifiersInContext:(id)arg0 ;
+(id)allAccountsInContext:(id)arg0 ;
+(id)allActiveAccountsInContext:(id)arg0 ;
+(id)allActiveAccountsInContext:(id)arg0 sortDescriptors:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 ;
+(id)allActiveAccountsInContextSortedByAccountType:(id)arg0 ;
+(id)allActiveAccountsInContextWithDefaultBeingFirstIfApplicable:(id)arg0 ;
+(id)allActiveCloudKitAccountsInContext:(id)arg0 ;
+(id)allCloudKitAccountsInContext:(id)arg0 ;
+(id)allCloudObjectIDsInContext:(id)arg0 passingTest:(id)arg1 ;
+(id)cloudKitAccountInContext:(id)arg0 ;
+(id)cloudKitAccountWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)cloudKitIfMigratedElseLocalAccountInContext:(id)arg0 ;
+(id)defaultAccountInContext:(id)arg0 ;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)inMemoryAccountInContext:(id)arg0 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)keyPathsForValuesAffectingLocalizedName;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)localAccountInContext:(id)arg0 ;
+(id)localizedLocalAccountName;
+(id)localizedLocalAccountNameMidSentence;
+(id)mostRecentSystemPaperNoteInManagedObjectContext:(id)arg0 ;
+(id)newAccountWithIdentifier:(id)arg0 type:(int)arg1 context:(id)arg2 ;
+(id)newLocalAccountInContext:(id)arg0 ;
+(id)passwordProtectedNoteIdentifiersInAccountIdentifier:(id)arg0 context:(id)arg1 ;
+(id)standardFolderIdentifierWithPrefix:(id)arg0 accountIdentifier:(id)arg1 accountType:(int)arg2 ;
+(void)deleteAccount:(id)arg0 ;
+(void)deleteAccountWithBatchDelete:(id)arg0 ;
+(void)enumerateAllCloudObjectsInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)initialize;
+(void)initializeLocalAccountNamesInBackground;
+(void)localeDidChange:(id)arg0 ;
+(void)setAccountUtilities:(id)arg0 ;
+(void)setHidesSystemPaperNotesInCustomFolders:(BOOL)arg0 ;
-(BOOL)allowsExporting;
-(BOOL)allowsImporting;
-(BOOL)canBeSharedViaICloud;
-(BOOL)canPasswordProtectNotes;
-(BOOL)containsSharedFolders;
-(BOOL)hasAnyCustomFoldersIncludingSystem:(BOOL)arg0 ;
-(BOOL)hasSamePassphraseForObject:(id)arg0 ;
-(BOOL)isAllNotesContainer;
-(BOOL)isDeletable;
-(BOOL)isLeaf;
-(BOOL)isPrimaryiCloudAccount;
-(BOOL)isShowingDateHeaders;
-(BOOL)mergeCloudKitRecord:(id)arg0 accountID:(id)arg1 approach:(NSInteger)arg2 mergeableFieldState:(id)arg3 ;
-(BOOL)setPassphrase:(id)arg0 hint:(id)arg1 ;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(BOOL)shouldExcludeFilesFromCloudBackup;
-(BOOL)supportsDateHeaders;
-(BOOL)supportsEditingNotes;
-(BOOL)supportsLegacyTombstones;
-(BOOL)updateAllNotesWithOldPassphrase:(id)arg0 toAccountPassphrase:(id)arg1 progress:(id)arg2 ;
-(BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)indexOfCustomRootLevelFolder:(id)arg0 ;
-(NSUInteger)visibleAttachmentsIncludingTrashCount;
-(NSUInteger)visibleCustomFoldersCount;
-(NSUInteger)visibleInCloudNotesIncludingTrashCount;
-(NSUInteger)visibleNotesCount;
-(NSUInteger)visibleNotesIncludingTrashCount;
-(id)accountFilesDirectoryURL;
-(id)accountFilesDirectoryURLInApplicationDataContainer;
-(id)accountName;
-(id)allChildObjects;
-(id)allItemsFolderLocalizedTitle;
-(id)cacheKey;
-(id)containerIdentifier;
-(id)cryptoPassphraseVerifier;
-(id)customNoteSortTypeValue;
-(id)customRootLevelFolders;
-(id)exportableMediaDirectoryURL;
-(id)fallbackImageDirectoryURL;
-(id)fallbackPDFDirectoryURL;
-(id)folderWithIdentifier:(id)arg0 ;
-(id)ic_loggingIdentifier;
-(id)ic_loggingValues;
-(id)makeCloudKitRecordForApproach:(NSInteger)arg0 mergeableFieldState:(id)arg1 ;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)passwordProtectedNotes;
-(id)predicateForAttachmentsInAccount;
-(id)predicateForCustomFolders;
-(id)predicateForFolders;
-(id)predicateForNotesInAccount;
-(id)predicateForPinnedNotes;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)predicateForVisibleAttachments;
-(id)predicateForVisibleAttachmentsIncludingTrash;
-(id)predicateForVisibleFolders;
-(id)predicateForVisibleNotes;
-(id)predicateForVisibleNotesIncludingTrash;
-(id)previewImageDirectoryURL;
-(id)recordName;
-(id)recordZoneName;
-(id)replicaIDForBundleIdentifier:(id)arg0 ;
-(id)reservedAccountFolderTitles;
-(id)standardFolderIdentifierWithPrefix:(id)arg0 ;
-(id)subFolderIdentifiersOrderedSet;
-(id)subFolderOrderMergeableData;
-(id)systemPaperBundlesDirectoryURL;
-(id)systemPaperDirectoryURL;
-(id)systemPaperNotes;
-(id)systemPaperTemporaryDirectoryURL;
-(id)temporaryDirectoryURL;
-(id)titleForNavigationBar;
-(id)titleForTableViewCell;
-(id)uniqueUserParticipants;
-(id)visibleFolders;
-(id)visibleFoldersWithParent:(id)arg0 ;
-(id)visibleNoteContainerChildren;
-(id)visibleNoteContainers;
-(id)visibleNotes;
-(id)visibleSubFolders;
-(short)resolvedLockedNotesMode;
-(void)addTrashObserversIfNecessary;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)createDefaultFolder;
-(void)createStandardFolders;
-(void)createTrashFolder;
-(void)dealloc;
-(void)deleteUnusedHashtagsWithStandardizedContent:(id)arg0 ;
-(void)ensureCriticalPaperDirectoriesExist;
-(void)managedObjectContextDidSave:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performBlockInPersonaContext:(id)arg0 ;
-(void)performBlockInPersonaContextIfNecessary:(id)arg0 ;
-(void)prepareForDeletion;
-(void)removeAllObserversIfNecessary;
-(void)removePassphrase;
-(void)removeTrashObserversIfNecessary;
-(void)setMarkedForDeletion:(BOOL)arg0 ;
-(void)setResolvedLockedNotesMode:(short)arg0 ;
-(void)setSubFolderOrderMergeableData:(id)arg0 ;
-(void)updateAccountNameForAccountListSorting;
-(void)updateFullNameAndEmail:(id)arg0 ;
-(void)updateSubFolderMergeableDataChangeCount;
-(void)updateTrashFolderHiddenNoteContainerState;
-(void)willTurnIntoFault;


@end


#endif