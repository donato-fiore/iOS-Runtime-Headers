// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPPRODUCTPAYMENTOPTION_H
#define PKPAYMENTSETUPPRODUCTPAYMENTOPTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupProductPaymentOption : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger cardType; // ivar: _cardType
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, nonatomic) NSInteger supportedProtocols; // ivar: _supportedProtocols


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentOptionDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif