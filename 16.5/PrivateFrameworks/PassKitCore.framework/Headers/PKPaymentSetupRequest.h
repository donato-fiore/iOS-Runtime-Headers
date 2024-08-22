// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPREQUEST_H
#define PKPAYMENTSETUPREQUEST_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPaymentSetupConfiguration.h"

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKPaymentSetupConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSArray *paymentSetupFeatures; // ivar: _paymentSetupFeatures


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif