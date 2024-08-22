// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBTRAINTRIP_H
#define _INPBTRAINTRIP_H

@class PBCodable, NSString;
@protocol _INPBTrainTrip, NSSecureCoding, NSCopying;


#import "_INPBLocationValue.h"
#import "_INPBDateTime.h"
#import "_INPBDateTimeRange.h"

@interface _INPBTrainTrip : PBCodable <_INPBTrainTrip, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *arrivalPlatform; // ivar: _arrivalPlatform
@property (retain, nonatomic) _INPBLocationValue *arrivalStationLocation; // ivar: _arrivalStationLocation
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *departurePlatform; // ivar: _departurePlatform
@property (retain, nonatomic) _INPBLocationValue *departureStationLocation; // ivar: _departureStationLocation
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArrivalPlatform;
@property (readonly, nonatomic) BOOL hasArrivalStationLocation;
@property (readonly, nonatomic) BOOL hasDeparturePlatform;
@property (readonly, nonatomic) BOOL hasDepartureStationLocation;
@property (readonly, nonatomic) BOOL hasOnlineCheckInTime;
@property (readonly, nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasTrainName;
@property (readonly, nonatomic) BOOL hasTrainNumber;
@property (readonly, nonatomic) BOOL hasTripDuration;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDateTime *onlineCheckInTime; // ivar: _onlineCheckInTime
@property (copy, nonatomic) NSString *provider; // ivar: _provider
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *trainName; // ivar: _trainName
@property (copy, nonatomic) NSString *trainNumber; // ivar: _trainNumber
@property (retain, nonatomic) _INPBDateTimeRange *tripDuration; // ivar: _tripDuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif