// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHEDULEATTRIBUTES_H
#define SCLSCHEDULEATTRIBUTES_H

@class NSError;

#import <Foundation/Foundation.h>

#import "SCLSchedule.h"

@interface SCLScheduleAttributes : NSObject

@property (readonly, nonatomic) BOOL hasSingleIntervalPerDay; // ivar: _hasSingleIntervalPerDay
@property (readonly, nonatomic) BOOL hasUniformIntervals; // ivar: _hasUniformIntervals
@property (readonly, nonatomic) SCLSchedule *schedule; // ivar: _schedule
@property (readonly, nonatomic) NSInteger scheduledDays; // ivar: _scheduledDays
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid
@property (readonly, nonatomic) NSError *validationError; // ivar: _validationError
@property (readonly, nonatomic) NSUInteger validationOptions; // ivar: _validationOptions


-(id)initWithSchedule:(id)arg0 ;
-(id)initWithSchedule:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_prepareWithRecurrences:(id)arg0 ;


@end


#endif