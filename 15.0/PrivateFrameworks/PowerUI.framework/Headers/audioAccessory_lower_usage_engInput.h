// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDIOACCESSORY_LOWER_USAGE_ENGINPUT_H
#define AUDIOACCESSORY_LOWER_USAGE_ENGINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface audioAccessory_lower_usage_engInput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat classic_time_between_uses_med_dur_1; // ivar: _classic_time_between_uses_med_dur_1
@property (nonatomic) CGFloat classic_time_between_uses_med_dur_2; // ivar: _classic_time_between_uses_med_dur_2
@property (nonatomic) CGFloat classic_time_between_uses_med_dur_24; // ivar: _classic_time_between_uses_med_dur_24
@property (nonatomic) CGFloat classic_time_between_uses_med_dur_4; // ivar: _classic_time_between_uses_med_dur_4
@property (nonatomic) CGFloat classic_time_between_uses_std_dur_1; // ivar: _classic_time_between_uses_std_dur_1
@property (nonatomic) CGFloat classic_time_between_uses_std_dur_2; // ivar: _classic_time_between_uses_std_dur_2
@property (nonatomic) CGFloat classic_time_between_uses_std_dur_24; // ivar: _classic_time_between_uses_std_dur_24
@property (nonatomic) CGFloat classic_time_between_uses_std_dur_4; // ivar: _classic_time_between_uses_std_dur_4
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat hour; // ivar: _hour
@property (nonatomic) CGFloat hour_plus_0; // ivar: _hour_plus_0
@property (nonatomic) CGFloat hour_plus_1; // ivar: _hour_plus_1
@property (nonatomic) CGFloat hour_plus_2; // ivar: _hour_plus_2
@property (nonatomic) CGFloat hour_plus_3; // ivar: _hour_plus_3
@property (nonatomic) CGFloat hour_plus_4; // ivar: _hour_plus_4
@property (nonatomic) CGFloat hour_plus_5; // ivar: _hour_plus_5
@property (nonatomic) CGFloat hours_until_use; // ivar: _hours_until_use
@property (nonatomic) CGFloat is_weekend; // ivar: _is_weekend
@property (nonatomic) CGFloat meaningful_undercharge_rolling_average; // ivar: _meaningful_undercharge_rolling_average


-(id)featureValueForName:(id)arg0 ;
-(id)initWithClassic_time_between_uses_med_dur_1:(CGFloat)arg0 classic_time_between_uses_med_dur_2:(CGFloat)arg1 classic_time_between_uses_med_dur_4:(CGFloat)arg2 classic_time_between_uses_med_dur_24:(CGFloat)arg3 classic_time_between_uses_std_dur_1:(CGFloat)arg4 classic_time_between_uses_std_dur_2:(CGFloat)arg5 classic_time_between_uses_std_dur_4:(CGFloat)arg6 classic_time_between_uses_std_dur_24:(CGFloat)arg7 hour:(CGFloat)arg8 is_weekend:(CGFloat)arg9 hour_plus_0:(CGFloat)arg10 hour_plus_1:(CGFloat)arg11 hour_plus_2:(CGFloat)arg12 hour_plus_3:(CGFloat)arg13 hour_plus_4:(CGFloat)arg14 hour_plus_5:(CGFloat)arg15 hours_until_use:(CGFloat)arg16 meaningful_undercharge_rolling_average:(CGFloat)arg17 ;


@end


#endif