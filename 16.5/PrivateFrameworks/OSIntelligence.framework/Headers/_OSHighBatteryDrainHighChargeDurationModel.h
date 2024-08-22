// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OSHIGHBATTERYDRAINHIGHCHARGEDURATIONMODEL_H
#define _OSHIGHBATTERYDRAINHIGHCHARGEDURATIONMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface _OSHighBatteryDrainHighChargeDurationModel : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)urlOfModelInThisBundle;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromActivity:(CGFloat)arg0 n_events_prior:(CGFloat)arg1 batt_weekday_percentile_prior:(CGFloat)arg2 dist_from_total_mean:(CGFloat)arg3 drain_since_last_plugin:(CGFloat)arg4 max_batt_12:(CGFloat)arg5 mean_activity:(CGFloat)arg6 mean_daily_plugins:(CGFloat)arg7 net_drain_since_max:(CGFloat)arg8 recent_drain_1:(CGFloat)arg9 recent_drain_15min:(CGFloat)arg10 recent_drain_3:(CGFloat)arg11 start_time_secs:(CGFloat)arg12 user_mean_drain:(CGFloat)arg13 value:(CGFloat)arg14 error:(*id)arg15 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif