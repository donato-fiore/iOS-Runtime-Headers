// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBRIDEVEHICLE_H
#define _INPBRIDEVEHICLE_H

@class PBCodable, NSString, GEOLocation;
@protocol _INPBRideVehicle, NSSecureCoding, NSCopying;


#import "_INPBImageValue.h"

@interface _INPBRideVehicle : PBCodable <_INPBRideVehicle, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (readonly, nonatomic) BOOL hasMapAnnotationImage;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasRegistrationPlate;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOLocation *location; // ivar: _location
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) _INPBImageValue *mapAnnotationImage; // ivar: _mapAnnotationImage
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *registrationPlate; // ivar: _registrationPlate
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