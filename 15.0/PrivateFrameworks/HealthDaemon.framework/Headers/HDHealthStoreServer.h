// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHSTORESERVER_H
#define HDHEALTHSTORESERVER_H

@class _HKExpiringCompletionTimer, NSMutableDictionary, HKHealthStoreConfiguration, NSString;
@protocol HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDSampleSaving, HDTaskServerEndpointDelegate, HDConceptIndexManagerObserver, HDTaskServerDelegate, HDHealthStoreServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDQueryControlServer.h"
#import "HDAuthorizationServer.h"
#import "HDHealthStoreClient.h"
#import "HDDaemon.h"
#import "HDProfile.h"

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDSampleSaving, HDTaskServerEndpointDelegate, HDConceptIndexManagerObserver, HDTaskServerDelegate, HDHealthStoreServerInterface>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
    _HKExpiringCompletionTimer *_clientTransactionTimer;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_taskServerEndpointsByUUID;
    HDQueryControlServer *_queryControlServer;
}


@property (readonly, nonatomic) HDAuthorizationServer *authorizationServer; // ivar: _authorizationServer
@property (readonly, nonatomic) HDHealthStoreClient *client; // ivar: _client
@property (readonly, copy, nonatomic) HKHealthStoreConfiguration *configuration; // ivar: _configuration
@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;


-(id)clientSourceWithError:(*id)arg0 ;
-(id)diagnosticDescription;
-(id)initWithClient:(id)arg0 profile:(id)arg1 configuration:(id)arg2 connectionQueue:(id)arg3 ;
-(id)objectAuthorizationPromptHandler:(SEL)arg0 ;
-(id)sampleSavingDelegate;
// -(void)_performIfAuthorizedToDeleteObjects:(id)arg0 usingBlock:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)_performIfAuthorizedToSaveObjects:(id)arg0 usingBlock:(id)arg1 errorHandler:(unk)arg2  ;
-(void)_remote_associateSampleUUIDs:(id)arg0 withSampleUUID:(id)arg1 completion:(id)arg2 ;
-(void)_remote_saveObjects:(id)arg0 deleteObjects:(id)arg1 associations:(id)arg2 completion:(id)arg3 ;
-(void)_saveDataObjects:(id)arg0 sourceEntity:(id)arg1 sourceVersion:(id)arg2 handler:(id)arg3 ;
-(void)_serverActivityChanged;
-(void)conceptIndexManagerDidBecomeQuiescent:(id)arg0 samplesProcessedCount:(NSInteger)arg1 ;
-(void)conceptIndexManagerDidChangeExecutionState:(NSUInteger)arg0 ;
-(void)invalidate;
// -(void)performIfAuthorizedToDeleteObjectTypes:(id)arg0 usingBlock:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)performIfAuthorizedToSaveObjectTypes:(id)arg0 usingBlock:(id)arg1 errorHandler:(unk)arg2  ;
-(void)remote_addSamples:(id)arg0 toWorkout:(id)arg1 completion:(id)arg2 ;
-(void)remote_authorizationStatusForType:(id)arg0 completion:(id)arg1 ;
-(void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg0 handler:(id)arg1 ;
-(void)remote_clientResumedWithCompletion:(id)arg0 ;
-(void)remote_clientWillSuspendWithCompletion:(id)arg0 ;
-(void)remote_closeTransactionWithDataTypes:(id)arg0 anchor:(id)arg1 ackTime:(id)arg2 completion:(id)arg3 ;
-(void)remote_createQueryServerEndpointForIdentifier:(id)arg0 queryUUID:(id)arg1 configuration:(id)arg2 forceReactivation:(BOOL)arg3 completion:(id)arg4 ;
-(void)remote_createTaskServerEndpointForIdentifier:(id)arg0 pluginURL:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 completion:(id)arg4 ;
-(void)remote_deleteAllSamplesWithTypes:(id)arg0 sourceBundleIdentifier:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)remote_deleteClientSourceWithCompletion:(id)arg0 ;
-(void)remote_deleteDataObjects:(id)arg0 options:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)remote_deleteDataObjectsOfType:(id)arg0 matchingFilter:(id)arg1 options:(NSUInteger)arg2 handler:(id)arg3 ;
-(void)remote_deleteObjectsWithUUIDs:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)remote_dropEntitlement:(id)arg0 completion:(id)arg1 ;
-(void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg0 error:(id)arg1 ;
-(void)remote_fetchCharacteristicWithDataType:(id)arg0 handler:(id)arg1 ;
-(void)remote_fetchDaemonPreferenceForKey:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchModificationDateForCharacteristicWithDataType:(id)arg0 handler:(id)arg1 ;
-(void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchServerURLForAssetType:(id)arg0 completion:(id)arg1 ;
-(void)remote_fetchUnitPreferencesForTypes:(id)arg0 version:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)remote_getHealthLiteValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)remote_getIsFeatureSetAvailable:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)remote_getRequestStatusForAuthorizationToShareTypes:(id)arg0 readTypes:(id)arg1 completion:(id)arg2 ;
-(void)remote_handleAuthorizationForExtensionWithCompletion:(id)arg0 ;
-(void)remote_recalibrateEstimatesForSampleType:(id)arg0 atDate:(id)arg1 completion:(id)arg2 ;
-(void)remote_recoverActiveWorkoutSessionWithCompletion:(id)arg0 ;
-(void)remote_removePreferredUnitForType:(id)arg0 completion:(id)arg1 ;
-(void)remote_replaceWorkout:(id)arg0 withWorkout:(id)arg1 completion:(id)arg2 ;
-(void)remote_requestAuthorizationToShareTypes:(id)arg0 readTypes:(id)arg1 shouldPrompt:(BOOL)arg2 completion:(id)arg3 ;
-(void)remote_restoreEntitlement:(id)arg0 completion:(id)arg1 ;
-(void)remote_saveDataObjects:(id)arg0 handler:(id)arg1 ;
-(void)remote_saveDataObjects:(id)arg0 transactionIdentifier:(id)arg1 final:(BOOL)arg2 handler:(id)arg3 ;
-(void)remote_setBackgroundDeliveryFrequency:(NSInteger)arg0 forDataType:(id)arg1 handler:(id)arg2 ;
-(void)remote_setCharacteristic:(id)arg0 forDataType:(id)arg1 handler:(id)arg2 ;
-(void)remote_setHealthLiteValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)remote_setPreferredUnit:(id)arg0 forType:(id)arg1 completion:(id)arg2 ;
-(void)remote_setServerURL:(id)arg0 forAssetType:(id)arg1 completion:(id)arg2 ;
-(void)remote_shouldShowHealthRecordsSectionWithCompletion:(id)arg0 ;
-(void)remote_splitTotalCalories:(CGFloat)arg0 timeInterval:(CGFloat)arg1 withCompletion:(id)arg2 ;
-(void)remote_startWatchAppWithWorkoutConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)saveSamples:(id)arg0 withCompletion:(id)arg1 ;
-(void)start;
-(void)taskServerDidFailToInitializeForUUID:(id)arg0 ;
-(void)taskServerDidFinishInitialization:(id)arg0 ;
-(void)taskServerDidInvalidate:(id)arg0 ;
-(void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg0 ;


@end


#endif