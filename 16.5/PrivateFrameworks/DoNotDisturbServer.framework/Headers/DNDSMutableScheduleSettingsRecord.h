// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSMUTABLESCHEDULESETTINGSRECORD_H
#define DNDSMUTABLESCHEDULESETTINGSRECORD_H

@class NSNumber;


#import "DNDSScheduleSettingsRecord.h"

@interface DNDSMutableScheduleSettingsRecord : DNDSScheduleSettingsRecord

@property (copy, nonatomic) NSNumber *bedtimeBehaviorEnabledSetting;
@property (copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property (copy, nonatomic) NSNumber *scheduleEnabledSetting;
@property (copy, nonatomic) NSNumber *timePeriodEndTimeHour;
@property (copy, nonatomic) NSNumber *timePeriodEndTimeMinute;
@property (copy, nonatomic) NSNumber *timePeriodStartTimeHour;
@property (copy, nonatomic) NSNumber *timePeriodStartTimeMinute;
@property (copy, nonatomic) NSNumber *timePeriodWeekdays;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif