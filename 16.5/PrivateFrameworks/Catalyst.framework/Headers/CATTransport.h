// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATTRANSPORT_H
#define CATTRANSPORT_H

@class NSString;
@protocol CATTransportDelegate;

#import <Foundation/Foundation.h>

#import "CATStateMachine.h"
#import "CATOperationQueue.h"
#import "CATTransport.h"

@interface CATTransport : NSObject {
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
}


@property (weak, nonatomic) NSObject<CATTransportDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)operationToSendMessage:(id)arg0 ;
-(void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
-(void)cancelHelloMessageAndResumeQueueOperations;
-(void)dealloc;
-(void)didInterruptWithError:(id)arg0 ;
-(void)didInvalidate;
-(void)didReceiveMessage:(id)arg0 ;
-(void)enqueueDelegateCouldNotConnectWithError:(id)arg0 ;
-(void)enqueueDelegateDidConnect;
-(void)enqueueDelegateDidInterruptWithError:(id)arg0 ;
-(void)enqueueDelegateDidInvalidateAndFinalize;
-(void)enqueueDelegateDidReceiveMessage:(id)arg0 ;
-(void)enqueueSendForMessage:(id)arg0 ;
-(void)invalidSendForMessage:(id)arg0 ;
-(void)invalidate;
-(void)invalidateConnection;
-(void)resume;
-(void)resumeConnection;
-(void)resumeQueue;
-(void)resumeQueueAndConnection;
-(void)sendHelloMessageAndResumeQueue;
-(void)sendMessage:(id)arg0 ;
-(void)suspend;
-(void)suspendConnection;
-(void)suspendQueue;
-(void)suspendQueueAndConnection;


@end


#endif