// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRDRECENTNOTESCOREDATAINDEXER_H
#define ICRDRECENTNOTESCOREDATAINDEXER_H

@class NSFetchedResultsController, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;


#import "ICRDCoreDataIndexer.h"

@interface ICRDRecentNotesCoreDataIndexer : ICRDCoreDataIndexer

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // ivar: _indexAccessQueue
@property (readonly, nonatomic) NSFetchedResultsController *legacyNoteFetchedResultsController; // ivar: _legacyNoteFetchedResultsController
@property (nonatomic) NSUInteger maximumNumberOfNotesPerAccount; // ivar: _maximumNumberOfNotesPerAccount
@property (readonly, nonatomic) NSFetchedResultsController *modernNoteFetchedResultsController; // ivar: _modernNoteFetchedResultsController
@property (readonly, nonatomic) NSMutableDictionary *sectionIdentifiersToManagedObjectIDs; // ivar: _sectionIdentifiersToManagedObjectIDs
@property (nonatomic) NSInteger sortType; // ivar: _sortType
@property (readonly, nonatomic) NSArray *sortedSectionIdentifiers;


-(id)activeFetchedResultsControllers;
-(id)firstRelevantItemIdentifier;
-(id)initWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)newSnapshotFromIndex;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 ;
-(void)clearIndex;
-(void)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(void)setShouldIncludeOutlineParentItems:(BOOL)arg0 ;


@end


#endif