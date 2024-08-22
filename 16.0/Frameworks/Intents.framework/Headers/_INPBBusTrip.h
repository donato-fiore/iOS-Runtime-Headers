// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBBUSTRIP_H
#define _INPBBUSTRIP_H

@class PBCodable, NSString;
@protocol _INPBBusTrip, NSSecureCoding, NSCopying;


#import "_INPBLocationValue.h"
#import "_INPBDateTimeRange.h"

@interface _INPBBusTrip : PBCodable <_INPBBusTrip, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBLocationValue *arrivalBusStopLocation; // ivar: _arrivalBusStopLocation
@property (copy, nonatomic) NSString *arrivalPlatform; // ivar: _arrivalPlatform
@property (copy, nonatomic) NSString *busName; // ivar: _busName
@property (copy, nonatomic) NSString *busNumber; // ivar: _busNumber
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _INPBLocationValue *departureBusStopLocation; // ivar: _departureBusStopLocation
@property (copy, nonatomic) NSString *departurePlatform; // ivar: _departurePlatform
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArrivalBusStopLocation;
@property (readonly, nonatomic) BOOL hasArrivalPlatform;
@property (readonly, nonatomic) BOOL hasBusName;
@property (readonly, nonatomic) BOOL hasBusNumber;
@property (readonly, nonatomic) BOOL hasDepartureBusStopLocation;
@property (readonly, nonatomic) BOOL hasDeparturePlatform;
@property (readonly, nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasTripDuration;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *provider; // ivar: _provider
@property (readonly) Class superclass;
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