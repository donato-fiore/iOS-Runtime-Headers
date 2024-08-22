// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDUSERCLOUDSHARECONTROLLER_H
#define HMDUSERCLOUDSHARECONTROLLER_H

@class NSHashTable, NSMutableDictionary, NSString, HMFTimer, NSMutableArray;
@protocol HMFTimerDelegate, HMFLogging, OS_os_log, OS_dispatch_queue, HMDUserCloudShareControllerDelegate;

#import <Foundation/Foundation.h>


@interface HMDUserCloudShareController : NSObject <HMFTimerDelegate, HMFLogging>

 {
    NSObject<OS_os_log> *_logger;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) NSHashTable *connectedClients; // ivar: _connectedClients
@property (retain, nonatomic) NSMutableDictionary *containerIdToConnectionIdentifierMap; // ivar: _containerIdToConnectionIdentifierMap
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDUserCloudShareControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat pendingRequestTimeoutInterval; // ivar: _pendingRequestTimeoutInterval
@property (retain, nonatomic) HMFTimer *pendingRequestTimer; // ivar: _pendingRequestTimer
@property (readonly, nonatomic) NSMutableArray *pendingRequests; // ivar: _pendingRequests
@property (readonly) Class superclass;


+(id)identifierForConnection:(id)arg0 ;
+(id)logCategory;
-(id)_connectionForContainerID:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 pendingRequestTimeoutInterval:(CGFloat)arg2 ;
-(void)_addRequestToPending:(id)arg0 ;
-(void)_deregisterXpcClient:(id)arg0 ;
-(void)_handlePendingRequestTimeouts;
-(void)_handleShareForRemoteClientRequest:(id)arg0 ;
-(void)_invalidateXpcClient:(id)arg0 ;
-(void)_registerWithXpcClient:(id)arg0 containerIDs:(id)arg1 ;
-(void)_removeTimerIfNotNeeded;
-(void)_resumeRequestsForContainerID:(id)arg0 connection:(id)arg1 ;
-(void)_sendRepairRequest:(id)arg0 toConnection:(id)arg1 ;
-(void)_sendShareRequest:(id)arg0 toConnection:(id)arg1 ;
-(void)_startTimerIfNeeded;
-(void)configure;
-(void)deregisterXpcClient:(id)arg0 ;
-(void)handleShareForRemoteClientRequest:(id)arg0 home:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleShareRepairForRemoteClientRequest:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)invalidateXpcClient:(id)arg0 ;
-(void)registerWithXpcClient:(id)arg0 containerIDs:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif