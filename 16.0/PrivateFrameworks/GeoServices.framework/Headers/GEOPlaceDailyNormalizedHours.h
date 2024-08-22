// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPLACEDAILYNORMALIZEDHOURS_H
#define GEOPLACEDAILYNORMALIZEDHOURS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOPlaceDailyNormalizedHours : NSObject

@property (nonatomic) CGFloat closingSoonThresholdSeconds; // ivar: _closingSoonThresholdSeconds
@property (readonly, nonatomic) NSArray *localTimeIntervals; // ivar: _localTimeIntervals
@property (readonly, nonatomic) BOOL openFromMidnight; // ivar: _openFromMidnight
@property (readonly, nonatomic) BOOL openToMidnight; // ivar: _openToMidnight
@property (nonatomic) CGFloat openingSoonThresholdSeconds; // ivar: _openingSoonThresholdSeconds
@property (readonly, nonatomic) NSInteger weekday; // ivar: _weekday


+(NSInteger)getWeekdayForDate:(id)arg0 inNormalizedHours:(id)arg1 timeZone:(id)arg2 ;
+(NSInteger)todaysWeekday:(NSInteger)arg0 yesterdaysWeekday:(NSInteger)arg1 containsTimeFromMidnight:(CGFloat)arg2 inNormalizedHours:(id)arg3 ;
+(id)dailyNormalizedHoursForWeekday:(NSInteger)arg0 timeIntervals:(id)arg1 closingThreshold:(CGFloat)arg2 openingThreshold:(CGFloat)arg3 openToMidnight:(BOOL)arg4 openFromMidnight:(BOOL)arg5 ;
-(id)description;


@end


#endif