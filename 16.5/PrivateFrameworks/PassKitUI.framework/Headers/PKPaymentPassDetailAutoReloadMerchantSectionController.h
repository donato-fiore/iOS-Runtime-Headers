// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPASSDETAILAUTORELOADMERCHANTSECTIONCONTROLLER_H
#define PKPAYMENTPASSDETAILAUTORELOADMERCHANTSECTIONCONTROLLER_H

@class PKPaymentPass;
@protocol PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate;


#import "PKPaymentPassDetailSectionController.h"

@interface PKPaymentPassDetailAutoReloadMerchantSectionController : PKPaymentPassDetailSectionController {
    PKPaymentPass *_pass;
    BOOL _isAutoTopEnabled;
}


@property (weak, nonatomic) NSObject<PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate> *delegate; // ivar: _delegate


+(BOOL)validForPaymentPass:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSectionIdentifier:(id)arg1 ;
-(id)initWithPass:(id)arg0 delegate:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)titleForHeaderInSectionIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 sectionIdentifier:(id)arg2 ;


@end


#endif