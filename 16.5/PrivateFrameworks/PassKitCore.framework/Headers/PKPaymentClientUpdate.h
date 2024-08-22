// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTCLIENTUPDATE_H
#define PKPAYMENTCLIENTUPDATE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAutomaticReloadPaymentRequest.h"
#import "PKDeferredPaymentRequest.h"
#import "PKRecurringPaymentRequest.h"
#import "PKShippingMethods.h"

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // ivar: _automaticReloadPaymentRequest
@property (readonly, nonatomic) PKDeferredPaymentRequest *deferredPaymentRequest; // ivar: _deferredPaymentRequest
@property (readonly, copy, nonatomic) NSArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (readonly, copy, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (readonly, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest; // ivar: _recurringPaymentRequest
@property (readonly, copy, nonatomic) NSString *selectedAID; // ivar: _selectedAID
@property (readonly, nonatomic) NSUInteger selectedPaymentMethodType; // ivar: _selectedPaymentMethodType
@property (readonly, copy, nonatomic) PKShippingMethods *shippingMethods; // ivar: _shippingMethods
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)paymentUpdateResponseWithProtobuf:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentSummaryItems:(id)arg0 shippingMethods:(id)arg1 multiTokenContexts:(id)arg2 recurringPaymentRequest:(id)arg3 automaticReloadPaymentRequest:(id)arg4 deferredPaymentRequest:(id)arg5 status:(NSInteger)arg6 selectedAID:(id)arg7 selectedPaymentMethodType:(NSUInteger)arg8 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif