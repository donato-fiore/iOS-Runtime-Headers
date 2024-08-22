// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRETRIEVEPARKINGLOCATIONINTENTRESPONSE_H
#define _INPBRETRIEVEPARKINGLOCATIONINTENTRESPONSE_H

@class PBCodable, NSString;
@protocol _INPBRetrieveParkingLocationIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBLocation.h"
#import "_INPBString.h"

@interface _INPBRetrieveParkingLocationIntentResponse : PBCodable <_INPBRetrieveParkingLocationIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasParkingLocation;
@property (readonly, nonatomic) BOOL hasParkingNote;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBLocation *parkingLocation; // ivar: _parkingLocation
@property (retain, nonatomic) _INPBString *parkingNote; // ivar: _parkingNote
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