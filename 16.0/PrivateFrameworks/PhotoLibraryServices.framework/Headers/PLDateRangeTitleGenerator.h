// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDATERANGETITLEGENERATOR_H
#define PLDATERANGETITLEGENERATOR_H

@class PLLazyObject, NSLocale;

#import <Foundation/Foundation.h>


@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
    NSLocale *_locale;
}




-(id)dateRangeFormatter;
-(id)dateRangeFormatterForCategory:(unsigned short)arg0 kind:(unsigned short)arg1 options:(NSUInteger)arg2 ;
-(id)dateRangeTitleWithStartDate:(id)arg0 endDate:(id)arg1 category:(unsigned short)arg2 kind:(unsigned short)arg3 ;
-(id)dateRangeTitleWithStartDate:(id)arg0 endDate:(id)arg1 category:(unsigned short)arg2 kind:(unsigned short)arg3 options:(NSUInteger)arg4 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)monthYearDateRangeFormatter;
-(id)newDateRangeFormatter;
-(id)newMonthYearDateRangeFormatter;
-(id)newRecentDateRangeFormatter;
-(id)newShortMonthYearDateRangeFormatter;
-(id)newYearDateRangeFormatter;
-(id)newYearlessDateRangeFormatter;
-(id)recentDateRangeFormatter;
-(id)shortMonthYearDateRangeFormatter;
-(id)yearDateRangeFormatter;
-(id)yearlessDateRangeFormatter;


@end


#endif