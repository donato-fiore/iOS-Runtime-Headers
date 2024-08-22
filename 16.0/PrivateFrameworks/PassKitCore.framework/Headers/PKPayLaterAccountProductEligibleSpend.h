// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERACCOUNTPRODUCTELIGIBLESPEND_H
#define PKPAYLATERACCOUNTPRODUCTELIGIBLESPEND_H

@class NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPayLaterAccountProductEligibleSpend : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKCurrencyAmount *availableToSpend; // ivar: _availableToSpend
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (retain, nonatomic) NSArray *financingOptions; // ivar: _financingOptions


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