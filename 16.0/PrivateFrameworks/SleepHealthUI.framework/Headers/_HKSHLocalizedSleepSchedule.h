// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSHLOCALIZEDSLEEPSCHEDULE_H
#define _HKSHLOCALIZEDSLEEPSCHEDULE_H

@class NSAttributedString;

#import <Foundation/Foundation.h>


@interface _HKSHLocalizedSleepSchedule : NSObject

@property (readonly, nonatomic) NSAttributedString *localizedBedTime; // ivar: _localizedBedTime
@property (readonly, nonatomic) NSAttributedString *localizedWakeTime; // ivar: _localizedWakeTime


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithSleepSchedule:(id)arg0 calendar:(id)arg1 dayStart:(id)arg2 timeFont:(id)arg3 amPmFont:(id)arg4 ;


@end


#endif