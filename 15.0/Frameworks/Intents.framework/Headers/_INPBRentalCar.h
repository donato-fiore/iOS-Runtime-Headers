// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBRENTALCAR_H
#define _INPBRENTALCAR_H

@class PBCodable, NSString;
@protocol _INPBRentalCar, NSSecureCoding, NSCopying;



@interface _INPBRentalCar : PBCodable <_INPBRentalCar, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMake;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasRentalCarDescription;
@property (readonly, nonatomic) BOOL hasRentalCompanyName;
@property (readonly, nonatomic) BOOL hasType;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *make; // ivar: _make
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *rentalCarDescription; // ivar: _rentalCarDescription
@property (copy, nonatomic) NSString *rentalCompanyName; // ivar: _rentalCompanyName
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type; // ivar: _type


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