// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKMUTABLEPAYMENT_H
#define SKMUTABLEPAYMENT_H

@class NSString, NSData, NSDictionary;


#import "SKPayment.h"
#import "SKPaymentAppleIDAuthorizationRequest.h"
#import "SKPaymentDiscount.h"

@interface SKMutablePayment : SKPayment

@property (copy, nonatomic) SKPaymentAppleIDAuthorizationRequest *appleIDAuthorizationClientInfo;
@property (copy, nonatomic) NSString *applicationUsername;
@property (nonatomic) BOOL isStoreOriginated;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *partnerTransactionIdentifier;
@property (copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) NSInteger quantity;
@property (copy, nonatomic) NSData *requestData;
@property (copy, nonatomic) NSDictionary *requestParameters;
@property (nonatomic) BOOL simulatesAskToBuyInSandbox;




@end


#endif