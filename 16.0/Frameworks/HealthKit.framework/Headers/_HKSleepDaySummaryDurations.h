// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSLEEPDAYSUMMARYDURATIONS_H
#define _HKSLEEPDAYSUMMARYDURATIONS_H


#import <Foundation/Foundation.h>


@interface _HKSleepDaySummaryDurations : NSObject

@property (readonly, nonatomic) CGFloat awakeDuration; // ivar: _awakeDuration
@property (readonly, nonatomic) CGFloat coreSleepDuration; // ivar: _coreSleepDuration
@property (readonly, nonatomic) CGFloat deepSleepDuration; // ivar: _deepSleepDuration
@property (readonly, nonatomic) CGFloat inBedDuration; // ivar: _inBedDuration
@property (readonly, nonatomic) CGFloat remSleepDuration; // ivar: _remSleepDuration
@property (readonly, nonatomic) CGFloat sleepDuration; // ivar: _sleepDuration
@property (readonly, nonatomic) CGFloat unspecifiedSleepDuration; // ivar: _unspecifiedSleepDuration


+(id)durationsFromSleepPeriods:(id)arg0 dateInterval:(id)arg1 ;
-(id)initWithInBedDuration:(CGFloat)arg0 sleepDuration:(CGFloat)arg1 unspecifiedSleepDuration:(CGFloat)arg2 coreSleepDuration:(CGFloat)arg3 deepSleepDuration:(CGFloat)arg4 remSleepDuration:(CGFloat)arg5 awakeDuration:(CGFloat)arg6 ;


@end


#endif