// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDACTIVITYCACHEACTIVESOURCECALCULATOR_H
#define HDACTIVITYCACHEACTIVESOURCECALCULATOR_H


#import <Foundation/Foundation.h>


@interface HDActivityCacheActiveSourceCalculator : NSObject {
    NSInteger _baseSourceIdentifier;
    vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> _workouts;
    ? _activationLogEntries;
}




-(id)init;
-(struct HDActivityCacheActiveSource )_baseActiveSource;
-(struct vector<HDActivityCacheActiveSource, std::allocator<HDActivityCacheActiveSource>> )createActiveSourceLog;
-(void)setActivationLogEntries:(*void)arg0 ;
-(void)setLocalDeviceSourceIdentifier:(NSInteger)arg0 ;
-(void)setWorkouts:(*void)arg0 ;


@end


#endif