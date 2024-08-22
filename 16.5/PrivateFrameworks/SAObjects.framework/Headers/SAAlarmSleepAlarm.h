// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAALARMSLEEPALARM_H
#define SAALARMSLEEPALARM_H

@class NSNumber;


#import "SAAlarmObject.h"

@interface SAAlarmSleepAlarm : SAAlarmObject

@property (copy, nonatomic) NSNumber *bedtimeHour;
@property (copy, nonatomic) NSNumber *bedtimeMinute;
@property (copy, nonatomic) NSNumber *isFiringNext;
@property (copy, nonatomic) NSNumber *isOverride;


+(id)sleepAlarmWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif