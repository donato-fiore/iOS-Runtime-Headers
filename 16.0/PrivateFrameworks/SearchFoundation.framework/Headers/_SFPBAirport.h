// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBAIRPORT_H
#define _SFPBAIRPORT_H

@class PBCodable, NSString, NSData;
@protocol _SFPBAirport, NSSecureCoding;


#import "_SFPBLatLng.h"
#import "_SFPBTimeZone.h"

@interface _SFPBAirport : PBCodable <_SFPBAirport, NSSecureCoding>



@property (copy, nonatomic) NSString *city; // ivar: _city
@property (copy, nonatomic) NSString *code; // ivar: _code
@property (copy, nonatomic) NSString *country; // ivar: _country
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *district; // ivar: _district
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBLatLng *location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *postalCode; // ivar: _postalCode
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (copy, nonatomic) NSString *street; // ivar: _street
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBTimeZone *timezone; // ivar: _timezone


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif