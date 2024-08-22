// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIFFABLEDATASOURCESECTIONCONTROLLER_H
#define _UIDIFFABLEDATASOURCESECTIONCONTROLLER_H

@class NSMapTable, NSSet, NSArray;
@protocol NSCopying, _UIDiffableDataSourceSectionControllerDelegate;

#import <Foundation/Foundation.h>

#import "__UIDiffableDataSource.h"
#import "_UIDiffableDataSourceSectionControllerHandlers.h"

@interface _UIDiffableDataSourceSectionController : NSObject <NSCopying>

 {
    __UIDiffableDataSource *_dataSource;
    NSMapTable *_snapshotsMap;
    id<_UIDiffableDataSourceSectionControllerDelegate> *_delegate;
}


@property (readonly, nonatomic) NSSet *associatedSectionIdentifiers; // ivar: _associatedSectionIdentifiers
@property (copy, nonatomic) _UIDiffableDataSourceSectionControllerHandlers *handlers; // ivar: _handlers
@property (readonly, nonatomic) NSArray *itemRenderers; // ivar: _itemRenderers


-(BOOL)_performDisclosureAction:(NSUInteger)arg0 forItem:(id)arg1 ;
-(BOOL)_queryClientShouldCollapseItem:(id)arg0 ;
-(BOOL)_queryClientShouldExpandItem:(id)arg0 ;
-(BOOL)_queryClientShouldQueryForSnapshotForExpandingParentItem:(id)arg0 ;
-(BOOL)_shouldPerformCustomCollapseExpandAnimationsForInitialSnapshot:(id)arg0 finalSnapshot:(id)arg1 ;
-(BOOL)_snapshotHasExpandOrCollapseUpdates:(id)arg0 ;
-(id)_collectionView;
-(id)_customCollapseExpandAnimationsForSnapshot:(SEL)arg0 initialSectionSnapshot:(id)arg1 finalSectionSnapshot:(id)arg2 viewPropertyAnimator:(id)arg3 visibleBounds:(id)arg4 sectionIndex:(struct CGRect )arg5 ;
-(id)_extantMutableSnapshotForItem:(id)arg0 ;
-(id)_extantMutableSnapshotForSection:(id)arg0 ;
-(id)_parentFocusItemForItem:(id)arg0 ;
-(id)_queryClientSnapshotForExpandingParentItemForItem:(id)arg0 currentSectionSnapshot:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg0 ;
-(id)_snapshotForSectionContainingItem:(id)arg0 ;
-(id)_snapshotsMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataSource;
-(id)delegate;
-(id)initWithDiffableDataSource:(id)arg0 ;
-(id)initWithDiffableDataSourceImpl:(id)arg0 ;
-(id)initWithItemRenderers:(id)arg0 ;
-(id)initWithItemRenderers:(id)arg0 associatedSectionIdentifiers:(id)arg1 ;
-(id)initWithItemRenderers:(id)arg0 associatedSectionIdentifiers:(id)arg1 snapshotsMap:(id)arg2 dataSource:(id)arg3 ;
-(id)snapshotForItem:(id)arg0 ;
-(id)snapshotForSection:(id)arg0 ;
// -(void)__applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 viewPropertyAnimator:(id)arg3 animationsProvider:(id)arg4 completion:(unk)arg5  ;
// -(void)_applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 viewPropertyAnimator:(id)arg3 animationsProvider:(id)arg4 completion:(unk)arg5  ;
-(void)_configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)_configureForDataSource:(id)arg0 ;
-(void)_configureForItemRenderersIfNeeded:(id)arg0 ;
-(void)_queryClientWillCollapseItem:(id)arg0 ;
-(void)_queryClientWillExpandItem:(id)arg0 ;
-(void)_updateAffectedVisibleCellConfigurationsForExapansionStateWithSnapshot:(id)arg0 ;
-(void)_updateSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(id)arg3 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 customAnimationsProvider:(id)arg2 ;
-(void)applySnapshot:(id)arg0 toSection:(id)arg1 viewPropertyAnimator:(id)arg2 customAnimationsProvider:(id)arg3 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)setDataSource:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif