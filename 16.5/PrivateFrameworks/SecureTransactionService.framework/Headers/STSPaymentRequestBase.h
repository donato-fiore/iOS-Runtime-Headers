// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSPAYMENTREQUESTBASE_H
#define STSPAYMENTREQUESTBASE_H

@class NSString, NSDecimalNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSPaymentRequestBase : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (retain, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransactionAmount:(id)arg0 currencyCode:(id)arg1 countryCode:(id)arg2 transactionDate:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif