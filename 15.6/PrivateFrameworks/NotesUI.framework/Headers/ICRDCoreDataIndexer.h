// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICRDCOREDATAINDEXER_H
#define ICRDCOREDATAINDEXER_H

@class NSSet, NSString, NSArray, NSManagedObjectContext;
@protocol NSFetchedResultsControllerDelegate, ICRDExpansionStateContextProviding, ICRDCoreDataIndexerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICRDCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate, ICRDExpansionStateContextProviding>



@property (readonly, nonatomic) NSSet *activeFetchedResultsControllers; // ivar: _activeFetchedResultsControllers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICRDCoreDataIndexerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly, nonatomic) id *firstRelevantItemIdentifier; // ivar: _firstRelevantItemIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectContext *legacyManagedObjectContext; // ivar: _legacyManagedObjectContext
@property (readonly, nonatomic) NSManagedObjectContext *modernManagedObjectContext; // ivar: _modernManagedObjectContext
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadDataSerialQueue; // ivar: _reloadDataSerialQueue
@property (nonatomic) BOOL shouldIncludeOutlineParentItems; // ivar: _shouldIncludeOutlineParentItems
@property (readonly) Class superclass;


-(id)activeManagedObjectContexts;
-(id)initWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)newSnapshotFromIndex;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 ;
-(void)clearIndex;
-(void)controller:(id)arg0 didChangeContentWithDifference:(id)arg1 ;
-(void)deleteWithDecisionController:(id)arg0 completion:(id)arg1 ;
-(void)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(void)indexObjectsWithCompletion:(id)arg0 ;
-(void)performAndWaitForFetchedResultsControllers:(id)arg0 block:(id)arg1 ;
-(void)reloadData:(id)arg0 ;
-(void)reloadDataAndWait;
-(void)unsafelyIndexAllObjectsForFetchedResultsController:(id)arg0 ;
-(void)unsafelyReloadData:(id)arg0 ;


@end


#endif