// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRESERVATION_H
#define _INPBRESERVATION_H

@class PBCodable, NSArray, NSString;
@protocol _INPBReservation, NSSecureCoding, NSCopying;


#import "_INPBTimestamp.h"
#import "_INPBDataString.h"
#import "_INPBURLValue.h"

@interface _INPBReservation : PBCodable <_INPBReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSUInteger actionsCount;
@property (retain, nonatomic) _INPBTimestamp *bookingTime; // ivar: _bookingTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBookingTime;
@property (readonly, nonatomic) BOOL hasItemReference;
@property (readonly, nonatomic) BOOL hasReservationHolderName;
@property (readonly, nonatomic) BOOL hasReservationNumber;
@property (nonatomic) BOOL hasReservationStatus;
@property (readonly, nonatomic) BOOL hasUrl;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBDataString *itemReference; // ivar: _itemReference
@property (copy, nonatomic) NSString *reservationHolderName; // ivar: _reservationHolderName
@property (copy, nonatomic) NSString *reservationNumber; // ivar: _reservationNumber
@property (nonatomic) int reservationStatus; // ivar: _reservationStatus
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBURLValue *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)actionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)reservationStatusAsString:(int)arg0 ;
-(int)StringAsReservationStatus:(id)arg0 ;
-(void)addActions:(id)arg0 ;
-(void)clearActions;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif