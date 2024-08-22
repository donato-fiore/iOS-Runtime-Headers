// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRDFOLDERCOREDATAINDEXER_H
#define ICRDFOLDERCOREDATAINDEXER_H

@class NSManagedObjectID, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSFetchedResultsController, NSSet;
@protocol OS_dispatch_queue;


#import "ICRDCoreDataIndexer.h"
#import "ICSystemPaperCoreDataIndexer.h"
#import "ICTagCoreDataIndexer.h"

@interface ICRDFolderCoreDataIndexer : ICRDCoreDataIndexer

@property (retain, nonatomic) NSManagedObjectID *ancestorNoteContainerObjectID; // ivar: _ancestorNoteContainerObjectID
@property (readonly, nonatomic) NSUInteger countOfLegacyAccounts;
@property (readonly, nonatomic) NSUInteger countOfModernAccounts;
@property (retain, nonatomic) NSMutableDictionary *folderItemIdentifiersToChildFolderItemIdentifiers; // ivar: _folderItemIdentifiersToChildFolderItemIdentifiers
@property (retain, nonatomic) NSMutableDictionary *folderItemIdentifiersToParentFolderItemIdentifier; // ivar: _folderItemIdentifiersToParentFolderItemIdentifier
@property (retain, nonatomic) NSMutableOrderedSet *folderListSectionIdentifiers; // ivar: _folderListSectionIdentifiers
@property (retain, nonatomic) NSMutableDictionary *folderListSectionIdentifiersToFolderItemIdentifiers; // ivar: _folderListSectionIdentifiersToFolderItemIdentifiers
@property (readonly, nonatomic) BOOL hideUnmigratedLocalLegacyAccounts;
@property (readonly, nonatomic) BOOL includeMigratedICloudLegacyAccounts;
@property (readonly, nonatomic) BOOL includeMigratedLocalLegacyAccounts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // ivar: _indexAccessQueue
@property (retain, nonatomic) NSMutableSet *legacyAccountManagedObjectIDs; // ivar: _legacyAccountManagedObjectIDs
@property (retain, nonatomic) NSFetchedResultsController *legacyFetchedResultsController; // ivar: _legacyFetchedResultsController
@property (retain, nonatomic) NSMutableSet *modernAccountManagedObjectIDs; // ivar: _modernAccountManagedObjectIDs
@property (retain, nonatomic) NSFetchedResultsController *modernFetchedResultsController; // ivar: _modernFetchedResultsController
@property (nonatomic) BOOL shouldAutoExpandSingleSection; // ivar: _shouldAutoExpandSingleSection
@property (nonatomic) BOOL shouldIncludeSystemPaper; // ivar: _shouldIncludeSystemPaper
@property (nonatomic) BOOL shouldIncludeTags; // ivar: _shouldIncludeTags
@property (retain, nonatomic) NSMutableSet *smartFolderManagedObjectIDs; // ivar: _smartFolderManagedObjectIDs
@property (readonly, nonatomic) NSSet *smartFolderObjectIDs;
@property (retain, nonatomic) ICSystemPaperCoreDataIndexer *systemPaperIndexer; // ivar: _systemPaperIndexer
@property (retain, nonatomic) ICTagCoreDataIndexer *tagIndexer; // ivar: _tagIndexer
@property (readonly, nonatomic) NSUInteger totalFolderCount;


-(BOOL)isCustomFolder:(id)arg0 ;
-(BOOL)isDefaultFolder:(id)arg0 ;
-(id)activeFetchedResultsControllers;
-(id)expansionStateContext;
-(id)firstRelevantItemIdentifier;
-(id)initWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)legacyFolderFetchPredicate;
-(id)modernFolderFetchPredicate;
-(id)newSnapshotFromIndex;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)predicateForDescendants;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 ;
-(id)sortedFolderItemIdentifiers:(id)arg0 ;
-(id)sortedRootFolderItemIdentifiersInSection:(id)arg0 ;
-(void)addChildFoldersOfParentFolder:(id)arg0 toSectionSnapshot:(id)arg1 ;
-(void)clearIndex;
-(void)deleteObjectWithIDFromIndex:(id)arg0 inSection:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg0 completion:(id)arg1 ;
-(void)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;


@end


#endif