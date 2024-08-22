// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONAMOUNTMODIFIER_H
#define PKPAYMENTTRANSACTIONAMOUNTMODIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKTransactionAmount.h"

@interface PKPaymentTransactionAmountModifier : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) PKTransactionAmount *amount; // ivar: _amount
@property (copy, nonatomic) NSString *modifierDescription; // ivar: _modifierDescription
@property (nonatomic) NSInteger order; // ivar: _order
@property (nonatomic) NSInteger type; // ivar: _type
@property (copy, nonatomic) NSString *typeString; // ivar: _typeString


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentTransactionAmountModifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif