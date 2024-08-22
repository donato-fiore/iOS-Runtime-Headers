// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWDRAGSOURCECONTROLLERDRAGSTATE_H
#define _UICOLLECTIONVIEWDRAGSOURCECONTROLLERDRAGSTATE_H

@class NSMutableOrderedSet, NSIndexPath, NSPointerArray, NSArray;

#import <Foundation/Foundation.h>


@interface _UICollectionViewDragSourceControllerDragState : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *dataSourceIndexPathsOfDraggingItems; // ivar: _dataSourceIndexPathsOfDraggingItems
@property (readonly, nonatomic) NSIndexPath *dragFromDataSourceIndexPath;
@property (nonatomic) BOOL dragItemsCreatedForReordering; // ivar: _dragItemsCreatedForReordering
@property (retain, nonatomic) NSPointerArray *dragItemsWithRebasableIndexPaths; // ivar: _dragItemsWithRebasableIndexPaths
@property (readonly, nonatomic) NSArray *draggingDataSourceIndexPaths;


-(BOOL)isDraggingFromDataSourceIndexPath:(id)arg0 ;
-(id)dataSourceIndexPathForDragItem:(id)arg0 forCollectionView:(id)arg1 ;
-(id)description;
-(id)init;
-(void)addDraggingDataSourceIndexPath:(id)arg0 ;
-(void)rebaseDataSourceIndexPathsWithUpdateMap:(id)arg0 ;
-(void)setDataSourceIndexPath:(id)arg0 forDragItem:(id)arg1 collectionView:(id)arg2 ;


@end


#endif