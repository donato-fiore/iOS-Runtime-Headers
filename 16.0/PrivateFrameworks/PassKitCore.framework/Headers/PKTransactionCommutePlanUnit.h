// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONCOMMUTEPLANUNIT_H
#define PKTRANSACTIONCOMMUTEPLANUNIT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKTransactionCommutePlanUnit : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger planType; // ivar: _planType
@property (readonly, copy, nonatomic) PKCurrencyAmount *valueCount; // ivar: _valueCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCountPlanIdentifier:(id)arg0 currencyCode:(id)arg1 value:(NSInteger)arg2 label:(id)arg3 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTimedPlanIdentifier:(id)arg0 label:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif