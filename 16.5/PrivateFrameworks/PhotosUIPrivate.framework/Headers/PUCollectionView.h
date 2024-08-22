// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCOLLECTIONVIEW_H
#define PUCOLLECTIONVIEW_H

@class UICollectionView, UILongPressGestureRecognizer, NSIndexPath, UIView, PXUIAutoScroller, _UIDragSnappingFeedbackGenerator, NSString;
@protocol UIGestureRecognizerDelegate, PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;



@interface PUCollectionView : UICollectionView <UIGestureRecognizerDelegate>

 {
    UILongPressGestureRecognizer *_dragGestureRecognizer;
    NSIndexPath *_dragSourceIndexPath;
    NSIndexPath *_dragTargetIndexPath;
    UIView *_draggedView;
    CGPoint _draggedViewCenterOffset;
    PXUIAutoScroller *_autoScroller;
    BOOL _shouldWorkaround34630932;
}


@property (readonly, nonatomic) _UIDragSnappingFeedbackGenerator *_feedbackDragBehavior; // ivar: __feedbackDragBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUCollectionViewReorderDelegate> *reorderDelegate; // ivar: _reorderDelegate
@property (weak, nonatomic) NSObject<PUCollectionViewSelectionDelegate> *selectionDelegate; // ivar: _selectionDelegate
@property (readonly) Class superclass;


+(id)_reuseKeyForSupplementaryViewOfKind:(id)arg0 withReuseIdentifier:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_reorderableLayout;
-(id)indexPathsForSelectedItems;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(void)_applyAutomaticAdjustedContentOffset:(struct CGPoint )arg0 ;
-(void)_handleDrag:(id)arg0 ;
-(void)_updateDragUsingIndexPathUpdateBlock:(id)arg0 ;
-(void)adjustedContentInsetDidChange;
-(void)dealloc;
-(void)deleteItemsAtIndexPaths:(id)arg0 ;
-(void)didScrollToInitialPosition;
-(void)insertItemsAtIndexPaths:(id)arg0 ;
-(void)moveItemAtIndexPath:(id)arg0 toIndexPath:(id)arg1 ;
-(void)reloadData;
// -(void)visiblyInsertItemAtIndexPath:(id)arg0 modelUpdate:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif