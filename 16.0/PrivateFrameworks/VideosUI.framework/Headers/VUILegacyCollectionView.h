// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILEGACYCOLLECTIONVIEW_H
#define VUILEGACYCOLLECTIONVIEW_H

@class UICollectionView, UILongPressGestureRecognizer, NSString, NSIndexPath;
@protocol UIGestureRecognizerDelegate, VUILegacyCollectionViewDelegate;



@interface VUILegacyCollectionView : UICollectionView <UIGestureRecognizerDelegate>

 {
    UILongPressGestureRecognizer *_longPressRecognizer;
    CGFloat _bottomPadding;
    ? _delegateFlags;
    UIEdgeInsets _gradientBoundsInsets;
    ? _flags;
}


@property (nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) UIEdgeInsets _gradientBoundsInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUILegacyCollectionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // ivar: _indexPathForLastFocusedItem
@property (readonly) Class superclass;


-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(struct CGRect )_visibleBounds;
-(void)_getGradientMaskBounds:(struct CGRect *)arg0 startInsets:(struct UIEdgeInsets *)arg1 endInsets:(struct UIEdgeInsets *)arg2 intensities:(struct UIEdgeInsets *)arg3 ;
-(void)_longPressAction:(id)arg0 ;
-(void)_notifyDidScroll;
-(void)_performBlockWithLongPressedCellIndexPath:(id)arg0 ;
-(void)_performWithoutLayoutBelow:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutBelowIfNeeded;
-(void)reloadData;
-(void)setBottomPaddingForVisibleBounds:(CGFloat)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setScrollEnabled:(BOOL)arg0 ;


@end


#endif