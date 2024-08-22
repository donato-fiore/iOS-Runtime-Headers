// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDATACOLLECTOR_H
#define HKDATACOLLECTOR_H

@class NSUUID, NSMutableArray, NSMutableDictionary, NSString;
@protocol _HKXPCExportable, HKDataCollectorClientInterface, OS_dispatch_queue, OS_dispatch_source, HKDataCollectorDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "HKRetryableOperation.h"
#import "HKDataCollectorCollectionConfiguration.h"
#import "HKDevice.h"
#import "HKQuantityType.h"

@interface HKDataCollector : NSObject <_HKXPCExportable, HKDataCollectorClientInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _state;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    HKRetryableOperation *_retryableOperation;
    NSInteger _totalDatumCount;
    NSUUID *_registrationUUID;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    CGFloat _unitTest_maxDatumAgeOverride;
    CGFloat _unitTest_clientFlushRequestTimeoutOverride;
    id *_unitTest_registrationCompleteHandler;
    BOOL _shouldFlushAll;
    NSMutableArray *_flushRequests;
    NSMutableArray *_pendingBatches;
    NSMutableDictionary *_unconfirmedBatchesByUUID;
    NSMutableDictionary *_unpersistedBatchesByUUID;
    NSObject<OS_dispatch_source> *_reconsiderationSource;
    BOOL _requiresRegistration;
    BOOL _hasResumed;
    BOOL _invalidated;
    id *_resumeCompletion;
    id *_finishCompletion;
    CGFloat _lastLogTime;
}


@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) HKDataCollectorCollectionConfiguration *collectionConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKDataCollectorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, copy) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(BOOL)_datumsInDateOrder:(id)arg0 secondDatum:(id)arg1 ;
-(BOOL)_validateDatums:(id)arg0 error:(*id)arg1 ;
-(id)_prunedBatch:(id)arg0 maximumLength:(NSInteger)arg1 ;
-(id)_queue_callToDelegateAndEnqueueForClientFlushRequest:(id)arg0 ;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 bundleIdentifier:(id)arg1 quantityType:(id)arg2 ;
-(id)remoteInterface;
-(id)unitTest_pendingBatches;
-(id)unitTest_unconfirmedBatches;
-(id)unitTest_unpersistedBatches;
-(void)_queue_checkForFinish;
-(void)_queue_considerCompletingFlushRequests;
-(void)_queue_considerSendingBatches;
-(void)_queue_insertBatchForDatums:(id)arg0 device:(id)arg1 metadata:(id)arg2 completion:(id)arg3 ;
-(void)_queue_pruneOldDatums;
-(void)_queue_requestRegistration;
-(void)_queue_resetUnpersistedBatches;
-(void)_queue_sendBatch:(id)arg0 ;
-(void)_queue_taskServer_insertDatums:(id)arg0 device:(id)arg1 metadata:(id)arg2 batchUUID:(id)arg3 completion:(id)arg4 ;
-(void)_queue_updateReconsiderationTimer;
-(void)_removeBatch:(id)arg0 ;
-(void)_requestRegistration;
-(void)clientRemote_beginCollectionWithConfiguration:(id)arg0 lastPersistedDatum:(id)arg1 registrationUUID:(id)arg2 ;
-(void)clientRemote_collectThroughDate:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_collectionConfigurationDidChange:(id)arg0 ;
-(void)clientRemote_finishedPersistenceForBatch:(id)arg0 error:(id)arg1 ;
-(void)clientRemote_receivedBatch:(id)arg0 error:(id)arg1 ;
-(void)clientRemote_synchronizeWithCompletion:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)finishWithCompletion:(id)arg0 ;
-(void)insertDatums:(id)arg0 device:(id)arg1 metadata:(id)arg2 completion:(id)arg3 ;
-(void)resumeWithCompletion:(id)arg0 ;
-(void)unitTest_setClientFlushRequestTimeoutOverride:(CGFloat)arg0 ;
-(void)unitTest_setMaxDatumAgeOverride:(CGFloat)arg0 ;
-(void)unitTest_setRegistrationCompleteHandler:(id)arg0 ;


@end


#endif