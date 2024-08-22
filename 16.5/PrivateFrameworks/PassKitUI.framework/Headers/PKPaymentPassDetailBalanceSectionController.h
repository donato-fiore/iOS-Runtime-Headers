// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSDETAILBALANCESECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILBALANCESECTIONCONTROLLER_H

@class PKCurrencyAmount, NSString;
@protocol PKPaymentPassDetailWrapperSectionControllerDelegate;


#import "PKPaymentPassDetailSectionController.h"

@interface PKPaymentPassDetailBalanceSectionController : PKPaymentPassDetailSectionController

@property (retain, nonatomic) PKCurrencyAmount *balance; // ivar: _balance
@property (weak, nonatomic) NSObject<PKPaymentPassDetailWrapperSectionControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *footerText; // ivar: _footerText


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForFooterInSectionIdentifier:(id)arg0 ;


@end


#endif