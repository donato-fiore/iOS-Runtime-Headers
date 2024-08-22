// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDRESIDENTSYNCSERVER_H
#define HMDRESIDENTSYNCSERVER_H

@class HMFMessageDispatcher, NSPersistentStore, NSPersistentHistoryToken;
@protocol HMDResidentSyncServer, HMDResidentDeviceManager;


#import "HMDResidentSyncController.h"

@interface HMDResidentSyncServer : HMDResidentSyncController <HMDResidentSyncServer>

 {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> *_residentDeviceManager;
    NSPersistentStore *_store;
    NSPersistentHistoryToken *_storeExemplarToken;
}




-(id)decodeToken:(id)arg0 error:(*id)arg1 ;
-(id)initWithHome:(id)arg0 dispatcher:(id)arg1 residentDeviceManager:(id)arg2 persistence:(id)arg3 codingModel:(id)arg4 ;
-(id)start;
-(void)_handleFetchHomeData:(id)arg0 ;
-(void)handlePersistentStoreChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)interceptRemoteResidentRequest:(id)arg0 proceed:(id)arg1 ;


@end


#endif