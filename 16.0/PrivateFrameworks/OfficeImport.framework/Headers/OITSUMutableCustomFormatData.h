// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUMUTABLECUSTOMFORMATDATA_H
#define OITSUMUTABLECUSTOMFORMATDATA_H

@class NSString, NSIndexSet, NSArray;


#import "OITSUCustomFormatData.h"

@interface OITSUMutableCustomFormatData : OITSUCustomFormatData

@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) BOOL formatContainsIntegerToken;
@property (copy, nonatomic) NSString *formatString;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (copy, nonatomic) NSIndexSet *interstitialStringInsertionIndexes;
@property (copy, nonatomic) NSArray *interstitialStrings;
@property (nonatomic) BOOL isComplexFormat;
@property (nonatomic) BOOL isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) BOOL requiresFractionReplacement;
@property (nonatomic) CGFloat scaleFactor;
@property (nonatomic) BOOL showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) BOOL useAccountingStyle;


+(id)customFormatData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif