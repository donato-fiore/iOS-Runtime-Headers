// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIINTERNALSERVICEREQUESTHANDLER_H
#define TRIINTERNALSERVICEREQUESTHANDLER_H

@protocol TRIXPCInternalServiceProtocol, TRITrialInternalEntitled;

#import <Foundation/Foundation.h>

#import "TRIXPCServerContextPromise.h"

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol>

 {
    TRIXPCServerContextPromise *_promise;
    id<TRITrialInternalEntitled> *_entitlementWitness;
}




-(id)initWithPromise:(id)arg0 entitlementWitness:(id)arg1 ;
-(void)_experimentRecordsWithDeploymentEnvironments:(id)arg0 privacyFilterPolicy:(unsigned char)arg1 serverContext:(id)arg2 taskQueue:(id)arg3 completion:(id)arg4 ;
-(void)activeExperimentInformationWithPrivacyFilterPolicy:(unsigned char)arg0 completion:(id)arg1 ;
-(void)activeRolloutInformationWithPrivacyFilterPolicy:(unsigned char)arg0 completion:(id)arg1 ;
-(void)deregisterNamespaceWithNamespaceName:(id)arg0 teamId:(id)arg1 completion:(id)arg2 ;
-(void)dynamicNamespaceRecordsWithCompletion:(id)arg0 ;
-(void)experimentNotificationsWithExperimentId:(id)arg0 cloudKitContainer:(int)arg1 teamId:(id)arg2 completion:(id)arg3 ;
-(void)immediatelySchedulePostUpgradeActivityWithCompletion:(id)arg0 ;
-(void)lastFetchDateForContainer:(int)arg0 teamId:(id)arg1 completion:(id)arg2 ;
-(void)registerNamespaceWithNamespaceName:(id)arg0 compatibilityVersion:(unsigned int)arg1 defaultsFileURL:(id)arg2 teamId:(id)arg3 appContainerId:(id)arg4 appContainerType:(NSInteger)arg5 cloudKitContainerId:(int)arg6 completion:(id)arg7 ;
-(void)resumeSQLiteCKDatabaseQueueWithCompletion:(id)arg0 ;
-(void)rolloutNotificationWithLatestDeploymentForRolloutId:(id)arg0 cloudKitContainer:(int)arg1 teamId:(id)arg2 completion:(id)arg3 ;
-(void)setFailureInjectionDelegate:(id)arg0 ;
-(void)setLastFetchDate:(id)arg0 forContainer:(int)arg1 teamId:(id)arg2 completion:(id)arg3 ;
-(void)setSubscription:(id)arg0 namespaceName:(id)arg1 completion:(id)arg2 ;
-(void)startDownloadNamespaceWithName:(id)arg0 teamId:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)submitTask:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)subscriptionForNamespaceName:(id)arg0 completion:(id)arg1 ;
-(void)suspendSQLiteCKDatabaseQueueWithCompletion:(id)arg0 ;
-(void)taskRecordsWithCompletion:(id)arg0 ;


@end


#endif