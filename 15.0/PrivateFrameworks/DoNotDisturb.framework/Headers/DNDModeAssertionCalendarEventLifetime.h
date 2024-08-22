// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMODEASSERTIONCALENDAREVENTLIFETIME_H
#define DNDMODEASSERTIONCALENDAREVENTLIFETIME_H

@class NSString, NSDate;


#import "DNDModeAssertionLifetime.h"

@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSString *eventUniqueID; // ivar: _eventUniqueID
@property (readonly, copy, nonatomic) NSDate *occurrenceDate; // ivar: _occurrenceDate
@property (readonly, nonatomic, getter=isOnlyDuringEvent) BOOL onlyDuringEvent; // ivar: _onlyDuringEvent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)lifetimeType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventUniqueID:(id)arg0 occurrenceDate:(id)arg1 onlyDuringEvent:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif