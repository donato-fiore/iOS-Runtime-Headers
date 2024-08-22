// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMODEASSERTIONSCHEDULELIFETIME_H
#define DNDMODEASSERTIONSCHEDULELIFETIME_H

@class NSString;


#import "DNDModeAssertionLifetime.h"

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, nonatomic) NSUInteger behavior; // ivar: _behavior
@property (readonly, copy, nonatomic) NSString *scheduleIdentifier; // ivar: _scheduleIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lifetimeType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduleIdentifier:(id)arg0 behavior:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif