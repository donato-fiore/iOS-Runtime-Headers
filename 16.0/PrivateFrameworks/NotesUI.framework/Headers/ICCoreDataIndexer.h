// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCOREDATAINDEXER_H
#define ICCOREDATAINDEXER_H

@class NSSet, NSString, NSManagedObjectContext;
@protocol NSFetchedResultsControllerDelegate, ICCoreDataIndexerDelegate, ICItemIdentifier, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate>



@property (readonly, nonatomic) NSSet *activeFetchedResultsControllers;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICCoreDataIndexerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *firstRelevantItemIdentifier; // ivar: _firstRelevantItemIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectContext *legacyManagedObjectContext; // ivar: _legacyManagedObjectContext
@property (readonly, nonatomic) NSManagedObjectContext *modernManagedObjectContext; // ivar: _modernManagedObjectContext
@property (nonatomic) BOOL needsFetchedResultsControllerUpdate; // ivar: _needsFetchedResultsControllerUpdate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadDataSerialQueue; // ivar: _reloadDataSerialQueue
@property (nonatomic) BOOL shouldIncludeOutlineParentItems; // ivar: _shouldIncludeOutlineParentItems
@property (readonly) Class superclass;


-(id)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(id)initWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)newSnapshotFromIndex;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 ;
-(void)controller:(id)arg0 didChangeContentWithDifference:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg0 completion:(id)arg1 ;
-(void)didIndex;
-(void)indexObjectsWithCompletion:(id)arg0 ;
-(void)performAndWaitForFetchedResultsControllers:(id)arg0 block:(id)arg1 ;
-(void)reloadData:(id)arg0 ;
-(void)reloadDataAndWait;
-(void)unsafelyIndexAllObjectsForFetchedResultsController:(id)arg0 ;
-(void)unsafelyReloadData;
-(void)updateLegacyFetchedResultsControllers;
-(void)updateModernFetchedResultsControllers;
-(void)willIndex;


@end


#endif