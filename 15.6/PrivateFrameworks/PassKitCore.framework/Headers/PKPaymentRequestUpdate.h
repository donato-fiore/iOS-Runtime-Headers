// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREQUESTUPDATE_H
#define PKPAYMENTREQUESTUPDATE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKShippingMethods.h"

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>



@property (copy, nonatomic) PKShippingMethods *availableShippingMethods; // ivar: _availableShippingMethods
@property (copy, nonatomic) NSArray *contentItems; // ivar: _contentItems
@property (copy, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (copy, nonatomic) NSArray *shippingMethods;
@property (nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentSummaryItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif