// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESIDENTSYNCSERVER_H
#define HMDRESIDENTSYNCSERVER_H

@class HMFMessageDispatcher, NSPersistentStore, NSPersistentHistoryToken;
@protocol HMDResidentSyncServer, HMDResidentDeviceManager, HMMLogEventSubmitting;


#import "HMDResidentSyncController.h"

@interface HMDResidentSyncServer : HMDResidentSyncController <HMDResidentSyncServer>

 {
    HMFMessageDispatcher *_dispatcher;
    id<HMDResidentDeviceManager> *_residentDeviceManager;
    NSPersistentStore *_store;
    NSPersistentHistoryToken *_storeExemplarToken;
    BOOL _isPrimaryResident;
    NSPersistentHistoryToken *_currentToken;
}


@property (readonly, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter


-(id)decodeToken:(id)arg0 error:(*id)arg1 ;
-(id)initWithHome:(id)arg0 codingModel:(id)arg1 dispatcher:(id)arg2 residentDeviceManager:(id)arg3 notificationCenter:(id)arg4 persistence:(id)arg5 logEventSubmitter:(id)arg6 ;
-(id)start;
-(void)_handleFetchHomeData:(id)arg0 ;
-(void)handlePersistentStoreChanged:(id)arg0 ;
-(void)handlePrimaryResidentChanged:(id)arg0 ;
-(void)interceptRemoteResidentRequest:(id)arg0 proceed:(id)arg1 ;
-(void)stop;


@end


#endif