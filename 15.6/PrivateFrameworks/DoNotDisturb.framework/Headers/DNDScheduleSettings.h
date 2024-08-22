// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSCHEDULESETTINGS_H
#define DNDSCHEDULESETTINGS_H

@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DNDScheduleTimePeriod.h"

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger bedtimeBehaviorEnabledSetting; // ivar: _bedtimeBehaviorEnabledSetting
@property (readonly, nonatomic) NSUInteger scheduleEnabledSetting; // ivar: _scheduleEnabledSetting
@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod; // ivar: _timePeriod


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScheduleEnabledSetting:(NSUInteger)arg0 timePeriod:(id)arg1 bedtimeBehaviorEnabledSetting:(NSUInteger)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif