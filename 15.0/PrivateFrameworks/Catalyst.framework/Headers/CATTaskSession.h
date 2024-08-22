// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATTASKSESSION_H
#define CATTASKSESSION_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSHashTable, NSDictionary, NSMapTable, NSString, NSUUID;
@protocol CATTransportDelegate, CATTaskOperationNotificationDelegate, OS_dispatch_group, CATTaskSessionDelegate;

#import <Foundation/Foundation.h>

#import "CATStateMachine.h"
#import "CATTaskSession.h"
#import "CATOperationQueue.h"
#import "CATTransport.h"

@interface CATTaskSession : NSObject <CATTransportDelegate, CATTaskOperationNotificationDelegate>

 {
    CATStateMachine *mFSM;
    NSMutableSet *mOperations;
    NSMutableDictionary *mOperationByRemoteUUID;
    NSMutableArray *mEnqueuedMessages;
    CATTaskSession *mStrongSelf;
    NSHashTable *mOrphanedTransports;
    CATOperationQueue *mOrphanedOperationQueue;
    NSDictionary *mPreviousSessionInfo;
    NSMapTable *mRemoteUUIDsByFinishedOperationProgressUpdates;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
    CATOperationQueue *mDelegationQueue;
}


@property (copy, nonatomic) NSDictionary *clientUserInfo; // ivar: _clientUserInfo
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CATTaskSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTransport *transport; // ivar: mTransport
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)captureTransport;
-(id)delegatePrepareOperationWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)abandonTransport;
-(void)acceptConnection;
-(void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg0 ;
-(void)clientDidResumeWithMessage:(id)arg0 ;
-(void)connectWithTransport:(id)arg0 ;
-(void)connectWithTransportFromTaskSession:(id)arg0 ;
-(void)dealloc;
-(void)delegateDidInterruptWithError:(id)arg0 ;
-(void)delegateEnqueueOperation:(id)arg0 ;
-(void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg0 ;
-(void)delegatedidReceiveNotificationWithName:(id)arg0 ;
-(void)didCompleteSendForMessage:(id)arg0 ;
-(void)discardPreviousSessionInfo;
-(void)disconnect;
-(void)enqueueDelegateDidInterruptWithError:(id)arg0 ;
-(void)enqueueMessage:(id)arg0 ;
-(void)enqueueOperation:(id)arg0 ;
-(void)evaluateConnectionWithResumeMessage:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)localOperationDidFinish:(id)arg0 ;
-(void)operationDidFinish:(id)arg0 remoteUUID:(id)arg1 ;
-(void)operationDidIncrementProgress:(id)arg0 remoteUUID:(id)arg1 ;
-(void)postNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)processCancelMessage:(id)arg0 ;
-(void)processFetchProgressMessage:(id)arg0 ;
-(void)processNotificationMessage:(id)arg0 ;
-(void)processSessionMessage:(id)arg0 ;
-(void)processStartMessage:(id)arg0 ;
-(void)processTaskMessage:(id)arg0 ;
-(void)rejectConnection;
-(void)restorePreviousSessionInfo;
-(void)resumeCapturedTransportFromTaskSession:(id)arg0 ;
-(void)resumeTransport:(id)arg0 ;
-(void)savePreviousSessionInfo;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessageThroughTransport:(id)arg0 ;
-(void)sendResumedMessage;
-(void)sessionDidInvalidate;
-(void)taskOperation:(id)arg0 didPostNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)transport:(id)arg0 didFailToSendMessage:(id)arg1 error:(id)arg2 ;
-(void)transport:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)transport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)transport:(id)arg0 didSendMessage:(id)arg1 ;
-(void)transportDidInvalidate:(id)arg0 ;


@end


#endif