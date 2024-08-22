// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERPASSPAYMENTSOURCE_H
#define PKPAYLATERPASSPAYMENTSOURCE_H

@protocol NSSecureCoding;


#import "PKPayLaterPaymentSource.h"
#import "PKPaymentApplication.h"
#import "PKPaymentPass.h"

@interface PKPayLaterPassPaymentSource : PKPayLaterPaymentSource <NSSecureCoding>



@property (readonly, nonatomic) PKPaymentApplication *paymentApplication; // ivar: _paymentApplication
@property (readonly, nonatomic) PKPaymentPass *paymentPass; // ivar: _paymentPass


+(BOOL)supportsSecureCoding;
-(NSUInteger)type;
-(id)identifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 paymentApplication:(id)arg1 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif