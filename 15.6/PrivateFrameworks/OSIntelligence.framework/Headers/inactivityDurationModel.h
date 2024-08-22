// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INACTIVITYDURATIONMODEL_H
#define INACTIVITYDURATIONMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface inactivityDurationModel : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromStart_time_sin:(CGFloat)arg0 start_time_cos:(CGFloat)arg1 start_dow_sin:(CGFloat)arg2 start_dow_cos:(CGFloat)arg3 all_dur_avg_2:(CGFloat)arg4 all_dur_std_2:(CGFloat)arg5 all_long_percent_2:(CGFloat)arg6 recent_dur_avg_2:(CGFloat)arg7 recent_dur_std_2:(CGFloat)arg8 recent_long_percent_2:(CGFloat)arg9 dow_dur_avg_2:(CGFloat)arg10 dow_dur_std_2:(CGFloat)arg11 dow_long_percent_2:(CGFloat)arg12 error:(*id)arg13 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif