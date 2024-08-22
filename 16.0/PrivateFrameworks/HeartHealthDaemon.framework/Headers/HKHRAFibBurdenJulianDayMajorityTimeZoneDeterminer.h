// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRAFIBBURDENJULIANDAYMAJORITYTIMEZONEDETERMINER_H
#define HKHRAFIBBURDENJULIANDAYMAJORITYTIMEZONEDETERMINER_H

@class HDProfile, HKSeriesType, HKCalendarCache;

#import <Foundation/Foundation.h>


@interface HKHRAFibBurdenJulianDayMajorityTimeZoneDeterminer : NSObject {
    HDProfile *_profile;
    HKSeriesType *_seriesType;
    HKCalendarCache *_calendarCache;
}




-(id)_totalDatePredicateForStartDayIndex:(NSInteger)arg0 endDayIndex:(NSInteger)arg1 ;
-(id)determineJulianDayToMajorityTimeZoneForRange:(struct ? )arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 calendarCache:(id)arg1 ;


@end


#endif