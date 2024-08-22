// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMCANALYSISMANAGER_H
#define HDMCANALYSISMANAGER_H

@class HKObserverSet, _HKDelayedOperation, HKMCAnalysis, HKMCSettingsManager, HDFeatureAvailabilityManager, HKFeatureStatusManager, HKCalendarCache, HAMenstrualAlgorithmsAnalysis, NSArray, NSString, HDProfile;
@protocol HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDMCDeviationInputManager.h"

@interface HDMCAnalysisManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HKMCSettingsManagerObserver, HDFeatureAvailabilityExtensionObserver>

 {
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    _HKDelayedOperation *_analyzeOperation;
    HKMCAnalysis *_lock_currentAnalysis;
    HKMCSettingsManager *_settingsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HKFeatureStatusManager *_heartRateFeatureStatusManager;
    HKFeatureStatusManager *_wristTemperatureFeatureStatusManager;
    HKFeatureStatusManager *_deviationsFeatureStatusManager;
    HDMCDeviationInputManager *_deviationInputManager;
    HKCalendarCache *_calendarCache;
    os_unfair_lock_s _lock;
    BOOL _needsMaintenenceAnalysis;
    BOOL _maintenanceOperationQueued;
    HKMCAnalysis *_test_analysis;
    HAMenstrualAlgorithmsAnalysis *_test_algorithmsAnalysis;
    NSArray *_test_algorithmsCycles;
}


@property (copy, nonatomic) id *_test_didNotUpgradeOnboardingRecord; // ivar: __test_didNotUpgradeOnboardingRecord
@property (readonly, copy, nonatomic) HKMCAnalysis *currentAnalysis;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)initiateCycleFactorsAutomaticUpgradeWithDatabaseAccessibilityAssertion:(id)arg0 error:(*id)arg1 ;
-(id)_analysisWithAlgorithmsAnalysis:(id)arg0 algorithmsCycles:(id)arg1 recentSymptoms:(NSUInteger)arg2 mostRecentBasalBodyTemperature:(id)arg3 lastLoggedDayIndex:(id)arg4 lastMenstrualFlowDayIndex:(id)arg5 numberOfDailySleepHeartRateStatisticsForPast100Days:(NSInteger)arg6 numberOfDailyAwakeHeartRateStatisticsForPast100Days:(NSInteger)arg7 useHeartRateInput:(BOOL)arg8 isHeartRateInputOnboarded:(BOOL)arg9 useWristTemperatureInput:(BOOL)arg10 isWristTemperatureInputOnboarded:(BOOL)arg11 ;
-(id)_analyzeWithForceIncludeCycles:(BOOL)arg0 error:(*id)arg1 ;
-(id)_processorConfigurationForTodayIndex:(NSInteger)arg0 calendar:(id)arg1 ;
-(id)_queue_analyzeNowWithForceIncludeCycles:(BOOL)arg0 error:(*id)arg1 ;
-(id)_queue_computeAnalysisWithDatabaseAccessibilityAssertion:(id)arg0 forceIncludeCycles:(BOOL)arg1 error:(*id)arg2 ;
-(id)_takeAccessibilityAssertion;
-(id)analyzeWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 settingsManager:(id)arg1 featureAvailabilityManager:(id)arg2 heartRateAvailabilityManager:(id)arg3 wristTemperatureAvailabilityManager:(id)arg4 deviationsAvailabilityManager:(id)arg5 calendarCache:(id)arg6 ;
-(void)_calendarDayDidChange:(id)arg0 ;
-(void)_forceDisablePredictionsFromOngoingCycleFactors:(id)arg0 useHeartRateInput:(BOOL)arg1 isHeartRateInputOnboarded:(BOOL)arg2 useWristTemperatureInput:(BOOL)arg3 isWristTemperatureInputOnboarded:(BOOL)arg4 ;
-(void)_runMaintenanceOperation;
-(void)_startObserving;
-(void)_test_setAlgorithmsAnalysis:(id)arg0 ;
-(void)_test_setAlgorithmsCycles:(id)arg0 ;
-(void)_test_setAnalysis:(id)arg0 ;
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