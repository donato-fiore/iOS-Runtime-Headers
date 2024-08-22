// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCALORIEUTILS_H
#define CMCALORIEUTILS_H


#import <Foundation/Foundation.h>


@interface CMCalorieUtils : NSObject



+(BOOL)isAvailable;
+(id)lookupCalorieDataForCMWorkoutType:(NSInteger)arg0 duration:(CGFloat)arg1 error:(*id)arg2 ;
+(id)lookupCalorieDataForCMWorkoutType:(NSInteger)arg0 duration:(CGFloat)arg1 userInfo:(id)arg2 error:(*id)arg3 ;
+(struct CLBodyMetrics )CLBodyMetricsFromCMCalorieUserInfo:(id)arg0 error:(*id)arg1 ;


@end


#endif