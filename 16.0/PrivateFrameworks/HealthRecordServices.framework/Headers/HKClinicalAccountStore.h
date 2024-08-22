// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALACCOUNTSTORE_H
#define HKCLINICALACCOUNTSTORE_H

@class HKTaskServerProxyProvider, HKObserverSet, NSString, HKHealthStore;
@protocol HKClinicalAccountStoreClientInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKClinicalAccountStore : NSObject <HKClinicalAccountStoreClientInterface, _HKXPCExportable>

 {
    os_unfair_lock_s _lock;
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet *_accountStateChangeObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_didCallReestablishProxyConnectionIfObserversArePresent; // ivar: _unitTesting_didCallReestablishProxyConnectionIfObserversArePresent


+(id)taskIdentifier;
-(BOOL)supportsClinicalSharing;
-(id)_clientQueueBoolHandlerWithCompletion:(SEL)arg0 ;
-(id)_clientQueueDoubleBoolHandlerWithCompletion:(SEL)arg0 ;
-(id)accountWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)allAccountsWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_establishProxyConnection;
-(void)_establishProxyConnectionIfNoObserversArePresent;
-(void)_executeCheapCallOnPluginServerProxy:(id)arg0 ;
// -(void)_fetchServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_getSynchronousServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_reestablishProxyConnectionIfObserversArePresentWithPluginServerProxy:(id)arg0 ;
-(void)addAccountStateChangeListener:(id)arg0 ;
-(void)beginInitialLoginSessionForGateway:(id)arg0 completion:(id)arg1 ;
-(void)beginReloginSessionForAccount:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_accountDidChange:(id)arg0 changeType:(NSInteger)arg1 ;
-(void)connectionInvalidated;
-(void)createStaticAccountWithTitle:(id)arg0 subtitle:(id)arg1 description:(id)arg2 countryCode:(id)arg3 fhirVersion:(id)arg4 onlyIfNeededForSimulatedGatewayID:(id)arg5 completion:(id)arg6 ;
-(void)deleteAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)endLoginSessionWithState:(id)arg0 code:(id)arg1 completion:(id)arg2 ;
-(void)fetchAccountForSource:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchAccountsForGateways:(id)arg0 completion:(id)arg1 ;
-(void)fetchAllAccountsWithCompletion:(id)arg0 ;
-(void)fetchAllEventsForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)hasAnyHealthRecordsAccountWithCompletion:(id)arg0 ;
-(void)hasGatewayBackedHealthRecordsAccountWithCompletion:(id)arg0 ;
-(void)invalidateCredentialForAccountWithIdentifier:(id)arg0 event:(id)arg1 completion:(id)arg2 ;
-(void)persistEphemeralAccount:(id)arg0 triggerIngestion:(BOOL)arg1 completion:(id)arg2 ;
-(void)pruneAuthenticationDataWithCompletion:(id)arg0 ;
-(void)refreshAccountConnectionInformationForAccountsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)removeAccountStateChangeListener:(id)arg0 ;
-(void)replaceAccountWithNewAccountForAccountWithIdentifier:(id)arg0 usingCredentialWithPersistentID:(id)arg1 completion:(id)arg2 ;
-(void)shouldShowHealthRecordsSectionWithCompletion:(id)arg0 ;
-(void)simulateUnmergeEventForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateAccountCredentialStateForAccountWithIdentifier:(id)arg0 state:(NSInteger)arg1 event:(id)arg2 completion:(id)arg3 ;
-(void)updateClinicalSharingStatusForAccountWithIdentifier:(id)arg0 firstSharedDate:(id)arg1 lastSharedDate:(id)arg2 userStatus:(id)arg3 multiDeviceStatus:(id)arg4 primaryDeviceName:(id)arg5 completion:(id)arg6 ;


@end


#endif