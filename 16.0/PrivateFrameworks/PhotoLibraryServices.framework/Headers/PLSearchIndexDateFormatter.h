// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHINDEXDATEFORMATTER_H
#define PLSEARCHINDEXDATEFORMATTER_H

@class NSDateFormatter, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLDateRangeFormatter.h"

@interface PLSearchIndexDateFormatter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDateFormatter *_dateFormatter;
    PLDateRangeFormatter *_dateRangeFormatter;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_displayFormat;
    NSString *_parseFormat;
    NSArray *_monthSymbols;
    BOOL _didSetupLocaleAndFormats;
}




+(id)monthFormatForLocale:(id)arg0 ;
+(id)yearFormatForLocale:(id)arg0 ;
-(id)_arrangedMonthSymbols;
-(id)_inqNewLocalizedStringFromDate:(id)arg0 ;
-(id)formattedDateRangeWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)init;
-(id)localizedMonthStringsFromDate:(id)arg0 ;
-(id)localizedSeasonNameFromDate:(id)arg0 ;
-(id)newLocalizedComponentsFromDate:(id)arg0 includeMonth:(BOOL)arg1 ;
-(id)newLocalizedStringFromDate:(id)arg0 ;
-(id)newLocalizedStringFromYear:(id)arg0 month:(id)arg1 ;
-(void)_inqSetupDateFormatter;
-(void)_inqUpdateDateFormat:(id)arg0 ;


@end


#endif