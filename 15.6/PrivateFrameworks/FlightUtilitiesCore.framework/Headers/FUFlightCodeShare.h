// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUFLIGHTCODESHARE_H
#define FUFLIGHTCODESHARE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FUAirline.h"

@interface FUFlightCodeShare : NSObject <NSSecureCoding>



@property (retain) FUAirline *airline; // ivar: _airline
@property NSUInteger flightNumber; // ivar: _flightNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif