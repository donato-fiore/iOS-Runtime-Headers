// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPERFORMACTIONSELECTITEMVIEW_H
#define PKPERFORMACTIONSELECTITEMVIEW_H

@class UIView, PKPass, PKPaymentPassAction, NSDateFormatter, PKSelectedItemActionItem, UITableView, UITextField, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PKPerformActionView, PKPerformActionViewDelegate;


#import "PKPerformActionSelectItemExpiresHeader.h"

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView>

 {
    PKPass *_pass;
    PKPaymentPassAction *_action;
    NSDateFormatter *_dateFormatter;
    PKSelectedItemActionItem *_selectedItem;
    UITableView *_tableView;
    PKPerformActionSelectItemExpiresHeader *_expiresHeader;
}


@property (readonly, nonatomic) UITextField *amountTextField;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPerformActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_showsExpirationSection;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_optionsSectionFooterText;
-(id)_optionsSectionHeaderText;
-(id)init;
-(id)initWithPass:(id)arg0 action:(id)arg1 paymentDataProvider:(id)arg2 ;
-(id)pass;
-(id)serviceProviderData;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)transactionAmount;
-(id)transactionCurrency;
-(void)_addSubviews;
-(void)layoutSubviews;
-(void)saveLastInputValues;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif