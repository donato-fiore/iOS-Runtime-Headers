// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPOPTIONSVIEWCONTROLLER_H
#define PKPAYMENTSETUPOPTIONSVIEWCONTROLLER_H

@class UIBarButtonItem, UIActivityIndicatorView, UIColor, NSString, OBPrivacyLinkController, PKPaymentProvisioningController, UIFont;
@protocol PKCollapsibleHeaderViewDelegate, _PKUIKVisibilityBackdropViewDelegate, PKPaymentSetupViewControllerDelegate;


#import "PKDynamicCollectionViewController.h"
#import "PKPaymentSetupNoResultsView.h"
#import "PKPaymentSetupDockView.h"
#import "PKPaymentSetupPrivacyLinkSectionController.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKCollapsibleHeaderView.h"

@interface PKPaymentSetupOptionsViewController : PKDynamicCollectionViewController <PKCollapsibleHeaderViewDelegate, _PKUIKVisibilityBackdropViewDelegate>

 {
    CGFloat _headerHeight;
    PKPaymentSetupNoResultsView *_noResultsView;
    BOOL _viewDidAppear;
    CGRect _keyboardFrame;
    BOOL _wasBackHidden;
    UIBarButtonItem *_spinningNavBarItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showNoResultsView;
    PKPaymentSetupDockView *_dockView;
    PKPaymentSetupPrivacyLinkSectionController *_privacyLinkSectionController;
    _PKUIKVisibilityBackdropView *_backdropView;
    CGFloat _backdropWeight;
}


@property (nonatomic) BOOL allowsManualEntry; // ivar: _allowsManualEntry
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *headerBackgroundColor; // ivar: _headerBackgroundColor
@property (nonatomic) NSUInteger headerMode; // ivar: _headerMode
@property (readonly, nonatomic) PKCollapsibleHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL isShowingKeyboard; // ivar: _isShowingKeyboard
@property (nonatomic) NSInteger paymentSetupMode; // ivar: _paymentSetupMode
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink; // ivar: _privacyLink
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (nonatomic) BOOL shouldCollapseHeaderOnKeyboardShow; // ivar: _shouldCollapseHeaderOnKeyboardShow
@property (nonatomic) BOOL showHeaderSpinner; // ivar: _showHeaderSpinner
@property (nonatomic) BOOL showNavigationBarSpinner; // ivar: _showNavigationBarSpinner
@property (nonatomic) BOOL showSearchBar; // ivar: _showSearchBar
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (readonly) Class superclass;
@property (copy, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(CGFloat)footerViewContentHeight;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)_init;
-(id)init;
-(id)initWithProvisioningController:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 ;
-(void)_addDockViewToCollectionViewIfNeeded;
-(void)_keyboardSizeDidChange:(id)arg0 ;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_updateNavigationItem;
-(void)removeSetupDockView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)searchBarCancelButtonClicked;
-(void)searchBarTextDidBeginEditing;
-(void)searchBarTextDidEndEditing;
-(void)searchTextDidChangeTo:(id)arg0 ;
-(void)setNoResultsActionButtonTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)setNoResultsIcon:(id)arg0 ;
-(void)setNoResultsSubtitle:(id)arg0 ;
-(void)setNoResultsTitle:(id)arg0 ;
-(void)setSearchBarDefaultText:(id)arg0 ;
-(void)setSections:(id)arg0 animated:(BOOL)arg1 ;
-(void)setShowNoResultsView:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif