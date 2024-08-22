// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTREQUESTUPDATE_H
#define PKPAYMENTREQUESTUPDATE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAutomaticReloadPaymentRequest.h"
#import "PKShippingMethods.h"
#import "PKDeferredPaymentRequest.h"
#import "PKRecurringPaymentRequest.h"

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // ivar: _automaticReloadPaymentRequest
@property (copy, nonatomic) PKShippingMethods *availableShippingMethods; // ivar: _availableShippingMethods
@property (copy, nonatomic) NSArray *contentItems; // ivar: _contentItems
@property (retain, nonatomic) PKDeferredPaymentRequest *deferredPaymentRequest; // ivar: _deferredPaymentRequest
@property (copy, nonatomic) NSArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (copy, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (retain, nonatomic) PKRecurringPaymentRequest *recurringPaymentRequest; // ivar: _recurringPaymentRequest
@property (copy, nonatomic) NSArray *shippingMethods;
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentSummaryItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif