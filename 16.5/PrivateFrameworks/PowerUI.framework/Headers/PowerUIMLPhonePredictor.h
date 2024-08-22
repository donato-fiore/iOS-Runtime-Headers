// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIMLPHONEPREDICTOR_H
#define POWERUIMLPHONEPREDICTOR_H



#import "PowerUIMLTwoStageModelPredictor.h"

@interface PowerUIMLPhonePredictor : PowerUIMLTwoStageModelPredictor



-(id)getClassifierFeatureProviderForHistoricEvents:(id)arg0 ;
-(id)getEngagementStreamEvents:(id)arg0 forDataVersion:(NSUInteger)arg1 ;
-(id)getInputFeatures:(CGFloat)arg0 events:(id)arg1 pluginBatteryLevel:(NSUInteger)arg2 timeFromPlugin:(CGFloat)arg3 pluginDate:(id)arg4 withLog:(id)arg5 ;
-(id)getMultiArrayForFeatureDict:(id)arg0 ;
-(id)getRegressorFeatureProviderForHistoricEvents:(id)arg0 ;
-(int)modelDataVersion;
-(void)classifierModelUpdateComplete:(id)arg0 withModelURL:(id)arg1 ;
-(void)regressorModelUpdateComplete:(id)arg0 withModelURL:(id)arg1 ;
-(void)updateClassifierModelWithNewData:(id)arg0 forDataVersion:(NSUInteger)arg1 withModelURL:(id)arg2 ;
-(void)updateRegressorModelWithNewData:(id)arg0 forDataVersion:(NSUInteger)arg1 withModelURL:(id)arg2 ;


@end


#endif