// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DATEUTILS_H
#define DATEUTILS_H


#import <Foundation/Foundation.h>


@interface DateUtils : NSObject



+(NSInteger)getJulianDayFromNSDate:(id)arg0 ;
+(id)dateOnDayIndex:(NSInteger)arg0 atHour:(NSInteger)arg1 calendar:(id)arg2 ;
+(id)getNSDateComponentsFromJulianDay:(NSUInteger)arg0 ;
+(id)modifiedJulianStartDate;
+(id)sleepDayIntervalForMorningIndex:(NSInteger)arg0 calendar:(id)arg1 ;
+(id)sleepDayStartForMorningIndex:(NSInteger)arg0 calendar:(id)arg1 ;
+(struct _NSRange )getHeartRateDateRangeUpToJulianDay:(NSInteger)arg0 withAdditionalDayCount:(NSInteger)arg1 ;
+(struct _NSRange )getStandardDateRangeUpToJulianDay:(NSInteger)arg0 withAdditionalDayCount:(NSInteger)arg1 ;


@end


#endif