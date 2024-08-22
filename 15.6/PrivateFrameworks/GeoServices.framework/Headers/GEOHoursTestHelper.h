// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOHOURSTESTHELPER_H
#define GEOHOURSTESTHELPER_H


#import <Foundation/Foundation.h>


@interface GEOHoursTestHelper : NSObject



+(id)_pdHoursFromHour:(NSInteger)arg0 fromMinute:(NSInteger)arg1 toHour:(NSInteger)arg2 toMinute:(NSInteger)arg3 inTimeZone:(id)arg4 onDay:(NSInteger)arg5 month:(NSInteger)arg6 year:(NSInteger)arg7 openingThreshold:(CGFloat)arg8 closingThreshold:(CGFloat)arg9 shouldGoOverMidnight:(BOOL)arg10 ;
+(id)dateWithString:(id)arg0 ;
+(id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+(id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+(id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+(id)testDateForMKLocalizedHoursBuilderTest;
+(id)testTimeZoneForGEOPlaceDailyHoursTest;
+(id)testTimeZoneForMKLocalizedHoursBuilderTest;
+(id)testingDictionaryForIsWeekdayInRange;
+(struct GEOPDLocalTimeRange )_rangeWithFromHour:(NSInteger)arg0 fromMinute:(NSInteger)arg1 toHour:(NSInteger)arg2 toMinute:(NSInteger)arg3 ;


@end


#endif