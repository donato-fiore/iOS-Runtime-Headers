// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTSYNCCLIENT_H
#define HMDRESIDENTSYNCCLIENT_H

@class HMFMessageDispatcher, NSHashTable, HMFExponentialBackoffTimer, HMFFuture, HMFPromise, NSString;
@protocol HMFTimerDelegate, HMDResidentSyncClient, HMDResidentDeviceManager, HMDResidentSyncClientDataSource, HMMLogEventSubmitting;


#import "HMDResidentSyncController.h"
#import "MKFResidentSyncMetadata.h"

@interface HMDResidentSyncClient : HMDResidentSyncController <HMFTimerDelegate, HMDResidentSyncClient>

 {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> *_residentDeviceManager;
    id<HMDResidentSyncClientDataSource> *_dataSource;
    BOOL _residentCapable;
    NSHashTable *_requestsInProgress;
    MKFResidentSyncMetadata *_metadata;
    HMFExponentialBackoffTimer *_retryTimer;
    HMFFuture *_performFetchJitterFuture;
    HMFPromise *_performFetchJitterPromise;
    BOOL _retryRequired;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 codingModel:(id)arg1 dispatcher:(id)arg2 residentDeviceManager:(id)arg3 notificationCenter:(id)arg4 persistence:(id)arg5 isResidentCapable:(BOOL)arg6 dataSource:(id)arg7 logEventSubmitter:(id)arg8 ;
-(id)start;
-(void)_handleHomeDataChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)performResidentRequest:(id)arg0 options:(NSUInteger)arg1 ;
-(void)performSync;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif