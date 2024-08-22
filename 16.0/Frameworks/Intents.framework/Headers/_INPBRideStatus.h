// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBRIDESTATUS_H
#define _INPBRIDESTATUS_H

@class PBCodable, NSArray, NSString;
@protocol _INPBRideStatus, NSSecureCoding, NSCopying;


#import "_INPBRideCompletionStatus.h"
#import "_INPBRideDriver.h"
#import "_INPBLocationValue.h"
#import "_INPBTimestamp.h"
#import "_INPBRideOption.h"
#import "_INPBDateTimeRangeValue.h"
#import "_INPBUserActivity.h"
#import "_INPBRideVehicle.h"

@interface _INPBRideStatus : PBCodable <_INPBRideStatus, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *additionalActionItems; // ivar: _additionalActionItems
@property (readonly, nonatomic) NSUInteger additionalActionItemsCount;
@property (retain, nonatomic) _INPBRideCompletionStatus *completionStatus; // ivar: _completionStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBRideDriver *driver; // ivar: _driver
@property (retain, nonatomic) _INPBLocationValue *dropOffLocation; // ivar: _dropOffLocation
@property (retain, nonatomic) _INPBTimestamp *estimatedDropOffDate; // ivar: _estimatedDropOffDate
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate; // ivar: _estimatedPickupDate
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupEndDate; // ivar: _estimatedPickupEndDate
@property (readonly, nonatomic) BOOL hasCompletionStatus;
@property (readonly, nonatomic) BOOL hasDriver;
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (readonly, nonatomic) BOOL hasEstimatedDropOffDate;
@property (readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property (readonly, nonatomic) BOOL hasEstimatedPickupEndDate;
@property (nonatomic) BOOL hasPhase;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (readonly, nonatomic) BOOL hasRideIdentifier;
@property (readonly, nonatomic) BOOL hasRideOption;
@property (readonly, nonatomic) BOOL hasScheduledPickupTime;
@property (readonly, nonatomic) BOOL hasUserActivityForCancelingInApplication;
@property (readonly, nonatomic) BOOL hasVehicle;
@property (readonly) NSUInteger hash;
@property (nonatomic) int phase; // ivar: _phase
@property (retain, nonatomic) _INPBLocationValue *pickupLocation; // ivar: _pickupLocation
@property (copy, nonatomic) NSString *rideIdentifier; // ivar: _rideIdentifier
@property (retain, nonatomic) _INPBRideOption *rideOption; // ivar: _rideOption
@property (retain, nonatomic) _INPBDateTimeRangeValue *scheduledPickupTime; // ivar: _scheduledPickupTime
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBUserActivity *userActivityForCancelingInApplication; // ivar: _userActivityForCancelingInApplication
@property (retain, nonatomic) _INPBRideVehicle *vehicle; // ivar: _vehicle
@property (copy, nonatomic) NSArray *waypoints; // ivar: _waypoints
@property (readonly, nonatomic) NSUInteger waypointsCount;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)additionalActionItemsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)phaseAsString:(int)arg0 ;
-(id)waypointsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPhase:(id)arg0 ;
-(void)addAdditionalActionItems:(id)arg0 ;
-(void)addWaypoints:(id)arg0 ;
-(void)clearAdditionalActionItems;
-(void)clearWaypoints;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif