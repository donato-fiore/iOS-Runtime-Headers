// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WCQUEUEMANAGER_H
#define WCQUEUEMANAGER_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCQueueManager : NSObject

@property BOOL canSend; // ivar: _canSend
@property (retain) NSMutableDictionary *inFlightMessages; // ivar: _inFlightMessages
@property BOOL messageOutstanding; // ivar: _messageOutstanding
@property (retain) NSMutableArray *messageQueue; // ivar: _messageQueue
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)onqueue_peekMessage;
-(void)allowMessageSending;
-(void)cancelQueuedMessages;
-(void)handleSentMessageWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)onqueue_allowMessageSending;
-(void)onqueue_attemptToSend;
-(void)onqueue_cancelDaemonMessages;
-(void)onqueue_cancelQueuedMessages;
-(void)onqueue_clearQueuedMessages;
-(void)onqueue_dequeueMessage;
-(void)onqueue_enqueueMessage:(id)arg0 ;
-(void)onqueue_handleAcceptanceWithCurrentAccepted:(BOOL)arg0 nextAvailable:(BOOL)arg1 ;
-(void)onqueue_handleFailedDaemonConnectionForQueuedMessage:(id)arg0 ;
-(void)onqueue_handleSentMessageWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)onqueue_sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif