// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIWORKOUTSETTINGSMANAGER_H
#define FIUIWORKOUTSETTINGSMANAGER_H

@class NSMutableDictionary, NSMutableArray, NPSDomainAccessor, NPSManager;

#import <Foundation/Foundation.h>

#import "FIUIWorkoutDefaultMetricsProvider.h"
#import "FIUIWorkoutActivityType.h"

@interface FIUIWorkoutSettingsManager : NSObject {
    NSInteger _activityMoveMode;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
}


@property (readonly, nonatomic) FIUIWorkoutDefaultMetricsProvider *defaultMetricsProvider; // ivar: _defaultMetricsProvider
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (retain, nonatomic) NPSManager *syncManager; // ivar: _syncManager
@property (readonly, nonatomic) FIUIWorkoutActivityType *workoutActivityType; // ivar: _workoutActivityType


+(NSInteger)readWorkoutMetricsActivityMoveMode;
+(void)obliterateUserConfiguredWorkoutMetrics;
-(BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)arg0 workoutActivityType:(id)arg1 ;
-(BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)arg0 enabledMetrics:(id)arg1 settingOverridesByMetric:(id)arg2 metricFormatVersion:(id)arg3 ;
-(BOOL)_useUserConfiguredWorkoutMetricsForMetricsActivityMoveMode:(NSInteger)arg0 activityMoveMode:(NSInteger)arg1 ;
-(BOOL)isMetricEnabled:(NSUInteger)arg0 ;
-(NSInteger)disabledIndexForMetricType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithWorkoutActivityType:(id)arg0 activityMoveMode:(NSInteger)arg1 ;
-(id)orderedDisabledMetrics;
-(id)orderedEnabledAndSupportedMetrics;
-(id)orderedEnabledMetrics;
-(id)orderedSupportedMetrics;
-(id)supportedMetrics;
-(void)_clearOldMetricsIfNeeded;
-(void)_migratePaceViewSettingIfNeeded;
-(void)_readFromDomain;
-(void)_writeToDomainWithShouldUpdateVersion:(BOOL)arg0 ;
-(void)assignMetricType:(NSUInteger)arg0 toSlotIndex:(NSInteger)arg1 ;
-(void)moveMetricType:(NSUInteger)arg0 toEnabledIndex:(NSInteger)arg1 ;
-(void)reloadMetrics;
-(void)setEnabled:(BOOL)arg0 forMetricType:(NSUInteger)arg1 didChange:(*BOOL)arg2 ;


@end


#endif