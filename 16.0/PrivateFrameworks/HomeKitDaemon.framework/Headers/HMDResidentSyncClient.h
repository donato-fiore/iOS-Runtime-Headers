// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRESIDENTSYNCCLIENT_H
#define HMDRESIDENTSYNCCLIENT_H

@class HMFMessageDispatcher, NSHashTable, HMFFuture, HMFExponentialBackoffTimer, NSString;
@protocol HMFTimerDelegate, HMDResidentSyncClient, HMDResidentDeviceManager;


#import "HMDResidentSyncController.h"
#import "MKFResidentSyncMetadata.h"

@interface HMDResidentSyncClient : HMDResidentSyncController <HMFTimerDelegate, HMDResidentSyncClient>

 {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> *_residentDeviceManager;
    NSHashTable *_requestsInProgress;
    HMFFuture *_primaryResidentDiscovery;
    MKFResidentSyncMetadata *_metadata;
    HMFExponentialBackoffTimer *_retryTimer;
    BOOL _retryRequired;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 codingModel:(id)arg1 dispatcher:(id)arg2 residentDeviceManager:(id)arg3 notificationCenter:(id)arg4 persistence:(id)arg5 ;
-(id)start;
-(void)_handleHomeDataChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)performResidentRequest:(id)arg0 options:(NSUInteger)arg1 ;
-(void)performSync;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif