// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDACTIVITYCACHEDATASOURCE_H
#define HDACTIVITYCACHEDATASOURCE_H

@class NSString, HKCategoryType, HKWorkoutType, NSSet, _HKDelayedOperation, NSDate, NSDateInterval;
@protocol HDActivityCacheStatisticsBuilderSourceDelegate, HDDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDActivityCacheHeartRateStatisticsBuilder.h"
#import "HDActivityCacheStatisticsBuilder.h"

@interface HDActivityCacheDataSource : NSObject <HDActivityCacheStatisticsBuilderSourceDelegate, HDDataObserver>

 {
    vector<HDActivityCacheStatisticsBuilderSample, std::allocator<HDActivityCacheStatisticsBuilderSample>> _previousWatchActivationLogEntryVector;
    BOOL _previousWatchActivationLogEntryIsSet;
    NSInteger _quantitySampleAnchor;
    NSInteger _nonQuantitySampleAnchor;
    NSString *_nonQuantitySamplesQueryString;
    NSString *_quantitySamplesQueryString;
    HKCategoryType *_standHoursType;
    HKCategoryType *_deepBreathingSessionType;
    HKWorkoutType *_workoutType;
    HKCategoryType *_watchActivationType;
    NSSet *_allObservedTypes;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_rebuildOperation;
    unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> _isWatchSourceCache;
    unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> _isConnectedGymSourceCache;
    unordered_map<long long, bool, std::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, bool>>> _isConnectedGymDeviceCache;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
}


@property (retain, nonatomic) NSDate *activeDevicePairedDate; // ivar: _activeDevicePairedDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *observedQuantityTypes; // ivar: _observedQuantityTypes
@property (nonatomic) NSInteger previousDayCacheIndex; // ivar: _previousDayCacheIndex
@property (retain, nonatomic) NSDateInterval *previousDayDateInterval; // ivar: _previousDayDateInterval
@property (readonly, nonatomic) HDActivityCacheHeartRateStatisticsBuilder *previousDayHeartRateStatisticsBuilder; // ivar: _previousDayHeartRateStatisticsBuilder
@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *previousDayStatisticsBuilder; // ivar: _previousDayStatisticsBuilder
@property (retain, nonatomic) NSString *previousDayStatisticsBuilderTag; // ivar: _previousDayStatisticsBuilderTag
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetDayCacheIndex; // ivar: _targetDayCacheIndex
@property (retain, nonatomic) NSDateInterval *targetDayDateInterval; // ivar: _targetDayDateInterval
@property (readonly, nonatomic) HDActivityCacheHeartRateStatisticsBuilder *targetDayHeartRateStatisticsBuilder; // ivar: _targetDayHeartRateStatisticsBuilder
@property (readonly, nonatomic) HDActivityCacheStatisticsBuilder *targetDayStatisticsBuilder; // ivar: _targetDayStatisticsBuilder
@property (retain, nonatomic) NSString *targetDayStatisticsBuilderTag; // ivar: _targetDayStatisticsBuilderTag


-(BOOL)updateWithError:(*id)arg0 ;
-(NSInteger)localDeviceSourceIdentifier;
-(id)activityCacheStatisticsBuilder:(id)arg0 sourceOrderForObjectType:(id)arg1 ;
-(id)initWithProfile:(id)arg0 observedQuantityTypes:(id)arg1 updateOperation:(id)arg2 rebuildOperation:(id)arg3 queue:(id)arg4 ;
-(void)_samplesAddedToWorkoutNotification:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)pauseUpdates;
-(void)reportTargetDayHeartRateAnalytics;
-(void)resumeUpdates;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif