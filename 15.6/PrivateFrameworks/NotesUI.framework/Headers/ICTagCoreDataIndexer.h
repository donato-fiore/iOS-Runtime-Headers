// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICTAGCOREDATAINDEXER_H
#define ICTAGCOREDATAINDEXER_H

@class NSFetchedResultsController, NSArray;
@protocol OS_dispatch_queue, ICRDSectionIdentifier><NSCopying;


#import "ICRDCoreDataIndexer.h"

@interface ICTagCoreDataIndexer : ICRDCoreDataIndexer

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (retain, nonatomic) NSArray *hashtags; // ivar: _hashtags
@property (nonatomic) BOOL includesAllTagsItem; // ivar: _includesAllTagsItem
@property (retain, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (retain, nonatomic) NSObject<ICRDSectionIdentifier><NSCopying> *sectionIdentifier; // ivar: _sectionIdentifier
@property (readonly, nonatomic) NSUInteger sectionIdentifierType; // ivar: _sectionIdentifierType


+(BOOL)isTagItemIdentifier:(id)arg0 ;
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