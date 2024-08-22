// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTREQUESTUPDATE_H
#define PKPAYMENTREQUESTUPDATE_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentTokenConfiguration.h"

@interface PKPaymentRequestUpdate : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *contentItems; // ivar: _contentItems
@property (copy, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (copy, nonatomic) NSArray *shippingMethods; // ivar: _shippingMethods
@property (nonatomic) NSInteger status; // ivar: _status
@property (retain, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration; // ivar: _tokenConfiguration


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentSummaryItems:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif