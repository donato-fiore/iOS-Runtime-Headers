// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICNOTECOREDATAINDEXER_H
#define ICNOTECOREDATAINDEXER_H

@class NSFetchedResultsController, NoteCollectionObject, NSManagedObject<ICNoteContainer>, ICQuery, NSOrderedSet, NSMutableDictionary, ICFolderCustomNoteSortType, NSArray;
@protocol OS_dispatch_queue;


#import "ICCoreDataIndexer.h"
#import "ICFolderCoreDataIndexer.h"
#import "ICNoteFolderSectionIdentifier.h"
#import "ICInvitationsCoreDataIndexer.h"
#import "ICNoteSectionIdentifier.h"
#import "ICTagCoreDataIndexer.h"
#import "ICVirtualSmartFolderItemIdentifier.h"

@interface ICNoteCoreDataIndexer : ICCoreDataIndexer {
    BOOL _shouldIncludeOutlineParentItems;
}


@property (nonatomic) int dateHeadersType; // ivar: _dateHeadersType
@property (retain, nonatomic) ICFolderCoreDataIndexer *folderIndexer; // ivar: _folderIndexer
@property (retain, nonatomic) ICNoteFolderSectionIdentifier *folderSectionIdentifier; // ivar: _folderSectionIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // ivar: _indexAccessQueue
@property (retain, nonatomic) ICInvitationsCoreDataIndexer *invitationsIndexer; // ivar: _invitationsIndexer
@property (retain, nonatomic) ICNoteSectionIdentifier *invitationsSectionIdentifier; // ivar: _invitationsSectionIdentifier
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (retain, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController; // ivar: _legacyNoteFetchedResultsController
@property (retain, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController; // ivar: _modernNoteFetchedResultsController
@property (retain, nonatomic) NSFetchedResultsController *modernPinnedNoteFetchedResultsController; // ivar: _modernPinnedNoteFetchedResultsController
@property (retain, nonatomic) NoteCollectionObject *noteCollection; // ivar: _noteCollection
@property (retain, nonatomic) NSManagedObject<ICNoteContainer> *noteContainer; // ivar: _noteContainer
@property (retain, nonatomic) ICQuery *noteQuery; // ivar: _noteQuery
@property (retain, nonatomic) ICNoteSectionIdentifier *noteSectionIdentifier; // ivar: _noteSectionIdentifier
@property (retain, nonatomic) ICNoteSectionIdentifier *pinnedNoteSectionIdentifier; // ivar: _pinnedNoteSectionIdentifier
@property (nonatomic) NSUInteger pinnedNotesSectionMinimumCount; // ivar: _pinnedNotesSectionMinimumCount
@property (retain, nonatomic) NSOrderedSet *sectionIdentifiers; // ivar: _sectionIdentifiers
@property (retain, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs; // ivar: _sectionIdentifiersToManagedObjectIDs
@property (nonatomic) BOOL shouldIncludeInvitations; // ivar: _shouldIncludeInvitations
@property (nonatomic) BOOL shouldIncludeSubfolders; // ivar: _shouldIncludeSubfolders
@property (nonatomic) BOOL shouldIncludeTagDetail; // ivar: _shouldIncludeTagDetail
@property (nonatomic) BOOL shouldIncludeTags; // ivar: _shouldIncludeTags
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType; // ivar: _sortType
@property (retain, nonatomic) NSArray *sortedNoteIdentifiers; // ivar: _sortedNoteIdentifiers
@property (readonly, nonatomic) BOOL sortsByPinned;
@property (readonly, nonatomic) ICTagCoreDataIndexer *tagIndexer; // ivar: _tagIndexer
@property (retain, nonatomic) ICNoteSectionIdentifier *tagSectionIdentifier; // ivar: _tagSectionIdentifier
@property (readonly, nonatomic) NSUInteger totalFolderCount;
@property (readonly, nonatomic) NSUInteger totalInvitationsCount;
@property (readonly, nonatomic) NSUInteger totalNoteCount;
@property (retain, nonatomic) ICVirtualSmartFolderItemIdentifier *virtualSmartFolder; // ivar: _virtualSmartFolder


-(BOOL)dateHeadersAreStaleForNote:(id)arg0 ;
-(BOOL)shouldIncludeOutlineParentItems;
-(NSInteger)resolvedDateHeadersType;
-(id)activeFetchedResultsControllers;
-(id)dateHeadersValueForNote:(id)arg0 ;
-(id)expansionStateContext;
-(id)firstRelevantItemIdentifier;
-(id)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(id)initWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)legacyDateHeadersAttribute;
-(id)modernDateHeadersAttribute;
-(id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionForObjectID:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 legacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2 ;
-(id)unpinnedNoteIdentifiers;
-(id)unpinnedSectionIdentifierForObject:(id)arg0 ;
-(void)addObjectIDs:(id)arg0 toIndexInSection:(id)arg1 ;
-(void)deleteObjectWithIDFromIndex:(id)arg0 inSection:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg0 completion:(id)arg1 ;
-(void)didIndex;
-(void)mergePinnedNotesAndNotesSectionIfNeeded;
-(void)prependObjectIDs:(id)arg0 toIndexInSection:(id)arg1 ;
-(void)removeObjectIDs:(id)arg0 fromIndexInSection:(id)arg1 ;
-(void)removeUnpinnedNoteObjectIds:(id)arg0 ;
-(void)setShouldIncludeOutlineParentItems:(BOOL)arg0 ;
-(void)sortSection:(id)arg0 ;
-(void)togglePinnedForNote:(id)arg0 ;
-(void)unmergePinnedNotesAndNotesSectionIfNeeded;
-(void)updateLegacyFetchedResultsControllers;
-(void)updateModernFetchedResultsControllers;
-(void)updateSectionIdentifiers;
-(void)willIndex;


@end


#endif