// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCOLLECTIONVIEWDATASOURCE_H
#define GKCOLLECTIONVIEWDATASOURCE_H

@class NSString, NSMutableDictionary, NSHashTable;
@protocol GKCollectionViewDataSourceDelegate, UICollectionViewDataSource;

#import <Foundation/Foundation.h>

#import "GKGridLayoutMetrics.h"
#import "GKSectionMetrics.h"

@interface GKCollectionViewDataSource : NSObject <GKCollectionViewDataSourceDelegate, UICollectionViewDataSource>



@property (copy, nonatomic) GKGridLayoutMetrics *dataSourceMetrics;
@property (retain, nonatomic) GKGridLayoutMetrics *dataSourceMetricsInternal; // ivar: _dataSourceMetricsInternal
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultSearchKey; // ivar: _defaultSearchKey
@property (copy, nonatomic) GKSectionMetrics *defaultSectionMetrics;
@property (retain, nonatomic) GKSectionMetrics *defaultSectionMetricsInternal; // ivar: _defaultSectionMetricsInternal
@property (weak, nonatomic) NSObject<GKCollectionViewDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRootDataSource;
@property (readonly, nonatomic) BOOL isSearchable;
@property (retain, nonatomic) NSMutableDictionary *kindsToFactories; // ivar: _kindsToFactories
@property (retain, nonatomic) NSHashTable *listeners; // ivar: _listeners
@property (retain, nonatomic) NSMutableDictionary *sectionsToMetrics; // ivar: _sectionsToMetrics
@property (retain, nonatomic) NSMutableDictionary *sectionsToSearchKeys; // ivar: _sectionsToSearchKeys
@property (readonly) Class superclass;


-(BOOL)containsDataSource:(id)arg0 ;
-(BOOL)item:(id)arg0 matchesSearchTerms:(id)arg1 inSection:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)totalItemCount;
-(NSUInteger)sectionForDataSource:(id)arg0 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 defaultViewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 evaluateFactoryForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 isRecursive:(BOOL)arg3 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)createMetricsTreeWithGridLayout:(id)arg0 ;
-(id)dataSourceForSection:(NSUInteger)arg0 ;
-(id)indexPathsForItem:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)localDescription;
-(id)metricsForSection:(NSInteger)arg0 ;
-(id)metricsForSectionInternal:(NSInteger)arg0 ;
-(id)searchKeyForSection:(NSInteger)arg0 ;
-(id)supplementaryViewFactoryForKind:(id)arg0 ;
-(id)targetForAction:(SEL)arg0 ;
-(void)collectionViewDidBecomeInactive:(id)arg0 ;
-(void)collectionViewWillBecomeActive:(id)arg0 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)enumerateItemsAndIndexPathsUsingBlock:(id)arg0 ;
-(void)loadDataWithCompletionHandlerAndError:(id)arg0 ;
-(void)notifyBatchUpdate:(id)arg0 ;
// -(void)notifyBatchUpdate:(id)arg0 complete:(unk)arg1  ;
-(void)notifyDidReloadData;
-(void)notifyItemMovedFromIndexPath:(id)arg0 toIndexPaths:(id)arg1 ;
-(void)notifyItemsInsertedAtIndexPaths:(id)arg0 ;
-(void)notifyItemsRefreshedAtIndexPaths:(id)arg0 ;
-(void)notifyItemsRemovedAtIndexPaths:(id)arg0 ;
-(void)notifyPlaceholderUpdated:(BOOL)arg0 ;
-(void)notifySectionMovedFrom:(NSInteger)arg0 to:(NSInteger)arg1 ;
-(void)notifySectionsInserted:(id)arg0 ;
-(void)notifySectionsMovedWithItems;
-(void)notifySectionsRefreshed:(id)arg0 ;
-(void)notifySectionsRemoved:(id)arg0 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;
-(void)registerSupplementaryViewOfKind:(id)arg0 withClass:(Class)arg1 target:(id)arg2 configurator:(SEL)arg3 ;
-(void)registerSupplementaryViewOfKind:(id)arg0 withFactory:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)setMetrics:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setSearchKey:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)updateSupplementaryMetricsForKey:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif