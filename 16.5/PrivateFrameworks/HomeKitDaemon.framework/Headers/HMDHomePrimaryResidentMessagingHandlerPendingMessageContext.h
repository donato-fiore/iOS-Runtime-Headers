// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPRIMARYRESIDENTMESSAGINGHANDLERPENDINGMESSAGECONTEXT_H
#define HMDHOMEPRIMARYRESIDENTMESSAGINGHANDLERPENDINGMESSAGECONTEXT_H

@class NSUUID, HMFMessage;

#import <Foundation/Foundation.h>

#import "HMDTimerManagerTimerContext.h"

@interface HMDHomePrimaryResidentMessagingHandlerPendingMessageContext : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSUUID *lastPrimaryResidentDestinationUUID; // ivar: _lastPrimaryResidentDestinationUUID
@property (readonly, nonatomic) HMFMessage *message; // ivar: _message
@property (nonatomic, getter=isMessageInFlight) BOOL messageInFlight; // ivar: _messageInFlight
@property (readonly, nonatomic) HMDTimerManagerTimerContext *messageTimerContext; // ivar: _messageTimerContext
@property (retain, nonatomic) HMDTimerManagerTimerContext *queueTimerContext; // ivar: _queueTimerContext


-(id)initWithMessage:(id)arg0 messageTimerContext:(id)arg1 ;


@end


#endif