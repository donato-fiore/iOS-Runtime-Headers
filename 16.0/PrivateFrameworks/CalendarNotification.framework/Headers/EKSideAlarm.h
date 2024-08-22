// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKSIDEALARM_H
#define EKSIDEALARM_H

@class NSManagedObject, NSDate, NSNumber, NSString;



@interface EKSideAlarm : NSManagedObject

@property (retain, nonatomic) NSDate *acknowledgedDate;
@property (retain, nonatomic) NSNumber *alarmID;
@property (retain, nonatomic) NSNumber *allDay;
@property (retain, nonatomic) NSNumber *databaseID;
@property (retain, nonatomic) NSDate *entityDate;
@property (retain, nonatomic) NSNumber *entityID;
@property (retain, nonatomic) NSString *entityTimeZone;
@property (retain, nonatomic) NSString *entityURI;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSDate *fireTime;
@property (retain, nonatomic) NSNumber *isDelayedProximityAlarm;
@property (retain, nonatomic) NSNumber *refiring;




@end


#endif