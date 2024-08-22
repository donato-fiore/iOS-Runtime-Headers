// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOLLECTIONVIEWTRANSACTIONALDATASOURCE_H
#define CKCOLLECTIONVIEWTRANSACTIONALDATASOURCE_H

@class NSMapTable, UICollectionView, NSString;
@protocol UICollectionViewDataSource, CKTransactionalComponentDataSourceListener, CKSupplementaryViewDataSource;

#import <Foundation/Foundation.h>

#import "CKTransactionalComponentDataSource.h"
#import "CKTransactionalComponentDataSourceState.h"
#import "CKComponentDataSourceAttachController.h"

@interface CKCollectionViewTransactionalDataSource : NSObject <UICollectionViewDataSource, CKTransactionalComponentDataSourceListener>

 {
    CKTransactionalComponentDataSource *_componentDataSource;
    *unk _cellConfigurationFunction;
    CKTransactionalComponentDataSourceState *_currentState;
    CKComponentDataSourceAttachController *_attachController;
    NSMapTable *_cellToIndexPathMap;
    NSMapTable *_indexPathToCellMap;
    NSMapTable *_cellToItemMap;
}


@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<CKSupplementaryViewDataSource> *supplementaryViewDataSource; // ivar: _supplementaryViewDataSource


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithCollectionView:(id)arg0 supplementaryViewDataSource:(id)arg1 configuration:(id)arg2 cellConfigurationFunction:(*unk)arg3 ;
-(id)modelForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )sizeForItemAtIndexPath:(id)arg0 ;
-(void)_detachComponentLayoutForRemovedItemsAtIndexPaths:(id)arg0 inState:(id)arg1 ;
-(void)announceDidEndDisplayingCell:(id)arg0 ;
-(void)announceWillDisplayCell:(id)arg0 ;
-(void)applyChangeset:(id)arg0 mode:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)reloadWithMode:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(void)transactionalComponentDataSource:(id)arg0 didModifyPreviousState:(id)arg1 byApplyingChanges:(id)arg2 ;
-(void)updateConfiguration:(id)arg0 mode:(NSUInteger)arg1 userInfo:(id)arg2 ;


@end


#endif