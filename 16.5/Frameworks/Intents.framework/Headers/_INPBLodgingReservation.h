// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBLODGINGRESERVATION_H
#define _INPBLODGINGRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBLodgingReservation, NSSecureCoding, NSCopying;


#import "_INPBLocation.h"
#import "_INPBInteger.h"
#import "_INPBReservation.h"
#import "_INPBDateTimeRange.h"

@interface _INPBLodgingReservation : PBCodable <_INPBLodgingReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLodgingBusinessLocation;
@property (readonly, nonatomic) BOOL hasNumberOfAdults;
@property (readonly, nonatomic) BOOL hasNumberOfChildren;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservationDuration;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocation *lodgingBusinessLocation; // ivar: _lodgingBusinessLocation
@property (retain, nonatomic) _INPBInteger *numberOfAdults; // ivar: _numberOfAdults
@property (retain, nonatomic) _INPBInteger *numberOfChildren; // ivar: _numberOfChildren
@property (retain, nonatomic) _INPBReservation *reservation; // ivar: _reservation
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration; // ivar: _reservationDuration
@property (readonly) Class superclass;


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