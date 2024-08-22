// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDQUERYSERVER_H
#define HDQUERYSERVER_H

@class NSDictionary, NSArray, HKQueryServerConfiguration, NSString, _HKFilter, HKObjectType, NSSet, HKQuantityType, NSUUID, HKSampleType;
@protocol HDDatabaseProtectedDataObserver, HKQueryServerInterface, HDDataObserver, HDTaskServer, OS_dispatch_queue, HKQueryClientInterface><NSXPCProxyCreating, HDQueryServerDelegate;

#import <Foundation/Foundation.h>

#import "HDDataCollectionAssertion.h"
#import "HDDaemonTransaction.h"
#import "HDDatabaseTransactionContextStatistics.h"
#import "HDHealthStoreClient.h"
#import "HDQueryServerClientState.h"
#import "HDProfile.h"

@interface HDQueryServer : NSObject <HDDatabaseProtectedDataObserver, HKQueryServerInterface, HDDataObserver, HDTaskServer>

 {
    NSDictionary *_baseDataEntityEncodingOptions;
    id *_queryDidFinishHandler;
    NSArray *_dataObservationAssertions;
    HDDataCollectionAssertion *_dataCollectionAssertion;
    HDDaemonTransaction *_activationTransaction;
    HDDaemonTransaction *_runningTransaction;
    uint8_t _queryState;
    BOOL _shouldTakeObservationAssertions;
    BOOL _observingData;
    BOOL _isCollectingData;
    uint8_t _shouldFinish;
    uint8_t _shouldPause;
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    HDDatabaseTransactionContextStatistics *_transactionStatistics;
}


@property (readonly, nonatomic) CGFloat activationTime;
@property (readonly, nonatomic) HDHealthStoreClient *client; // ivar: _client
@property (readonly) BOOL clientHasActiveWorkout;
@property (readonly, nonatomic) NSObject<HKQueryClientInterface><NSXPCProxyCreating> *clientProxy;
@property (copy, nonatomic) HDQueryServerClientState *clientState; // ivar: _clientState
@property (nonatomic) CGFloat collectionInterval; // ivar: _collectionInterval
@property (readonly, copy, nonatomic) HKQueryServerConfiguration *configuration; // ivar: _configuration
@property (nonatomic) NSInteger dataCount; // ivar: _dataCount
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDQueryServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) _HKFilter *filter; // ivar: _filter
@property (readonly, nonatomic) BOOL hasActiveDaemonTransaction;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKObjectType *objectType; // ivar: _objectType
@property (readonly, copy, nonatomic) NSSet *objectTypes;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) HKQuantityType *quantityType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // ivar: _queryQueue
@property (readonly) NSInteger queryState;
@property (readonly, copy, nonatomic) NSUUID *queryUUID; // ivar: _queryUUID
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unitTest_queryServerDidFinishStateTransitionHandler; // ivar: _unitTest_queryServerDidFinishStateTransitionHandler
@property (copy, nonatomic) id *unitTest_queryServerSetShouldPauseHandler; // ivar: _unitTest_queryServerSetShouldPauseHandler
@property (copy, nonatomic) id *unitTest_queryServerWillChangeStateHandler; // ivar: _unitTest_queryServerWillChangeStateHandler


+(BOOL)supportsAnchorBasedAuthorization;
+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)builtInQueryServerClasses;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldObserveAllSampleTypes;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
-(BOOL)_shouldStopProcessingQuery;
-(BOOL)_shouldSuspendQuery;
-(BOOL)prepareToActivateServerWithError:(*id)arg0 ;
-(BOOL)validateConfiguration:(*id)arg0 ;
-(CGFloat)_queue_logThresholdHardwareFactor;
-(CGFloat)_queue_queryLogThreshold;
-(id)createDatabaseTransactionContext;
-(id)diagnosticDescription;
-(id)exportedInterface;
-(id)filteredSamplesForClientWithSamples:(id)arg0 ;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)newDataEntityEnumerator;
-(id)readAuthorizationStatusForType:(id)arg0 error:(*id)arg1 ;
-(id)remoteInterface;
-(id)sampleAuthorizationFilter:(SEL)arg0 ;
-(id)sanitizedSampleForQueryClient:(id)arg0 ;
-(id)taskUUID;
-(void)_queue_didChangeStateFromPreviousState:(NSInteger)arg0 state:(NSInteger)arg1 ;
-(void)_queue_didDeactivate;
-(void)_queue_logQueryWithDuration:(CGFloat)arg0 statistics:(id)arg1 ;
-(void)_queue_start;
-(void)_queue_startDataCollection;
-(void)_queue_stop;
-(void)_queue_stopDataCollection;
-(void)activateServerWithClientState:(id)arg0 error:(id)arg1 ;
-(void)clientStateDidChange:(id)arg0 ;
-(void)clientStateWillChange:(id)arg0 ;
-(void)connectionInvalidated;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)deactivateServerWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)onQueue:(id)arg0 ;
-(void)remote_deactivateServer;
-(void)remote_startQueryWithCompletion:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;
-(void)scheduleDatabaseAccessOnQueueWithBlock:(id)arg0 ;
-(void)schedulePause;
-(void)setQueryDidFinishHandler:(id)arg0 ;


@end


#endif