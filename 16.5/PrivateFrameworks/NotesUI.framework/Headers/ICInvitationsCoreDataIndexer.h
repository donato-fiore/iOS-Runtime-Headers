// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINVITATIONSCOREDATAINDEXER_H
#define ICINVITATIONSCOREDATAINDEXER_H

@class ICAccount, NSString, NSFetchedResultsController, NSMutableOrderedSet, NSDate, ICFolderCustomNoteSortType;
@protocol OS_dispatch_queue, ICSectionIdentifier;


#import "ICCoreDataIndexer.h"

@interface ICInvitationsCoreDataIndexer : ICCoreDataIndexer

@property (retain, nonatomic) ICAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *expansionStateContext; // ivar: _expansionStateContext
@property (readonly, nonatomic) NSFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *indexAccessQueue; // ivar: _indexAccessQueue
@property (readonly, nonatomic) NSMutableOrderedSet *invitationObjectIDs; // ivar: _invitationObjectIDs
@property (copy, nonatomic) NSDate *receivedSince; // ivar: _receivedSince
@property (readonly, nonatomic) NSObject<ICSectionIdentifier> *sectionIdentifier; // ivar: _sectionIdentifier
@property (retain, nonatomic) ICFolderCustomNoteSortType *sortType; // ivar: _sortType
@property (readonly, nonatomic) NSUInteger totalInvitationsCount;


+(id)defaultReceivedSince;
-(id)activeFetchedResultsControllers;
-(id)firstRelevantItemIdentifier;
-(id)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(id)initWithModernManagedObjectContext:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 legacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2 ;
-(void)deleteObjectWithIDFromIndex:(id)arg0 inSection:(id)arg1 ;
-(void)willIndex;


@end


#endif