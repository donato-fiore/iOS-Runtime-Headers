// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __UIDIFFABLEDATASOURCE_H
#define __UIDIFFABLEDATASOURCE_H

@class NSMapTable, NSHashTable, NSString, NSArray;
@protocol UICollectionViewDataSource, UITableViewDataSource, OS_dispatch_queue, _UIDiffableDataSourceState;

#import <Foundation/Foundation.h>

#import "UITableView.h"
#import "UICollectionView.h"
#import "NSDiffableDataSourceTransaction.h"
#import "UICollectionViewDiffableDataSourceReorderingHandlers.h"
#import "UICollectionViewDiffableDataSourceSectionSnapshotHandlers.h"
#import "_UIDiffableDataSourceViewUpdater.h"

@interface __UIDiffableDataSource : NSObject <UICollectionViewDataSource, UITableViewDataSource>

 {
    UITableView *_tableView;
    UICollectionView *_collectionView;
    NSMapTable *_rendererMap;
    id *_rendererIdentifierProvider;
    NSHashTable *_sectionControllers;
    NSDiffableDataSourceTransaction *_pendingReorderingTransaction;
    NSDiffableDataSourceTransaction *_currentTransaction;
    BOOL _pendingReorderingTransactionShouldPerformViewAnimations;
}


@property (readonly, weak, nonatomic) UICollectionView *_collectionView;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *applyQueue; // ivar: _applyQueue
@property (copy, nonatomic) id *canReorderItemHandler; // ivar: _canReorderItemHandler
@property (copy, nonatomic) id *cellObserver; // ivar: _cellObserver
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id *collectionViewCellConfigurationHandler; // ivar: _collectionViewCellConfigurationHandler
@property (copy, nonatomic) id *collectionViewCellProvider; // ivar: _collectionViewCellProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *didApplySnapshotHandler; // ivar: _didApplySnapshotHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isApplyingWithoutRebasingSectionSnapshots; // ivar: _isApplyingWithoutRebasingSectionSnapshots
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property NSUInteger mutationQueueSource; // ivar: _mutationQueueSource
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) NSInteger numberOfSections;
@property (readonly, nonatomic) uint8_t outstandingApplyCount; // ivar: _outstandingApplyCount
@property (readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property (copy, nonatomic) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers; // ivar: _reorderingHandlers
@property (copy, nonatomic) id *reuseIdentifierProvider; // ivar: _reuseIdentifierProvider
@property (readonly, nonatomic) NSArray *sectionControllers;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (copy, nonatomic) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers; // ivar: _sectionSnapshotHandlers
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue; // ivar: _snapshotQueue
@property (retain, nonatomic) NSObject<_UIDiffableDataSourceState> *state; // ivar: _state
@property (readonly) Class superclass;
@property (copy, nonatomic) id *supplementaryReuseIdentifierProvider; // ivar: _supplementaryReuseIdentifierProvider
@property (copy, nonatomic) id *supplementaryViewConfigurationHandler; // ivar: _supplementaryViewConfigurationHandler
@property (copy, nonatomic) id *supplementaryViewProvider; // ivar: _supplementaryViewProvider
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id *tableViewCellConfigurationHandler; // ivar: _tableViewCellConfigurationHandler
@property (copy, nonatomic) id *tableViewCellProvider; // ivar: _tableViewCellProvider
@property (nonatomic) NSInteger tableViewDefaultRowAnimation;
@property (retain, nonatomic) _UIDiffableDataSourceViewUpdater *viewUpdater; // ivar: _viewUpdater
@property (copy, nonatomic) id *willApplySnapshotHandler; // ivar: _willApplySnapshotHandler


-(BOOL)_canApplySnapshotUpdateWithoutDiffing:(id)arg0 ;
-(BOOL)_isApplyingReorderingTransaction;
-(BOOL)_isDiffableDataSource;
-(BOOL)canMoveItemAtIndexPath:(id)arg0 ;
-(BOOL)sectionController:(id)arg0 shouldCollapseItem:(id)arg1 ;
-(BOOL)sectionController:(id)arg0 shouldExpandItem:(id)arg1 ;
-(BOOL)sectionController:(id)arg0 shouldQueryForSnapshotForExpandingParentItem:(id)arg1 ;
-(NSInteger)_numberOfItemsInSection:(NSInteger)arg0 collectionView:(id)arg1 ;
-(NSInteger)_numberOfItemsInSectionDeprecatedSPI:(NSInteger)arg0 collectionView:(id)arg1 ;
-(NSInteger)_numberOfRowsInSection:(NSInteger)arg0 tableView:(id)arg1 ;
-(NSInteger)_numberOfRowsInSectionDeprecatedSPI:(NSInteger)arg0 tableView:(id)arg1 ;
-(NSInteger)_numberOfSectionsForCollectionView:(id)arg0 ;
-(NSInteger)_numberOfSectionsForCollectionViewDeprecatedSPI:(id)arg0 ;
-(NSInteger)_numberOfSectionsForTableView:(id)arg0 ;
-(NSInteger)_numberOfSectionsForTableViewDeprecatedSPI:(id)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)indexForSectionIdentifier:(id)arg0 ;
-(NSInteger)indexOfItemIdentifier:(id)arg0 ;
-(NSInteger)indexOfSectionIdentifier:(id)arg0 ;
-(NSInteger)numberOfItemsInSection:(id)arg0 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_capabilities;
-(id)_cellForItemAtIndexPath:(id)arg0 collectionView:(id)arg1 ;
-(id)_cellForItemAtIndexPathDeprecatedSPI:(id)arg0 collectionView:(id)arg1 ;
-(id)_cellForRowAtIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)_cellForRowAtIndexPathDeprecatedSPI:(id)arg0 tableView:(id)arg1 ;
-(id)_diffableDataSourceImpl;
-(id)_pendingReloadUpdatesForSnapshot:(id)arg0 ;
-(id)_reloadViewUpdatesForDiffUpdate:(id)arg0 ;
-(id)_reloadViewUpdatesForDiffUpdate:(id)arg0 dataSource:(id)arg1 ignoreInvalidItems:(BOOL)arg2 ;
-(id)_reorderingTransactionForReorderingUpdate:(id)arg0 ;
-(id)_snapshotForSection:(id)arg0 ;
-(id)_snapshotWithHandlerAtomic:(id)arg0 ;
-(id)_transactionForFinalSnapshot:(id)arg0 dataSourceDiffer:(id)arg1 shouldSkipRebasingSectionSnapshots:(BOOL)arg2 ;
-(id)_transactionForReloadUpdatesWithSnapshot:(id)arg0 ;
-(id)_viewForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id)_viewForSupplementaryElementOfKindDeprecatedSPI:(id)arg0 atIndexPath:(id)arg1 collectionView:(id)arg2 ;
-(id)associatedSectionControllerForItemIdentifier:(id)arg0 ;
-(id)associatedSectionControllerForSectionIdentifier:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)currentTransaction;
-(id)emptySnapshot;
-(id)indexPathForItemIdentifier:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 ;
// -(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 dataSource:(unk)arg2  ;
// -(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 reuseIdentifierProvider:(unk)arg2 cellConfigurationHandler:(id)arg3 state:(unk)arg4 dataSource:(id)arg5  ;
-(id)initWithCollectionView:(id)arg0 itemRenderers:(id)arg1 rendererIdentifierProvider:(id)arg2 ;
// -(id)initWithCollectionView:(id)arg0 reuseIdentifierProvider:(id)arg1 cellConfigurationHandler:(unk)arg2  ;
-(id)initWithCollectionView:(id)arg0 sectionControllers:(id)arg1 rendererIdentifierProvider:(id)arg2 ;
-(id)initWithState:(id)arg0 ;
-(id)initWithTableView:(id)arg0 cellProvider:(id)arg1 ;
// -(id)initWithTableView:(id)arg0 cellProvider:(id)arg1 reuseIdentifierProvider:(unk)arg2 cellConfigurationHandler:(id)arg3 state:(unk)arg4 dataSource:(id)arg5  ;
// -(id)initWithTableView:(id)arg0 reuseIdentifierProvider:(id)arg1 cellConfigurationHandler:(unk)arg2  ;
-(id)initWithViewUpdatesSink:(id)arg0 ;
-(id)itemIdentifierForIndexPath:(id)arg0 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)sectionController:(id)arg0 snapshotForExpandingParentItem:(id)arg1 currentSectionSnapshot:(id)arg2 ;
-(id)sectionIdentifierForIndex:(NSInteger)arg0 ;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg0 ;
-(id)snapshot;
-(id)snapshotForSection:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_applyDifferencesFromSnapshot:(id)arg0 customAnimationsProvider:(id)arg1 ;
-(void)_applyDifferencesFromSnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(id)arg3 ;
-(void)_applyDifferencesFromSnapshot:(id)arg0 viewPropertyAnimator:(id)arg1 customAnimationsProvider:(id)arg2 ;
// -(void)_applyDifferencesFromSnapshot:(id)arg0 viewPropertyAnimator:(id)arg1 customAnimationsProvider:(id)arg2 animated:(unk)arg3 completion:(BOOL)arg4  ;
// -(void)_commitNewDataSource:(id)arg0 withViewUpdates:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(id)arg3 animated:(unk)arg4 commitAlongsideHandler:(BOOL)arg5 completion:(id)arg6  ;
-(void)_commitRebasedSectionSnapshotsFromCurrentTransactionIfNeeded;
-(void)_commitReorderingForItemAtIndexPath:(id)arg0 toDestinationIndexPath:(id)arg1 ;
-(void)_commitReorderingForItemAtIndexPath:(id)arg0 toDestinationIndexPath:(id)arg1 shouldPerformViewAnimations:(BOOL)arg2 ;
-(void)_commitStateAtomically:(id)arg0 ;
-(void)_commitUpdate:(id)arg0 snapshot:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)_computeCurrentTransactionForFinalSnapshot:(id)arg0 withDataSourceDiffer:(id)arg1 ;
-(void)_notifyDidApplyForCurrentTransactionIfNeeded;
-(void)_notifyWillApplyForCurrentTransactionIfNeeded;
-(void)_performApplyWithoutRebasingSectionSnapshots:(id)arg0 ;
-(void)_registerItemRenderers:(id)arg0 rendererIdentifierProvider:(id)arg1 ;
-(void)_resetCurrentTransaction;
-(void)_willBeginReorderingForItemAtIndexPath:(id)arg0 ;
-(void)addAssociatedSectionControllerIfNeeded:(id)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 ;
-(void)appendItemsWithIdentifiers:(id)arg0 intoSectionWithIdentifier:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg0 ;
-(void)appendSectionsWithIdentifiers:(id)arg0 ;
-(void)applyDifferencesFromSnapshot:(id)arg0 ;
-(void)applyDifferencesFromSnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 ;
-(void)applyDifferencesFromSnapshot:(id)arg0 animatingDifferences:(BOOL)arg1 completion:(id)arg2 ;
-(void)applyDifferencesFromSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)applySnapshot:(id)arg0 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(id)arg3 ;
-(void)deleteAllItems;
-(void)deleteItemsWithIdentifiers:(id)arg0 ;
-(void)deleteSectionsWithIdentifiers:(id)arg0 ;
-(void)insertItemsWithIdentifiers:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)insertItemsWithIdentifiers:(id)arg0 beforeItemWithIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg0 afterItemWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg0 beforeItemWithIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg0 afterSectionWithIdentifier:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg0 beforeSectionWithIdentifier:(id)arg1 ;
-(void)reconfigureItemsWithIdentifiers:(id)arg0 ;
-(void)reloadFromSnapshot:(id)arg0 ;
-(void)reloadFromSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)reloadItemsWithIdentifiers:(id)arg0 ;
-(void)reloadSectionsWithIdentifiers:(id)arg0 ;
-(void)sectionController:(id)arg0 willCollapseItem:(id)arg1 ;
-(void)sectionController:(id)arg0 willExpandItem:(id)arg1 ;
-(void)validateIdentifiers;


@end


#endif