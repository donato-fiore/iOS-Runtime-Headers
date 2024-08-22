// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INFLIGHT_H
#define INFLIGHT_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INAirline.h"
#import "INAirportGate.h"
#import "INDateComponentsRange.h"

@interface INFlight : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INAirline *airline; // ivar: _airline
@property (readonly, copy, nonatomic) INAirportGate *arrivalAirportGate; // ivar: _arrivalAirportGate
@property (readonly, copy, nonatomic) INDateComponentsRange *boardingTime; // ivar: _boardingTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INAirportGate *departureAirportGate; // ivar: _departureAirportGate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INDateComponentsRange *flightDuration; // ivar: _flightDuration
@property (readonly, copy, nonatomic) NSString *flightNumber; // ivar: _flightNumber
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithAirline:(id)arg0 flightNumber:(id)arg1 boardingTime:(id)arg2 flightDuration:(id)arg3 departureAirportGate:(id)arg4 arrivalAirportGate:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif