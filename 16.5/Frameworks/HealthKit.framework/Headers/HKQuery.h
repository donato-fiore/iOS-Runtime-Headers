// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKQUERY_H
#define HKQUERY_H

@class NSPredicate, NSUUID, NSString, NSArray;
@protocol _HKXPCExportable, HKQueryClientInterface, HKQueryDelegate, HKQueryServerInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKQueryServerProxyProvider.h"
#import "HKObjectType.h"
#import "HKHealthStore.h"
#import "_HKFilter.h"
#import "HKSampleType.h"

@interface HKQuery : NSObject <_HKXPCExportable, HKQueryClientInterface>

 {
    BOOL _hasBeenExecuted;
    id<HKQueryDelegate> *_delegate;
    HKQueryServerProxyProvider *_proxyProvider;
    uint8_t _activationState;
    uint8_t _deactivateCallCount;
    CGFloat _activationTime;
    HKObjectType *_objectType;
    NSPredicate *_predicate;
    HKHealthStore *_strongHealthStore;
    id<HKQueryServerInterface> *_serverProxy;
}


@property (readonly) NSInteger activationState;
@property (copy) NSUUID *activationUUID; // ivar: _activationUUID
@property (readonly, nonatomic) unsigned int applicationSDKVersion; // ivar: _applicationSDKVersion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly) NSInteger deactivateCallCount;
@property (readonly) BOOL deactivating;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (readonly, weak, nonatomic) NSObject<HKQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_filter) _HKFilter *filter; // ivar: _filter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKObjectType *objectType;
@property (retain, nonatomic) NSPredicate *predicate;
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (readonly, copy, nonatomic) NSArray *queryDescriptors; // ivar: _queryDescriptors
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) HKSampleType *sampleType;
@property (nonatomic) BOOL shouldSuppressDataCollection; // ivar: _shouldSuppressDataCollection
@property (readonly) Class superclass;


