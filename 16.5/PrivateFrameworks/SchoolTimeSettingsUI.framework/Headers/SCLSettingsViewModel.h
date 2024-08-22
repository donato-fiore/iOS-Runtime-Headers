// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSETTINGSVIEWMODEL_H
#define SCLSETTINGSVIEWMODEL_H

@class SCLRecurrenceSchedule, NSArray;

#import <Foundation/Foundation.h>


@interface SCLSettingsViewModel : NSObject

@property (copy, nonatomic) SCLRecurrenceSchedule *customSchedule; // ivar: _customSchedule
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSArray *historyItems; // ivar: _historyItems
@property (nonatomic) NSInteger repeatSchedule; // ivar: _repeatSchedule
@property (nonatomic) NSUInteger scheduleType; // ivar: _scheduleType
@property (copy, nonatomic) NSArray *timeIntervals; // ivar: _timeIntervals


-(id)init;


@end


#endif