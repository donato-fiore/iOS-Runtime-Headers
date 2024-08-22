// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRHEARTBEATSERIESFEATUREEXCLUSIVITYMANAGER_H
#define HDHRHEARTBEATSERIESFEATUREEXCLUSIVITYMANAGER_H

@class HKFeatureStatusManager, _HKDelayedOperation, HKFeatureStatus, NSString;
@protocol HKFeatureStatusProvidingObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHRHeartbeatSeriesFeatureExclusivityManager : NSObject <HKFeatureStatusProvidingObserver>

 {
    HKFeatureStatusManager *_irregularRhythmNotificationsStatusManager;
    HKFeatureStatusManager *_aFibHistoryStatusManager;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_disableIrregularRhythmNotificationsIfAFibHistoryIsEnabledOperation;
    HKFeatureStatus *_irregularRhythmNotificationsStatus;
    HKFeatureStatus *_aFibHistoryStatus;
}


@property (copy, nonatomic) id *__unitTesting_postNotificationHandler; // ivar: ___unitTesting_postNotificationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isFeatureStatusAvailableForUsageOrBlockedOnlyByMutualExclusivityRequirement:(id)arg0 ;
-(id)initWithIrregularRhythmNotificationsStatusManager:(id)arg0 aFibHistoryStatusManager:(id)arg1 profile:(id)arg2 ;
-(void)_fireSystemAlertBecauseIrregularRhythmNotificationsWereTurnedOff;
-(void)_queue_disableIrregularRhythmNotificationsIfAFibHistoryIsEnabled;
-(void)_scheduleInitialMaintenanceOperationWithProfile:(id)arg0 ;
-(void)dealloc;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;


@end


#endif