// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUNUMBERFORMAT_H
#define OITSUNUMBERFORMAT_H

@class NSString, NSArray, NSIndexSet, NSUUID;
@protocol TSUNumberFormatting, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface OITSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying>

 {
    int mValueType;
    NSString *mFormatString;
    unsigned short mDecimalPlaces;
    NSString *mCurrencyCode;
    BOOL mUseAccountingStyle;
    int mNegativeStyle;
    BOOL mShowThousandsSeparator;
    int mFractionAccuracy;
    BOOL mFormatStringRequiresSuppressionOfMinusSign;
    BOOL mUseScientificFormattingAutomatically;
    BOOL mIgnoreDecimalPlacesForZeroValue;
    NSString *mPrefixString;
    NSString *mSuffixString;
    unsigned char mBase;
    unsigned short mBasePlaces;
    BOOL mBaseUseMinusSign;
    BOOL mIsCustom;
    CGFloat mScaleFactor;
    BOOL mFormatStringContainsTabCharacter;
    BOOL mFormatContainsSpecialTokens;
    BOOL mFormatContainsIntegerToken;
    unsigned char mNumberOfHashDecimalPlaceholders;
    unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
    BOOL mRequiresFractionReplacement;
    NSArray *mInterstitialStrings;
    NSIndexSet *mInterstitialStringInsertionIndexes;
    unsigned short mIndexFromRightOfLastDigitPlaceholder;
    BOOL mIsTextFormat;
    unsigned char mMinimumIntegerWidth;
    unsigned char mDecimalWidth;
    unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
    unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
    NSString *mFormatName;
    NSUUID *mCustomFormatKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 ;
+(id)numberFormatWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 prefixString:(id)arg8 suffixString:(id)arg9 scaleFactor:(CGFloat)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 formatName:(id)arg15 ;
-(BOOL)baseUseMinusSign;
-(BOOL)canFormatText;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)ignoreDecimalPlacesForZeroValue;
-(BOOL)isCustom;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(BOOL)isTextFormat;
-(BOOL)requiresParensToBeReplacedWithSpacesForDouble:(CGFloat)arg0 ;
-(BOOL)showThousandsSeparator;
-(BOOL)useScientificFormattingAutomatically;
-(BOOL)usesAccountingStyle;
-(BOOL)usesTabs;
-(BOOL)usesTextFormatForValue:(CGFloat)arg0 ;
-(CGFloat)scaleFactor;
-(id)baseStringFromDouble:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currencyCode;
-(id)customFormatKey;
-(id)customNumberFormatTokens;
-(id)formatName;
-(id)formatString;
-(id)init;
-(id)initCustomFormatWithFormatString:(id)arg0 currencyCode:(id)arg1 showThousandsSeparator:(BOOL)arg2 fractionAccuracy:(int)arg3 scaleFactor:(CGFloat)arg4 interstitialStrings:(id)arg5 interstitialStringInsertionIndexes:(id)arg6 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg7 minimumIntegerWidth:(unsigned char)arg8 decimalWidth:(unsigned char)arg9 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg10 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg11 isTextFormat:(BOOL)arg12 formatName:(id)arg13 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 base:(unsigned char)arg8 basePlaces:(unsigned short)arg9 baseUseMinusSign:(BOOL)arg10 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 prefixString:(id)arg8 suffixString:(id)arg9 isCustom:(BOOL)arg10 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 prefixString:(id)arg8 suffixString:(id)arg9 scaleFactor:(CGFloat)arg10 base:(unsigned char)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23 customFormatKey:(id)arg24 ;
-(id)initWithValueType:(int)arg0 formatString:(id)arg1 decimalPlaces:(unsigned short)arg2 currencyCode:(id)arg3 useAccountingStyle:(BOOL)arg4 negativeStyle:(int)arg5 showThousandsSeparator:(BOOL)arg6 fractionAccuracy:(int)arg7 suffixString:(id)arg8 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)numberFormatBySettingNegativeStyle:(int)arg0 ;
-(id)numberFormatBySettingUseAccountingStyle:(BOOL)arg0 ;
-(id)prefixString;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(BOOL)arg4 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 forceSuppressMinusSign:(BOOL)arg2 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 minimumDecimalPlaces:(unsigned short)arg2 ;
-(id)stringFromDouble:(CGFloat)arg0 locale:(id)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(BOOL)arg3 ;
-(id)stringFromString:(id)arg0 ;
-(id)suffixString;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(int)valueType;
-(unsigned short)base;
-(unsigned short)basePlaces;
-(unsigned short)decimalPlaces;
-(void)dealloc;
-(void)setFormatName:(id)arg0 ;
-(void)setIgnoreDecimalPlacesForZeroValue:(BOOL)arg0 ;
-(void)setUseScientificFormattingAutomatically:(BOOL)arg0 ;


@end


#endif