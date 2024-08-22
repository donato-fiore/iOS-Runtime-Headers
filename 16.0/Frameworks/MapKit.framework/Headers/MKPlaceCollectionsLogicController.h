// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACECOLLECTIONSLOGICCONTROLLER_H
#define MKPLACECOLLECTIONSLOGICCONTROLLER_H

@class UICollectionView, NSArray, UICollectionViewDiffableDataSource, NSString, NSDiffableDataSourceSnapshot;
@protocol MKCollectionsFetcher, MKCollectionDataProvider, MKCollectionUpdater, CollectionsAnalyticsProvider, MKPlaceBatchConsumer, MKCuratedCollectionsSyncCoordinator;

#import <Foundation/Foundation.h>

#import "MKPlaceBatchController.h"

@interface MKPlaceCollectionsLogicController : NSObject <MKCollectionsFetcher, MKCollectionDataProvider, MKCollectionUpdater, CollectionsAnalyticsProvider, MKPlaceBatchConsumer>

 {
    NSInteger _context;
}


@property (retain, nonatomic) MKPlaceBatchController *batchController; // ivar: _batchController
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSArray *collections; // ivar: _collections
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *geoCollections; // ivar: _geoCollections
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // ivar: _snapshot
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<MKCuratedCollectionsSyncCoordinator> *syncCoordinator; // ivar: _syncCoordinator


-(BOOL)isCollectionSavedAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfCollections;
-(NSInteger)numberOfSections;
-(NSInteger)sectionKindAtIndex:(NSInteger)arg0 ;
-(id)buildCuratedCollectionsFrom:(id)arg0 shouldCancelImageDownloads:(BOOL)arg1 ;
-(id)collectionAtIndex:(NSInteger)arg0 ;
-(id)geoCollectionAtIndex:(NSInteger)arg0 ;
-(id)identifierForCollectionAtIndex:(NSInteger)arg0 ;
-(id)initWithCollectionView:(id)arg0 withPlaceCollections:(id)arg1 usingCollectionIds:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingSyncCoordinator:(id)arg5 inContext:(NSInteger)arg6 usingBatchSize:(NSUInteger)arg7 ;
-(id)initWithPlaceCollections:(id)arg0 usingSyncCoordinator:(id)arg1 inContext:(NSInteger)arg2 ;
-(id)removeIdentifiers:(id)arg0 collidingWithPlaceCollections:(id)arg1 ;
-(id)visibleFocusItems;
-(void)_dispatchOnManThread:(id)arg0 ;
-(void)appendBatchOfCollections:(id)arg0 ;
-(void)applySnapShot:(id)arg0 animated:(BOOL)arg1 ;
-(void)clearPreviousModelImageDownloads;
-(void)clearSnapshotData;
-(void)createBatchControllerIfNeededUsingIdentifiers:(id)arg0 andPlaceCollections:(id)arg1 usingCollectionFetcher:(id)arg2 usingGuideConsumer:(id)arg3 usingBatchSize:(NSUInteger)arg4 ;
-(void)didStartFetchingBatch;
-(void)dismissedCollections;
-(void)displayCollections;
-(void)getCollections:(id)arg0 ;
-(void)getCollectionsUsingDataSource:(id)arg0 onCompletion:(id)arg1 ;
-(void)prepareSnapshot;
-(void)refreshCollections;
-(void)shouldConsumeBatch:(BOOL)arg0 fetchedBatch:(id)arg1 ;
-(void)updateCollections:(id)arg0 usingBatchedIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingBatchSize:(NSUInteger)arg3 ;
-(void)updateCollectionsWithoutPreparingSnapshot:(id)arg0 usingBatchedIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingGuideConsumer:(id)arg3 usingBatchSize:(NSUInteger)arg4 ;
-(void)updateUsingBatchedIdentifiers:(id)arg0 usingCollectionFetcher:(id)arg1 usingBatchSize:(NSUInteger)arg2 ;
-(void)willDisplayCellAtIndexpath:(id)arg0 ;


@end


#endif