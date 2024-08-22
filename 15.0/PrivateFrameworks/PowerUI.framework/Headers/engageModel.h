// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENGAGEMODEL_H
#define ENGAGEMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface engageModel : NSObject

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
-(id)predictionFromPlugin_battery_level:(CGFloat)arg0 time_from_plugin:(CGFloat)arg1 med_dur_1:(CGFloat)arg2 med_dur_2:(CGFloat)arg3 med_dur_4:(CGFloat)arg4 med_dur_8:(CGFloat)arg5 med_dur_16:(CGFloat)arg6 med_dur_24:(CGFloat)arg7 cnt_dur_1:(CGFloat)arg8 cnt_dur_2:(CGFloat)arg9 cnt_dur_4:(CGFloat)arg10 cnt_dur_8:(CGFloat)arg11 cnt_dur_16:(CGFloat)arg12 cnt_dur_24:(CGFloat)arg13 std_dur_1:(CGFloat)arg14 std_dur_2:(CGFloat)arg15 std_dur_4:(CGFloat)arg16 std_dur_8:(CGFloat)arg17 std_dur_16:(CGFloat)arg18 std_dur_24:(CGFloat)arg19 weekday_med_dur_1:(CGFloat)arg20 weekday_med_dur_2:(CGFloat)arg21 weekday_med_dur_4:(CGFloat)arg22 weekday_med_dur_8:(CGFloat)arg23 weekday_med_dur_24:(CGFloat)arg24 weekday_std_dur_4:(CGFloat)arg25 error:(*id)arg26 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif