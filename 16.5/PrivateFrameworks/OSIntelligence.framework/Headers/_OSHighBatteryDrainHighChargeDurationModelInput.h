// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSHIGHBATTERYDRAINHIGHCHARGEDURATIONMODELINPUT_H
#define _OSHIGHBATTERYDRAINHIGHCHARGEDURATIONMODELINPUT_H

@class NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface _OSHighBatteryDrainHighChargeDurationModelInput : NSObject <MLFeatureProvider>



@property (nonatomic) CGFloat activity; // ivar: _activity
@property (nonatomic) CGFloat batt_weekday_percentile_prior; // ivar: _batt_weekday_percentile_prior
@property (nonatomic) CGFloat dist_from_total_mean; // ivar: _dist_from_total_mean
@property (nonatomic) CGFloat drain_since_last_plugin; // ivar: _drain_since_last_plugin
@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) CGFloat max_batt_12; // ivar: _max_batt_12
@property (nonatomic) CGFloat mean_activity; // ivar: _mean_activity
@property (nonatomic) CGFloat mean_daily_plugins; // ivar: _mean_daily_plugins
@property (nonatomic) CGFloat n_events_prior; // ivar: _n_events_prior
@property (nonatomic) CGFloat net_drain_since_max; // ivar: _net_drain_since_max
@property (nonatomic) CGFloat recent_drain_1; // ivar: _recent_drain_1
@property (nonatomic) CGFloat recent_drain_15min; // ivar: _recent_drain_15min
@property (nonatomic) CGFloat recent_drain_3; // ivar: _recent_drain_3
@property (nonatomic) CGFloat start_time_secs; // ivar: _start_time_secs
@property (nonatomic) CGFloat user_mean_drain; // ivar: _user_mean_drain
@property (nonatomic) CGFloat value; // ivar: _value


-(id)featureValueForName:(id)arg0 ;
-(id)initWithActivity:(CGFloat)arg0 n_events_prior:(CGFloat)arg1 batt_weekday_percentile_prior:(CGFloat)arg2 dist_from_total_mean:(CGFloat)arg3 drain_since_last_plugin:(CGFloat)arg4 max_batt_12:(CGFloat)arg5 mean_activity:(CGFloat)arg6 mean_daily_plugins:(CGFloat)arg7 net_drain_since_max:(CGFloat)arg8 recent_drain_1:(CGFloat)arg9 recent_drain_15min:(CGFloat)arg10 recent_drain_3:(CGFloat)arg11 start_time_secs:(CGFloat)arg12 user_mean_drain:(CGFloat)arg13 value:(CGFloat)arg14 ;


@end


#endif