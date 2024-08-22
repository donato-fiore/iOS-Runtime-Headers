// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTHOSTUPDATE_H
#define PKPAYMENTHOSTUPDATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentMethod.h"
#import "PKContact.h"
#import "PKShippingMethod.h"

@interface PKPaymentHostUpdate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKPaymentMethod *paymentMethod; // ivar: _paymentMethod
@property (readonly, nonatomic) PKContact *shippingContact; // ivar: _shippingContact
@property (readonly, nonatomic) PKShippingMethod *shippingMethod; // ivar: _shippingMethod


+(BOOL)supportsSecureCoding;
+(id)paymentUpdateWithProtobuf:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 shippingMethod:(id)arg1 paymentMethod:(id)arg2 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif