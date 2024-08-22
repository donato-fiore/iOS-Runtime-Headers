// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSSCHEDULESETTINGS_H
#define DNDSSCHEDULESETTINGS_H

@class DNDScheduleSettings, NSDate;



@interface DNDSScheduleSettings : DNDScheduleSettings

@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate


+(BOOL)supportsSecureCoding;
+(id)defaultScheduleSettings;
+(id)settingsForRecord:(id)arg0 ;
+(id)settingsWithClientSettings:(id)arg0 creationDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(id)description;
-(id)initWithScheduleEnabledSetting:(NSUInteger)arg0 timePeriod:(id)arg1 bedtimeBehaviorEnabledSetting:(NSUInteger)arg2 creationDate:(id)arg3 ;
-(id)makeRecord;
-(id)replacementObjectForCoder:(id)arg0 ;


@end


#endif