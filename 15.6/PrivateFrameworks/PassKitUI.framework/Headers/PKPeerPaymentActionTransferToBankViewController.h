// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTACTIONTRANSFERTOBANKVIEWCONTROLLER_H
#define PKPEERPAYMENTACTIONTRANSFERTOBANKVIEWCONTROLLER_H

@class NSArray, NSNumberFormatter, NSDecimalNumberHandler, PKPaymentPass, UITableView, UIImageView, UILabel, NSDecimalNumber, NSString;
@protocol _PKUIKVisibilityBackdropViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKEnterCurrencyAmountPassViewDelegate;


#import "PKPeerPaymentActionViewController.h"
#import "PKAnimatedNavigationBarTitleView.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKEnterCurrencyAmountPassTableHeaderFooterView.h"

@interface PKPeerPaymentActionTransferToBankViewController : PKPeerPaymentActionViewController <_PKUIKVisibilityBackdropViewDelegate, PKPeerPaymentActionControllerDelegate, UITableViewDelegate, UITableViewDataSource, PKEnterCurrencyAmountPassViewDelegate>

 {
    NSArray *_supportedTransferActions;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_percentageFormatter;
    NSDecimalNumberHandler *_roundingHandler;
    PKPaymentPass *_defaultInstantFundsOutPaymentPass;
    BOOL _isSmallPhone;
    BOOL _usesAccessibilityLayout;
    PKAnimatedNavigationBarTitleView *_passNavbarTitleView;
    UITableView *_tableView;
    UIImageView *_navbarPassView;
    _PKUIKVisibilityBackdropView *_backdropView;
    UILabel *_footerTextLabel;
    PKEnterCurrencyAmountPassTableHeaderFooterView *_tableHeaderView;
    NSDecimalNumber *_feePercentage;
    NSDecimalNumber *_minimumFee;
    NSDecimalNumber *_maximumFee;
    CGFloat _backdropWeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isCurrentAmountValid;
-(BOOL)_passViewInNavBar;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)_amountPassView;
-(id)_calculateFee;
-(id)_defaultInstantFundsOutPaymentPass;
-(id)_detailTextForAction:(NSUInteger)arg0 ;
-(id)_indexPathForAction:(NSUInteger)arg0 ;
-(id)_spinnerBarButton;
-(id)_transferBarButton;
-(id)initWithPaymentPass:(id)arg0 webService:(id)arg1 passLibraryDataProvider:(id)arg2 context:(NSInteger)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_calculateBlur;
-(void)_currentAmountDidChangeTo:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_dismissViewController:(id)arg0 ;
-(void)_showNavigationBarSpinner:(BOOL)arg0 ;
-(void)_transferBarButtonPressed:(id)arg0 ;
-(void)_updateBarButtonEnabledState;
-(void)_updateCurrentAmount:(id)arg0 shouldGenerateNewSuggestions:(BOOL)arg1 ;
-(void)_updateFooterText;
-(void)_updateTableHeaderHeight;
-(void)dealloc;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg0 ;
-(void)loadView;
-(void)peerPaymentActionController:(id)arg0 hasChangedState:(NSUInteger)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setCardBalance:(id)arg0 ;
-(void)setMaxBalance:(id)arg0 ;
-(void)setMaxLoadAmount:(id)arg0 ;
-(void)setMinBalance:(id)arg0 ;
-(void)setMinLoadAmount:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateAccountValues;
-(void)viewWillLayoutSubviews;


@end


#endif