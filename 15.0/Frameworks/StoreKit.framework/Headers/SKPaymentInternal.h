// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPAYMENTINTERNAL_H
#define SKPAYMENTINTERNAL_H

@class NSString, NSData, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKPaymentDiscount.h"

@interface SKPaymentInternal : NSObject <NSCopying>

 {
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    NSInteger _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
    BOOL _simulatesAskToBuyInSandbox;
    BOOL _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif