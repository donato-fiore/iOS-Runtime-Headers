// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRETAILDEMOMODEREQUESTHANDLER_H
#define HMDRETAILDEMOMODEREQUESTHANDLER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, OS_dispatch_queue, HMDRelaunchHandling;


#import "HMDHomeManager.h"

@interface HMDRetailDemoModeRequestHandler : HMFObject <HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, weak) NSObject<HMDRelaunchHandling> *relaunchHandler; // ivar: _relaunchHandler
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initWithHomeManager:(id)arg0 messageDispatcher:(id)arg1 relaunchHandler:(id)arg2 ;
-(void)_handleConfigRetailDemoModeMessage:(id)arg0 ;
-(void)_handleConfigRetailDemoModeMessageForFinalize:(id)arg0 ;
-(void)_handleConfigRetailDemoModeMessageForPrepare:(id)arg0 ;
-(void)configure;


@end


#endif