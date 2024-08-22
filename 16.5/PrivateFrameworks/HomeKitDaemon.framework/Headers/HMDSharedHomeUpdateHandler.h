// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSHAREDHOMEUPDATEHANDLER_H
#define HMDSHAREDHOMEUPDATEHANDLER_H

@class HMFObject, NSString;
@protocol HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState, OS_dispatch_queue;


#import "HMDHome.h"
#import "HMDSharedHomeUpdateSession.h"

@interface HMDSharedHomeUpdateHandler : HMFObject <HMDSharedHomeUpdateSessionDelegate, HMFLogging, HMFDumpState>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL firstFetchComplete; // ivar: _firstFetchComplete
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (nonatomic) BOOL pendingRequestDataFromResident; // ivar: _pendingRequestDataFromResident
@property (retain, nonatomic) HMDSharedHomeUpdateSession *pendingRequestDataFromResidentSession; // ivar: _pendingRequestDataFromResidentSession
@property (readonly) Class superclass;
@property (getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)dumpState;
-(id)logIdentifier;
-(void)_evaluateNeedForSync;
-(void)_receivedHomeDataFromSourceVersion:(id)arg0 forceUpdateVersion:(BOOL)arg1 completion:(id)arg2 ;
-(void)configureWithHome:(id)arg0 ;
-(void)didCompleteHomeUpdateSession:(id)arg0 withError:(id)arg1 ;
-(void)handleHomeCloudZoneReadyNotification:(id)arg0 ;
-(void)pause;
-(void)receivedHomeDataFromSourceVersion:(id)arg0 forceUpdateVersion:(BOOL)arg1 completion:(id)arg2 ;
-(void)registerForMessages;
-(void)requestHomeDataSync;
-(void)residentsChanged:(id)arg0 ;
-(void)resume;


@end


#endif