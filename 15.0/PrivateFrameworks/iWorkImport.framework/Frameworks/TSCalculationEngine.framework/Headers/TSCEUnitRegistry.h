// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEUNITREGISTRY_H
#define TSCEUNITREGISTRY_H


#import <Foundation/Foundation.h>


@interface TSCEUnitRegistry : NSObject



+(BOOL)unitIsMetric:(unsigned short)arg0 ;
+(CGFloat)multiplierForUnitPrefix:(unsigned char)arg0 ;
+(id)currencyCodeForUnit:(unsigned short)arg0 ;
+(struct ? )prefixedUnitForString:(id)arg0 ;
+(struct TSUDecimal )convert:(struct TSUDecimal *)arg0 fromUnit:(struct ? )arg1 toUnit:(struct ? )arg2 ;
+(unsigned char)binaryUnitPrefixForChars:(unsigned short)arg0 ;
+(unsigned char)dimensionForUnit:(unsigned short)arg0 ;
+(unsigned char)unitPrefixForCharacter:(unsigned short)arg0 ;
+(unsigned short)canonicalUnitForDimension:(unsigned char)arg0 ;
+(unsigned short)unitForCurrencyCode:(id)arg0 ;
+(unsigned short)unitForString:(id)arg0 ;
+(void)initialize;


@end


#endif