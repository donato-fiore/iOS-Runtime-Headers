// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPFLIGHTAIRPORT_H
#define PPFLIGHTAIRPORT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PPFlightAirport : NSObject

@property (readonly, nonatomic) NSString *iataCode; // ivar: _iataCode
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned char role; // ivar: _role


-(BOOL)isEqualToPPFlightAirport:(id)arg0 ;
-(id)initWithName:(id)arg0 iataCode:(id)arg1 role:(unsigned char)arg2 ;


@end


#endif