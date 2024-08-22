// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTAGCOREDATAINDEXER_H
#define ICTAGCOREDATAINDEXER_H

@class NSFetchedResultsController, NSArray;
@protocol OS_dispatch_queue, ICSectionIdentifier;


#import "ICCoreDataIndexer.h"

@interface ICTagCoreDataIndexer : ICCoreDataIndexer

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (retain, nonatomic) NSArray *hashtags; // ivar: _hashtags
@property (readonly, nonatomic) NSUInteger hiddenTagCount;
@property (nonatomic) BOOL includesAllTagsItem; // ivar: _includesAllTagsItem
@property (nonatomic) BOOL includesNewTagItem; // ivar: _includesNewTagItem
@property (retain, nonatomic) NSArray *leadingVisibleObjectIDs; // ivar: _leadingVisibleObjectIDs
@property (retain, nonatomic) NSArray *objectIDs; // ivar: _objectIDs
@property (retain, nonatomic) NSObject<ICSectionIdentifier> *sectionIdentifier; // ivar: _sectionIdentifier
@property (nonatomic) NSUInteger visibleTagLimit; // ivar: _visibleTagLimit


+(BOOL)isTagItemIdentifier:(id)arg0 ;
-(id)activeFetchedResultsControllers;
-(id)indexObjectsInSection:(id)arg0 sectionIndex:(NSUInteger)arg1 fetchedResultsController:(id)arg2 ;
-(id)initWithModernManagedObjectContext:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)newSnapshotFromIndexWithLegacyManagedObjectContext:(id)arg0 modernManagedObjectContext:(id)arg1 ;
-(id)nextRelevantItemIdentifierAfter:(id)arg0 ;
-(id)sectionIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)sectionIdentifiersForSectionControllerType:(NSUInteger)arg0 ;
-(id)sectionSnapshotsForSectionControllerType:(NSUInteger)arg0 legacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2 ;
-(void)willIndex;


@end


#endif