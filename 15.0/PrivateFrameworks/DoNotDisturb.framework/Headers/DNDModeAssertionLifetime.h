// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMODEASSERTIONLIFETIME_H
#define DNDMODEASSERTIONLIFETIME_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DNDModeAssertionLifetime : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger lifetimeType;


+(BOOL)supportsSecureCoding;
+(id)_secureCodingLifetimeClasses;
+(id)lifetimeForUserRequest;
+(id)lifetimeMatchingScheduleWithIdentifier:(id)arg0 ;
+(id)lifetimeUntilEndOfCalendarEventWithUniqueID:(id)arg0 occurrenceDate:(id)arg1 ;
+(id)lifetimeUntilEndOfScheduleWithIdentifier:(id)arg0 ;
+(id)lifetimeWithCalendarEventUniqueID:(id)arg0 occurrenceDate:(id)arg1 ;
+(id)lifetimeWithCurrentLocation;
+(id)lifetimeWithDateInterval:(id)arg0 ;
+(id)lifetimeWithDuration:(CGFloat)arg0 ;
+(id)lifetimeWithExplicitRegion:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif