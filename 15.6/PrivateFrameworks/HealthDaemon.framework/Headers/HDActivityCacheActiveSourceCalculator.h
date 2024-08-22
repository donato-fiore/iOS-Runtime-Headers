// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDACTIVITYCACHEACTIVESOURCECALCULATOR_H
#define HDACTIVITYCACHEACTIVESOURCECALCULATOR_H


#import <Foundation/Foundation.h>


@interface HDActivityCacheActiveSourceCalculator : NSObject {
    vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> _workouts;
    ? _activationLogEntries;
}




-(struct HDActivityCacheActiveSource )_baseActiveSource;
-(struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> )createActiveSourceLog;
-(void)setActivationLogEntries:(*void)arg0 ;
-(void)setWorkouts:(*void)arg0 ;


@end


#endif