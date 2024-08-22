// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTOTHERCARDNUMBERSVIEWCONTROLLER_H
#define PKACCOUNTOTHERCARDNUMBERSVIEWCONTROLLER_H

@class PKPhysicalCard, PKPaymentPass;


#import "PKSettingsTableViewController.h"

@interface PKAccountOtherCardNumbersViewController : PKSettingsTableViewController {
    PKPhysicalCard *_physicalCard;
    PKPaymentPass *_paymentPass;
    NSUInteger _accountFeatureIdentifier;
    NSInteger _context;
}




-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_applePayCardNumberHeaderWithTableView:(id)arg0 ;
-(id)_titaniumCardNumberHeaderWithTableView:(id)arg0 ;
-(id)initWithPhysicalCard:(id)arg0 paymentPass:(id)arg1 accountFeatureIdentifier:(NSUInteger)arg2 context:(NSInteger)arg3 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_appendApplePayCardNumberSectionToConfiguration:(id)arg0 ;
-(void)_appendPhysicalCardSectionToConfiguration:(id)arg0 ;
-(void)_updateCardNumbersConfigurationAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif