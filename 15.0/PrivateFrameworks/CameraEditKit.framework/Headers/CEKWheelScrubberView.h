// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEKWHEELSCRUBBERVIEW_H
#define CEKWHEELSCRUBBERVIEW_H

@class UIView, UICollectionView, UILongPressGestureRecognizer, UIPreviewInteraction, NSArray, UILabel, UITapGestureRecognizer, NSString;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, CEKWheelScrubberCollectionViewLayoutDelegate, UIPreviewInteractionDelegate, UIGestureRecognizerDelegate, CEKWheelScrubberViewDelegate;


#import "CEKAnimationGenerator.h"
#import "CEKWheelScrubberCollectionViewLayout.h"
#import "CEKEdgeGradientView.h"
#import "CEKSelectionFeedbackGenerator.h"

@interface CEKWheelScrubberView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CEKWheelScrubberCollectionViewLayoutDelegate, UIPreviewInteractionDelegate, UIGestureRecognizerDelegate>

 {
    ? _delegateFlags;
}


@property (readonly, nonatomic) CEKAnimationGenerator *_animationGenerator; // ivar: __animationGenerator
@property (readonly, nonatomic) UICollectionView *_collectionView; // ivar: __collectionView
@property (readonly, nonatomic) CEKWheelScrubberCollectionViewLayout *_collectionViewLayout; // ivar: __collectionViewLayout
@property (retain, nonatomic, setter=_setCollectionViewSnapshot:) UIView *_collectionViewSnapshot; // ivar: __collectionViewSnapshot
@property (retain, nonatomic) CEKEdgeGradientView *_edgeGradientView; // ivar: __edgeGradientView
@property (readonly, nonatomic) UILongPressGestureRecognizer *_pressGestureRecognizer; // ivar: __pressGestureRecognizer
@property (retain, nonatomic) UIPreviewInteraction *_previewInteraction; // ivar: __previewInteraction
@property (nonatomic, setter=_setPreviewTransitionProgress:) CGFloat _previewTransitionProgress; // ivar: __previewTransitionProgress
@property (retain, nonatomic, setter=_setReducedItemIndicesToShow:) NSArray *_reducedItemIndicesToShow; // ivar: __reducedItemIndicesToShow
@property (readonly, nonatomic) UIView *_selectedItemLoupe; // ivar: __selectedItemLoupe
@property (readonly, nonatomic) UILabel *_selectedItemTextOverlay; // ivar: __selectedItemTextOverlay
@property (readonly, nonatomic) CEKSelectionFeedbackGenerator *_selectionFeedbackGenerator; // ivar: __selectionFeedbackGenerator
@property (nonatomic) BOOL _showSelectedItemTextOverlay; // ivar: __showSelectedItemTextOverlay
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (nonatomic) NSInteger cornerStyle; // ivar: _cornerStyle
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultIndex; // ivar: _defaultIndex
@property (weak, nonatomic) NSObject<CEKWheelScrubberViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dotPlacement; // ivar: _dotPlacement
@property (nonatomic) ? gradientInsets; // ivar: _gradientInsets
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger itemCount; // ivar: _itemCount
@property (nonatomic) NSInteger layoutDirection;
@property (nonatomic) NSInteger layoutOrder;
@property (nonatomic) NSUInteger markedIndex; // ivar: _markedIndex
@property (nonatomic) NSUInteger selectedIndex; // ivar: _selectedIndex
@property (readonly, nonatomic) CGFloat selectedThumbnailBorderWidth;
@property (nonatomic) CGFloat selectionDotCenterTopSpacing; // ivar: _selectionDotCenterTopSpacing
@property (nonatomic) NSString *selectionText;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (nonatomic) UIEdgeInsets thumbnailEdgeInsets; // ivar: _thumbnailEdgeInsets
@property (readonly, nonatomic) CGSize thumbnailSize;
@property (nonatomic) BOOL useRoundedCorners;


-(BOOL)_isDirectionHorizontal;
-(BOOL)_isOrderReverse;
-(BOOL)_shouldPerformFeedback;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)previewInteractionShouldBegin:(id)arg0 ;
-(CGFloat)_alphaForUnselectedItemsWithPreviewTransitionProgress:(CGFloat)arg0 ;
-(CGFloat)_defaultItemLength;
-(CGFloat)_fractionalItemOffsetForContentOffset:(struct CGPoint )arg0 withPreviewTransitionProgress:(CGFloat)arg1 ;
-(CGFloat)_idealFractionalItemOffsetTargetForFractionalItemOffset:(CGFloat)arg0 allowUnselectedItems:(BOOL)arg1 ;
-(CGFloat)_lengthForItemIndex:(NSInteger)arg0 withPreviewTransitionProgress:(CGFloat)arg1 ;
-(CGFloat)_lengthForUnselectedItemsWithPreviewTransitionProgress:(CGFloat)arg0 ;
-(CGFloat)wheelScrubberCollectionViewLayout:(id)arg0 alphaForItemAtIndexPath:(id)arg1 ;
-(NSInteger)_itemIndexUsingHysteresisForScrollingToContentOffset:(struct CGPoint )arg0 switchToNextItemThreshold:(CGFloat)arg1 withPreviewTransitionProgress:(CGFloat)arg2 ;
-(NSInteger)_nominalItemIndexForFractionalItemOffset:(CGFloat)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_newReducedItemIndicesToShow;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_contentOffsetForFractionalItemOffset:(CGFloat)arg0 withPreviewTransitionProgress:(CGFloat)arg1 ;
-(struct CGSize )_defaultItemSize;
-(struct CGSize )wheelScrubberCollectionViewLayout:(id)arg0 sizeForItemAtIndexPath:(id)arg1 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_performFeedback;
-(void)_prepareFeedback;
-(void)_resetForTouchesEnded;
-(void)_scrollToIndex:(NSInteger)arg0 animated:(BOOL)arg1 shouldOvershoot:(BOOL)arg2 ;
-(void)_setShowTextOverlay:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_switchToIndex:(NSInteger)arg0 shouldOvershoot:(BOOL)arg1 shouldSuppressHaptic:(BOOL)arg2 ;
-(void)_switchToItemAtIndexOffset:(NSInteger)arg0 shouldOvershoot:(BOOL)arg1 ;
-(void)_updateCollectionViewForMarkedIndexAnimated:(BOOL)arg0 ;
-(void)_updateCornerMaskForCell:(id)arg0 withItemIndex:(NSInteger)arg1 ;
-(void)_updateLayoutForCell:(id)arg0 ;
-(void)_updateLayoutForVisibleCells;
-(void)dealloc;
-(void)layoutSubviews;
-(void)previewInteraction:(id)arg0 didUpdatePreviewTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteractionDidCancel:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setOpaqueGradientsWithColor:(id)arg0 ;
-(void)setTransparentGradients;
-(void)switchToNextItem;
-(void)switchToPreviousItem;
-(void)updateItems;


@end


#endif