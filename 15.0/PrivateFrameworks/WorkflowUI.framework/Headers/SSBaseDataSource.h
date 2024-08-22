// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSBASEDATASOURCE_H
#define SSBASEDATASOURCE_H

@class UICollectionView, NSString, UIView, UITableView;
@protocol UITableViewDataSource, UICollectionViewDataSource;

#import <Foundation/Foundation.h>


@interface SSBaseDataSource : NSObject <UITableViewDataSource, UICollectionViewDataSource>



@property (nonatomic) NSInteger cachedSeparatorStyle; // ivar: _cachedSeparatorStyle
@property (weak, nonatomic) Class cellClass; // ivar: _cellClass
@property (copy, nonatomic) id *cellConfigureBlock; // ivar: _cellConfigureBlock
@property (copy, nonatomic) id *cellCreationBlock; // ivar: _cellCreationBlock
@property (copy, nonatomic) id *collectionSupplementaryConfigureBlock; // ivar: _collectionSupplementaryConfigureBlock
@property (copy, nonatomic) id *collectionSupplementaryCreationBlock; // ivar: _collectionSupplementaryCreationBlock
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) Class collectionViewSupplementaryElementClass; // ivar: _collectionViewSupplementaryElementClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *emptyView; // ivar: _emptyView
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger rowAnimation; // ivar: _rowAnimation
@property (readonly) Class superclass;
@property (copy, nonatomic) id *tableActionBlock; // ivar: _tableActionBlock
@property (copy, nonatomic) id *tableDeletionBlock; // ivar: _tableDeletionBlock
@property (copy, nonatomic) id *tableMoveBlock; // ivar: _tableMoveBlock
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


+(id)indexPathArrayWithIndexSet:(id)arg0 inSection:(NSInteger)arg1 ;
+(id)indexPathArrayWithRange:(struct _NSRange )arg0 inSection:(NSInteger)arg1 ;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)numberOfItems;
-(NSUInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathForItem:(id)arg0 ;
-(id)init;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateEmptyView;
-(void)configureCell:(id)arg0 forItem:(id)arg1 parentView:(id)arg2 indexPath:(id)arg3 ;
-(void)dealloc;
-(void)deleteCellsAtIndexPaths:(id)arg0 ;
-(void)deleteSectionsAtIndexes:(id)arg0 ;
-(void)insertCellsAtIndexPaths:(id)arg0 ;
-(void)insertSectionsAtIndexes:(id)arg0 ;
-(void)moveCellAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)moveSectionAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)reloadCellsAtIndexPaths:(id)arg0 ;
-(void)reloadData;
-(void)reloadSectionsAtIndexes:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;


@end


#endif