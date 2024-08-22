// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPERFORMACTIONPURCHASENEWVIEW_H
#define PKPERFORMACTIONPURCHASENEWVIEW_H

@class UIView, PKPass, PKPaymentPassAction, PKPurchaseNewActionItem, UITableView, UITextField, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PKPerformActionView, PKPerformActionViewDelegate;



@interface PKPerformActionPurchaseNewView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView>

 {
    PKPass *_pass;
    PKPaymentPassAction *_action;
    PKPurchaseNewActionItem *_purchaseNewItem;
    NSInteger _textAlignment;
    UITableView *_tableView;
}


@property (readonly, nonatomic) UITextField *amountTextField;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPerformActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_optionsSectionFooterText;
-(id)_optionsSectionHeaderText;
-(id)init;
-(id)initWithPass:(id)arg0 action:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)pass;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)transactionAmount;
-(id)transactionCurrency;
-(void)_addSubviews;
-(void)fetchServiceProviderDataWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)saveLastInputValues;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif