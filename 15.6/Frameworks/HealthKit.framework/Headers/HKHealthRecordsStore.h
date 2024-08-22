// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHEALTHRECORDSSTORE_H
#define HKHEALTHRECORDSSTORE_H

@class NSString;
@protocol HKHealthRecordsStoreInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "HKObserverSet.h"
#import "HKHealthStore.h"

@interface HKHealthRecordsStore : NSObject <HKHealthRecordsStoreInterface, _HKXPCExportable>

 {
    os_unfair_lock_s _ivarLock;
    HKTaskServerProxyProvider *_proxyProvider;
    NSInteger _lastKnownIngestionState;
}


@property (retain, nonatomic) HKObserverSet *chrSupportedStateChangeObservers; // ivar: _chrSupportedStateChangeObservers
@property (readonly, nonatomic) NSInteger currentIngestionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKObserverSet *ingestionStateChangeObservers; // ivar: _ingestionStateChangeObservers
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_didCallReestablishProxyConnectionIfObserversArePresent; // ivar: _unitTesting_didCallReestablishProxyConnectionIfObserversArePresent


+(id)taskIdentifier;
-(BOOL)hasAnyHealthRecordsAccount;
-(BOOL)hasGatewayBackedHealthRecordsAccount;
-(id)_actionCompletionWithObjectOnClientQueue:(SEL)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_establishProxyConnection;
-(void)_establishProxyConnectionIfNoObserversArePresent;
-(void)_executeCheapCallOnPluginServerProxy:(id)arg0 ;
// -(void)_fetchHealthRecordsPluginServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_getSynchronousHealthRecordsPluginServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_hk_shouldPromptForOptInClinicalDataCollection:(id)arg0 ;
-(void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)arg0 ;
-(void)addHealthRecordsSupportedChangeListener:(id)arg0 ;
-(void)addIngestionStateListener:(id)arg0 ;
-(void)cancelInFlightSearchQueriesWithCompletion:(id)arg0 ;
-(void)clientRemote_healthRecordsSupportedDidChangeTo:(BOOL)arg0 ;
-(void)clientRemote_updateIngestionState:(NSInteger)arg0 ;
-(void)connectionInvalidated;
-(void)deregisterAppSourceFromClinicalUnlimitedAuthorizationModeConfirmation:(id)arg0 completion:(id)arg1 ;
-(void)fetchClinicalOptInDataCollectionFilePathsWithCompletion:(id)arg0 ;
-(void)fetchExportedPropertiesForHealthRecord:(id)arg0 completion:(id)arg1 ;
-(void)fetchFHIRJSONDocumentWithAccountIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchLogoDataForBrand:(id)arg0 scaleKey:(id)arg1 completion:(id)arg2 ;
-(void)fetchLogoDataForFeaturedBrandsAtScaleKey:(id)arg0 completion:(id)arg1 ;
-(void)fetchRawSourceStringForHealthRecord:(id)arg0 completion:(id)arg1 ;
-(void)fetchRemoteGatewayWithExternalID:(id)arg0 batchID:(id)arg1 completion:(id)arg2 ;
-(void)fetchRemoteProviderWithExternalID:(id)arg0 batchID:(id)arg1 completion:(id)arg2 ;
-(void)fetchRemoteSearchResultsPageForQuery:(id)arg0 completion:(id)arg1 ;
-(void)getHealthRecordsIngestionFrequencyWithCompletion:(id)arg0 ;
-(void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg0 accountIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)ingestHealthRecordsWithFHIRDocumentHandle:(id)arg0 accountIdentifier:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)ingestHealthRecordsWithOptions:(NSUInteger)arg0 reason:(id)arg1 accountIdentifiers:(id)arg2 completion:(id)arg3 ;
-(void)registerAppSourceForClinicalUnlimitedAuthorizationModeConfirmation:(id)arg0 completion:(id)arg1 ;
-(void)removeHealthRecordsSupportedChangeListener:(id)arg0 ;
-(void)removeIngestionStateListener:(id)arg0 ;
-(void)resetClinicalContentAnalyticsAnchorsWithCompletion:(id)arg0 ;
-(void)resetClinicalOptInDataCollectionAnchorsWithCompletion:(id)arg0 ;
-(void)resetHealthRecordsLastExtractedRowIDWithCompletion:(id)arg0 ;
-(void)setHealthRecordsIngestionFrequency:(NSInteger)arg0 completion:(id)arg1 ;
-(void)stringifyExtractionFailureReasonsForRecord:(id)arg0 completion:(id)arg1 ;
-(void)triggerClinicalContentAnalyticsForReason:(NSInteger)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)triggerClinicalOptInDataCollectionForReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)triggerHealthCloudUploadWithCompletion:(id)arg0 ;


@end


#endif