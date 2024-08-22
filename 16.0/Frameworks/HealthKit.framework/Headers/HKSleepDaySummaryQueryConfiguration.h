// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPDAYSUMMARYQUERYCONFIGURATION_H
#define HKSLEEPDAYSUMMARYQUERYCONFIGURATION_H

@class NSCalendar;


#import "HKQueryServerConfiguration.h"
#import "HKSleepDaySummaryCacheSettings.h"

@interface HKSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL ascending; // ivar: _ascending
@property (copy, nonatomic) HKSleepDaySummaryCacheSettings *cacheSettings; // ivar: _cacheSettings
@property (copy, nonatomic) NSCalendar *calendarOverrides; // ivar: _calendarOverrides
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (nonatomic) ? morningIndexRange; // ivar: _morningIndexRange
@property (nonatomic) NSUInteger options; // ivar: _options


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif