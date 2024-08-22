// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTCARDDATAITEM_H
#define PKPEERPAYMENTCARDDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKPaymentPass.h"
#import "PKPeerPaymentQuote.h"

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass *_pass;
}


@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;


+(NSInteger)dataType;
-(BOOL)_validateInsufficientBalanceWithError:(*id)arg0 errorStatus:(*NSInteger)arg1 ;
-(BOOL)_validateTransferLimitsWithError:(*id)arg0 errorStatus:(*NSInteger)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)isValidWithError:(*id)arg0 errorStatus:(*NSInteger)arg1 ;
-(BOOL)shouldShowDisclosure;
-(NSInteger)context;


@end


#endif