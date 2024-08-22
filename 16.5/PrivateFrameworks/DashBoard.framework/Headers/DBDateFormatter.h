// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDATEFORMATTER_H
#define DBDATEFORMATTER_H


#import <Foundation/Foundation.h>


@interface DBDateFormatter : NSObject



+(id)_dateFormatterFromToken:(id)arg0 ;
+(id)_dateIntervalFormatterFromToken:(id)arg0 ;
+(id)_formatDate:(id)arg0 withToken:(id)arg1 ;
+(id)_formatIntervalFromDate:(id)arg0 toDate:(id)arg1 withToken:(id)arg2 ;
+(id)dateFormatterForToken:(id)arg0 ;
+(id)dateFormatters;
+(id)dateIntervalFormatterForToken:(id)arg0 ;
+(id)dateIntervalFormatters;
+(id)formattedDate:(id)arg0 ;
+(id)formattedDateTimeStamp:(id)arg0 ;
+(id)formattedNow;
+(id)formattedRange:(id)arg0 ;
+(id)formattedRangeDateTimeStampStart:(id)arg0 end:(id)arg1 ;
+(id)formattedRangeDateTimestamp:(id)arg0 ;
+(id)formattedRangeStart:(id)arg0 end:(id)arg1 ;
+(id)formattedRangeTimestamp:(id)arg0 ;
+(id)formattedRangeTimestampStart:(id)arg0 end:(id)arg1 ;
+(id)formattedTime:(id)arg0 ;
+(id)formattedTimeStamp:(id)arg0 ;


@end


#endif