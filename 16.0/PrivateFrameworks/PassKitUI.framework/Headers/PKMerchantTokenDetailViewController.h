// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMERCHANTTOKENDETAILVIEWCONTROLLER_H
#define PKMERCHANTTOKENDETAILVIEWCONTROLLER_H

@class PKMerchantToken, PKPaymentWebService;
@protocol PKMerchantTokenDetailViewControllerDelegate;


#import "PKSectionTableViewController.h"
#import "PKMerchantTokenLoadingView.h"

@interface PKMerchantTokenDetailViewController : PKSectionTableViewController {
    PKMerchantToken *_merchantToken;
    BOOL _showMerchantIcon;
    PKPaymentWebService *_webService;
    PKMerchantTokenLoadingView *_loadingView;
}


@property (weak, nonatomic) NSObject<PKMerchantTokenDetailViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_deletePaymentMethodCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_headerCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_managePaymentMethodCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithMerchantToken:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_deleteMerchantToken;
-(void)_didSelectDeletePaymentMethod;
-(void)_disableNavigation;
-(void)_enableNavigation;
-(void)_hideLoadingView;
-(void)_setUpLoadingView;
-(void)_setUpTableView;
-(void)_setUpViews;
-(void)_showLoadingView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillLayoutSubviews;


@end


#endif