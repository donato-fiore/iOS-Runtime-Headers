// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUDATEPARSER_H
#define TSUDATEPARSER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSULocale.h"

@interface TSUDateParser : NSObject {
    NSMutableArray *_formatCategories;
    TSULocale *_locale;
    BOOL _isJapaneseLocale;
    *__CFDateFormatter _specialCaseFormatter;
}




-(id)formatStringsDictionary;
-(id)initWithLocale:(id)arg0 ;
-(id)newDateFromString:(id)arg0 preferredFormatString:(id)arg1 successfulFormatString:(*id)arg2 tryAggressiveFormats:(BOOL)arg3 ;
-(id)newDateFromString:(id)arg0 successfulFormatString:(*id)arg1 ;
-(id)p_initialPatternParsingFormat:(id)arg0 separator:(*unsigned short)arg1 ;
-(id)p_newDateFromStringTryingFormats:(id)arg0 locale:(id)arg1 formats:(id)arg2 outSuccessfulFormatString:(*id)arg3 perfect:(*BOOL)arg4 ;
-(struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(id)arg0 ;
-(void)dealloc;
-(void)p_addFormat:(id)arg0 locale:(id)arg1 formatCategoryMap:(id)arg2 ;


@end


#endif