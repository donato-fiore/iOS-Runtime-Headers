// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEDRAGANDDROPCOLLECTIONVIEWLAYOUT_H
#define PXPEOPLEDRAGANDDROPCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, NSIndexPath, NSTimer;
@protocol PXPeopleDragAndDropCollectionViewDelegateLayout;



@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout

@property (nonatomic) CGPoint currentPosition; // ivar: _currentPosition
@property (retain, nonatomic) NSIndexPath *dragIndexPathForMerge; // ivar: _dragIndexPathForMerge
@property (retain, nonatomic) NSTimer *dragPauseTimer; // ivar: _dragPauseTimer
@property (nonatomic) CGPoint lastDragPoint; // ivar: _lastDragPoint
@property (readonly, nonatomic) NSObject<PXPeopleDragAndDropCollectionViewDelegateLayout> *mergeDelegate;
@property (nonatomic) BOOL performActualRearrange; // ivar: _performActualRearrange
@property (retain, nonatomic) NSIndexPath *targetIndexPathForMerge; // ivar: _targetIndexPathForMerge


-(BOOL)performMergeIfPossible;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg0 withTargetPosition:(struct CGPoint )arg1 ;
-(id)targetIndexPathForInteractivelyMovingItem:(id)arg0 withPosition:(struct CGPoint )arg1 ;
-(void)_cancelDragPauseTimer;
-(void)_potentialMergeWithDragIndexPath:(id)arg0 ontoIndexPath:(id)arg1 withPosition:(struct CGPoint )arg2 ;
-(void)_updateDragPause;
-(void)dealloc;


@end


#endif