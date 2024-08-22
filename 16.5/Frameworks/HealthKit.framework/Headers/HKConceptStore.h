// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCONCEPTSTORE_H
#define HKCONCEPTSTORE_H

@class NSString, NSUUID;
@protocol _HKXPCExportable, HKConceptStoreClientInterface;

#import <Foundation/Foundation.h>

#import "HKObserverSet.h"
#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKConceptStore : NSObject <_HKXPCExportable, HKConceptStoreClientInterface>

 {
    HKObserverSet *_conceptObservers;
    os_unfair_lock_s _conceptIndexManagerStateLock;
    NSUInteger _lastKnownConceptIndexManagerState;
}


@property (readonly, nonatomic) NSUInteger currentConceptIndexerState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
+(id)taskServerIdentifier;
-(id)countOfConceptsAssociatedToUserRecordsWithError:(*id)arg0 ;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_startObservingConceptIndexManager;
-(void)clientRemote_conceptIndexManagerDidChangeState:(NSUInteger)arg0 ;
-(void)connectionInvalidated;
-(void)fetchConceptForIdentifier:(id)arg0 loadRelationships:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)registerAsConceptObserver:(id)arg0 onQueue:(id)arg1 ;
-(void)startObservingConceptIndexManagerWithCompletion:(id)arg0 ;
-(void)unregisterAsConceptObserver:(id)arg0 ;


@end


#endif