// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INACTIVITYENGAGEMODEL_H
#define INACTIVITYENGAGEMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface inactivityEngageModel : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)URLOfModelInThisBundle;
+(void)loadContentsOfURL:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
+(void)loadWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithMLModel:(id)arg0 ;
-(id)predictionFromAll_dur_avg_2:(CGFloat)arg0 all_dur_std_2:(CGFloat)arg1 all_long_percent_2:(CGFloat)arg2 recent_dur_avg_2:(CGFloat)arg3 recent_dur_std_2:(CGFloat)arg4 recent_long_percent_2:(CGFloat)arg5 dow_dur_avg_2:(CGFloat)arg6 dow_dur_std_2:(CGFloat)arg7 dow_long_percent_2:(CGFloat)arg8 start_time_sin:(CGFloat)arg9 start_time_cos:(CGFloat)arg10 start_dow_sin:(CGFloat)arg11 start_dow_cos:(CGFloat)arg12 error:(*id)arg13 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif