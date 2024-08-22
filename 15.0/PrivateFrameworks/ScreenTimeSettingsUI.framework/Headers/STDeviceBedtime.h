// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDEVICEBEDTIME_H
#define STDEVICEBEDTIME_H

@class NSDictionary, NSString, STBlueprintScheduleSimpleItem;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface STDeviceBedtime : NSObject <NSCopying>



@property (nonatomic) BOOL askForMoreTime; // ivar: _askForMoreTime
@property (nonatomic) BOOL deviceBedtimeEnabled; // ivar: _deviceBedtimeEnabled
@property (copy) NSDictionary *scheduleByWeekdayIndex; // ivar: _scheduleByWeekdayIndex
@property (readonly, copy) NSString *scheduleText;
@property (nonatomic) BOOL shouldAllowEditing; // ivar: _shouldAllowEditing
@property (copy) STBlueprintScheduleSimpleItem *simpleSchedule; // ivar: _simpleSchedule


+(id)defaultBedtimeSchedule;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBlueprint:(id)arg0 ;


@end


#endif