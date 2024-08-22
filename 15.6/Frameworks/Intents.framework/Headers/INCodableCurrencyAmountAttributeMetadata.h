// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INCODABLECURRENCYAMOUNTATTRIBUTEMETADATA_H
#define INCODABLECURRENCYAMOUNTATTRIBUTEMETADATA_H

@class NSString, NSArray;


#import "INCodableNumberAttributeMetadata.h"

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata

@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, nonatomic) NSArray *currencyCodes; // ivar: _currencyCodes


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionCurrencyCodeKey;
-(id)__INCodableDescriptionCurrencyCodesKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
-(id)__INTypeCodableDescriptionCurrencyCodeKey;
-(id)__INTypeCodableDescriptionCurrencyCodesKey;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif