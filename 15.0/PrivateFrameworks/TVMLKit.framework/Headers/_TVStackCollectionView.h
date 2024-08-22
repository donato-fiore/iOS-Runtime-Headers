// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSTACKCOLLECTIONVIEW_H
#define _TVSTACKCOLLECTIONVIEW_H

@class UICollectionView, NSString, NSIndexPath;
@protocol UIGestureRecognizerDelegate;



@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate>

 {
    CGFloat _bottomPadding;
    UIEdgeInsets _gradientBoundsInsets;
    ? _flags;
}


@property (nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) UIEdgeInsets _gradientBoundsInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // ivar: _indexPathForLastFocusedItem
@property (readonly) Class superclass;


-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_visibleBounds;
-(void)_getGradientMaskBounds:(struct CGRect *)arg0 startInsets:(struct UIEdgeInsets *)arg1 endInsets:(struct UIEdgeInsets *)arg2 intensities:(struct UIEdgeInsets *)arg3 ;
-(void)_performWithoutLayoutBelow:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)layoutBelowIfNeeded;
-(void)reloadData;
-(void)setBottomPaddingForVisibleBounds:(CGFloat)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif