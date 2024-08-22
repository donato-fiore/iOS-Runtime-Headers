// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OITSUFORMATUTILITIES_LOCALESPECIFICSTORAGE_H
#define OITSUFORMATUTILITIES_LOCALESPECIFICSTORAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OITSUFormatUtilities_LocaleSpecificStorage : NSObject

@property (readonly) NSString *formatCurrencyString; // ivar: _formatCurrencyString
@property (readonly) NSString *formatCurrencyStringMinus; // ivar: _formatCurrencyStringMinus
@property (readonly) NSString *formatCurrencyStringRedOnly; // ivar: _formatCurrencyStringRedOnly
@property (readonly) NSString *formatCurrencyStringWithParens; // ivar: _formatCurrencyStringWithParens
@property (readonly) NSString *formatDateTimeString; // ivar: _formatDateTimeString
@property (readonly) NSString *formatDecimalString; // ivar: _formatDecimalString
@property (readonly) NSString *formatDecimalStringMinus; // ivar: _formatDecimalStringMinus
@property (readonly) NSString *formatDecimalStringRedOnly; // ivar: _formatDecimalStringRedOnly
@property (readonly) NSString *formatDecimalStringWithParens; // ivar: _formatDecimalStringWithParens
@property (readonly) NSString *formatPercentageString; // ivar: _formatPercentageString
@property (readonly) NSString *formatPercentageStringMinus; // ivar: _formatPercentageStringMinus
@property (readonly) NSString *formatPercentageStringRedOnly; // ivar: _formatPercentageStringRedOnly
@property (readonly) NSString *formatPercentageStringWithParens; // ivar: _formatPercentageStringWithParens
@property (readonly) NSString *formatScientificString; // ivar: _formatScientificString
@property (readonly) NSString *formatScientificStringMinus; // ivar: _formatScientificStringMinus
@property (readonly) NSString *formatScientificStringRedOnly; // ivar: _formatScientificStringRedOnly
@property (readonly) NSString *formatScientificStringWithParens; // ivar: _formatScientificStringWithParens


+(id)localeSpecificStorageForLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 ;


@end


#endif