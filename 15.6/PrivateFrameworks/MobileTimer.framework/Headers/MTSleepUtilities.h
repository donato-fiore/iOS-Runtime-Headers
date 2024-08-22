// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSLEEPUTILITIES_H
#define MTSLEEPUTILITIES_H


#import <Foundation/Foundation.h>


@interface MTSleepUtilities : NSObject



+(NSUInteger)alarmRepeatScheduleFrom:(NSUInteger)arg0 ;
+(NSUInteger)playOptionsForOccurrence:(id)arg0 ;
+(id)alarmFromSleepOccurrence:(id)arg0 scheduleEnabled:(BOOL)arg1 keepOffUntilDate:(id)arg2 ;


@end


#endif