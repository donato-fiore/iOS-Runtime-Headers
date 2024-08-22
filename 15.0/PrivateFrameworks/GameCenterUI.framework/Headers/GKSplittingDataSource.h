// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSPLITTINGDATASOURCE_H
#define GKSPLITTINGDATASOURCE_H

@class NSMutableDictionary;


#import "GKCollectionViewDataSource.h"
#import "GKBasicCollectionViewDataSource.h"

@interface GKSplittingDataSource : GKCollectionViewDataSource

@property (readonly, nonatomic) NSInteger sectionCount;
@property (retain, nonatomic) NSMutableDictionary *sectionToSectionInfo; // ivar: _sectionToSectionInfo
@property (retain, nonatomic) GKBasicCollectionViewDataSource *underlyingDataSource; // ivar: _underlyingDataSource


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_gkDescriptionWithChildren:(NSInteger)arg0 ;
-(id)filteredItemsForRawItems:(id)arg0 ;
-(id)indexPathsForItem:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)itemsForSection:(NSInteger)arg0 ;
-(id)sectionInfoForSection:(NSInteger)arg0 ;
-(id)titleForSection:(NSInteger)arg0 ;
-(void)addSectionWithTitle:(id)arg0 sortDescriptors:(id)arg1 ;
-(void)collectionViewDidBecomeInactive:(id)arg0 ;
-(void)configureDataSource;
-(void)refreshAdditionalInfoForDataType:(unsigned int)arg0 updateNotifier:(id)arg1 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 updateNotifier:(id)arg2 ;
-(void)removeAllSections;
-(void)removeItemAtIndexPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeSection:(NSInteger)arg0 ;
-(void)setFilterPredicate:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setItems:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setSortDescriptors:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)willUpdateSectionsWithItems:(id)arg0 ;


@end


#endif