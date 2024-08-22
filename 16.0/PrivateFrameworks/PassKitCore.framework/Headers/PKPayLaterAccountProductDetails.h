// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERACCOUNTPRODUCTDETAILS_H
#define PKPAYLATERACCOUNTPRODUCTDETAILS_H

@class NSTimeZone;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPayLaterAccountProductDetails : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKCurrencyAmount *amountPaid; // ivar: _amountPaid
@property (retain, nonatomic) PKCurrencyAmount *currentBalance; // ivar: _currentBalance
@property (retain, nonatomic) PKCurrencyAmount *maximumSinglePurchaseAmount; // ivar: _maximumSinglePurchaseAmount
@property (retain, nonatomic) PKCurrencyAmount *minimumSinglePurchaseAmount; // ivar: _minimumSinglePurchaseAmount
@property (copy, nonatomic) NSTimeZone *productTimeZone; // ivar: _productTimeZone
@property (retain, nonatomic) PKCurrencyAmount *totalFinanced; // ivar: _totalFinanced


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif