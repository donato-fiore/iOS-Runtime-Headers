// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPOPTIONSVIEWCONTROLLER_H
#define PKPAYMENTSETUPOPTIONSVIEWCONTROLLER_H

@class UIBarButtonItem, UIActivityIndicatorView, NSString, UIColor, OBPrivacyLinkController, PKPaymentProvisioningController;
@protocol PKPaymentSetupHeroTitleViewDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKDynamicCollectionViewController.h"
#import "PKPaymentSetupHeroTitleView.h"
#import "PKPaymentSetupNoResultsView.h"
#import "PKPaymentSetupDockView.h"
#import "PKPaymentSetupPrivacyLinkSectionController.h"
#import "_PKUIKVisibilityBackdropView.h"

@interface PKPaymentSetupOptionsViewController : PKDynamicCollectionViewController <PKPaymentSetupHeroTitleViewDelegate, _PKUIKVisibilityBackdropViewDelegate>

 {
    PKPaymentSetupHeroTitleView *_headerView;
    CGFloat _headerHeight;
    PKPaymentSetupNoResultsView *_noResultsView;
    BOOL _viewDidAppear;
    BOOL _isSearching;
    CGRect _keyboardFrame;
    BOOL _wasBackHidden;
    UIBarButtonItem *_spinningNavBarItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    PKPaymentSetupDockView *_dockView;
    PKPaymentSetupPrivacyLinkSectionController *_privacyLinkSectionController;
    _PKUIKVisibilityBackdropView *_backdropView;
    CGFloat _backdropWeight;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *headerBackgroundColor; // ivar: _headerBackgroundColor
@property (nonatomic) NSInteger paymentSetupMode; // ivar: _paymentSetupMode
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (nonatomic) BOOL showHeaderSpinner; // ivar: _showHeaderSpinner
@property (nonatomic) BOOL showNavigationBarSpinner; // ivar: _showNavigationBarSpinner
@property (nonatomic) BOOL showNoResultsView; // ivar: _showNoResultsView
@property (nonatomic) BOOL showSearchBar; // ivar: _showSearchBar
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(CGFloat)footerViewContentHeight;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)init;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)_addDockViewToCollectionViewIfNeeded;
-(void)_keyboardSizeDidChange:(id)arg0 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchBarCancelButtonClicked;
-(void)searchBarTextDidBeginEditing;
-(void)searchBarTextDidEndEditing;
-(void)searchTextDidChangeTo:(id)arg0 ;
-(void)setNoResultsActionButtonTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)setNoResultsSubtitle:(id)arg0 ;
-(void)setSearchBarDefaultText:(id)arg0 ;
-(void)setSections:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif