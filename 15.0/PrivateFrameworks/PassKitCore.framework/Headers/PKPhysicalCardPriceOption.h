// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPHYSICALCARDPRICEOPTION_H
#define PKPHYSICALCARDPRICEOPTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPhysicalCardPriceOption : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKCurrencyAmount *amount; // ivar: _amount
@property (nonatomic) NSUInteger reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif