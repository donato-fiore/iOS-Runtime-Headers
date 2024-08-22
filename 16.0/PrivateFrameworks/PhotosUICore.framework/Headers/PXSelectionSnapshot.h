// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSELECTIONSNAPSHOT_H
#define PXSELECTIONSNAPSHOT_H

@class NSOrderedSet;
@protocol PXFastEnumeration, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSource.h"
#import "PXIndexPathSet.h"

@interface PXSelectionSnapshot : NSObject

@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allItemsEnumerator;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allObjectsEnumerator;
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *allSectionsEnumerator;
@property (readonly, nonatomic) PXSimpleIndexPath cursorIndexPath; // ivar: _cursorIndexPath
@property (readonly, nonatomic) PXSectionedDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSObject<NSObject><NSCopying> *firstObject;
@property (readonly, nonatomic) PXSimpleIndexPath firstSelectedIndexPath;
@property (readonly, nonatomic) BOOL isEmptySelectionAvoided; // ivar: _isEmptySelectionAvoided
@property (readonly, nonatomic) BOOL isSelectionLimitReached; // ivar: _isSelectionLimitReached
@property (readonly, nonatomic) PXSimpleIndexPath lastSelectedIndexPath;
@property (readonly, copy, nonatomic) NSOrderedSet *overallSelectionOrder; // ivar: _overallSelectionOrder
@property (readonly, nonatomic) PXSimpleIndexPath pendingIndexPath; // ivar: _pendingIndexPath
@property (readonly, nonatomic) PXSimpleIndexPath pressedIndexPath; // ivar: _pressedIndexPath
@property (readonly, nonatomic) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property (readonly, nonatomic) PXIndexPathSet *selectedIndexPaths; // ivar: _selectedIndexPaths


-(BOOL)areAllItemsSelected;
-(BOOL)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)arg0 ;
-(BOOL)isAnyItemSelected;
-(BOOL)isAnySectionSelected;
-(BOOL)isIndexPathSelected:(struct PXSimpleIndexPath )arg0 ;
-(NSInteger)overallSelectionOrderIndexForIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)description;
-(id)fetchSelectedObjects;
-(id)init;
-(id)initWithDataSource:(id)arg0 selectedIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)initWithDataSource:(id)arg0 selectedIndexPaths:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 selectedIndexPaths:(id)arg1 cursorIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(id)initWithDataSource:(id)arg0 selectedIndexPaths:(id)arg1 cursorIndexPath:(struct PXSimpleIndexPath )arg2 pendingIndexPath:(struct PXSimpleIndexPath )arg3 pressedIndexPath:(struct PXSimpleIndexPath )arg4 selectionLimitReached:(BOOL)arg5 emptySelectionAvoided:(BOOL)arg6 overallSelectionOrder:(id)arg7 ;
-(struct PXSimpleIndexPath )indexPathOfObjectPassingTest:(id)arg0 ;
-(void)enumerateSelectedObjectsUsingBlock:(id)arg0 ;


@end


#endif