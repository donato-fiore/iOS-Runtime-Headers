// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTCLIENTUPDATE_H
#define PKPAYMENTCLIENTUPDATE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKShippingMethods.h"

@interface PKPaymentClientUpdate : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *paymentSummaryItems; // ivar: _paymentSummaryItems
@property (readonly, copy, nonatomic) NSString *selectedAID; // ivar: _selectedAID
@property (readonly, nonatomic) NSUInteger selectedPaymentMethodType; // ivar: _selectedPaymentMethodType
@property (readonly, copy, nonatomic) PKShippingMethods *shippingMethods; // ivar: _shippingMethods
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
+(id)paymentUpdateResponseWithProtobuf:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentSummaryItems:(id)arg0 shippingMethods:(id)arg1 status:(NSInteger)arg2 selectedAID:(id)arg3 selectedPaymentMethodType:(NSUInteger)arg4 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif