// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHSTORE_H
#define HKHEALTHSTORE_H

@class NSBundle, NSString, NSMutableSet, NSSet;
@protocol HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HKHealthStoreClientInterface, _HKXPCExportable, HKQueryDelegate, HKProxyProviderSource, OS_dispatch_queue, HDHealthStoreServerInterface, _HKAuthorizationPresentationController, _HKObjectPickerPresentationController, _HKRecalibrateEstimatesPresentationController;

#import <Foundation/Foundation.h>

#import "_HKXPCConnection.h"
#import "HKProfileIdentifier.h"
#import "HKHealthServicesManager.h"
#import "HKHealthStoreIdentifier.h"

@interface HKHealthStore : NSObject <HKFeatureAvailabilityHealthDataSource, HKAnalyticsHealthDataSource, HKHealthStoreClientInterface, _HKXPCExportable, HKQueryDelegate, HKProxyProviderSource>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    _HKXPCConnection *_healthdConnection;
    NSBundle *_sourceBundle;
    NSString *_sourceBundleIdentifier;
    NSString *_debugIdentifier;
    HKProfileIdentifier *_profileIdentifier;
    unsigned int _applicationSDKVersion;
    id<HDHealthStoreServerInterface> *_serverProxy;
    id<_HKAuthorizationPresentationController> *_authorizationPresentationController;
    id<_HKObjectPickerPresentationController> *_objectPickerPresentationController;
    id<_HKRecalibrateEstimatesPresentationController> *_recalibrateEstimatesPresentationController;
    id *_authorizationDelegateTransactionErrorHandler;
    HKHealthServicesManager *_healthServicesManager;
    NSMutableSet *_queries;
    BOOL _resumeRequired;
    BOOL _resumed;
}


@property (readonly, nonatomic) unsigned int applicationSDKVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (copy, nonatomic) NSString *clinicalReadAuthorizationUsageDescriptionOverride; // ivar: _clinicalReadAuthorizationUsageDescriptionOverride
@property (copy, nonatomic) NSString *daemonLaunchDarwinNotificationName; // ivar: _daemonLaunchDarwinNotificationName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *debugIdentifier;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthServicesManager *healthServicesManager;
@property (readonly, copy) HKHealthStoreIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (copy) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, getter=_queries) NSSet *queries;
@property (copy, nonatomic) NSString *readAuthorizationUsageDescriptionOverride; // ivar: _readAuthorizationUsageDescriptionOverride
@property (readonly, nonatomic) BOOL requiresWeakRetention;
@property (copy, nonatomic) NSString *researchStudyUsageDescriptionOverride; // ivar: _researchStudyUsageDescriptionOverride
@property (retain) NSBundle *sourceBundle;
@property (copy) NSString *sourceBundleIdentifier;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_handleExecuteQuery; // ivar: _unitTest_handleExecuteQuery
@property (copy, nonatomic) NSString *writeAuthorizationUsageDescriptionOverride; // ivar: _writeAuthorizationUsageDescriptionOverride


+(BOOL)_applicationHasRunningWorkout;
+(BOOL)isHealthDataAvailable;
-(BOOL)_prepareObjectsForSaving:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)_setActivityMoveMode:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setBiologicalSex:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setBloodType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setBodyMassCharacteristicQuantity:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setCardioFitnessMedicationsUse:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setCharacteristic:(id)arg0 forDataType:(id)arg1 error:(*id)arg2 ;
-(BOOL)_setDateOfBirthComponents:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setFitzpatrickSkinType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_setHeightCharacteristicQuantity:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setLeanBodyMassCharacteristicQuantity:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setUserEnteredMenstrualCycleLengthCharacteristicQuantity:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setUserEnteredMenstrualPeriodLengthCharacteristicQuantity:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setWheelchairUse:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_supportsFeature:(NSUInteger)arg0 ;
-(BOOL)supportsHealthRecords;
-(NSInteger)authorizationStatusForType:(id)arg0 ;
-(id)_actionCompletionOnClientQueue:(SEL)arg0 ;
-(id)_activityMoveModeWithError:(*id)arg0 ;
-(id)_bodyMassCharacteristicQuantityWithError:(*id)arg0 ;
-(id)_cardioFitnessMedicationsUseWithError:(*id)arg0 ;
-(id)_characteristicForDataType:(id)arg0 error:(*id)arg1 ;
-(id)_clientClinicalReadAuthorizationUsageDescription;
-(id)_clientReadAuthorizationUsageDescription;
-(id)_clientWriteAuthorizationUsageDescription;
-(id)_clinicalAuthorizationPresentationRequestForRecord:(id)arg0 ;
-(id)_healthDataAuthorizationPresentationRequestForRecord:(id)arg0 ;
-(id)_heightCharacteristicQuantityWithError:(*id)arg0 ;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)_leanBodyMassCharacteristicQuantityWithError:(*id)arg0 ;
-(id)_lock_connectionWithError:(*id)arg0 ;
-(id)_modificationDateForCharacteristicWithType:(id)arg0 error:(*id)arg1 ;
-(id)_objectCompletionOnClientQueue:(SEL)arg0 ;
-(id)_researchStudyUsageDescription;
-(id)_synchronousServerProxyWithErrorHandler:(id)arg0 ;
-(id)_userEnteredMenstrualCycleLengthCharacteristicQuantityWithError:(*id)arg0 ;
-(id)_userEnteredMenstrualPeriodLengthCharacteristicQuantityWithError:(*id)arg0 ;
-(id)_wrappedErrorHandler:(SEL)arg0 proxy:(id)arg1 ;
-(id)activityMoveModeWithError:(*id)arg0 ;
-(id)ageWithCurrentDate:(id)arg0 error:(*id)arg1 ;
-(id)biologicalSexWithError:(*id)arg0 ;
-(id)bloodTypeWithError:(*id)arg0 ;
-(id)dateOfBirthComponentsWithError:(*id)arg0 ;
-(id)dateOfBirthWithError:(*id)arg0 ;
-(id)earliestPermittedSampleDate;
-(id)exportedInterface;
-(id)featureAvailabilityProviderForIdentifier:(id)arg0 ;
-(id)featureAvailabilityProvidingForFeatureIdentifier:(id)arg0 ;
-(id)featureStatusProviderForIdentifier:(id)arg0 ;
-(id)fitzpatrickSkinTypeWithError:(*id)arg0 ;
-(id)healthStoreConfiguration;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithListenerEndpoint:(id)arg0 debugIdentifier:(id)arg1 ;
-(id)isImproveHealthRecordsAllowedWithError:(*id)arg0 ;
-(id)pluginServiceEndpointForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)remoteInterface;
-(id)requirementSatisfactionOverridesDataSource;
-(id)taskServerEndpointForIdentifier:(id)arg0 pluginURL:(id)arg1 taskUUID:(id)arg2 instanceUUID:(id)arg3 configuration:(id)arg4 error:(*id)arg5 ;
-(id)unitTest_replaceListenerEndpoint:(id)arg0 ;
-(id)watchLowPowerModeDataSource;
-(id)wheelchairUseWithError:(*id)arg0 ;
-(id)wristDetectionSettingManager;
-(void)_activeWorkoutApplicationIdentifierWithCompletion:(id)arg0 ;
-(void)_addQuery:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_clientQueue_invokeAuthorizationDelegateTransactionErrorHandlerWithError:(id)arg0 ;
-(void)_closeTransactionWithTypes:(id)arg0 anchor:(id)arg1 ackTime:(id)arg2 ;
-(void)_connectionQueue_setUpWithEndpoint:(id)arg0 ;
-(void)_currentWorkoutSnapshotWithCompletion:(id)arg0 ;
-(void)_deleteObjects:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_discardServerProxiesForServer:(id)arg0 ;
-(void)_faultIfInnappropriateHost;
-(void)_fetchBoolDaemonPreferenceForKey:(id)arg0 completion:(id)arg1 ;
-(void)_fetchDaemonPreferenceForKey:(id)arg0 completion:(id)arg1 ;
-(void)_firstPartyWorkoutSnapshotWithCompletion:(id)arg0 ;
-(void)_removePreferredUnitForType:(id)arg0 completion:(id)arg1 ;
-(void)_removeQuery:(id)arg0 ;
-(void)_replaceWorkout:(id)arg0 withWorkout:(id)arg1 completion:(id)arg2 ;
-(void)_safeFetchDaemonPreferenceForKey:(id)arg0 expectedReturnClass:(Class)arg1 completion:(id)arg2 ;
-(void)_saveObjects:(id)arg0 atomically:(BOOL)arg1 skipInsertionFilter:(BOOL)arg2 completion:(id)arg3 ;
-(void)_sendNextObjectBatch:(id)arg0 skipInsertionFilter:(BOOL)arg1 lastRange:(struct _NSRange )arg2 server:(id)arg3 transaction:(id)arg4 completion:(id)arg5 ;
// -(void)_serverProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_setBackgroundDeliveryFrequencyDataType:(id)arg0 frequency:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)_setConfigurationPropertyUsingBlock:(id)arg0 ;
-(void)_setDaemonPreferenceValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)_setPreferredUnit:(id)arg0 forType:(id)arg1 completion:(id)arg2 ;
-(void)_shouldGenerateDemoDataPreferenceIsSet:(id)arg0 ;
-(void)_throwIfAuthorizationDisallowedForSharing:(BOOL)arg0 types:(id)arg1 ;
-(void)_throwIfClinicalTypesRequestedToShare:(id)arg0 ;
-(void)_throwIfParentTypeNotRequestedForSharing:(BOOL)arg0 types:(id)arg1 ;
-(void)_throwIfPerObjectReadAuthorizationNotSupportedForType:(id)arg0 ;
-(void)_throwIfUsingIncorrectAuthorizationRequestType:(id)arg0 ;
-(void)_validateAuthorizationRequestWithShareTypes:(id)arg0 readTypes:(id)arg1 ;
-(void)_validateAuthorizationRequiredTypes;
-(void)_validateClinicalHealthRecordsPurposeStringsForSharingTypes:(id)arg0 readingTypes:(id)arg1 ;
-(void)_validateHealthDataPurposeStringsForSharingTypes:(id)arg0 readingTypes:(id)arg1 isResearchStudy:(BOOL)arg2 ;
-(void)_validatePurposeStringsForSharingTypes:(id)arg0 readingTypes:(id)arg1 ;
-(void)addHealthServicePairing:(id)arg0 withCompletion:(id)arg1 ;
-(void)addSamples:(id)arg0 toWorkout:(id)arg1 completion:(id)arg2 ;
-(void)associateSampleUUIDs:(id)arg0 withSampleUUID:(id)arg1 completion:(id)arg2 ;
// -(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg0 sourceHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(void)clientRemote_conceptIndexManagerDidBecomeQuiescentWithSamplesProcessedCount:(NSInteger)arg0 ;
-(void)clientRemote_presentAuthorizationWithRequestRecord:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_presentAuthorizationWithSession:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_presentRecalibrateEstimatesRequestWithRecord:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_unitPreferencesDidUpdate;
-(void)closeTransactionForTypes:(id)arg0 anchor:(id)arg1 ackTime:(id)arg2 query:(id)arg3 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)deleteAllSamplesWithTypes:(id)arg0 sourceBundleIdentifier:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)deleteClientSourceWithCompletion:(id)arg0 ;
-(void)deleteMedicalIDData;
-(void)deleteMedicalIDDataWithCompletion:(id)arg0 ;
-(void)deleteObject:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)deleteObject:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteObjects:(id)arg0 options:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)deleteObjects:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteObjectsOfType:(id)arg0 predicate:(id)arg1 options:(NSUInteger)arg2 withCompletion:(id)arg3 ;
-(void)deleteObjectsOfType:(id)arg0 predicate:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteObjectsWithUUIDs:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)disableAllBackgroundDeliveryWithCompletion:(id)arg0 ;
-(void)disableBackgroundDeliveryForType:(id)arg0 withCompletion:(id)arg1 ;
-(void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id)arg0 ;
-(void)dropEntitlement:(id)arg0 ;
-(void)enableBackgroundDeliveryForType:(id)arg0 frequency:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg0 error:(id)arg1 ;
-(void)endHealthServiceDiscovery:(id)arg0 ;
-(void)endHealthServiceSession:(id)arg0 ;
-(void)endWorkoutSession:(id)arg0 ;
-(void)executeQuery:(id)arg0 ;
-(void)executeQuery:(id)arg0 activationHandler:(id)arg1 ;
-(void)fetchCloudSyncRequiredWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDDataCreateIfNecessary:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)fetchMedicalIDDataWithCompletion:(id)arg0 ;
-(void)fetchMedicalIDEmergencyContactsWithCompletion:(id)arg0 ;
// -(void)fetchPluginServiceEndpointForIdentifier:(id)arg0 endpointHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(void)fetchServerURLForAssetType:(id)arg0 completion:(id)arg1 ;
// -(void)fetchTaskServerEndpointForIdentifier:(id)arg0 pluginURL:(id)arg1 taskUUID:(id)arg2 instanceUUID:(id)arg3 configuration:(id)arg4 endpointHandler:(id)arg5 errorHandler:(unk)arg6  ;
-(void)forceCloudSyncDataUploadForProfileWithCompletion:(id)arg0 ;
-(void)forceCloudSyncWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)forceCloudSyncWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)generateFakeDataForActivityType:(NSInteger)arg0 minutes:(CGFloat)arg1 completion:(id)arg2 ;
-(void)getHealthLiteValueForKey:(id)arg0 completion:(id)arg1 ;
-(void)getRequestStatusForAuthorizationToShareTypes:(id)arg0 readTypes:(id)arg1 completion:(id)arg2 ;
-(void)handleAuthorizationForExtensionWithCompletion:(id)arg0 ;
-(void)healthPeripheralsWithFilter:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)healthServicePairingsWithHandler:(id)arg0 ;
-(void)pauseWorkoutSession:(id)arg0 ;
-(void)preferredUnitsForQuantityTypes:(id)arg0 completion:(id)arg1 ;
-(void)preferredUnitsForQuantityTypes:(id)arg0 version:(NSInteger)arg1 completion:(id)arg2 ;
-(void)profileIdentifierForNRDeviceUUID:(id)arg0 completion:(id)arg1 ;
-(void)queryDidFinishExecuting:(id)arg0 ;
-(void)recalibrateEstimatesForSampleType:(id)arg0 atDate:(id)arg1 completion:(id)arg2 ;
-(void)recoverActiveWorkoutSessionWithCompletion:(id)arg0 ;
-(void)registerPeripheralIdentifier:(id)arg0 name:(id)arg1 services:(id)arg2 withCompletion:(id)arg3 ;
-(void)removeHealthServicePairing:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestAuthorizationToShareTypes:(id)arg0 readTypes:(id)arg1 completion:(id)arg2 ;
-(void)requestAuthorizationToShareTypes:(id)arg0 readTypes:(id)arg1 shouldPrompt:(BOOL)arg2 completion:(id)arg3 ;
-(void)requestPerObjectReadAuthorizationForType:(id)arg0 predicate:(id)arg1 completion:(id)arg2 ;
-(void)restoreEntitlement:(id)arg0 ;
-(void)resume;
-(void)resumeWorkoutSession:(id)arg0 ;
-(void)saveObject:(id)arg0 withCompletion:(id)arg1 ;
-(void)saveObjects:(id)arg0 deleteObjects:(id)arg1 associations:(id)arg2 completion:(id)arg3 ;
-(void)saveObjects:(id)arg0 skipInsertionFilter:(BOOL)arg1 completion:(id)arg2 ;
-(void)saveObjects:(id)arg0 withCompletion:(id)arg1 ;
-(void)setHealthLiteValue:(id)arg0 forKey:(id)arg1 completion:(id)arg2 ;
-(void)setServerURL:(id)arg0 forAssetType:(id)arg1 completion:(id)arg2 ;
-(void)splitTotalEnergy:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 resultsHandler:(id)arg3 ;
-(void)startHealthServiceDiscovery:(id)arg0 withHandler:(id)arg1 ;
-(void)startHealthServiceSession:(id)arg0 withHandler:(id)arg1 ;
-(void)startWatchAppWithWorkoutConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)startWorkoutSession:(id)arg0 ;
-(void)stopQuery:(id)arg0 ;
-(void)unregisterPeripheralIdentifier:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateMedicalIDData:(id)arg0 ;
-(void)updateMedicalIDData:(id)arg0 completion:(id)arg1 ;


@end


#endif