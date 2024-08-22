// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUDECIMALFORMATTER_H
#define TSUDECIMALFORMATTER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSULocale.h"

@interface TSUDecimalFormatter : NSObject {
    *TSUDecimalFormatterCore _formatter;
}


@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *currencySymbol;
@property (retain, nonatomic) NSString *exponentSymbol;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) int groupingSize;
@property (nonatomic) BOOL isLenient;
@property (readonly, nonatomic) TSULocale *locale;
@property (nonatomic) int maxFractionDigits;
@property (nonatomic) int maxIntegerDigits;
@property (nonatomic) int minFractionDigits;
@property (nonatomic) int minIntegerDigits;
@property (retain, nonatomic) NSString *minusSign;
@property (nonatomic) NSUInteger roundingMode;
@property (nonatomic) BOOL useGroupingSeparator;


+(id)createHarmonizedDecimalFormatterOfStyle:(NSInteger)arg0 locale:(id)arg1 formattingSymbols:(id)arg2 ;
-(BOOL)getValueFromString:(id)arg0 rangePtr:(struct _NSRange *)arg1 valuePtr:(*CGFloat)arg2 ;
-(id)copyFormatterPropertyForKey:(struct __CFString *)arg0 ;
-(id)createStringWithDecimal:(struct TSUDecimal *)arg0 ;
-(id)createStringWithNumber:(id)arg0 ;
-(id)createStringWithValue:(CGFloat)arg0 ;
-(id)initWithLocale:(id)arg0 style:(NSInteger)arg1 ;
-(void)dealloc;
-(void)harmonizedSetCurrency:(id)arg0 locale:(id)arg1 ;


@end


#endif