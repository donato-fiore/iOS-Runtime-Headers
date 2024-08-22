// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMCANALYSISMANAGER_H
#define HDMCANALYSISMANAGER_H

@class HDProfile, HKObserverSet, _HKDelayedOperation, HKMCAnalysis, HKMCSettingsManager, HDFeatureAvailabilityManager, HKFeatureStatusManager, HKCalendarCache, HAMenstrualAlgorithmsAnalysis, NSArray, NSString;
@protocol HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver>

 {
    HDProfile *_profile;
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_analyzeOperation;
    HKMCAnalysis *_lock_currentAnalysis;
    HKMCSettingsManager *_settingsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
    HKCalendarCache *_calendarCache;
    os_unfair_lock_s _lock;
    BOOL _needsMaintenenceAnalysis;
    BOOL _maintenanceOperationQueued;
    HAMenstrualAlgorithmsAnalysis *_test_algorithmsAnalysis;
    NSArray *_test_algorithmsCycles;
}


@property (readonly, copy, nonatomic) HKMCAnalysis *currentAnalysis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_analysisWithAlgorithmsAnalysis:(id)arg0 algorithmsCycles:(id)arg1 recentSymptoms:(NSUInteger)arg2 recentBasalBodyTemperature:(id)arg3 lastLoggedDayIndex:(id)arg4 lastMenstrualFlowDayIndex:(id)arg5 numberOfDailySleepHeartRateStatisticsForPast100Days:(NSInteger)arg6 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(NSInteger)arg7 useHeartRateInput:(BOOL)arg8 isHeartRateInputOnboarded:(BOOL)arg9 ;
-(id)_queue_analyzeNowWithError:(*id)arg0 ;
-(id)_queue_computeAnalysisWithDatabaseAccessibilityAssertion:(id)arg0 error:(*id)arg1 ;
-(id)_takeAccessibilityAssertion;
-(id)analyzeWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 settingsManager:(id)arg1 featureAvailabilityManager:(id)arg2 heartRateFeatureAvailabilityManager:(id)arg3 calendarCache:(id)arg4 ;
-(void)_calendarDayDidChange:(id)arg0 ;
-(void)_forceDisablePredictionsFromOngoingCycleFactors:(id)arg0 useHeartRateInput:(BOOL)arg1 isHeartRateInputOnboarded:(BOOL)arg2 ;
-(void)_queue_analyzeIfNeeded;
-(void)_queue_enqueueMaintenanceOperationIfNeeded;
-(void)_runMaintenanceOperation;
-(void)_startObserving;
-(void)_test_setAlgorithmsAnalysis:(id)arg0 ;
-(void)_test_setAlgorithmsCycles:(id)arg0 ;
-(void)_userCharacteristicsDidChange:(id)arg0 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg0 ;
-(void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg0 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;
-(void)settingsManagerDidUpdateAlgorithmVersionMismatchSettings:(id)arg0 ;
-(void)settingsManagerDidUpdateAnalysisSettings:(id)arg0 ;


@end


#endif