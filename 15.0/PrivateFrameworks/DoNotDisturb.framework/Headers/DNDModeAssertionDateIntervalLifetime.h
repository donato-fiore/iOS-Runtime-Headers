// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMODEASSERTIONDATEINTERVALLIFETIME_H
#define DNDMODEASSERTIONDATEINTERVALLIFETIME_H

@class NSDateInterval;


#import "DNDModeAssertionLifetime.h"

@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval


+(BOOL)supportsSecureCoding;
-(BOOL)isActiveForDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lifetimeType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif