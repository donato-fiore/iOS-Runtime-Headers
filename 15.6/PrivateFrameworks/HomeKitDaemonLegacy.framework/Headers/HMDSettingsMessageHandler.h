// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSETTINGSMESSAGEHANDLER_H
#define HMDSETTINGSMESSAGEHANDLER_H

@class HMFObject, HMFMessageDispatcher, NSString, NSUUID;
@protocol HMFMessageReceiver, HMDSettingsMessageHandlerProtocol, HMFLogging, OS_dispatch_queue, HMDSettingsMessageController;


#import "HMDUserMessagePolicy.h"

@interface HMDSettingsMessageHandler : HMFObject <HMFMessageReceiver, HMDSettingsMessageHandlerProtocol, HMFLogging>

 {
    HMFMessageDispatcher *_messageDispatcher;
    NSObject<OS_dispatch_queue> *_queue;
    HMDUserMessagePolicy *_anyUserAllowedPolicy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (retain, nonatomic) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (weak) NSObject<HMDSettingsMessageController> *privateMessageController; // ivar: _privateMessageController
@property (weak) NSObject<HMDSettingsMessageController> *sharedMessageController; // ivar: _sharedMessageController
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 ;
-(void)_handleUpdateValue:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 home:(id)arg1 ;


@end


#endif