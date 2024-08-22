// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMSLEEPORWAKEEVENT_H
#define CDDMSLEEPORWAKEEVENT_H

@class NSManagedObject, NSNumber, NSDate;



@interface CDDMSleepOrWakeEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *sleepState;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSNumber *wakeReason;




@end


#endif