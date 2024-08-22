// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSEGMENTEDSECTIONDATASOURCE_H
#define GKSEGMENTEDSECTIONDATASOURCE_H

@class NSArray, NSString, NSMutableArray;
@protocol GKSegmentInfoDelegagte;


#import "GKCollectionViewDataSource.h"
#import "GKSegmentedSectionHeaderView.h"
#import "GKCollectionViewPlaceholderView.h"
#import "GKSegmentInfo.h"

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte>



@property (readonly, nonatomic) NSArray *dataSources;
@property (retain, nonatomic) GKSegmentedSectionHeaderView *headerView; // ivar: _headerView
@property (nonatomic) SEL noContentButtonAction; // ivar: _noContentButtonAction
@property (nonatomic) id *noContentButtonTarget; // ivar: _noContentButtonTarget
@property (retain, nonatomic) NSString *noContentButtonTitle; // ivar: _noContentButtonTitle
@property (retain, nonatomic) NSString *noContentMessage; // ivar: _noContentMessage
@property (retain, nonatomic) NSString *noContentTitle; // ivar: _noContentTitle
@property (retain, nonatomic) GKCollectionViewPlaceholderView *placeholderView; // ivar: _placeholderView
@property (retain, nonatomic) GKCollectionViewDataSource *rootDataSource; // ivar: _rootDataSource
@property (retain, nonatomic) NSMutableArray *segmentInfos; // ivar: _segmentInfos
@property (nonatomic) Class segmentedHeaderClass; // ivar: _segmentedHeaderClass
@property (nonatomic) GKCollectionViewDataSource *selectedDataSource;
@property (nonatomic) NSUInteger selectedDataSourceIndex;
@property (retain, nonatomic) GKSegmentInfo *selectedSegmentInfo; // ivar: _selectedSegmentInfo
@property (nonatomic) BOOL shouldHideSegment; // ivar: _shouldHideSegment
@property (nonatomic) BOOL usePlaceholder; // ivar: _usePlaceholder
@property (nonatomic) BOOL waitingForAnimation; // ivar: _waitingForAnimation


-(BOOL)containsDataSource:(id)arg0 ;
-(BOOL)item:(id)arg0 matchesSearchTerms:(id)arg1 inSection:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)sectionForDataSource:(id)arg0 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)allTitles;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 evaluateFactoryForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 isRecursive:(BOOL)arg3 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)createMetricsTreeWithGridLayout:(id)arg0 ;
-(id)dataSourceForSection:(NSUInteger)arg0 ;
-(id)description;
-(id)indexPathsForItem:(id)arg0 ;
-(id)infoForDataSource:(id)arg0 ;
-(id)infoForSegment:(NSInteger)arg0 ;
-(id)initWithDataSources:(id)arg0 ;
-(id)initWithDataSources:(id)arg0 rootDataSource:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(void)addDataSource:(id)arg0 ;
-(void)collectionViewDidBecomeInactive:(id)arg0 ;
-(void)collectionViewWillBecomeActive:(id)arg0 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)configureSegmentedHeader:(id)arg0 ;
-(void)dataSource:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didInsertSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)dataSource:(id)arg0 didMoveSection:(NSInteger)arg1 toSection:(NSInteger)arg2 ;
-(void)dataSource:(id)arg0 didRefreshItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didRefreshSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didRemoveItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didRemoveSections:(id)arg1 ;
// -(void)dataSource:(id)arg0 performBatchUpdate:(id)arg1 complete:(unk)arg2  ;
-(void)dataSourceDidLoad;
-(void)dataSourceDidReloadData:(id)arg0 ;
-(void)dataSourceWillLoad;
-(void)groupDidLoad:(id)arg0 ;
-(void)hoistSegmentedFactoryToRoot;
-(void)infosChanged;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;
-(void)removeDataSource:(id)arg0 ;
-(void)removeItemAtIndexPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)segmentDidChangeLoadingState:(id)arg0 ;
-(void)selectedSegmentChanged:(id)arg0 ;
-(void)setTitle:(id)arg0 forDataSource:(id)arg1 ;
-(void)updatePlaceholderNotify:(BOOL)arg0 ;


@end


#endif