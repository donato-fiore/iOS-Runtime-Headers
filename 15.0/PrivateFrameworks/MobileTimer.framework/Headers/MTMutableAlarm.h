// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMUTABLEALARM_H
#define MTMUTABLEALARM_H

@class NSNumber, NSDictionary, NSString;


#import "MTAlarm.h"
#import "MTSound.h"

@interface MTMutableAlarm : MTAlarm

@property (nonatomic) BOOL allowsSnooze;
@property (nonatomic) NSUInteger bedtimeHour;
@property (nonatomic) NSUInteger bedtimeMinute;
@property (copy, nonatomic) NSNumber *bedtimeReminder;
@property (nonatomic) NSUInteger bedtimeReminderMinutes;
@property (nonatomic) NSUInteger day;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) NSUInteger hour;
@property (nonatomic) NSUInteger minute;
@property (nonatomic) NSUInteger month;
@property (nonatomic) NSUInteger playOptions;
@property (nonatomic) NSUInteger repeatSchedule;
@property (copy, nonatomic) NSDictionary *siriContext;
@property (nonatomic) BOOL sleepMode;
@property (nonatomic) NSUInteger sleepModeOptions;
@property (nonatomic) BOOL sleepSchedule;
@property (nonatomic) BOOL sleepTracking;
@property (copy, nonatomic) MTSound *sound;
@property (nonatomic) BOOL timeInBedTracking;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSUInteger year;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyChangesFromChangeSet:(id)arg0 ;


@end


#endif