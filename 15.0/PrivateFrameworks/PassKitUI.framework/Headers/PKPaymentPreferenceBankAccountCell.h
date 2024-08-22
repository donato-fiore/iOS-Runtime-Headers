// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPREFERENCEBANKACCOUNTCELL_H
#define PKPAYMENTPREFERENCEBANKACCOUNTCELL_H

@class UIImage, PKBankAccountInformation;


#import "PKPaymentPreferenceCardCell.h"

@interface PKPaymentPreferenceBankAccountCell : PKPaymentPreferenceCardCell {
    UIImage *_bankIcon;
}


@property (retain, nonatomic) PKBankAccountInformation *bankAccount; // ivar: _bankAccount


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_updateCellContent;
-(void)_updateCensoredPANLabel;


@end


#endif