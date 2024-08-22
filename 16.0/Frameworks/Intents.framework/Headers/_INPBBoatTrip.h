// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBBOATTRIP_H
#define _INPBBOATTRIP_H

@class PBCodable, NSString;
@protocol _INPBBoatTrip, NSSecureCoding, NSCopying;


#import "_INPBLocationValue.h"
#import "_INPBDateTimeRange.h"

@interface _INPBBoatTrip : PBCodable <_INPBBoatTrip, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBLocationValue *arrivalBoatTerminalLocation; // ivar: _arrivalBoatTerminalLocation
@property (copy, nonatomic) NSString *boatName; // ivar: _boatName
@property (copy, nonatomic) NSString *boatNumber; // ivar: _boatNumber
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _INPBLocationValue *departureBoatTerminalLocation; // ivar: _departureBoatTerminalLocation
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasArrivalBoatTerminalLocation;
@property (readonly, nonatomic) BOOL hasBoatName;
@property (readonly, nonatomic) BOOL hasBoatNumber;
@property (readonly, nonatomic) BOOL hasDepartureBoatTerminalLocation;
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