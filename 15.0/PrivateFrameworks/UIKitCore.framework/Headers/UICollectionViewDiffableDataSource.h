// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWDIFFABLEDATASOURCE_H
#define UICOLLECTIONVIEWDIFFABLEDATASOURCE_H

@class NSString;
@protocol _UIDiffableDataSourceIdentifying, UICollectionViewDataSource;

#import <Foundation/Foundation.h>

#import "__UIDiffableDataSource.h"
#import "UICollectionViewDiffableDataSourceReorderingHandlers.h"
#import "UICollectionViewDiffableDataSourceSectionSnapshotHandlers.h"

@interface UICollectionViewDiffableDataSource : NSObject <_UIDiffableDataSourceIdentifying, UICollectionViewDataSource>



@property (copy, nonatomic) id *_didReorderItemsHandler; // ivar: __didReorderItemsHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) __UIDiffableDataSource *impl; // ivar: _impl
@property (copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers;
@property (copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *supplementaryViewProvider;


-(BOOL)_isDiffableDataSource;
-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)indexForSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_associatedSectionControllerForItemIdentifier:(id)arg0 ;
-(id)_associatedSectionControllerForSectionIdentifier:(id)arg0 ;
-(id)_canReorderItemHandler:(SEL)arg0 ;
-(id)_diffableDataSourceImpl;
-(id)_snapshotForSection:(id)arg0 ;
-(id)collectionView;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 itemRenderer:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 itemRenderers:(id)arg1 rendererIdentifierProvider:(id)arg2 ;
-(id)initWithCollectionView:(id)arg0 sectionControllers:(id)arg1 rendererIdentifierProvider:(id)arg2 ;
-(id)initWithViewUpdatesSink:(id)arg0 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)sectionIdentifierForIndex:(NSInteger)arg0 ;
-(id)snapshot;
-(id)snapshotForSection:(id)arg0 ;
-(void)_applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)_applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(id)arg3 ;
-(void)_registerItemRenderers:(id)arg0 rendererIdentifierProvider:(id)arg1 ;
-(void)_setCanReorderItemHandler:(id)arg0 ;
-(void)_setDidReorderItemsHandler:(id)arg0 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 ;
-(void)applySnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(id)arg3 ;
-(void)applySnapshotUsingReloadData:(id)arg0 ;
-(void)applySnapshotUsingReloadData:(id)arg0 completion:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)validateIdentifiers;


@end


#endif