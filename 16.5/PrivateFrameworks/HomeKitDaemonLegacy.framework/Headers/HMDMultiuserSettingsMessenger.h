// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMULTIUSERSETTINGSMESSENGER_H
#define HMDMULTIUSERSETTINGSMESSENGER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDMultiuserSettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)logIdentifier;
-(void)handleFetchMultiuserSettingsRequest:(id)arg0 ;
-(void)registerForMessages;


@end


#endif