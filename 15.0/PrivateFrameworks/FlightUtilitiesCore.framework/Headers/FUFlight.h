// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUFLIGHT_H
#define FUFLIGHT_H

@class NSArray, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FUAirline.h"
#import "FUFlightStep.h"

@interface FUFlight : NSObject <NSCopying, NSSecureCoding>



@property (retain) FUAirline *airline; // ivar: _airline
@property (retain, nonatomic) NSArray *allLegs; // ivar: _allLegs
@property (readonly) FUFlightStep *arrival;
@property NSUInteger arrivalLegIndex; // ivar: _arrivalLegIndex
@property (retain) NSString *cancellationMessage; // ivar: _cancellationMessage
@property (retain) NSArray *codeShares; // ivar: _codeShares
@property (readonly) FUFlightStep *departure;
@property NSUInteger departureLegIndex; // ivar: _departureLegIndex
@property (retain) FUAirline *displayAirline; // ivar: _displayAirline
@property (readonly) NSString *displayFlightCode;
@property NSUInteger displayFlightNumber; // ivar: _displayFlightNumber
@property (readonly) CGFloat duration;
@property (retain) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly) NSString *flightCode;
@property (retain) NSString *flightIdentifier; // ivar: _flightIdentifier
@property NSUInteger flightNumber; // ivar: _flightNumber
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain) NSArray *legs; // ivar: _legs
@property (retain) NSString *queriedAirlineTitle; // ivar: _queriedAirlineTitle
@property (retain) NSString *rawResponse; // ivar: _rawResponse
@property (readonly) NSInteger status;


+(BOOL)supportsSecureCoding;
+(id)timeFormatterForIdentifier;
+(void)loadFlightsWithNumber:(NSUInteger)arg0 airlineCode:(id)arg1 date:(id)arg2 dateType:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstLeg;
-(id)initWithCoder:(id)arg0 ;
-(id)lastLeg;
-(id)relevantLeg;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif