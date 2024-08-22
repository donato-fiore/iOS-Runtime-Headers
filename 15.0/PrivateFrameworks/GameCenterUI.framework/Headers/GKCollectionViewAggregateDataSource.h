// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCOLLECTIONVIEWAGGREGATEDATASOURCE_H
#define GKCOLLECTIONVIEWAGGREGATEDATASOURCE_H

@class NSMapTable, NSMutableDictionary, NSMutableArray;


#import "GKCollectionViewDataSource.h"

@interface GKCollectionViewAggregateDataSource : GKCollectionViewDataSource

@property (retain, nonatomic) NSMapTable *dataSourceToMappings; // ivar: _dataSourceToMappings
@property (retain, nonatomic) NSMutableDictionary *globalSectionToMappings; // ivar: _globalSectionToMappings
@property (retain, nonatomic) NSMutableArray *mappings; // ivar: _mappings
@property (nonatomic) NSUInteger sectionCount; // ivar: _sectionCount


-(BOOL)containsDataSource:(id)arg0 ;
-(BOOL)item:(id)arg0 matchesSearchTerms:(id)arg1 inSection:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)sectionForDataSource:(id)arg0 ;
-(id)_gkDescription;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)allDataSources;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 evaluateFactoryForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 isRecursive:(BOOL)arg3 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)createMetricsTreeWithGridLayout:(id)arg0 ;
-(id)dataSourceForSection:(NSUInteger)arg0 ;
-(id)globalIndexPathsForLocal:(id)arg0 dataSource:(id)arg1 ;
-(id)globalSectionsForLocal:(id)arg0 dataSource:(id)arg1 ;
-(id)indexPathsForItem:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)mappingForDataSource:(id)arg0 ;
-(id)mappingForGlobalSection:(NSInteger)arg0 ;
-(id)wrapperForView:(id)arg0 mapping:(id)arg1 ;
-(void)addDataSource:(id)arg0 withTag:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg0 ;
-(void)collectionViewWillBecomeActive:(id)arg0 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)dataSource:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didInsertSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)dataSource:(id)arg0 didMoveSection:(NSInteger)arg1 toSection:(NSInteger)arg2 ;
-(void)dataSource:(id)arg0 didRefreshItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didRefreshSections:(id)arg1 ;
-(void)dataSource:(id)arg0 didRemoveItemsAtIndexPaths:(id)arg1 ;
-(void)dataSource:(id)arg0 didRemoveSections:(id)arg1 ;
// -(void)dataSource:(id)arg0 performBatchUpdate:(id)arg1 complete:(unk)arg2  ;
-(void)dataSourceDidReloadData:(id)arg0 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;
-(void)removeDataSource:(id)arg0 ;
-(void)removeItemAtIndexPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDataSource:(id)arg0 forTag:(id)arg1 ;
-(void)updateMappings;


@end


#endif