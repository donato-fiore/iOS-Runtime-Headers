// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPHEROTITLEVIEW_H
#define PKPAYMENTSETUPHEROTITLEVIEW_H

@class UIView, UILabel, UISearchBar, UIActivityIndicatorView, NSString;
@protocol UISearchBarDelegate, PKPaymentSetupHeroTitleViewDelegate;



@interface PKPaymentSetupHeroTitleView : UIView <UISearchBarDelegate>

 {
    UILabel *_titleLabel;
    UILabel *_subtitleLbel;
    UISearchBar *_searchBar;
    UIActivityIndicatorView *_activityIndicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupHeroTitleViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showSearchBar; // ivar: _showSearchBar
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly) Class superclass;


-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct ? )heightBoundsForWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChange;
-(void)_setLabelFonts;
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