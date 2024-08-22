// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICACCOUNT_H
#define ICACCOUNT_H

@class NSData, NSString, NSSet, NSPersistentStore, NSDictionary;
@protocol ICCloudObject;


#import "ICNoteContainer.h"
#import "ICAccountData.h"
#import "ICAccountProxy.h"
#import "ICFolder.h"

@interface ICAccount : ICNoteContainer <ICCloudObject>



@property (retain, nonatomic) ICAccountData *accountData;
@property (retain, nonatomic) ICAccountProxy *accountProxy; // ivar: _accountProxy
@property (nonatomic) int accountType;
@property (retain, nonatomic) NSData *cryptoVerifier;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ICFolder *defaultFolder; // ivar: _defaultFolder
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSSet *deviceMigrationStates;
@property (nonatomic) BOOL didAddObservers; // ivar: _didAddObservers
@property (nonatomic) BOOL didAddTrashObservers; // ivar: _didAddTrashObservers
@property (nonatomic) BOOL didChooseToMigrate;
@property (nonatomic) BOOL didFinishMigration;
@property (nonatomic) BOOL didMigrateOnMac;
@property (readonly, nonatomic) NSString *dsid;
@property (retain, nonatomic) NSSet *folders;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *hashtags;
@property (nonatomic) BOOL hidesSystemPaperNotesInCustomFolders;
@property (readonly, nonatomic) BOOL isManaged;
@property (retain, nonatomic) NSSet *legacyTombstones;
@property (readonly, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (retain, nonatomic) NSSet *notes;
@property (retain, nonatomic) NSSet *ownerInverse;
@property (readonly, nonatomic) NSPersistentStore *persistentStore;
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
@property (retain, nonatomic) ICFolder *systemPaperFolder; // ivar: _systemPaperFolder
@property (retain, nonatomic) ICFolder *trashFolder; // ivar: _trashFolder
@property (retain, nonatomic) NSString *userRecordName;


+(BOOL)clearAccountForAppleCloudKitTable;
+(BOOL)hasActiveCloudKitAccountInContext:(id)arg0 ;
+(BOOL)hasModernAccountInContext:(id)arg0 ;
+(BOOL)isCloudKitAccountAvailable;
+(BOOL)isCloudKitAccountAvailableInContext:(id)arg0 ;
+(NSUInteger)countOfSystemPaperFoldersAcrossAllAccountsInContext:(id)arg0 ;
+(NSUInteger)numberOfCloudKitAccountsInContext:(id)arg0 onlyMigrated:(BOOL)arg1 ;
+(id)accountUtilities;
+(id)accountWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)accountsMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)accountsWithAccountType:(int)arg0 context:(id)arg1 ;
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
+(id)systemPaperFolderIdentifierForAccount:(id)arg0 ;
+(void)deleteAccount:(id)arg0 ;
+(void)deleteAccountWithBatchDelete:(id)arg0 ;
+(void)ensureSystemPaperFoldersExistInManagedObjectContext:(id)arg0 ;
+(void)enumerateAllCloudObjectsInContext:(id)arg0 batchSize:(NSUInteger)arg1 saveAfterBatch:(BOOL)arg2 usingBlock:(id)arg3 ;
+(void)initialize;
+(void)initializeLocalAccountNamesInBackground;
+(void)localeDidChange:(id)arg0 ;
+(void)setAccountUtilities:(id)arg0 ;
-(BOOL)allowsExporting;
-(BOOL)allowsImporting;
-(BOOL)canBeSharedViaICloud;
-(BOOL)canPasswordProtectNotes;
-(BOOL)containsSharedFolders;
-(BOOL)createSystemPaperFolderIfNecessary;
-(BOOL)hasAnyCustomFolders;
-(BOOL)hasSameCryptoKeyAsAccount:(id)arg0 ;
-(BOOL)hasSystemPaperFolder;
-(BOOL)isAllNotesContainer;
-(BOOL)isDeletable;
-(BOOL)isInICloudAccount;
-(BOOL)isLeaf;
-(BOOL)shouldBeDeletedFromLocalDatabase;
-(BOOL)shouldExcludeFilesFromCloudBackup;
-(BOOL)supportsEditingNotes;
-(BOOL)supportsLegacyTombstones;
-(BOOL)visibleRootFoldersContainFolderWithTitle:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)indexOfCustomRootLevelFolder:(id)arg0 ;
-(NSUInteger)visibleAttachmentsIncludingTrashCount;
-(NSUInteger)visibleCustomFoldersCount;
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
-(id)folderWithIdentifier:(id)arg0 ;
-(id)ic_loggingIdentifier;
-(id)ic_loggingValues;
-(id)mediaDirectoryURL;
-(id)newlyCreatedRecord;
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
-(id)recordType;
-(id)recordZoneName;
-(id)replicaIDForBundleIdentifier:(id)arg0 ;
-(id)reservedAccountFolderTitles;
-(id)standardFolderIdentifierWithPrefix:(id)arg0 ;
-(id)subFolderIdentifiersOrderedSet;
-(id)subFolderOrderMergeableData;
-(id)systemPaperBundlesDirectoryURL;
-(id)systemPaperDirectoryURL;
-(id)systemPaperNotes;
-(id)titleForNavigationBar;
-(id)titleForTableViewCell;
-(id)visibleFolders;
-(id)visibleFoldersWithParent:(id)arg0 ;
-(id)visibleNoteContainerChildren;
-(id)visibleNoteContainers;
-(id)visibleNotes;
-(id)visibleSubFolders;
-(void)addTrashObserversIfNecessary;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
-(void)createDefaultFolder;
-(void)createStandardFolders;
-(void)createSystemPaperFolder;
-(void)createTrashFolder;
-(void)dealloc;
-(void)deleteUnusedHashtagsWithStandardizedContent:(id)arg0 ;
-(void)managedObjectContextDidSave:(id)arg0 ;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performBlockInPersonaContextIfNecessary:(id)arg0 ;
-(void)prepareForDeletion;
-(void)removeAllObserversIfNecessary;
-(void)removeTrashObserversIfNecessary;
-(void)setMarkedForDeletion:(BOOL)arg0 ;
-(void)setSubFolderOrderMergeableData:(id)arg0 ;
-(void)updateAccountNameForAccountListSorting;
-(void)updateSubFolderMergeableDataChangeCount;
-(void)updateTrashFolderHiddenNoteContainerState;
-(void)willTurnIntoFault;


@end


#endif