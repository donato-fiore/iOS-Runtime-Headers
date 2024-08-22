// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHNUMBERFORMAT_H
#define TSCHNUMBERFORMAT_H

@class NSString, NSUUID, TSKFormat;
@protocol NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport;

#import <Foundation/Foundation.h>


@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHFormatTypeSupport>



@property (readonly, nonatomic) unsigned int base;
@property (readonly, nonatomic) unsigned int basePlaces;
@property (readonly, nonatomic) BOOL baseUseMinusSign;
@property (readonly, copy, nonatomic) NSString *currencyCode;
@property (readonly, copy, nonatomic) NSUUID *customFormatListKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int decimalPlaces;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) TSKFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) char fractionAccuracy;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBase;
@property (readonly, nonatomic) BOOL isCurrency;
@property (readonly, nonatomic) BOOL isCustom;
@property (readonly, nonatomic) BOOL isDecimal;
@property (readonly, nonatomic) BOOL isFraction;
@property (readonly, nonatomic) BOOL isPercentage;
@property (readonly, nonatomic) BOOL isScientific;
@property (readonly, nonatomic) unsigned char negativeStyle;
@property (readonly, nonatomic) NSInteger numberOfDecimalPlaces;
@property (copy, nonatomic) NSString *prefixString; // ivar: _prefixString
@property (readonly, nonatomic) CGFloat scaleFactor;
@property (readonly, nonatomic) BOOL showThousandsSeparator;
@property (copy, nonatomic) NSString *suffixString; // ivar: _suffixString
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsNumericProperties;
@property (readonly, nonatomic) BOOL useAccountingStyle;


+(BOOL)defaultBaseUseMinusSign;
+(BOOL)defaultShowThousandsSeparator;
+(BOOL)supportsFormatType:(unsigned int)arg0 ;
+(BOOL)supportsNumericPropertiesForFormatType:(unsigned int)arg0 ;
+(char)defaultFractionAccuracy;
+(id)automaticDecimalPlaces;
+(id)customFormatForKey:(id)arg0 documentRoot:(id)arg1 fromPasteboardCustomFormatList:(id)arg2 ;
+(id)defaultCurrencyCode;
+(id)defaultDecimalNumberFormat;
+(id)defaultDecimalNumberFormatWithPrefixString:(id)arg0 suffixString:(id)arg1 ;
+(id)defaultNumberFormatWithFormatType:(unsigned int)arg0 locale:(id)arg1 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)numberFormatWithFormatType:(unsigned int)arg0 decimalPlaces:(unsigned int)arg1 showThousandsSeparator:(BOOL)arg2 ;
+(id)numberFormatWithTSKFormat:(id)arg0 prefixString:(id)arg1 suffixString:(id)arg2 ;
+(int)labelFormatTypeFromTSUFormatType:(unsigned int)arg0 ;
+(unsigned char)defaultNegativeNumberStyle;
+(unsigned int)defaultBase;
+(unsigned int)defaultBasePlaces;
+(unsigned int)defaultDecimalPlaces;
-(BOOL)isCompatibleWithDataFormatter:(id)arg0 ;
-(BOOL)isDate;
-(BOOL)isDuration;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsAutoMinMax;
-(id)chartFormattedInspectorStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)chartFormattedStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customFormat;
-(id)customFormatKey;
-(id)dataFormatterForDocumentRoot:(id)arg0 pasteboardCustomFormatList:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithNullableTSKFormat:(id)arg0 prefixString:(id)arg1 suffixString:(id)arg2 ;
-(id)initWithTSKFormat:(id)arg0 prefixString:(id)arg1 suffixString:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
-(id)p_formattedBodyStringForDouble:(CGFloat)arg0 locale:(id)arg1 ;
-(id)upgradedNumberFormatFromPreUFFOrUnity1_0;
-(int)valueType;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif