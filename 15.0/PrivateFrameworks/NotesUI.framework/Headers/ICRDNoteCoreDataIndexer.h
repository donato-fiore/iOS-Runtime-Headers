// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRDNOTECOREDATAINDEXER_H
#define ICRDNOTECOREDATAINDEXER_H

@class NSFetchedResultsController, NSMutableSet, NoteCollectionObject, ICQuery, NSOrderedSet, NSMutableDictionary, ICFolderCustomNoteSortType, NSArray;
@protocol OS_dispatch_queue, ICNoteContainer;


#import "ICRDCoreDataIndexer.h"
#import "ICRDFolderCoreDataIndexer.h"
#import "ICRDNoteFolderSectionIdentifier.h"
#import "ICRDNoteSectionIdentifier.h"
#import "ICSystemPaperCoreDataIndexer.h"
#import "ICTagCoreDataIndexer.h"

@interface ICRDNoteCoreDataIndexer : ICRDCoreDataIndexer {
    BOOL _shouldIncludeOutlineParentItems;
}


@property (retain, nonatomic) ICRDFolderCoreDataIndexer *folderIndexer; // ivar: _folderIndexer
@property (retain, nonatomic) ICRDNoteFolderSectionIdentifier *folderSectionIdentifier; // ivar: _folderSectionIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // ivar: _indexAccessQueue
@property (retain, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController; // ivar: _legacyNoteFetchedResultsController
@property (retain, nonatomic) NSMutableSet *modernAccountManagedObjectIDs; // ivar: _modernAccountManagedObjectIDs
@property (retain, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController; // ivar: _modernNoteFetchedResultsController
@property (retain, nonatomic) NSFetchedResultsController *modernPinnedNoteFetchedResultsController; // ivar: _modernPinnedNoteFetchedResultsController
@property (retain, nonatomic) NoteCollectionObject *noteCollection; // ivar: _noteCollection
@property (retain, nonatomic) NSObject<ICNoteContainer> *noteContainer; // ivar: _noteContainer
@property (retain, nonatomic) ICQuery *noteQuery; // ivar: _noteQuery
@property (retain, nonatomic) ICRDNoteSectionIdentifier *noteSectionIdentifier; // ivar: _noteSectionIdentifier
@property (retain, nonatomic) ICRDNoteSectionIdentifier *pinnedNoteSectionIdentifier; // ivar: _pinnedNoteSectionIdentifier
@property (nonatomic) NSUInteger pinnedNotesSectionMinimumCount; // ivar: _pinnedNotesSectionMinimumCount
@property (retain, nonatomic) NSOrderedSet *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs; // ivar: _sectionIdentifiersToManagedObjectIDs
@property (nonatomic) BOOL shouldIncludeSubfolders; // ivar: _shouldIncludeSubfolders
@property (nonatomic) BOOL shouldIncludeSystemPaper; // ivar: _shouldIncludeSystemPaper
@property (nonatomic) BOOL shouldIncludeTags; // ivar: _shouldIncludeTags
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType; // ivar: _sortType
@property (retain, nonatomic) NSArray *sortedNoteIdentifiers; // ivar: _sortedNoteIdentifiers
@property (readonly, nonatomic) BOOL sortsByPinned;
@property (retain, nonatomic) ICSystemPaperCoreDataIndexer *systemPaperIndexer; // ivar: _systemPaperIndexer
@property (retain, nonatomic) ICRDNoteSectionIdentifier *systemPaperSectionIdentifier; // ivar: _systemPaperSectionIdentifier
@property (retain, nonatomic) ICTagCoreDataIndexer *tagIndexer; // ivar: _tagIndexer
@property (retain, nonatomic) ICRDNoteSectionIdentifier *tagSectionIdentifier; // ivar: _tagSectionIdentifier
@property (readonly, nonatomic) NSUInteger totalFolderCount;
@property (readonly, nonatomic) NSUInteger totalModernAccountCount;
@property (readonly, nonatomic) NSUInteger totalNoteCount;


-(BOOL)shouldIncludeOutlineParentItems;
-(id)activeFetchedResultsControllers;
-(id)expansionStateContext;
-(id)firstRelevantItemIdentifier;
-(id)initForSystemPaperWithModernObjectContext:(id)arg0 ;
-(id)initWithNoteContainer:(id)arg0 noteCollection:(id)arg1 noteQuery:(id)arg2 legacyManagedObjectContext:(id)arg3 modernManagedObjectContext:(id)arg4 ;
-(id)newSnapshotFromIndex;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 ;
-(void)addObjectIDs:(id)arg0 toIndexInSection:(id)arg1 ;
-(void)clearIndex;
-(void)deleteObjectWithIDFromIndex:(id)arg0 inSection:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg0 completion:(id)arg1 ;
-(void)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(void)mergePinnedNotesAndNotesSectionIfNeeded;
-(void)prependObjectIDs:(id)arg0 toIndexInSection:(id)arg1 ;
-(void)reloadData:(id)arg0 ;
-(void)removeObjectIDs:(id)arg0 fromIndexInSection:(id)arg1 ;
-(void)setShouldIncludeOutlineParentItems:(BOOL)arg0 ;
-(void)sortSection:(id)arg0 ;
-(void)togglePinnedForNote:(id)arg0 ;
-(void)unmergePinnedNotesAndNotesSectionIfNeeded;
-(void)updateLegacyFetchedResultsControllers;
-(void)updateModernNoteFetchedResultsControllers;
-(void)updateSectionIdentifiers;


@end


#endif