+(BOOL)shouldApplyAdditionalPredicateForObjectType:(id)arg0 ;
+(Class)configurationClass;
+(id)_cachedInterfaceForProtocol:(id)arg0 configurationHandler:(id)arg1 ;
+(id)_predicateForObjectsWithMinOSBuildVersion:(id)arg0 maxOSBuildVersion:(id)arg1 ;
+(id)_predicateForWorkoutStatisticsWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 keyPathPrefix:(id)arg2 quantity:(id)arg3 ;
+(id)clientInterface;
+(id)clientInterfaceProtocol;
+(id)predicateForActivityCachesBetweenStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;
+(id)predicateForActivitySummariesBetweenStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;
+(id)predicateForActivitySummariesWithActivityMoveMode:(NSInteger)arg0 ;
+(id)predicateForActivitySummaryWithDateComponents:(id)arg0 ;
+(id)predicateForCategorySamplesEqualToValues:(id)arg0 ;
+(id)predicateForCategorySamplesWithOperatorType:(NSUInteger)arg0 value:(NSInteger)arg1 ;
+(id)predicateForClinicalRecordsFromSource:(id)arg0 FHIRResourceType:(id)arg1 identifier:(id)arg2 ;
+(id)predicateForClinicalRecordsWithFHIRResourceType:(id)arg0 ;
+(id)predicateForCreationDateWithTodayViewRange:(id)arg0 ;
+(id)predicateForDiagnosticTestResultCategory:(id)arg0 ;
+(id)predicateForDiagnosticTestResultWithReferenceRangeStatus:(NSInteger)arg0 ;
+(id)predicateForElectrocardiogramsWithClassification:(NSInteger)arg0 ;
+(id)predicateForElectrocardiogramsWithPrivateClassification:(NSUInteger)arg0 ;
+(id)predicateForElectrocardiogramsWithSymptomsStatus:(NSInteger)arg0 ;
+(id)predicateForListUserDomainConceptWithListType:(NSUInteger)arg0 ;
+(id)predicateForListUserDomainConceptsWithListTypes:(id)arg0 ;
+(id)predicateForMedicalRecordWithOriginType:(NSUInteger)arg0 ;
+(id)predicateForMedicalRecordWithState:(NSUInteger)arg0 ;
+(id)predicateForMedicalRecordsAssociatedWithMedicalUserDomainConcept:(id)arg0 ;
+(id)predicateForMedicalRecordsWithSignedClinicalDataOriginIdentifier:(id)arg0 ;
+(id)predicateForMedicalUserDomainConceptWithCategoryType:(NSInteger)arg0 ;
+(id)predicateForMedicalUserDomainConceptsByResolvingConceptResolutionDefinition:(id)arg0 ;
+(id)predicateForMedicalUserDomainConceptsMappingToSampleWithUUID:(id)arg0 ;
+(id)predicateForMedicalUserDomainConceptsMappingToSampleWithUUIDs:(id)arg0 ;
+(id)predicateForMedicalUserDomainConceptsWithCategoryTypes:(id)arg0 ;
+(id)predicateForMedicationDoseEventWithMedicationIdentifier:(id)arg0 ;
+(id)predicateForMedicationDoseEventWithMedicationIdentifiers:(id)arg0 ;
+(id)predicateForMedicationDoseEventWithScheduleItemIdentifier:(id)arg0 ;
+(id)predicateForMedicationDoseEventWithScheduleItemIdentifiers:(id)arg0 ;
+(id)predicateForMedicationDoseEventWithStatus:(NSInteger)arg0 ;
+(id)predicateForMedicationDoseEventWithStatuses:(id)arg0 ;
+(id)predicateForObjectWithUUID:(id)arg0 ;
+(id)predicateForObjectsAssociatedWithElectrocardiogram:(id)arg0 ;
+(id)predicateForObjectsFromContributorWithUUID:(id)arg0 ;
+(id)predicateForObjectsFromDevices:(id)arg0 ;
+(id)predicateForObjectsFromSource:(id)arg0 ;
+(id)predicateForObjectsFromSourceRevisions:(id)arg0 ;
+(id)predicateForObjectsFromSources:(id)arg0 ;
+(id)predicateForObjectsFromWorkout:(id)arg0 ;
+(id)predicateForObjectsWithDeviceProperty:(id)arg0 allowedValues:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 allowedValues:(id)arg1 ;
+(id)predicateForObjectsWithMetadataKey:(id)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 ;
+(id)predicateForObjectsWithUUIDs:(id)arg0 ;
+(id)predicateForQuantitySamplesWithOperatorType:(NSUInteger)arg0 quantity:(id)arg1 ;
+(id)predicateForRecordsFromClinicalAccountIdentifier:(id)arg0 ;
+(id)predicateForRecordsFromGatewayWithExternalIdentifier:(id)arg0 ;
+(id)predicateForRecordsWithSortDateFromStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;
+(id)predicateForSamplesAssociatedWithSample:(id)arg0 ;
+(id)predicateForSamplesForDayFromDate:(id)arg0 calendar:(id)arg1 options:(NSUInteger)arg2 ;
+(id)predicateForSamplesWithConceptIdentifier:(id)arg0 keyPath:(id)arg1 ;
+(id)predicateForSamplesWithConceptIdentifiers:(id)arg0 keyPath:(id)arg1 ;
+(id)predicateForSamplesWithStartDate:(id)arg0 endDate:(id)arg1 inclusiveEndDates:(BOOL)arg2 options:(NSUInteger)arg3 ;
+(id)predicateForSamplesWithStartDate:(id)arg0 endDate:(id)arg1 options:(NSUInteger)arg2 ;
+(id)predicateForSamplesWithinDateInterval:(id)arg0 options:(NSUInteger)arg1 ;
+(id)predicateForUserDomainConceptWithUUID:(id)arg0 ;
+(id)predicateForUserDomainConceptsWithSemanticIdentifier:(id)arg0 ;
+(id)predicateForUserDomainConceptsWithTypeIdentifier:(id)arg0 ;
+(id)predicateForUserDomainConceptsWithTypeIdentifiers:(id)arg0 ;
+(id)predicateForUserDomainConceptsWithUUIDs:(id)arg0 ;
+(id)predicateForVerifiableClinicalRecordsWithRelevantDateWithinDateInterval:(id)arg0 ;
+(id)predicateForWorkoutActivitiesWithOperatorType:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
+(id)predicateForWorkoutActivitiesWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 averageQuantity:(id)arg2 ;
+(id)predicateForWorkoutActivitiesWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 maximumQuantity:(id)arg2 ;
+(id)predicateForWorkoutActivitiesWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 minimumQuantity:(id)arg2 ;
+(id)predicateForWorkoutActivitiesWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 sumQuantity:(id)arg2 ;
+(id)predicateForWorkoutActivitiesWithStartDate:(id)arg0 endDate:(id)arg1 options:(NSUInteger)arg2 ;
+(id)predicateForWorkoutActivitiesWithWorkoutActivityType:(NSUInteger)arg0 ;
+(id)predicateForWorkoutsWithActivityPredicate:(id)arg0 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 averageQuantity:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 maximumQuantity:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 minimumQuantity:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 quantityType:(id)arg1 sumQuantity:(id)arg2 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 totalDistance:(id)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 totalEnergyBurned:(id)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 totalFlightsClimbed:(id)arg1 ;
+(id)predicateForWorkoutsWithOperatorType:(NSUInteger)arg0 totalSwimmingStrokeCount:(id)arg1 ;
+(id)predicateForWorkoutsWithWorkoutActivityType:(NSUInteger)arg0 ;
+(id)serverInterface;
+(id)serverInterfaceProtocol;
+(id)taskIdentifier;
+(void)configureClientInterface:(id)arg0 ;
+(void)configureServerInterface:(id)arg0 ;
-(BOOL)_queue_deactivateWithError:(id)arg0 ;
-(BOOL)deactivate;
-(BOOL)hasQueryUUID:(id)arg0 ;
-(id)_filterForPredicate:(id)arg0 objectType:(id)arg1 ;
-(id)_initWithObjectType:(id)arg0 predicate:(id)arg1 ;
-(id)_initWithQueryDescriptors:(id)arg0 ;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)_queue_activateWithHealthStore:(id)arg0 activationUUID:(id)arg1 isReactivating:(BOOL)arg2 completion:(id)arg3 ;
-(void)_queue_finishActivationWithServerProxy:(id)arg0 activationUUID:(id)arg1 error:(id)arg2 completion:(id)arg3 ;
-(void)_throwInvalidArgumentExceptionIfHasBeenExecuted:(SEL)arg0 ;
-(void)activateWithClientQueue:(id)arg0 healthStore:(id)arg1 delegate:(id)arg2 time:(CGFloat)arg3 completion:(id)arg4 ;
-(void)client_deliverError:(id)arg0 forQuery:(id)arg1 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_dispatchToClientForUUID:(id)arg0 shouldDeactivate:(BOOL)arg1 block:(id)arg2 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_queryDidFinishActivation:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)reactivateWithHealthStore:(id)arg0 ;


@end


#endif