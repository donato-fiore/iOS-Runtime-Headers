// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLDAILYSCHEDULE_H
#define SCLDAILYSCHEDULE_H

@class NSMutableDictionary;


#import "SCLSchedule.h"

@interface SCLDailySchedule : SCLSchedule

@property (retain, nonatomic) NSMutableDictionary *dayMap; // ivar: _dayMap


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)endTimeForDay:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSchedule:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)recurrences;
-(id)scheduleForDay:(NSInteger)arg0 ;
-(id)startTimeForDay:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif