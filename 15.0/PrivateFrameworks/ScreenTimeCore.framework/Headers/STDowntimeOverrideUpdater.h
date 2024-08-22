// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDOWNTIMEOVERRIDEUPDATER_H
#define STDOWNTIMEOVERRIDEUPDATER_H

@protocol STDowntimeOverrideModifier;

#import <Foundation/Foundation.h>


@interface STDowntimeOverrideUpdater : NSObject

@property (readonly) NSObject<STDowntimeOverrideModifier> *downtimeOverrideModifier; // ivar: _downtimeOverrideModifier


+(BOOL)updateActiveOverrideOnBlueprintNow:(id)arg0 usingModifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)updateActiveOverrideUsingModifier:(id)arg0 byRecomputingFromSchedule:(id)arg1 atDate:(id)arg2 inCalendar:(id)arg3 error:(*id)arg4 ;


@end


#endif