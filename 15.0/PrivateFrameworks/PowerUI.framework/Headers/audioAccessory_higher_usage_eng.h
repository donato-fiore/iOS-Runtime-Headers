// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUDIOACCESSORY_HIGHER_USAGE_ENG_H
#define AUDIOACCESSORY_HIGHER_USAGE_ENG_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface audioAccessory_higher_usage_eng : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromClassic_time_between_uses_med_dur_1:(CGFloat)arg0 classic_time_between_uses_med_dur_2:(CGFloat)arg1 classic_time_between_uses_med_dur_4:(CGFloat)arg2 classic_time_between_uses_med_dur_24:(CGFloat)arg3 classic_time_between_uses_std_dur_1:(CGFloat)arg4 classic_time_between_uses_std_dur_2:(CGFloat)arg5 classic_time_between_uses_std_dur_4:(CGFloat)arg6 classic_time_between_uses_std_dur_24:(CGFloat)arg7 hour:(CGFloat)arg8 is_weekend:(CGFloat)arg9 hour_plus_0:(CGFloat)arg10 hour_plus_1:(CGFloat)arg11 hour_plus_2:(CGFloat)arg12 hour_plus_3:(CGFloat)arg13 hour_plus_4:(CGFloat)arg14 hour_plus_5:(CGFloat)arg15 hours_until_use:(CGFloat)arg16 meaningful_undercharge_rolling_average:(CGFloat)arg17 error:(*id)arg18 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif