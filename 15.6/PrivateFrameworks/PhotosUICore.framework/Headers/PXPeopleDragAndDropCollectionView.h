// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEDRAGANDDROPCOLLECTIONVIEW_H
#define PXPEOPLEDRAGANDDROPCOLLECTIONVIEW_H

@class UICollectionView, UIVisualEffect, NSIndexPath;
@protocol PXPeopleDragAndDropCollectionViewDelegate;


#import "PXPeopleCollectionViewCell.h"

@interface PXPeopleDragAndDropCollectionView : UICollectionView

@property (retain, nonatomic) UIVisualEffect *blurEffect; // ivar: _blurEffect
@property (weak, nonatomic) NSObject<PXPeopleDragAndDropCollectionViewDelegate> *dragDropDelegate; // ivar: _dragDropDelegate
@property (retain, nonatomic) PXPeopleCollectionViewCell *dragSourceCell; // ivar: _dragSourceCell
@property (retain, nonatomic) NSIndexPath *dragSourceIndexPath; // ivar: _dragSourceIndexPath
@property (nonatomic) BOOL interactiveMode; // ivar: _interactiveMode
@property (nonatomic) BOOL validDrop; // ivar: _validDrop


-(BOOL)beginInteractiveMovementAtLocation:(struct CGPoint )arg0 forItemAtIndexPath:(id)arg1 ;
-(CGFloat)_highestVisibleCellZOrder;
-(NSInteger)sectionAtPoint:(struct CGPoint )arg0 ;
-(id)_footerAttributes;
-(id)sortedIndexPathsForSelectedItems;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;
-(void)layoutSubviews;
-(void)reloadData;
-(void)resetTransformForSourceIndex:(id)arg0 ;


@end


#endif