// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOTEEVENTROUTERSERVERMESSAGERECEIVER_H
#define HMDREMOTEEVENTROUTERSERVERMESSAGERECEIVER_H

@class NSUUID, NSString;
@protocol HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDRemoteEventRouterServer.h"

@interface HMDRemoteEventRouterServerMessageReceiver : NSObject <HMFMessageReceiver>

 {
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_queue;
    HMDRemoteEventRouterServer *_server;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


-(void)handleRequestMessage:(id)arg0 ;


@end


#endif