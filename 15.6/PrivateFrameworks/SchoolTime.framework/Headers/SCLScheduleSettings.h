// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLSCHEDULESETTINGS_H
#define SCLSCHEDULESETTINGS_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLSchedule.h"

@interface SCLScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) SCLSchedule *schedule; // ivar: _schedule
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isActiveAtDate:(id)arg0 calendar:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg0 calendar:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)endTimeForDay:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSchoolModeScheduleSettings:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)recurrenceForActiveScheduleOnOrAfterDate:(id)arg0 calendar:(id)arg1 ;
-(id)startTimeForDay:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif