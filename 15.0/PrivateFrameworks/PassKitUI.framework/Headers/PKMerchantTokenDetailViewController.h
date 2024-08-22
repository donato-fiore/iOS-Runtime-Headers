// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTTOKENDETAILVIEWCONTROLLER_H
#define PKMERCHANTTOKENDETAILVIEWCONTROLLER_H

@class PKMerchantToken;


#import "PKSectionTableViewController.h"

@interface PKMerchantTokenDetailViewController : PKSectionTableViewController {
    PKMerchantToken *_merchantToken;
}




-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_headerCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_managePaymentMethodCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithMerchantToken:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif