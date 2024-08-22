// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTIMEUTIL_H
#define ATXTIMEUTIL_H


#import <Foundation/Foundation.h>


@interface ATXTimeUtil : NSObject



+(BOOL)time:(id)arg0 isBetweenStartTime:(id)arg1 andEndTime:(id)arg2 ;
+(id)getDayFromTime:(id)arg0 timeZone:(id)arg1 ;
+(id)getTimeFromDate:(id)arg0 ;
+(id)nextStartOfDayAfter:(id)arg0 timeZone:(id)arg1 ;
+(id)todayWithTimeZone:(id)arg0 ;
+(id)yesterdayWithTimeZone:(id)arg0 ;


@end


#endif