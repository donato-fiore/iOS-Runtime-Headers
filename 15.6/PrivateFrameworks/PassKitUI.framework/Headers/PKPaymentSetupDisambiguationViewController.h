// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPDISAMBIGUATIONVIEWCONTROLLER_H
#define PKPAYMENTSETUPDISAMBIGUATIONVIEWCONTROLLER_H

@class UIBarButtonItem, NSString, NSArray, PKPaymentSetupProduct;
@protocol UITableViewDelegate, PKPaymentSetupDisambiguationViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"
#import "PKDisambiguationFooterView.h"

@interface PKPaymentSetupDisambiguationViewController : PKPaymentSetupTableViewController <UITableViewDelegate>

 {
    UIBarButtonItem *_nextBarButtonItem;
    PKTableHeaderView *_headerView;
    PKDisambiguationFooterView *_footerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupDisambiguationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *enteredCardNumber; // ivar: _enteredCardNumber
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *products; // ivar: _products
@property (readonly, retain, nonatomic) PKPaymentSetupProduct *selectedProduct; // ivar: _selectedProduct
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_productAtIndexPath:(id)arg0 ;
-(id)initWithProducts:(id)arg0 context:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_nextTapped:(id)arg0 ;
-(void)_notifyDelegateDidSelectProduct:(id)arg0 ;
-(void)_popToCameraCapture:(id)arg0 ;
-(void)_setupLater:(id)arg0 ;
-(void)_updateSelectedProduct:(id)arg0 ;
-(void)clearSelectedProduct;
-(void)setupFooterViewForTableView:(id)arg0 ;
-(void)setupHeaderViewForTableView:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif