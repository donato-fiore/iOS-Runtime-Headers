// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENULISTVIEW_H
#define _UICONTEXTMENULISTVIEW_H

@class NSString, NSIndexPath;
@protocol UICollectionViewDelegate;


#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UICollectionView.h"
#import "UICollectionViewDiffableDataSource.h"
#import "UIMenu.h"
#import "_UICutoutShadowView.h"

@interface _UIContextMenuListView : UIView <UICollectionViewDelegate>



@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus
@property (readonly, nonatomic) NSString *backgroundMaterialGroupName; // ivar: _backgroundMaterialGroupName
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *bottomClippingView; // ivar: _bottomClippingView
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) CGFloat collectionViewAlpha; // ivar: _collectionViewAlpha
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource; // ivar: _collectionViewDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIMenu *displayedMenu; // ivar: _displayedMenu
@property (nonatomic) CGFloat emphasisAlphaMultiplier; // ivar: _emphasisAlphaMultiplier
@property (nonatomic) BOOL emphasized; // ivar: _emphasized
@property (nonatomic) BOOL hasValidContentSize; // ivar: _hasValidContentSize
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSIndexPath *highlightedIndexPath; // ivar: _highlightedIndexPath
@property (nonatomic) CGSize nativeContentSize; // ivar: _nativeContentSize
@property (retain, nonatomic) UICollectionViewDiffableDataSource *outgoingCollectionViewDataSource; // ivar: _outgoingCollectionViewDataSource
@property (nonatomic) NSUInteger position; // ivar: _position
@property (nonatomic) BOOL reversesActionOrder; // ivar: _reversesActionOrder
@property (nonatomic) NSUInteger roundedEdges; // ivar: _roundedEdges
@property (readonly, nonatomic) CGVector scrubGestureAllowableMovement;
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (retain, nonatomic) _UICutoutShadowView *shadowView; // ivar: _shadowView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *topClippingView; // ivar: _topClippingView
@property (nonatomic) CGSize visibleContentSize; // ivar: _visibleContentSize


-(BOOL)_shouldScrollToSelectedAction;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(CGFloat)_clampedCornerRadius;
-(id)_dataSourceForCollectionView:(id)arg0 ;
-(id)_headerIndexPath;
-(id)_viewAtIndexPath:(id)arg0 ;
-(id)cellForElement:(id)arg0 ;
-(id)elementAtIndexPath:(id)arg0 ;
-(id)indexPathForElement:(id)arg0 ;
-(id)indexPathForItemAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )preferredContentSizeWithWidth:(CGFloat)arg0 ;
-(void)_configureCell:(id)arg0 forElement:(id)arg1 section:(id)arg2 ;
-(void)_highlightItemAtIndexPath:(id)arg0 ;
-(void)_sizeClippingAndCollectionViews;
-(void)_updateCollectionViewAlpha;
-(void)_updateCornerRadius;
-(void)_updateShadowAlpha;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)didCompleteInPlaceMenuTransition;
-(void)highlightItemAtIndexPath:(id)arg0 ;
-(void)highlightItemForOutgoingMenu:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrollToFirstSignificantAction;
-(void)setSubmenuTitleViewExpanded:(BOOL)arg0 withMaterialGroupName:(id)arg1 numberOfTitleLines:(NSUInteger)arg2 highlighted:(BOOL)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unHighlightItemAtIndexPath:(id)arg0 ;


@end


#endif