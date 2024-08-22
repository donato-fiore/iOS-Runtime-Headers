// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUNUMBERPARSER_H
#define TSUNUMBERPARSER_H


#import <Foundation/Foundation.h>


@interface TSUNumberParser : NSObject



+(BOOL)numberValueFromString:(id)arg0 locale:(id)arg1 outDecimalValue:(struct TSUDecimal *)arg2 ;
+(BOOL)numberValueFromString:(id)arg0 locale:(id)arg1 outDecimalValue:(struct TSUDecimal *)arg2 outValueType:(*int)arg3 ;
+(BOOL)numberValueFromString:(id)arg0 locale:(id)arg1 outDecimalValue:(struct TSUDecimal *)arg2 outValueType:(*int)arg3 outCurrencyCode:(*id)arg4 ;
+(BOOL)numberValueFromString:(id)arg0 locale:(id)arg1 outDoubleValue:(*CGFloat)arg2 ;
+(BOOL)numberValueFromString:(id)arg0 locale:(id)arg1 outDoubleValue:(*CGFloat)arg2 outValueType:(*int)arg3 ;
+(BOOL)numberValueFromString:(id)arg0 locale:(id)arg1 outDoubleValue:(*CGFloat)arg2 outValueType:(*int)arg3 outCurrencyCode:(*id)arg4 ;


@end


#endif