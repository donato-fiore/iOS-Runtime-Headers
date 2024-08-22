// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBGETRESERVATIONDETAILSINTENTRESPONSE_H
#define _INPBGETRESERVATIONDETAILSINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBGetReservationDetailsIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBGetReservationDetailsIntentResponse : PBCodable <_INPBGetReservationDetailsIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *reservations; // ivar: _reservations
@property (readonly, nonatomic) NSUInteger reservationsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)reservationsAtIndex:(NSUInteger)arg0 ;
-(void)addReservations:(id)arg0 ;
-(void)clearReservations;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif