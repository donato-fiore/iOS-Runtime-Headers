// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATTASKCLIENT_H
#define CATTASKCLIENT_H

@class NSMutableSet, NSMapTable, NSMutableArray, NSHashTable, NSString, NSDictionary, NSUUID;
@protocol CATTransportDelegate, OS_dispatch_group, CATTaskClientDelegate;

#import <Foundation/Foundation.h>

#import "CATStateMachine.h"
#import "CATTaskClient.h"
#import "CATTransport.h"

@interface CATTaskClient : NSObject <CATTransportDelegate>

 {
    CATStateMachine *mFSM;
    NSMutableSet *mActiveRemoteTaskOperations;
    NSMapTable *mRemoteTaskByUUID;
    NSMutableArray *mEnqueuedMessages;
    NSMutableArray *mEnqueuedTaskUUIDs;
    NSHashTable *mOrphanedTransports;
    CATTaskClient *mStrongSelf;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CATTaskClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *serverUserInfo; // ivar: _serverUserInfo
@property (retain, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTransport *transport; // ivar: mTransport
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)captureTransport;
-(id)init;
-(id)prepareTaskOperationForRequest:(id)arg0 ;
-(void)abandonTransport;
-(void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)arg0 ;
-(void)activeOperationDidFinish:(id)arg0 ;
-(void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg0 ;
-(void)connectWithTransport:(id)arg0 ;
-(void)connectWithTransportFromTaskClient:(id)arg0 ;
-(void)dealloc;
-(void)delegateDidInterruptWithError:(id)arg0 ;
-(void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg0 ;
-(void)delegatedidReceiveNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)didPrepareTaskOperation:(id)arg0 ;
-(void)disconnect;
-(void)enqueueMessage:(id)arg0 ;
-(void)enqueueTaskOperation:(id)arg0 ;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)postNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)processNotificationMessage:(id)arg0 ;
-(void)processSessionMessage:(id)arg0 ;
-(void)processTaskMessage:(id)arg0 ;
-(void)remoteTaskOperation:(id)arg0 preparedMessage:(id)arg1 ;
-(void)resumeCapturedTransportFromTaskClient:(id)arg0 ;
-(void)resumeSession;
-(void)resumeTransport:(id)arg0 ;
-(void)resumeWithTaskUUIDs:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)sendMessageThroughTransport:(id)arg0 ;
-(void)sessionDidInvalidate;
-(void)sessionResumedWithTaskUUIDs:(id)arg0 ;
-(void)taskOperationDidFailWithInvalidTaskClient:(id)arg0 ;
-(void)trackTaskOperation:(id)arg0 ;
-(void)transport:(id)arg0 didFailToSendMessage:(id)arg1 error:(id)arg2 ;
-(void)transport:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)transport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)transport:(id)arg0 didSendMessage:(id)arg1 ;
-(void)transportDidInvalidate:(id)arg0 ;
-(void)transportDidResume:(id)arg0 ;


@end


#endif