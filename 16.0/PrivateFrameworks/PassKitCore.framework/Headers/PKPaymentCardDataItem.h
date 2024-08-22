// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTCARDDATAITEM_H
#define PKPAYMENTCARDDATAITEM_H

@class CNContact;


#import "PKPaymentDataItem.h"
#import "PKPaymentPass.h"
#import "PKPaymentApplication.h"
#import "PKCurrencyAmount.h"

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // ivar: _peerPaymentBalance
@property (readonly, nonatomic) BOOL requiresBillingAddress;
@property (readonly, nonatomic) BOOL shouldShowCardArt;
@property (nonatomic) BOOL showPeerPaymentBalance; // ivar: _showPeerPaymentBalance


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;
-(NSInteger)status;
-(id)errors;
-(id)paymentContactFormatErrors;


@end


#endif