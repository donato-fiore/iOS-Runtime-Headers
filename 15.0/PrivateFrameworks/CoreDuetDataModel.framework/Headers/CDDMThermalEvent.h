// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDDMTHERMALEVENT_H
#define CDDMTHERMALEVENT_H

@class NSManagedObject, NSNumber, NSDate;



@interface CDDMThermalEvent : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *thermalLevel;
@property (retain, nonatomic) NSNumber *userId;




@end


#endif