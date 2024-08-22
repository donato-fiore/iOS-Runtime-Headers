// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMDHOMEADMINISTRATORRECEIVER_H
#define __HMDHOMEADMINISTRATORRECEIVER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDHomeAdministratorHandler.h"

@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) HMDHomeAdministratorHandler *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, weak) NSObject<HMFMessageReceiver> *receiver; // ivar: _receiver
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithReceiver:(id)arg0 handler:(id)arg1 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)__handleXPCMessage:(id)arg0 ;
-(void)dealloc;
-(void)registerForMessage:(id)arg0 policies:(id)arg1 ;


@end


#endif