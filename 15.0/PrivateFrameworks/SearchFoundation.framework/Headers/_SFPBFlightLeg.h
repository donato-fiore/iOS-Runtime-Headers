// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBFLIGHTLEG_H
#define _SFPBFLIGHTLEG_H

@class PBCodable, NSString, NSData;
@protocol _SFPBFlightLeg, NSSecureCoding;


#import "_SFPBDate.h"
#import "_SFPBAirport.h"

@interface _SFPBFlightLeg : PBCodable <_SFPBFlightLeg, NSSecureCoding>



@property (retain, nonatomic) _SFPBDate *arrivalActualTime; // ivar: _arrivalActualTime
@property (retain, nonatomic) _SFPBAirport *arrivalAirport; // ivar: _arrivalAirport
@property (copy, nonatomic) NSString *arrivalGate; // ivar: _arrivalGate
@property (retain, nonatomic) _SFPBDate *arrivalGateTime; // ivar: _arrivalGateTime
@property (retain, nonatomic) _SFPBDate *arrivalPublishedTime; // ivar: _arrivalPublishedTime
@property (retain, nonatomic) _SFPBDate *arrivalRunwayTime; // ivar: _arrivalRunwayTime
@property (copy, nonatomic) NSString *arrivalTerminal; // ivar: _arrivalTerminal
@property (copy, nonatomic) NSString *baggageClaim; // ivar: _baggageClaim
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _SFPBDate *departureActualTime; // ivar: _departureActualTime
@property (retain, nonatomic) _SFPBAirport *departureAirport; // ivar: _departureAirport
@property (copy, nonatomic) NSString *departureGate; // ivar: _departureGate
@property (retain, nonatomic) _SFPBDate *departureGateClosedTime; // ivar: _departureGateClosedTime
@property (retain, nonatomic) _SFPBDate *departurePublishedTime; // ivar: _departurePublishedTime
@property (retain, nonatomic) _SFPBDate *departureRunwayTime; // ivar: _departureRunwayTime
@property (copy, nonatomic) NSString *departureTerminal; // ivar: _departureTerminal
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _SFPBAirport *divertedAirport; // ivar: _divertedAirport
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif