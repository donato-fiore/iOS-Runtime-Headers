// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKPAYMENT_H
#define SKPAYMENT_H

@class NSString, NSData, NSDictionary;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SKPaymentDiscount.h"

@interface SKPayment : NSObject <NSCopying, NSMutableCopying>

 {
    id *_internal;
}


@property (readonly, copy, nonatomic) NSString *applicationUsername;
@property (readonly, nonatomic) BOOL isStoreOriginated;
@property (readonly, copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property (readonly, copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property (readonly, copy, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) NSInteger quantity;
@property (readonly, copy, nonatomic) NSData *requestData;
@property (readonly, copy, nonatomic) NSDictionary *requestParameters;
@property (readonly, nonatomic) BOOL simulatesAskToBuyInSandbox;


+(id)paymentFromPurchaseIntentWithProduct:(id)arg0 ;
+(id)paymentWithProduct:(id)arg0 ;
+(id)paymentWithProductIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif