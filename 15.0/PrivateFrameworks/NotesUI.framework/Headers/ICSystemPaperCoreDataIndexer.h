// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSYSTEMPAPERCOREDATAINDEXER_H
#define ICSYSTEMPAPERCOREDATAINDEXER_H

@class NSFetchedResultsController, NSMutableOrderedSet, NSArray;
@protocol OS_dispatch_queue, ICRDSectionIdentifier><NSCopying;


#import "ICRDCoreDataIndexer.h"

@interface ICSystemPaperCoreDataIndexer : ICRDCoreDataIndexer

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (retain, nonatomic) NSMutableOrderedSet *mutableObjectIDs; // ivar: _mutableObjectIDs
@property (readonly, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) NSObject<ICRDSectionIdentifier><NSCopying> *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, nonatomic) NSUInteger sectionIdentifierType; // ivar: _sectionIdentifierType


-(id)activeFetchedResultsControllers;
-(id)initWithModernManagedObjectContext:(id)arg0 sectionIdentifierType:(NSUInteger)arg1 ;
-(id)newSnapshotFromIndex;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 ;
-(void)clearIndex;
-(void)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;


@end


#endif