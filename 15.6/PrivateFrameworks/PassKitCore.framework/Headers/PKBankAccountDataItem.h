// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBANKACCOUNTDATAITEM_H
#define PKBANKACCOUNTDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKBankAccountInformation.h"
#import "PKCurrencyAmount.h"

@interface PKBankAccountDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKBankAccountInformation *PKBankAccountInformation; // ivar: _PKBankAccountInformation
@property (readonly, nonatomic) PKBankAccountInformation *bankAccountInformation;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // ivar: _peerPaymentBalance
@property (nonatomic) BOOL showPeerPaymentBalance; // ivar: _showPeerPaymentBalance


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(NSInteger)context;
-(id)initWithModel:(id)arg0 ;


@end


#endif