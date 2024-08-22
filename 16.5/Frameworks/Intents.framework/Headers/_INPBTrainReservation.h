// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBTRAINRESERVATION_H
#define _INPBTRAINRESERVATION_H

@class PBCodable, NSString;
@protocol _INPBTrainReservation, NSSecureCoding, NSCopying;


#import "_INPBReservation.h"
#import "_INPBSeat.h"
#import "_INPBTrainTrip.h"

@interface _INPBTrainReservation : PBCodable <_INPBTrainReservation, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservedSeat;
@property (readonly, nonatomic) BOOL hasTrainTrip;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBReservation *reservation; // ivar: _reservation
@property (retain, nonatomic) _INPBSeat *reservedSeat; // ivar: _reservedSeat
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBTrainTrip *trainTrip; // ivar: _trainTrip


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