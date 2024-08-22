// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKONTOLOGYSTORE_H
#define HKONTOLOGYSTORE_H

@class NSUUID, HKObserverSet<HKOntologyStoreObserver>, NSString;
@protocol _HKXPCExportable, HKOntologyStoreClientInterface;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKOntologyStore : NSObject <_HKXPCExportable, HKOntologyStoreClientInterface>

 {
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKObserverSet<HKOntologyStoreObserver> *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTesting_didChangeObserverRegistration; // ivar: _unitTesting_didChangeObserverRegistration


+(id)clientInterface;
+(id)serverInterface;
-(BOOL)_synchronouslyRegisterToObserveOntologyStoreChanges:(*id)arg0 ;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_callUnitTestHookObserving:(BOOL)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleAutomaticProxyReconnection;
-(void)_notifyObserversAboutReconnect;
-(void)_observeOntologyStoreChanges:(BOOL)arg0 completion:(id)arg1 ;
-(void)_registerFirstObserver;
-(void)_unregisterLastObserver;
-(void)client_didImportEntry:(id)arg0 ;
-(void)client_didStageEntry:(id)arg0 ;
-(void)connectionInvalidated;
-(void)downloadRequiredShardsWithCompletion:(id)arg0 ;
-(void)importRequiredShardsWithCompletion:(id)arg0 ;
-(void)insertEntries:(id)arg0 completion:(id)arg1 ;
-(void)markShardsWithIdentifiers:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)ontologyServerURLWithCompletion:(id)arg0 ;
-(void)ontologyShardRegistryEntriesWithCompletion:(id)arg0 ;
-(void)pruneOntologyWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)requestGatedOntologyUpdateWithCompletion:(id)arg0 ;
-(void)setOntologyServerURL:(id)arg0 completion:(id)arg1 ;
-(void)shardRequirementStatusesWithCompletion:(id)arg0 ;
-(void)unitTest_noOpWithCompletion:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateOntologyForReason:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateShardRegistryWithCompletion:(id)arg0 ;


@end


#endif