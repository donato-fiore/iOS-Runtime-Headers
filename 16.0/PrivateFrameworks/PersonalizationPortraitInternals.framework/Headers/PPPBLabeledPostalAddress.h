// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPPBLABELEDPOSTALADDRESS_H
#define PPPBLABELEDPOSTALADDRESS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBLabeledPostalAddress : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *city; // ivar: _city
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (readonly, nonatomic) BOOL hasCity;
@property (readonly, nonatomic) BOOL hasCountry;
@property (readonly, nonatomic) BOOL hasIsoCountryCode;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasPostalCode;
@property (readonly, nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasStreet;
@property (readonly, nonatomic) BOOL hasSubAdministrativeArea;
@property (readonly, nonatomic) BOOL hasSubLocality;
@property (retain, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (retain, nonatomic) NSString *street; // ivar: _street
@property (retain, nonatomic) NSString *subAdministrativeArea; // ivar: _subAdministrativeArea
@property (retain, nonatomic) NSString *subLocality; // ivar: _subLocality


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif