// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRAFIBBURDENRESCINDEDNOTIFICATIONMANAGER_H
#define HDHRAFIBBURDENRESCINDEDNOTIFICATIONMANAGER_H

@class HDProfile, HDKeyValueDomain, NSString;
@protocol HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HKFeatureStatusProvidingObserver, HKFeatureStatusProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDHRAFibBurdenRescindedNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HKFeatureStatusProvidingObserver>

 {
    HDProfile *_profile;
    id<HKFeatureStatusProviding> *_featureStatusProvider;
    HDKeyValueDomain *_localKeyValueDomain;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_postNotificationHandler; // ivar: _unitTesting_postNotificationHandler


-(BOOL)_isFeatureRescindedWithRequirementsEvaluation:(id)arg0 ;
-(BOOL)_isFeatureUnavailableForNonRescindedReasonsWithRequirementsEvaluation:(id)arg0 ;
-(id)_rescindedAlertBodyKeyForUnsatisfiedRequirementIdentifiers:(id)arg0 ;
-(id)_rescindedAlertTitleKeyForUnsatisfiedRequirementIdentifiers:(id)arg0 ;
-(id)_rescindedRequirementIdentifiers;
-(id)initWithProfile:(id)arg0 featureStatusProvider:(id)arg1 ;
-(id)initWithProfile:(id)arg0 featureStatusProvider:(id)arg1 keyValueDomain:(id)arg2 ;
-(void)_queue_presentRescindedOrReEnabledAlertIfNeededWithFeatureStatus:(id)arg0 ;
-(void)_queue_pullFeatureStatusAndPresentAlertIfNeeded;
-(void)_sendNotificationRequest:(id)arg0 ;
-(void)_showRescindedNotificationWithTitleKey:(id)arg0 bodyKey:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)dealloc;
-(void)featureStatusProviding:(id)arg0 didUpdateFeatureStatus:(id)arg1 ;


@end


#endif