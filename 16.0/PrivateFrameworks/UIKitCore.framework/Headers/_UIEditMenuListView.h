// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENULISTVIEW_H
#define _UIEDITMENULISTVIEW_H

@class NSString, NSIndexPath, CAShapeLayer;
@protocol UICollectionViewDelegate, UIGestureRecognizerDelegate, _UIEditMenuListViewDelegate;


#import "UIView.h"
#import "_UIEditMenuCollectionView.h"
#import "UICollectionViewDiffableDataSource.h"
#import "UIMenu.h"
#import "_UIEditMenuPageButton.h"
#import "_UIContextMenuSelectionGestureRecognizer.h"

@interface _UIEditMenuListView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate>

 {
    NSString *_backgroundMaterialGroupName;
    CGFloat _largestPageWidth;
    CGFloat _verticalContentHeight;
    CGRect _previousBounds;
    ? _needsUpdate;
}


@property (nonatomic) NSInteger arrowDirection; // ivar: _arrowDirection
@property (nonatomic) NSInteger axis; // ivar: _axis
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) _UIEditMenuCollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIEditMenuListViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIMenu *displayedMenu; // ivar: _displayedMenu
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *highlightedIndexPath; // ivar: _highlightedIndexPath
@property (retain, nonatomic) NSIndexPath *hoveredIndexPath; // ivar: _hoveredIndexPath
@property (readonly, nonatomic) _UIEditMenuPageButton *leftButton; // ivar: _leftButton
@property (readonly, nonatomic) CAShapeLayer *maskLayer; // ivar: _maskLayer
@property (readonly, nonatomic) UIView *menuContainerView; // ivar: _menuContainerView
@property (readonly, nonatomic) _UIEditMenuPageButton *rightButton; // ivar: _rightButton
@property (retain, nonatomic) NSIndexPath *scrubbedIndexPath; // ivar: _scrubbedIndexPath
@property (readonly, nonatomic) BOOL scrubbingEnabled;
@property (readonly, nonatomic) _UIContextMenuSelectionGestureRecognizer *selectionGestureRecognizer; // ivar: _selectionGestureRecognizer
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *titleContainerView; // ivar: _titleContainerView
@property (readonly, nonatomic) UIView *titleSeparatorView; // ivar: _titleSeparatorView
@property (readonly, nonatomic) UIView *titleView; // ivar: _titleView


+(CGFloat)minimumRequiredWidthForArrowInRoundedListViewForAxis:(NSInteger)arg0 ;
-(BOOL)_canSelectItemAtIndexPath:(id)arg0 ;
-(BOOL)_hasDisplayedMenu;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_collectionViewWidthForPageProgress:(CGFloat)arg0 ;
-(id)_indexPathForGestureRecognizer:(id)arg0 ;
-(id)backgroundMaterialGroupName;
-(id)initWithMenu:(id)arg0 titleView:(id)arg1 ;
-(struct CGSize )_intrinsicHorizontalContentSizeForTraitCollection:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(struct CGSize )_intrinsicVerticalContentSizeForContainer:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(struct CGSize )_titleViewSizeForFittingWidth:(CGFloat)arg0 ;
-(struct CGSize )_verticalMenuContentSizeFittingContainerSize:(struct CGSize )arg0 traits:(id)arg1 ;
-(struct CGSize )arrowSizeForDirection:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSizeForContainer:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(void)_createDataSource;
-(void)_createViewHierarchy;
-(void)_didTapLeftDirectionalButton:(id)arg0 ;
-(void)_didTapRightDirectionalButton:(id)arg0 ;
-(void)_handleHoverGesture:(id)arg0 ;
-(void)_handleSelectionGesture:(id)arg0 ;
-(void)_highlightItemAtIndexPath:(id)arg0 ;
-(void)_reloadMenuAnimated:(BOOL)arg0 ;
-(void)_selectItemAtIndexPath:(id)arg0 ;
-(void)_setNeedsPaginationUpdate;
-(void)_unhighlightCurrentlyHighlightedItem;
-(void)_updateArrowEdgeInsets;
-(void)_updateHighlightState;
-(void)_updateMaskingLayerWithFrame:(struct CGRect )arg0 ;
-(void)_updatePaginationForSnapshot:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)layoutSubviews;
-(void)reloadWithMenu:(id)arg0 titleView:(id)arg1 animated:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif