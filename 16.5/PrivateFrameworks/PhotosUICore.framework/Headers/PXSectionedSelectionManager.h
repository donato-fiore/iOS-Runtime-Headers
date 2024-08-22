// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSECTIONEDSELECTIONMANAGER_H
#define PXSECTIONEDSELECTIONMANAGER_H

@class NSString, NSOrderedSet;
@protocol PXSectionedDataSourceManagerObserver, PXSectionedSelectionManagerSnapshotValidator;


#import "PXObservable.h"
#import "PXAssetSelectionTypeCounter.h"
#import "PXSectionedDataSource.h"
#import "PXSectionedDataSourceManager.h"
#import "PXMutableIndexPathSet.h"
#import "PXSelectionSnapshot.h"

@interface PXSectionedSelectionManager : PXObservable <PXSectionedDataSourceManagerObserver>

 {
    ? _needsUpdateFlags;
}


@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (nonatomic, setter=_setCursorIndexPath:) PXSimpleIndexPath cursorIndexPath; // ivar: _cursorIndexPath
@property (retain, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAssetTypeCounting; // ivar: _disableAssetTypeCounting
@property (nonatomic, setter=_setEmptySelectionAvoided:) BOOL emptySelectionAvoided; // ivar: _emptySelectionAvoided
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setOverallSelectionOrder:) NSOrderedSet *overallSelectionOrder; // ivar: _overallSelectionOrder
@property (nonatomic, setter=_setPendingIndexPath:) PXSimpleIndexPath pendingIndexPath; // ivar: _pendingIndexPath
@property (nonatomic, setter=_setPressedIndexPath:) PXSimpleIndexPath pressedIndexPath; // ivar: _pressedIndexPath
@property (retain, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *selectedIndexPaths; // ivar: _selectedIndexPaths
@property (nonatomic, setter=_setSelectionLimitReached:) BOOL selectionLimitReached; // ivar: _selectionLimitReached
@property (retain, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (weak, nonatomic) NSObject<PXSectionedSelectionManagerSnapshotValidator> *snapshotValidator; // ivar: _snapshotValidator
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(id)_validatedSnapshotForSnapshot:(id)arg0 ;
-(id)init;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)mutableChangeObject;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(struct PXSimpleIndexPath )_extendSelectionFromIndexPath:(struct PXSimpleIndexPath )arg0 toIndexPath:(struct PXSimpleIndexPath )arg1 inDirection:(NSUInteger)arg2 withDelegate:(id)arg3 ;
-(struct PXSimpleIndexPath )_initialItemIndexPathForMoveInDirection:(NSUInteger)arg0 ;
-(struct PXSimpleIndexPath )_initialSectionIndexPathForMoveInDirection:(NSUInteger)arg0 ;
-(struct PXSimpleIndexPath )_moveItemSelectionInDirection:(NSUInteger)arg0 withDelegate:(id)arg1 ;
-(struct PXSimpleIndexPath )_moveSectionSelectionInDirection:(NSUInteger)arg0 withDelegate:(id)arg1 ;
-(struct PXSimpleIndexPath )_moveSelectionFromIndexPath:(struct PXSimpleIndexPath )arg0 inDirection:(NSUInteger)arg1 withDelegate:(id)arg2 ;
-(struct PXSimpleIndexPath )_selectInitialItemForMoveInDirection:(NSUInteger)arg0 withDelegate:(id)arg1 ;
-(struct PXSimpleIndexPath )_selectInitialSectionForMoveInDirection:(NSUInteger)arg0 withDelegate:(id)arg1 ;
-(struct PXSimpleIndexPath )extendSelectionFromIndexPath:(struct PXSimpleIndexPath )arg0 inDirection:(NSUInteger)arg1 withDelegate:(id)arg2 ;
-(struct PXSimpleIndexPath )extendSelectionToItemIndexPath:(struct PXSimpleIndexPath )arg0 withDelegate:(id)arg1 ;
-(struct PXSimpleIndexPath )moveSelectionInDirection:(NSUInteger)arg0 withDelegate:(id)arg1 ;
-(struct PXSimpleIndexPath )startingIndexPathForMoveInDirection:(NSUInteger)arg0 ;
-(void)_invalidateSelectionSnapshot;
-(void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(id)arg0 ;
-(void)_updateIfNeeded;
-(void)_updateSelectionSnapshotIfNeeded;
-(void)deselectAll;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)selectAllItems;
-(void)selectAllItemsInSection:(struct PXSimpleIndexPath )arg0 ;
-(void)selectNonCopiedAssetsWithImportStatusManager:(id)arg0 ;
-(void)setCursorIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)setOverallSelectionOrder:(id)arg0 ;
-(void)setPendingIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)setPressedIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)setSelectedIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)setSelectedIndexPaths:(id)arg0 ;
-(void)setSelectedState:(BOOL)arg0 forIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(void)setSelectedState:(BOOL)arg0 forIndexPath:(struct PXSimpleIndexPath )arg1 andUpdateCursorIndexPath:(BOOL)arg2 ;
-(void)setSelectedState:(BOOL)arg0 forIndexPathSet:(id)arg1 ;
-(void)setSelectionLimitReached:(BOOL)arg0 ;


@end


#endif