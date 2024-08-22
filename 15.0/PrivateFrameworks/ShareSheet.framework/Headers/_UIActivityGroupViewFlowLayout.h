// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYGROUPVIEWFLOWLAYOUT_H
#define _UIACTIVITYGROUPVIEWFLOWLAYOUT_H

@class UICollectionViewLayout, UILongPressGestureRecognizer, NSIndexPath, NSArray;


#import "_UIActivityGroupActivityCell.h"

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout

@property (nonatomic) UIOffset draggingOffset; // ivar: _draggingOffset
@property (retain, nonatomic) _UIActivityGroupActivityCell *draggingView; // ivar: _draggingView
@property (retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // ivar: _editingGestureRecognizer
@property (nonatomic) CGSize evaluatedContentSize; // ivar: _evaluatedContentSize
@property (nonatomic) CGFloat evaluatedHorizontalItemOffset; // ivar: _evaluatedHorizontalItemOffset
@property (nonatomic) UIEdgeInsets evaluatedInset; // ivar: _evaluatedInset
@property (nonatomic) CGSize evaluatedItemSize; // ivar: _evaluatedItemSize
@property (nonatomic) UIEdgeInsets externalSafeInset; // ivar: _externalSafeInset
@property (copy, nonatomic) NSIndexPath *indexPathForDraggedItem; // ivar: _indexPathForDraggedItem
@property (copy, nonatomic) NSArray *preparedLayoutAttributes; // ivar: _preparedLayoutAttributes
@property (copy, nonatomic) NSArray *preparedUpdateItems; // ivar: _preparedUpdateItems


-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(BOOL)shouldCancelDraggingForGesture:(id)arg0 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(BOOL)shouldReverseLayoutDirection;
-(CGFloat)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize )arg0 inset:(struct UIEdgeInsets )arg1 offscreenPeekInFactor:(float)arg2 ;
-(id)_indexPathsForItemsInSection:(NSInteger)arg0 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg0 numberOfItemsInSection:(NSUInteger)arg1 ;
-(id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg0 ;
-(id)draggingViewForItemAtIndexPath:(id)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)indexPathForItemRecognizedByGesture:(id)arg0 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct UIEdgeInsets )_evaluateInsetForSectionAtIndex:(NSInteger)arg0 ;
-(void)beginDraggingForGesture:(id)arg0 ;
-(void)cancelDraggingForGesture:(id)arg0 ;
-(void)finalizeCollectionViewUpdates;
-(void)handleEditingGesture:(id)arg0 ;
-(void)invalidateGroupViewLayoutAnimated:(BOOL)arg0 ;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;
-(void)prepareLayout;
-(void)updateDraggingViewForGesture:(id)arg0 ;


@end


#endif