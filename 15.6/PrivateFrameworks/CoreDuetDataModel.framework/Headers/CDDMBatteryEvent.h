// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMBATTERYEVENT_H
#define CDDMBATTERYEVENT_H

@class NSManagedObject, NSNumber, NSDate;



@interface CDDMBatteryEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *batteryLevel;
@property (retain, nonatomic) NSNumber *computedDischargeRateMilliwatts;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *sampledMilliwatts;
@property (retain, nonatomic) NSNumber *userId;




@end


#endif