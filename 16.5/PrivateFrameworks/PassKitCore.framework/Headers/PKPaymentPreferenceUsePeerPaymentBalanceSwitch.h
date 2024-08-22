// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPREFERENCEUSEPEERPAYMENTBALANCESWITCH_H
#define PKPAYMENTPREFERENCEUSEPEERPAYMENTBALANCESWITCH_H



#import "PKPaymentPreference.h"
#import "PKCurrencyAmount.h"
#import "PKPaymentPass.h"

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // ivar: _peerPaymentBalance
@property (retain, nonatomic) PKPaymentPass *peerPaymentPass; // ivar: _peerPaymentPass




@end


#endif