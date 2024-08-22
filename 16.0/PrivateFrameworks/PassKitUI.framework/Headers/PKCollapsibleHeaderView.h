// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCOLLAPSIBLEHEADERVIEW_H
#define PKCOLLAPSIBLEHEADERVIEW_H

@class UIView, UILabel, UISearchBar, UIActivityIndicatorView, LAUICheckmarkLayer, NSString, UIImage;
@protocol UISearchBarDelegate, PKCollapsibleHeaderViewDelegate;



@interface PKCollapsibleHeaderView : UIView <UISearchBarDelegate>

 {
    UILabel *_titleLabel;
    UILabel *_subtitleLbel;
    UISearchBar *_searchBar;
    UIActivityIndicatorView *_activityIndicator;
    LAUICheckmarkLayer *_checkmarkLayer;
    CGSize _imageSize;
    CGRect _cachedTimeLabelFrame;
    CGRect _titleLabelLastLineBounds;
    CGFloat _titleLabelLastLineDescent;
}


@property (nonatomic) CGFloat additionalBottomPadding; // ivar: _additionalBottomPadding
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKCollapsibleHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (readonly, nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (nonatomic) BOOL removeAdditionalTopPadding; // ivar: _removeAdditionalTopPadding
@property (nonatomic) BOOL showCheckmark; // ivar: _showCheckmark
@property (nonatomic) BOOL showSearchBar; // ivar: _showSearchBar
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly) Class superclass;
@property (nonatomic) BOOL titleShouldReserveSpaceForAccessories; // ivar: _titleShouldReserveSpaceForAccessories
@property (retain, nonatomic) UIView *topArtView; // ivar: _topArtView


-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(CGFloat)_maxTitleWidthInsideFrameWidth:(CGFloat)arg0 reserveSpace:(BOOL)arg1 ;
-(CGFloat)_titleTopPadding;
-(CGFloat)_topArtTopPadding;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct ? )heightBoundsForWidth:(CGFloat)arg0 ;
-(struct CGRect )_accessoryFrameForTitleFrame:(struct CGRect )arg0 accessorySize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_setLabelFonts;
-(void)_updateCheckmarkColor;
-(void)layoutSubviews;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)setSearchBarDefaultText:(id)arg0 ;
-(void)setTitle:(id)arg0 subtitle:(id)arg1 ;


@end


#endif