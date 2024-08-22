// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICFOLDERCOREDATAINDEXER_H
#define ICFOLDERCOREDATAINDEXER_H

@class NSManagedObjectID, NSSet, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSFetchedResultsController;
@protocol OS_dispatch_queue;


#import "ICCoreDataIndexer.h"
#import "ICTagCoreDataIndexer.h"

@interface ICFolderCoreDataIndexer : ICCoreDataIndexer

@property (retain, nonatomic) NSManagedObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, nonatomic) NSSet *allSmartFolderObjectIDs;
@property (readonly, nonatomic) NSSet *allVirtualSmartFolderIdentifiers;
@property (retain, nonatomic) NSManagedObjectID *ancestorObjectID; // ivar: _ancestorObjectID
@property (readonly, nonatomic) NSUInteger countOfLegacyAccounts;
@property (readonly, nonatomic) NSUInteger countOfModernAccounts;
@property (retain, nonatomic) NSMutableDictionary *folderItemIdentifiersToChildFolderItemIdentifiers; // ivar: _folderItemIdentifiersToChildFolderItemIdentifiers
@property (retain, nonatomic) NSMutableDictionary *folderItemIdentifiersToParentFolderItemIdentifier; // ivar: _folderItemIdentifiersToParentFolderItemIdentifier
@property (retain, nonatomic) NSMutableOrderedSet *folderListSectionIdentifiers; // ivar: _folderListSectionIdentifiers
@property (retain, nonatomic) NSMutableDictionary *folderListSectionIdentifiersToButtonIdentifiers; // ivar: _folderListSectionIdentifiersToButtonIdentifiers
@property (retain, nonatomic) NSMutableDictionary *folderListSectionIdentifiersToFolderItemIdentifiers; // ivar: _folderListSectionIdentifiersToFolderItemIdentifiers
@property (retain, nonatomic) NSMutableDictionary *folderListSectionIdentifiersToVirtualSmartFolderIdentifiers; // ivar: _folderListSectionIdentifiersToVirtualSmartFolderIdentifiers
@property (readonly, nonatomic) BOOL hideUnmigratedLocalLegacyAccounts;
@property (readonly, nonatomic) BOOL includeMigratedICloudLegacyAccounts;
@property (readonly, nonatomic) BOOL includeMigratedLocalLegacyAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // ivar: _indexAccessQueue
@property (retain, nonatomic) NSMutableSet *legacyAccountManagedObjectIDs; // ivar: _legacyAccountManagedObjectIDs
@property (retain, nonatomic) NSFetchedResultsController *legacyFetchedResultsController; // ivar: _legacyFetchedResultsController
@property (retain, nonatomic) NSMutableSet *modernAccountManagedObjectIDs; // ivar: _modernAccountManagedObjectIDs
@property (retain, nonatomic) NSFetchedResultsController *modernFetchedResultsController; // ivar: _modernFetchedResultsController
@property (nonatomic) BOOL shouldAutoExpandSingleSection; // ivar: _shouldAutoExpandSingleSection
@property (nonatomic) NSInteger shouldIncludeAccount; // ivar: _shouldIncludeAccount
@property (nonatomic) BOOL shouldIncludeLegacyAccounts; // ivar: _shouldIncludeLegacyAccounts
@property (nonatomic) BOOL shouldIncludeNewFolderButton; // ivar: _shouldIncludeNewFolderButton
@property (nonatomic) NSInteger shouldIncludeSharedWithYou; // ivar: _shouldIncludeSharedWithYou
@property (nonatomic) BOOL shouldIncludeSmartFolders; // ivar: _shouldIncludeSmartFolders
@property (nonatomic) BOOL shouldIncludeSubfolders; // ivar: _shouldIncludeSubfolders
@property (nonatomic) NSInteger shouldIncludeSystemPaper; // ivar: _shouldIncludeSystemPaper
@property (nonatomic) BOOL shouldIncludeTagOperator; // ivar: _shouldIncludeTagOperator
@property (nonatomic) BOOL shouldIncludeTags; // ivar: _shouldIncludeTags
@property (nonatomic) BOOL shouldIncludeTrash; // ivar: _shouldIncludeTrash
@property (retain, nonatomic) NSMutableSet *smartFolderManagedObjectIDs; // ivar: _smartFolderManagedObjectIDs
@property (retain, nonatomic) ICTagCoreDataIndexer *tagIndexer; // ivar: _tagIndexer
@property (readonly, nonatomic) NSUInteger totalFolderCount;
@property (retain, nonatomic) NSMutableSet *virtualSmartFolderIdentifiers; // ivar: _virtualSmartFolderIdentifiers


-(BOOL)isCustomFolder:(id)arg0 ;
-(BOOL)isDefaultFolder:(id)arg0 ;
-(BOOL)itemIdentifiersContainCustomFolder:(id)arg0 ;
-(id)activeFetchedResultsControllers;
-(id)expansionStateContext;
-(id)firstRelevantItemIdentifier;
-(id)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(id)initWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)legacyFolderFetchPredicate;
-(id)modernDescendantsPredicate;
-(id)modernFolderFetchPredicate;
-(id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)rootFolderListSectionIdentifiersForSection:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 legacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2 ;
-(id)sortedFolderItemIdentifiersForItemIdentifiers:(id)arg0 legacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2 ;
-(void)addAccountItemsIfNeededForFolderSectionIdentifier:(id)arg0 ;
-(void)addChildFoldersOfParentFolder:(id)arg0 toSectionSnapshot:(id)arg1 ;
-(void)addSystemSectionIfNeeded;
-(void)deleteObjectWithIDFromIndex:(id)arg0 inSection:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg0 completion:(id)arg1 ;
-(void)didIndex;
-(void)sortIdentifiersWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(void)willIndex;


@end


#endif