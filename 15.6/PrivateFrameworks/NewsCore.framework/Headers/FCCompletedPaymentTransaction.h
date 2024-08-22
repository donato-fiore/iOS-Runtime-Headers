// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCOMPLETEDPAYMENTTRANSACTION_H
#define FCCOMPLETEDPAYMENTTRANSACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCPaymentTransactionAuthorizationResponse.h"

@interface FCCompletedPaymentTransaction : NSObject

@property (readonly, copy, nonatomic) FCPaymentTransactionAuthorizationResponse *appleIDAccountDetails; // ivar: _appleIDAccountDetails
@property (readonly, copy, nonatomic) NSString *productID; // ivar: _productID
@property (readonly, copy, nonatomic) NSString *receipt; // ivar: _receipt


-(id)initWithProductID:(id)arg0 receipt:(id)arg1 appleIDAccountDetails:(id)arg2 ;


@end


#endif