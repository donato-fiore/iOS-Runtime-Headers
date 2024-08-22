// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPAYMENTOPTIONSSERIALIZATION_H
#define NPKPAYMENTOPTIONSSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface NPKPaymentOptionsSerialization : NSObject



+(id)_billingAddressDictionaryFromEncodedData:(id)arg0 ;
+(id)_contactFromEncodedData:(id)arg0 ;
+(id)setTransactionDefaultsRequest;
+(void)_deleteAllDefaultBillingAddresses:(id)arg0 ;
+(void)handleSetTransactionDefaultsRequest:(id)arg0 ;


@end


#endif