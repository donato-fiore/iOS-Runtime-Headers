// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRAFIBBURDENSEVENDAYANALYSISSCHEDULER_H
#define HKHRAFIBBURDENSEVENDAYANALYSISSCHEDULER_H

@class HDProfile, HKFeatureStatusManager, HDKeyValueDomain;
@protocol HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate, HKHRDatabaseAnalysisSchedulerDelegate, HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting, HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm, HKHRDatabaseAnalysisScheduler, HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate;

#import <Foundation/Foundation.h>

#import "HKHRAFibBurdenSevenDayAnalysisManager.h"

@interface HKHRAFibBurdenSevenDayAnalysisScheduler : NSObject <HKHRAFibBurdenSevenDayAnalysisSchedulerAlarmDelegate, HKHRDatabaseAnalysisSchedulerDelegate>

 {
    HDProfile *_profile;
    HKHRAFibBurdenSevenDayAnalysisManager *_analysisManager;
    HKFeatureStatusManager *_featureStatusManager;
    id<HKHRAFibBurdenSevenDayAnalysisFeatureStatusInspecting> *_featureStatusInspector;
    id<HKHRAFibBurdenSevenDayAnalysisSchedulerAlarm> *_alarm;
    id<HKHRDatabaseAnalysisScheduler> *_scheduler;
    HDKeyValueDomain *_syncedKeyValueDomain;
}


@property (weak, nonatomic) NSObject<HKHRAFibBurdenSevenDayAnalysisSchedulerDelegate> *delegate; // ivar: _delegate


-(BOOL)_determineIfAnotherAnalysisRunIsNecessaryWithAnalysisResult:(NSInteger)arg0 ;
-(BOOL)_shouldAllowFeatureStatus:(id)arg0 ;
-(id)_performAnalysisWithFeatureStatus:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 analysisManager:(id)arg1 featureStatusManager:(id)arg2 featureStatusInspector:(id)arg3 alarm:(id)arg4 scheduler:(id)arg5 syncedKeyValueDomain:(id)arg6 ;
-(id)initWithProfile:(id)arg0 featureStatusManager:(id)arg1 featureStatusInspector:(id)arg2 analyzer:(id)arg3 ;
-(void)_logAnalysisResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)_reportAnalysisResultsToDelegate:(id)arg0 featureStatus:(id)arg1 ;
-(void)_saveLastAnalysisCompletedDateForResult:(id)arg0 ;
-(void)analysisSchedulerDidFire:(id)arg0 completion:(id)arg1 ;
-(void)forceAnalysis;
-(void)initialAnalysisAlarmDidFireWithAlarm:(id)arg0 ;


@end


#endif