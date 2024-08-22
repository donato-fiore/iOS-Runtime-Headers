// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFOLDER_H
#define ICFOLDER_H

@class NSArray, NSSet, NSDate, NSNumber, NSString, NSData, NSManagedObjectID, CKRecordID;
@protocol ICCloudObject, ICFolderObject;


#import "ICNoteContainer.h"
#import "ICAccount.h"
#import "ICFolder.h"
#import "ICQuery.h"
#import "ICQueryObjC.h"

@interface ICFolder : ICNoteContainer <ICCloudObject, ICFolderObject>



@property (retain, nonatomic) ICAccount *account;
@property (readonly, nonatomic) NSArray *ancestorFolderObjectIDs;
@property (retain, nonatomic) NSSet *children;
@property (retain, nonatomic) NSDate *customNoteSortTypeModificationDate;
@property (retain, nonatomic) NSNumber *customNoteSortTypeValue;
@property (retain, nonatomic) NSDate *dateForLastTitleModification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) short folderType;
@property (readonly, nonatomic) NSArray *foldersInFolder;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifierURIPathComponent;
@property (nonatomic) BOOL importedFromLegacy;
@property (readonly, nonatomic) BOOL isDefaultFolderForAccount;
@property (readonly, nonatomic) BOOL isInICloudAccount;
@property (readonly, nonatomic) BOOL isValidObject;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *loggingDescription;
@property (retain, nonatomic) NSData *mergeableData;
@property (readonly, nonatomic) BOOL needsToBeDeletedFromCloud;
@property (readonly, nonatomic) BOOL needsToBeFetchedFromCloud;
@property (readonly, nonatomic) BOOL needsToBePushedToCloud;
@property (readonly, nonatomic) BOOL needsToSaveUserSpecificRecord;
@property (retain, nonatomic) NSSet *notes;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (retain, nonatomic) ICFolder *parent;
@property (retain, nonatomic) NSDate *parentModificationDate;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *recordType;
@property (readonly, copy, nonatomic) NSString *smartFolderDescription;
@property (nonatomic, readonly) NSString *smartFolderDescriptionObjC;
@property (retain, nonatomic) ICQuery *smartFolderQuery;
@property (copy, nonatomic) NSString *smartFolderQueryJSON;
@property (nonatomic, retain) ICQueryObjC *smartFolderQueryObjC;
@property (readonly, copy, nonatomic) NSString *smartFolderShortDescription;
@property (nonatomic, readonly) NSString *smartFolderShortDescriptionObjC;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) CKRecordID *userSpecificRecordID;
@property (readonly, nonatomic) NSArray *visibleNotesInFolder;
@property (readonly, nonatomic) BOOL wantsUserSpecificRecord;


