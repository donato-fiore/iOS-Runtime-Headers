// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTSYNCCLIENT_H
#define HMDRESIDENTSYNCCLIENT_H

@class HMFMessageDispatcher, NSHashTable;
@protocol HMDResidentSyncClient, HMDResidentDeviceManager;


#import "HMDResidentSyncController.h"
#import "MKFResidentSyncMetadata.h"

@interface HMDResidentSyncClient : HMDResidentSyncController <HMDResidentSyncClient>

 {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> *_residentDeviceManager;
    NSHashTable *_requestsInProgress;
    MKFResidentSyncMetadata *_metadata;
}




-(id)initWithHome:(id)arg0 dispatcher:(id)arg1 residentDeviceManager:(id)arg2 persistence:(id)arg3 codingModel:(id)arg4 ;
-(id)start;
-(void)_handleHomeDataChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)performResidentRequest:(id)arg0 options:(NSUInteger)arg1 ;
-(void)performSync;


@end


#endif