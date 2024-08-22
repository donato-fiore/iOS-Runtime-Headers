// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPRICERANGE_H
#define INPRICERANGE_H

@class NSString, NSDecimalNumber;
@protocol INPriceRangeExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDecimalNumber *maximumPrice; // ivar: _maximumPrice
@property (readonly, nonatomic) NSDecimalNumber *minimumPrice; // ivar: _minimumPrice
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_priceWithPriceRangeValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_formattedStringWithLocale:(id)arg0 componentsFormatString:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumPrice:(id)arg0 currencyCode:(id)arg1 ;
-(id)initWithMinimumPrice:(id)arg0 currencyCode:(id)arg1 ;
-(id)initWithPrice:(id)arg0 currencyCode:(id)arg1 ;
-(id)initWithRangeBetweenPrice:(id)arg0 andPrice:(id)arg1 currencyCode:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif