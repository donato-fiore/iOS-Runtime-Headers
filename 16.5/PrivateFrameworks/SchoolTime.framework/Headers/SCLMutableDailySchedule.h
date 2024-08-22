// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLMUTABLEDAILYSCHEDULE_H
#define SCLMUTABLEDAILYSCHEDULE_H



#import "SCLDailySchedule.h"

@interface SCLMutableDailySchedule : SCLDailySchedule



+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)removeScheduleForDay:(NSInteger)arg0 ;
-(void)setStartTime:(id)arg0 endTime:(id)arg1 forDay:(NSInteger)arg2 ;


@end


#endif