// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMDEVICEMAPPER_H
#define CDDMDEVICEMAPPER_H

@class NSManagedObject, NSNumber, NSDate, NSString;



@interface CDDMDeviceMapper : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *networkQuality;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *userId;




@end


#endif