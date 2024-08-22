// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLUNLOCKEVENT_H
#define SCLUNLOCKEVENT_H

@class NSManagedObject, NSString, NSUUID, NSDate;



@interface SCLUnlockEvent : NSManagedObject

@property (copy, nonatomic) NSString *calendarIdentifier;
@property (nonatomic) short duration;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) short scheduleEndHour;
@property (nonatomic) short scheduleEndMinute;
@property (nonatomic) short scheduleStartHour;
@property (nonatomic) short scheduleStartMinute;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *timeZoneName;


+(id)fetchRequest;


@end


#endif