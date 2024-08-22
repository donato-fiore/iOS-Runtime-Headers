// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYDETAILVIEW_H
#define PRCOMPLICATIONGALLERYDETAILVIEW_H

@class UIView, UIButton, BSUIScrollView, UIStackView, NSString, UIImage, UILabel, MTMaterialView, UIPageControl, NSArray, NSLayoutConstraint;
@protocol BSUIScrollViewDelegate, PRComplicationGalleryDetailViewDelegate;


#import "PRComplicationGalleryApplicationTitleView.h"

@interface PRComplicationGalleryDetailView : UIView <BSUIScrollViewDelegate>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) BSUIScrollView *complicationGalleryScrollView; // ivar: _complicationGalleryScrollView
@property (retain, nonatomic) UIStackView *complicationGalleryStackView; // ivar: _complicationGalleryStackView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) BSUIScrollView *contentScrollView; // ivar: _contentScrollView
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRComplicationGalleryDetailViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *footerContainerView; // ivar: _footerContainerView
@property (retain, nonatomic) UIView *footerStackSpacerView; // ivar: _footerStackSpacerView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) UILabel *instructionsLabel; // ivar: _instructionsLabel
@property (retain, nonatomic) MTMaterialView *magicPocketBackgroundView; // ivar: _magicPocketBackgroundView
@property (retain, nonatomic) UIPageControl *pageControl; // ivar: _pageControl
@property (copy, nonatomic) NSArray *pages; // ivar: _pages
@property (nonatomic) BOOL performedInitialSelection; // ivar: _performedInitialSelection
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) PRComplicationGalleryApplicationTitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) NSLayoutConstraint *widgetGalleryHeightConstraint; // ivar: _widgetGalleryHeightConstraint


-(NSUInteger)_pageIndexAtContentOffset:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addFooterConstraints;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_createConstraints;
-(void)_createPageControlIfNecessary;
-(void)_createViews;
-(void)_scrollToPageIndex:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateContent;
-(void)_updatePageControlForContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)_updatePageViewControllerAppearanceForNormalScroll;
-(void)_updatePageViewControllerAppearanceWithAppearedBlock:(id)arg0 ;
-(void)closeButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pageControlChanged:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif