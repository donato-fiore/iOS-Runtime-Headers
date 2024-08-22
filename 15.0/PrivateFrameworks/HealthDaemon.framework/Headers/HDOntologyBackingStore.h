// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDONTOLOGYBACKINGSTORE_H
#define HDONTOLOGYBACKINGSTORE_H

@class NSURL, NSString, HKObserverSet, HDAssertionManager;
@protocol HDContentProtectionObserver, HDHealthDaemonReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyAssetAvailabilityObserver, HDProtectedResourceStoreProvider, HDProtectedResourceStore, HDAssertionObserver, HDProfileManagerObserver, HDDatabaseProtectedDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDSimpleGraphDatabase.h"
#import "HDDaemon.h"

@interface HDOntologyBackingStore : NSObject <HDContentProtectionObserver, HDHealthDaemonReadyObserver, HDHealthRecordsAccountExistenceObserver, HDOntologyAssetAvailabilityObserver, HDProtectedResourceStoreProvider, HDProtectedResourceStore, HDAssertionObserver, HDProfileManagerObserver, HDDatabaseProtectedDataObserver>

 {
    uint8_t _invalidated;
    NSURL *_ontologyURL;
    NSString *_threadLocalTransactionKey;
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_observationQueue;
    uint8_t _isDatabaseOpen;
    uint8_t _isObservingAssetAvailability;
    os_unfair_lock_s _availabilityLock;
    BOOL _available;
    os_unfair_lock_s _databaseLock;
    HDSimpleGraphDatabase *_graphDatabase;
    NSObject<OS_dispatch_queue> *_protectedResourceAssertionQueue;
    HDAssertionManager *_protectedResourceAssertionManager;
}


@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *protectedResourceIdentifier;
@property (readonly) Class superclass;


+(id)unitTesting_ontologyBackingStoreForDaemon:(id)arg0 baseURL:(id)arg1 ;
+(id)unitTesting_ontologyURLWithBaseURL:(id)arg0 ;
-(BOOL)forceImportOntologyAssetWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)performOntologyTransactionForWrite:(BOOL)arg0 profile:(id)arg1 databaseTransaction:(id)arg2 error:(*id)arg3 transactionHandler:(id)arg4 ;
-(id)_initWithDaemon:(id)arg0 baseURL:(id)arg1 ;
-(id)checkOutProtectedResourceWithAssertion:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithDaemon:(id)arg0 ;
-(id)protectedResourceStoreForProfile:(id)arg0 ;
-(id)requestProtectedResourceAccessAssertionForOwnerIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)accountExistenceNotifier:(id)arg0 didChangeHealthRecordAccountExistence:(BOOL)arg1 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)assetProvider:(id)arg0 didChangeAvailability:(NSInteger)arg1 ;
-(void)checkInProtectedResource:(id)arg0 ;
-(void)close;
-(void)contentProtectionStateChanged:(NSInteger)arg0 previousState:(NSInteger)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)invalidate;
-(void)obliterateWithReason:(id)arg0 ;
-(void)profileListDidChange;
-(void)registerOntologyDatabase:(id)arg0 ;


@end


#endif