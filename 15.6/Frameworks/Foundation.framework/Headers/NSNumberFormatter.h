// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSNUMBERFORMATTER_H
#define NSNUMBERFORMATTER_H

@class NSMutableDictionary, NSLocale, NSDictionary;
@protocol NSObservable, NSObserver;


#import "NSFormatter.h"
#import "NSRecursiveLock.h"
#import "NSString.h"
#import "NSNumber.h"

@interface NSNumberFormatter : NSFormatter <NSObservable, NSObserver>

 {
    NSMutableDictionary *_attributes;
    *__CFNumberFormatter _formatter;
    NSUInteger _counter;
    NSUInteger _behavior;
    NSRecursiveLock *_lock;
    NSUInteger _stateBitMask;
    NSInteger _cacheGeneration;
    *void _reserved;
}


@property BOOL allowsFloats;
@property BOOL alwaysShowsDecimalSeparator;
@property (copy) NSString *currencyCode;
@property (copy) NSString *currencyDecimalSeparator;
@property (copy) NSString *currencyGroupingSeparator;
@property (copy) NSString *currencySymbol;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *decimalSeparator;
@property (readonly, copy) NSString *description;
@property (copy) NSString *exponentSymbol;
@property NSUInteger formatWidth;
@property NSUInteger formatterBehavior;
@property NSInteger formattingContext;
@property BOOL generatesDecimalNumbers;
@property (copy) NSString *groupingSeparator;
@property NSUInteger groupingSize;
@property (readonly) NSUInteger hash;
@property (copy) NSString *internationalCurrencySymbol;
@property (getter=isLenient) BOOL lenient;
@property (copy) NSLocale *locale;
@property (copy) NSNumber *maximum;
@property NSUInteger maximumFractionDigits;
@property NSUInteger maximumIntegerDigits;
@property NSUInteger maximumSignificantDigits;
@property (copy) NSNumber *minimum;
@property NSUInteger minimumFractionDigits;
@property NSUInteger minimumIntegerDigits;
@property NSUInteger minimumSignificantDigits;
@property (copy) NSString *minusSign;
@property (copy) NSNumber *multiplier;
@property (copy) NSString *negativeFormat;
@property (copy) NSString *negativeInfinitySymbol;
@property (copy) NSString *negativePrefix;
@property (copy) NSString *negativeSuffix;
@property (copy) NSString *nilSymbol;
@property (copy) NSString *notANumberSymbol;
@property NSUInteger numberStyle;
@property (copy) NSString *paddingCharacter;
@property NSUInteger paddingPosition;
@property (getter=isPartialStringValidationEnabled) BOOL partialStringValidationEnabled;
@property (copy) NSString *perMillSymbol;
@property (copy) NSString *percentSymbol;
@property (copy) NSString *plusSign;
@property (copy) NSString *positiveFormat;
@property (copy) NSString *positiveInfinitySymbol;
@property (copy) NSString *positivePrefix;
@property (copy) NSString *positiveSuffix;
@property (copy) NSNumber *roundingIncrement;
@property NSUInteger roundingMode;
@property NSUInteger secondaryGroupingSize;
@property (readonly) Class superclass;
@property (copy) NSDictionary *textAttributesForNegativeInfinity;
@property (copy) NSDictionary *textAttributesForNegativeValues;
@property (copy) NSDictionary *textAttributesForNil;
@property (copy) NSDictionary *textAttributesForNotANumber;
@property (copy) NSDictionary *textAttributesForPositiveInfinity;
@property (copy) NSDictionary *textAttributesForPositiveValues;
@property (copy) NSDictionary *textAttributesForZero;
@property BOOL usesGroupingSeparator;
@property BOOL usesSignificantDigits;
@property (copy) NSString *zeroSymbol;


+(NSUInteger)defaultFormatterBehavior;
+(id)localizedStringFromNumber:(id)arg0 numberStyle:(NSUInteger)arg1 ;
+(void)initialize;
+(void)setDefaultFormatterBehavior:(NSUInteger)arg0 ;
-(*void)__Keynote_NOOP;
-(*void)getFormatter;
-(BOOL)_hasSetCurrencyCode;
-(BOOL)_hasSetCurrencySymbol;
-(BOOL)_hasSetInternationalCurrencySymbol;
-(BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg0 ;
-(BOOL)_tracksCacheGenerationCount;
-(BOOL)_usesCharacterDirection;
-(BOOL)checkLocaleChange;
-(BOOL)checkModify;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 range:(struct _NSRange *)arg2 error:(*id)arg3 ;
-(NSInteger)_cacheGenerationCount;
-(id)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)numberFromString:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromNumber:(id)arg0 ;
-(void)_clearFormatter;
-(void)_invalidateCache;
-(void)_regenerateFormatter;
-(void)_reset;
-(void)_setUsesCharacterDirection:(BOOL)arg0 ;
-(void)clearPropertyBit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)receiveObservedValue:(id)arg0 ;
-(void)resetCheckLocaleChange;
-(void)resetCheckModify;
-(void)setPropertyBit;


@end


#endif