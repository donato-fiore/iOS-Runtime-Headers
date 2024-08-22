// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERACCOUNTUSERINFOVALUE_H
#define PKPAYLATERACCOUNTUSERINFOVALUE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPayLaterAccountUserInfoValue : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL hasHiddenValue; // ivar: _hasHiddenValue
@property (copy, nonatomic) NSString *odiAttribute; // ivar: _odiAttribute
@property (copy, nonatomic) NSString *text; // ivar: _text


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