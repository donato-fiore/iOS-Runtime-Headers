// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFFLIGHTLEG_H
#define SFFLIGHTLEG_H

@class NSDate, NSString, NSDictionary, NSData;
@protocol SFFlightLeg, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFAirport.h"

@interface SFFlightLeg : NSObject <SFFlightLeg, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSDate *arrivalActualTime; // ivar: _arrivalActualTime
@property (retain, nonatomic) SFAirport *arrivalAirport; // ivar: _arrivalAirport
@property (copy, nonatomic) NSString *arrivalGate; // ivar: _arrivalGate
@property (copy, nonatomic) NSDate *arrivalGateTime; // ivar: _arrivalGateTime
@property (copy, nonatomic) NSDate *arrivalPublishedTime; // ivar: _arrivalPublishedTime
@property (copy, nonatomic) NSDate *arrivalRunwayTime; // ivar: _arrivalRunwayTime
@property (copy, nonatomic) NSString *arrivalTerminal; // ivar: _arrivalTerminal
@property (copy, nonatomic) NSString *baggageClaim; // ivar: _baggageClaim
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *departureActualTime; // ivar: _departureActualTime
@property (retain, nonatomic) SFAirport *departureAirport; // ivar: _departureAirport
@property (copy, nonatomic) NSString *departureGate; // ivar: _departureGate
@property (copy, nonatomic) NSDate *departureGateClosedTime; // ivar: _departureGateClosedTime
@property (copy, nonatomic) NSDate *departurePublishedTime; // ivar: _departurePublishedTime
@property (copy, nonatomic) NSDate *departureRunwayTime; // ivar: _departureRunwayTime
@property (copy, nonatomic) NSString *departureTerminal; // ivar: _departureTerminal
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) SFAirport *divertedAirport; // ivar: _divertedAirport
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int status; // ivar: _status
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)hasStatus;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif