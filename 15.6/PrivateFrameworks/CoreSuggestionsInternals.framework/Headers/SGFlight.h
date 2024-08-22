// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGFLIGHT_H
#define SGFLIGHT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SGFlight : NSObject

@property (readonly, nonatomic) NSString *airline; // ivar: _airline
@property (readonly, nonatomic) NSString *arrivalAirportDescription; // ivar: _arrivalAirportDescription
@property (readonly, nonatomic) NSString *departureAirportDescription; // ivar: _departureAirportDescription
@property (readonly, nonatomic) NSString *flightno; // ivar: _flightno


-(id)description;
-(id)initWithCarrier:(id)arg0 flightNo:(id)arg1 depDesc:(id)arg2 arrDesc:(id)arg3 ;


@end


#endif