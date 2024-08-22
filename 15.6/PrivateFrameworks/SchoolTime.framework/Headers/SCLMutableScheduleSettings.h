// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLMUTABLESCHEDULESETTINGS_H
#define SCLMUTABLESCHEDULESETTINGS_H



#import "SCLScheduleSettings.h"
#import "SCLSchedule.h"

@interface SCLMutableScheduleSettings : SCLScheduleSettings

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) SCLSchedule *schedule;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif