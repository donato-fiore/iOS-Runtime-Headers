// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHOMEMEDIASYSTEMCONTROLLERMESSAGEHANDLER_H
#define HMDHOMEMEDIASYSTEMCONTROLLERMESSAGEHANDLER_H

@class NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFMessageReceiver, HMDHomeMediaSystemMessageHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHome.h"

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFMessageReceiver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDHomeMediaSystemMessageHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 home:(id)arg1 messageDispatcher:(id)arg2 delegate:(id)arg3 ;
-(id)messageDestination;
-(id)preProcessMediaSystemMessage:(id)arg0 ;
-(void)_handleAddMediaSystem:(id)arg0 ;
-(void)_handleAddMediaSystemWithPreProcessedMessage:(id)arg0 ;
-(void)_handleRemoveMediaSystem:(id)arg0 ;
-(void)_registerForMessages;
-(void)handleUpdateMediaSystem:(id)arg0 ;


@end


#endif