// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPRESOLVEDSLEEPSCHEDULEOCCURRENCE_H
#define HKSPRESOLVEDSLEEPSCHEDULEOCCURRENCE_H

@class NSDateInterval, NSString;
@protocol BSDescriptionProviding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKSPSleepEvent.h"
#import "HKSPSleepScheduleOccurrence.h"

@interface HKSPResolvedSleepScheduleOccurrence : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) HKSPSleepEvent *bedtimeEvent; // ivar: _bedtimeEvent
@property (readonly, nonatomic) NSDateInterval *bedtimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *occurrence; // ivar: _occurrence
@property (readonly, nonatomic) NSDateInterval *scheduledInterval;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKSPSleepEvent *wakeUpEvent; // ivar: _wakeUpEvent
@property (readonly, nonatomic) HKSPSleepEvent *windDownEvent; // ivar: _windDownEvent
@property (readonly, nonatomic) NSDateInterval *windDownInterval;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)generateOverrideOccurrenceForCurrentDate:(id)arg0 gregorianCalendar:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOccurrence:(id)arg0 wakeUpEvent:(id)arg1 bedtimeEvent:(id)arg2 windDownEvent:(id)arg3 ;
-(id)occurrenceByAdjustingEvent:(id)arg0 ;
-(id)occurrenceByRemovingEventWithIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif