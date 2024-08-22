// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHWORKOUTAWARDINGSOURCE_H
#define ACHWORKOUTAWARDINGSOURCE_H

@class ACHAwardsClient, NSDate, NSDictionary, NSArray, NSString, HKHealthStore, NSNumber, HDProfile, ACHAwardsWorkoutClient, HKAnchoredObjectQuery;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding;

#import <Foundation/Foundation.h>

#import "ACHDataStore.h"
#import "ACHEarnedInstanceAwardingEngine.h"
#import "ACHAchievementProgressEngine.h"
#import "ACHTemplateStore.h"
#import "ACHWorkoutUtility.h"

@interface ACHWorkoutAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, ACHDataStorePropertyProviding, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding>

 {
    os_unfair_lock_s _lock;
}


@property CGFloat best10KDuration; // ivar: _best10KDuration
@property CGFloat best5KDuration; // ivar: _best5KDuration
@property CGFloat bestElevationGainedHiking; // ivar: _bestElevationGainedHiking
@property CGFloat bestHalfMarathonDuration; // ivar: _bestHalfMarathonDuration
@property CGFloat bestMarathonDuration; // ivar: _bestMarathonDuration
@property CGFloat bestWheelchair10KDuration; // ivar: _bestWheelchair10KDuration
@property CGFloat bestWheelchair5KDuration; // ivar: _bestWheelchair5KDuration
@property CGFloat bestWheelchairHalfMarathonDuration; // ivar: _bestWheelchairHalfMarathonDuration
@property CGFloat bestWheelchairMarathonDuration; // ivar: _bestWheelchairMarathonDuration
@property (weak, nonatomic) ACHAwardsClient *client; // ivar: _client
@property (nonatomic) unsigned char creatorDevice; // ivar: _creatorDevice
@property (retain, nonatomic) NSDate *currentDateOverride; // ivar: _currentDateOverride
@property (weak, nonatomic) ACHDataStore *dataStore; // ivar: _dataStore
@property (retain, nonatomic) NSDictionary *dataStoreProperties;
@property (readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (copy, nonatomic) id *initialResultsHandler; // ivar: _initialResultsHandler
@property (retain, nonatomic) NSNumber *injectedIsMetricLocale; // ivar: _injectedIsMetricLocale
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (retain, nonatomic) NSNumber *overrideIsAppleWatch; // ivar: _overrideIsAppleWatch
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider; // ivar: _progressProvider
@property (nonatomic) int protectedDataToken; // ivar: _protectedDataToken
@property (readonly) Class superclass;
@property (weak, nonatomic) ACHTemplateStore *templateStore; // ivar: _templateStore
@property (readonly, nonatomic) NSString *uniqueName;
@property (retain, nonatomic) NSString *watchCountryCodeOverride; // ivar: _watchCountryCodeOverride
@property (weak, nonatomic) ACHAwardsWorkoutClient *workoutClient; // ivar: _workoutClient
@property (retain, nonatomic) HKAnchoredObjectQuery *workoutQuery; // ivar: _workoutQuery
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility; // ivar: _workoutUtility


-(BOOL)_handlesTemplate:(id)arg0 ;
-(BOOL)_isMetricLocale;
-(BOOL)providesProgressForTemplate:(id)arg0 ;
-(id)_bestElevationGainedKeyForActivityType:(NSUInteger)arg0 ;
-(id)_client_earnedInstancesForWorkouts:(id)arg0 ;
-(id)_client_earnedInstancesForWorkoutsInDateInterval:(id)arg0 error:(*id)arg1 ;
-(id)_daemon_earnedInstancesForWorkouts:(id)arg0 ;
-(id)_earnedInstancesForWorkouts:(id)arg0 ;
-(id)_progressEnvironment;
-(id)currentDate;
-(id)currentGoalQuantityForTemplate:(id)arg0 ;
-(id)currentProgressQuantityForTemplate:(id)arg0 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg0 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg0 databaseContext:(id)arg1 ;
-(id)initWithClient:(id)arg0 healthStore:(id)arg1 awardingEngine:(id)arg2 dataStore:(id)arg3 templateStore:(id)arg4 creatorDevice:(unsigned char)arg5 progressProvider:(id)arg6 workoutUtility:(id)arg7 ;
-(id)initWithClient:(id)arg0 healthStore:(id)arg1 awardingEngine:(id)arg2 dataStore:(id)arg3 templateStore:(id)arg4 creatorDevice:(unsigned char)arg5 progressProvider:(id)arg6 workoutUtility:(id)arg7 initialResultsHandler:(id)arg8 ;
-(id)initWithProfile:(id)arg0 awardingEngine:(id)arg1 dataStore:(id)arg2 templateStore:(id)arg3 creatorDevice:(unsigned char)arg4 progressProvider:(id)arg5 workoutUtility:(id)arg6 ;
-(id)watchCountryCode;
-(void)_client_appendEarnedInstancesForWorkout:(id)arg0 toSet:(id)arg1 templates:(id)arg2 calendar:(id)arg3 numberOfDaysInWeek:(NSUInteger)arg4 predicates:(id)arg5 firstDayOfFitnessWeek:(NSInteger)arg6 watchCountryCode:(id)arg7 ;
-(void)_injectIsMetricLocale:(BOOL)arg0 ;
-(void)_lock_startWorkoutQueryWithInitialResultsHandler:(id)arg0 ;
-(void)_startWorkoutQueryIfNecessary;
-(void)_stopWorkoutQuery;
-(void)activate;
-(void)daemonReady:(id)arg0 ;
-(void)dataStoreDidClearAllProperties:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)workoutsAdded:(id)arg0 ;


@end


#endif