+(BOOL)isTitleValid:(id)arg0 account:(id)arg1 folder:(id)arg2 parentFolder:(id)arg3 error:(*id)arg4 ;
+(BOOL)isTitleValid:(id)arg0 account:(id)arg1 parentFolder:(id)arg2 error:(*id)arg3 ;
+(BOOL)supportsActivityEvents;
+(BOOL)supportsUserSpecificRecords;
+(NSUInteger)countOfFoldersMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(NSUInteger)folderDepthLimit;
+(NSUInteger)maximumDepthOfFolders:(id)arg0 ;
+(NSUInteger)maximumDistanceToLeafFolderOfFolders:(id)arg0 ;
+(id)allFoldersInContext:(id)arg0 ;
+(id)ancestorFolderPredicatesWithBlock:(id)arg0 ;
+(id)contentInfoTextWithNoteCount:(NSInteger)arg0 subfolderCount:(NSInteger)arg1 ;
+(id)deduplicatingTitle:(id)arg0 account:(id)arg1 ;
+(id)deduplicatingTitle:(id)arg0 forFolder:(id)arg1 forNewFolderParent:(id)arg2 ofAccount:(id)arg3 ;
+(id)deduplicatingTitle:(id)arg0 forFolder:(id)arg1 ofAccount:(id)arg2 ;
+(id)defaultFolderInContext:(id)arg0 ;
+(id)defaultSmartFolderTitleWithComponents:(id)arg0 ;
+(id)englishTitleForDefaultFolder;
+(id)englishTitleForSystemPaperFolder;
+(id)englishTitleForTrashFolder;
+(id)existingCloudObjectForRecordID:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)folderWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)foldersMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+(id)keyPathsForValuesAffectingCustomNoteSortType;
+(id)keyPathsForValuesAffectingDepth;
+(id)keyPathsForValuesAffectingIsDefaultFolderForAccount;
+(id)keyPathsForValuesAffectingIsLeaf;
+(id)keyPathsForValuesAffectingIsTrashFolder;
+(id)keyPathsForValuesAffectingSupportsCustomNoteSortType;
+(id)keyPathsForValuesAffectingSupportsEditingNotes;
+(id)keyPathsForValuesAffectingTitleForTableViewCell;
+(id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+(id)keyPathsForValuesAffectingVisibleNotesCount;
+(id)localizedNewFolderName;
+(id)newCloudObjectForRecord:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)newFolderInAccount:(id)arg0 ;
+(id)newFolderInParentFolder:(id)arg0 ;
+(id)newFolderWithIdentifier:(id)arg0 account:(id)arg1 ;
+(id)newFolderWithIdentifier:(id)arg0 account:(id)arg1 query:(id)arg2 ;
+(id)newFolderWithIdentifier:(id)arg0 parentFolder:(id)arg1 ;
+(id)newPlaceholderObjectForRecordName:(id)arg0 accountID:(id)arg1 context:(id)arg2 ;
+(id)objc_defaultSmartFolderTitleWithComponents:(id)arg0 ;
+(id)objc_smartFolderWithQuery:(id)arg0 account:(id)arg1 ;
+(id)objc_smartFolderWithQuery:(id)arg0 titleComponents:(id)arg1 account:(id)arg2 ;
+(id)predicateForDeprecatedObjects;
+(id)predicateForFoldersInFolder:(id)arg0 ;
+(id)predicateForNotesInFolder:(id)arg0 ;
+(id)predicateForVisibleCustomFolders;
+(id)predicateForVisibleFoldersInContext:(id)arg0 ;
+(id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(BOOL)arg0 inContext:(id)arg1 ;
+(id)predicateForVisibleObjects;
+(id)purgableFoldersFetchRequest;
+(id)reservedFolderTitles;
+(id)rootSharingFolderForNote:(id)arg0 ;
+(id)shareType;
+(id)smartFolderWithQuery:(id)arg0 account:(id)arg1 ;
+(id)smartFolderWithQuery:(id)arg0 titleComponents:(id)arg1 account:(id)arg2 ;
+(id)stringByScrubbingStringForFolderName:(id)arg0 ;
+(id)visibleFoldersInContext:(id)arg0 ;
+(id)visibleSmartFoldersForHashtagStandardizedContent:(id)arg0 account:(id)arg1 ;
+(void)deleteFolder:(id)arg0 ;
+(void)purgeFolder:(id)arg0 ;
-(BOOL)allowsExporting;
-(BOOL)allowsImporting;
-(BOOL)canAddSubfolder;
-(BOOL)canBeRootShareObject;
-(BOOL)canBeSharedViaICloud;
-(BOOL)canMoveAddOrDeleteContents;
-(BOOL)containsSharedDescendantFolders;
-(BOOL)containsSharedDescendantFolders:(*BOOL)arg0 ;
-(BOOL)containsSharedNotesOrSharedDescendantFolders;
-(BOOL)containsSharedNotesOrSharedDescendantFolders:(*BOOL)arg0 ;
-(BOOL)hasAllMandatoryFields;
-(BOOL)hasSharedContentsNotSharedViaSharedFolder:(id)arg0 ;
-(BOOL)isAncestorOfFolder:(id)arg0 ;
-(BOOL)isDefaultFolderOrDescendantOfDefaultFolder;
-(BOOL)isDeletable;
-(BOOL)isDeprecated;
-(BOOL)isDescendantOfFolder:(id)arg0 ;
-(BOOL)isEditableSmartFolder;
-(BOOL)isLeaf;
-(BOOL)isModernCustomFolder;
-(BOOL)isMovable;
-(BOOL)isRenamable;
-(BOOL)isSharedViaSharedFolder:(id)arg0 ;
-(BOOL)isShowingDateHeaders;
-(BOOL)isSmartFolder;
-(BOOL)isSubfolderOfReadonlyFolder;
-(BOOL)isSystemFolder;
-(BOOL)isTitleValid:(id)arg0 error:(*id)arg1 ;
-(BOOL)isTrashFolder;
-(BOOL)mergeWithMergeableData:(id)arg0 ;
-(BOOL)shouldSyncMinimumSupportedNotesVersion;
-(BOOL)supportsCustomNoteSortType;
-(BOOL)supportsDateHeaders;
-(BOOL)supportsEditingNotes;
-(BOOL)validate;
-(BOOL)validateForInsert:(*id)arg0 ;
-(BOOL)validateForUpdate:(*id)arg0 ;
-(BOOL)visibleChildFoldersContainsFolderWithTitle:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)intrinsicNotesVersionForScenario:(NSUInteger)arg0 ;
-(NSUInteger)countOfVisibleNotesInFolder;
-(NSUInteger)depth;
-(NSUInteger)indexOfVisibleChild:(id)arg0 ;
-(NSUInteger)maximumDepthIncludingChildFolders;
-(NSUInteger)maximumDistanceToLeafFolder;
-(NSUInteger)visibleNoteContainerChildrenCount;
-(NSUInteger)visibleNotesCount;
-(id)associatedNoteParticipants;
-(id)cacheKey;
-(id)childCloudObjects;
-(id)containerIdentifier;
-(id)customNoteSortType;
-(id)ic_loggingValues;
-(id)newlyCreatedRecord;
-(id)newlyCreatedUserSpecificRecord;
-(id)noteVisibilityTestingForSearchingAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(id)pinnedNotesInFolder;
-(id)predicateForAttachmentsInFolder;
-(id)predicateForFoldersInFolder;
-(id)predicateForNotesInFolder;
-(id)predicateForPinnedNotes;
-(id)predicateForPinnedNotesInFolder;
-(id)predicateForSearchableAttachments;
-(id)predicateForSearchableNotes;
-(id)predicateForVisibleAttachments;
-(id)predicateForVisibleAttachmentsInFolder;
-(id)predicateForVisibleNotes;
-(id)predicateForVisibleNotesInFolder;
-(id)recordZoneName;
-(id)recursiveVisibleSubfolders;
-(id)rootSharedFoldersInDescendantsIncludingSelf;
-(id)rootSharedNotesIncludingChildFolders;
-(id)rootSharingFolder;
-(id)shareTitle;
-(id)shareType;
-(id)subFolderOrderMergeableData;
-(id)visibleNoteContainerChildren;
-(id)visibleNoteContainerChildrenUnsorted;
-(id)visibleNotes;
-(id)visibleNotesIncludingChildFolders;
-(id)visibleSubFolders;
-(void)awakeFromFetch;
-(void)deleteFromLocalDatabase;
-(void)fixBrokenReferences;
-(void)markForDeletion;
-(void)mergeDataFromRecord:(id)arg0 accountID:(id)arg1 force:(BOOL)arg2 ;
-(void)mergeDataFromUserSpecificRecord:(id)arg0 accountID:(id)arg1 ;
-(void)mergeParentFromRecord:(id)arg0 ;
-(void)objectWasDeletedFromCloudByAnotherDevice;
-(void)recursivelyAddSubfoldersToArray:(id)arg0 ;
-(void)saveMergeableDataIfNeeded;
-(void)setCustomNoteSortType:(id)arg0 ;
-(void)setMarkedForDeletion:(BOOL)arg0 ;
-(void)setNeedsInitialFetchFromCloud:(BOOL)arg0 ;
-(void)setSubFolderOrderMergeableData:(id)arg0 ;
-(void)unmarkForDeletionIncludingParentHierarchy;
-(void)updateChangeCount;
-(void)updateSortOrder;


@end


#endif