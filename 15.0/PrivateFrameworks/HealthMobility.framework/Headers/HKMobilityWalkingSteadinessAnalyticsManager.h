// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMOBILITYWALKINGSTEADINESSANALYTICSMANAGER_H
#define HKMOBILITYWALKINGSTEADINESSANALYTICSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKMobilityWalkingSteadinessAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_collectDiagnosticFieldsForDailyMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectDiagnosticFieldsForNotificationInteractionMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectDiagnosticFieldsForNotificationMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectDiagnosticFieldsForOnboardingMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectSensitiveFieldsForDailyMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectSensitiveFieldsForNotificationInteractionMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectSensitiveFieldsForNotificationMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_collectSensitiveFieldsForOnboardingMetric:(id)arg0 dataSource:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isImproveHealthAndActivityAllowed;
-(id)_queue_submitDailyEventWithDataSource:(id)arg0 ;
-(id)_queue_submitNotificationEventWithDataSource:(id)arg0 ;
-(id)_queue_submitNotificationInteractionEventWithDataSource:(id)arg0 ;
-(id)_queue_submitOnboardingEventWithDataSource:(id)arg0 ;
-(id)init;
-(void)submitDailyEventWithDataSource:(id)arg0 resultHandler:(id)arg1 ;
-(void)submitNotificationEventWithDataSource:(id)arg0 resultHandler:(id)arg1 ;
-(void)submitNotificationInteractionEventWithDataSource:(id)arg0 resultHandler:(id)arg1 ;
-(void)submitOnboardingEventWithDataSource:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif