// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBFLIGHT_H
#define _SFPBFLIGHT_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBFlight, NSSecureCoding;



@interface _SFPBFlight : PBCodable <_SFPBFlight, NSSecureCoding>



@property (copy, nonatomic) NSString *carrierCode; // ivar: _carrierCode
@property (copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (copy, nonatomic) NSString *carrierPhoneNumber; // ivar: _carrierPhoneNumber
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *flightID; // ivar: _flightID
@property (copy, nonatomic) NSString *flightNumber; // ivar: _flightNumber
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *legs; // ivar: _legs
@property (copy, nonatomic) NSString *operatorCarrierCode; // ivar: _operatorCarrierCode
@property (copy, nonatomic) NSString *operatorFlightNumber; // ivar: _operatorFlightNumber
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)legsAtIndex:(NSUInteger)arg0 ;
-(void)addLegs:(id)arg0 ;
-(void)clearLegs;
-(void)writeTo:(id)arg0 ;


@end


#endif