// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDDMATTRIBUTENAMEMAPPER_H
#define CDDMATTRIBUTENAMEMAPPER_H

@class NSManagedObject, NSNumber, NSString, NSDate;



@interface CDDMAttributeNameMapper : NSManagedObject

@property (retain, nonatomic) NSNumber *anonymizedBeacon;
@property (retain, nonatomic) NSNumber *anonymizedLocation;
@property (retain, nonatomic) NSString *associatedPools;
@property (retain, nonatomic) NSNumber *category;
@property (retain, nonatomic) NSNumber *clientId;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *dataProtectionClass;
@property (retain, nonatomic) NSNumber *estimatedCadenceSeconds;
@property (retain, nonatomic) NSNumber *integerId;
@property (retain, nonatomic) NSNumber *localDaysSinceSunday;
@property (retain, nonatomic) NSNumber *localTime;
@property (retain, nonatomic) NSNumber *localTimeQuarterHourSlot;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *networkQuality;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *userId;




@end


#endif