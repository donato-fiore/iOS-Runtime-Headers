// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLUNLOCKHISTORYITEM_H
#define SCLUNLOCKHISTORYITEM_H

@class NSCalendar, NSTimeZone, NSDateInterval;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLScheduleRecurrence.h"
#import "SCLScheduleTime.h"

@interface SCLUnlockHistoryItem : NSObject <NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) SCLScheduleRecurrence *effectiveRecurrence; // ivar: _effectiveRecurrence
@property (readonly, nonatomic) SCLScheduleTime *scheduleEndTime; // ivar: _scheduleEndTime
@property (readonly, nonatomic) SCLScheduleTime *scheduleStartTime; // ivar: _scheduleStartTime
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, nonatomic) NSDateInterval *unlockedInterval; // ivar: _unlockedInterval


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(id)arg0 calendar:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithInterval:(id)arg0 calendar:(id)arg1 timeZone:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 ;
-(void)_loadEffectiveRecurrence;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif