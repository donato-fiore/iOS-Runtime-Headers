// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUDATEPARSER_H
#define TSUDATEPARSER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSUDateParser : NSObject {
    NSMutableArray *mFormatCategories;
    *__CFLocale mLocale;
    BOOL mIsJapaneseLocale;
    *__CFDateFormatter mSpecialCaseFormatter;
}




+(id)parserForDefaultLocale;
-(?)newDateFromString:(?)arg0 preferredFormatString:(?)arg1 successfulFormatStringtryAggressiveFormats;
-(?)newDateFromStringTryingFormats:(?)arg0 locale:(?)arg1 formatsoutSuccessfulFormatString;
-(?)newDateFromStringsuccessfulFormatString;
-(id)initWithLocale:(struct __CFLocale *)arg0 ;
-(struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg0 ;
-(void)addFormat:(id)arg0 locale:(struct __CFLocale *)arg1 formatCategoryMap:(id)arg2 ;
-(void)datePreferencesChanged:(id)arg0 ;
-(void)dealloc;
-(void)parseFormat:(id)arg0 initialPattern:(*id)arg1 separator:(*unsigned short)arg2 ;


@end


#endif