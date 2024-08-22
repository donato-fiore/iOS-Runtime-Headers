// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMENSTRUALCYCLESSTORE_H
#define HKMENSTRUALCYCLESSTORE_H

@class HKTaskServerProxyProvider, NSDate, NSString, HKHealthStore, NSNumber;
@protocol HKMenstrualCyclesStoreInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKMenstrualCyclesStore : NSObject <HKMenstrualCyclesStoreInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (retain, nonatomic) NSDate *cycleFactorsLastReviewedDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSNumber *lastMenstrualPeriodDismissalDay;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *unconfirmedDeviationDismissalDay;
@property (retain, nonatomic) NSNumber *unconfirmedDeviationSubmissionDay;


-(BOOL)setDeviationDetectedIfNeededForDeviations:(id)arg0 ;
-(id)_appProtectedSyncedKeyValueDomain;
-(id)_deviationDetectionAnalyticsDomain;
-(id)_localProtectedKeyValueDomain;
-(id)_syncedProtectedKeyValueDomain;
-(id)deviationDetectedIndicesForDeviationType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)arg0 intermenstrualBleedingByDayIndex:(id)arg1 addedCycleFactors:(id)arg2 initialAnalysisWindow:(struct ? )arg3 completion:(id)arg4 ;
-(void)connectionInvalidated;
-(void)fetchScheduledNotificationsWithCompletion:(id)arg0 ;
-(void)saveDaySummaries:(id)arg0 canOverrideCreationDate:(BOOL)arg1 completion:(id)arg2 ;
-(void)saveDaySummaries:(id)arg0 completion:(id)arg1 ;
-(void)saveDaySummary:(id)arg0 completion:(id)arg1 ;
-(void)saveLastMenstrualPeriodWithDayIndexRange:(struct ? )arg0 completion:(id)arg1 ;
-(void)saveMenstrualFlow:(NSInteger)arg0 dayIndex:(NSInteger)arg1 updateAdjacentDays:(BOOL)arg2 completion:(id)arg3 ;
-(void)saveMenstrualFlowByDayIndex:(id)arg0 completion:(id)arg1 ;
-(void)savePeriodEndedOnDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)savePeriodNotYetEndedWithCompletion:(id)arg0 ;
-(void)savePeriodNotYetStartedWithCompletion:(id)arg0 ;
-(void)savePeriodStartedOnDayIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)savePeriodStartedOnDayIndex:(NSInteger)arg0 endedOnDayIndex:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setIsEligibleForCycleFactorsReminder:(BOOL)arg0 ;
-(void)triggerAnalysisForDebugReason:(id)arg0 completion:(id)arg1 ;


@end


#endif