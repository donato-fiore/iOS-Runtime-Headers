// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATTASKSERVER_H
#define CATTASKSERVER_H

@class NSMutableSet, NSMutableDictionary, NSArray, NSString, NSDictionary;
@protocol CATTaskSessionDelegate, OS_dispatch_group, CATTaskServerDelegate;

#import <Foundation/Foundation.h>

#import "CATStateMachine.h"
#import "CATTaskServer.h"
#import "CATOperationQueue.h"

@interface CATTaskServer : NSObject <CATTaskSessionDelegate>

 {
    CATStateMachine *mFSM;
    NSMutableSet *mSessions;
    NSMutableDictionary *mActiveSessionsByUUID;
    NSMutableDictionary *mInvalidatingSessionsByUUID;
    NSMutableDictionary *mConnectedSessionsByUUID;
    CATTaskServer *mStrongSelf;
    NSObject<OS_dispatch_group> *mAllSessionsDidInvalidateGroup;
    CATOperationQueue *mOrphanedOperationQueue;
}


@property (readonly, copy, nonatomic) NSArray *clientSessions;
@property (readonly, copy, nonatomic) NSArray *connectedClientSessions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CATTaskServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)delegateClientSession:(id)arg0 shouldConnectWithTransport:(id)arg1 ;
-(BOOL)session:(id)arg0 shouldAcceptConnectionFromTransport:(id)arg1 ;
-(id)init;
-(id)session:(id)arg0 prepareOperationForRequest:(id)arg1 error:(*id)arg2 ;
-(void)allSessionsDidInvalidate;
-(void)connectWithClientTransport:(id)arg0 ;
-(void)dealloc;
-(void)delegateClientSession:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)delegateClientSession:(id)arg0 didReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateClientSessionDidConnect:(id)arg0 ;
-(void)delegateClientSessionDidDisconnect:(id)arg0 ;
-(void)delegateSessionDidInvalidate:(id)arg0 ;
-(void)disconnectAllClientSessions;
-(void)invalidate;
-(void)invalidateAllClientSessions;
-(void)invalidateWithError:(id)arg0 ;
-(void)makeSessionWithClientTransport:(id)arg0 ;
-(void)postNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)session:(id)arg0 didInterruptWithError:(id)arg1 ;
-(void)session:(id)arg0 didReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)session:(id)arg0 enqueueOperation:(id)arg1 ;
-(void)sessionDidConnect:(id)arg0 ;
-(void)sessionDidDisconnect:(id)arg0 ;
-(void)sessionDidInvalidate:(id)arg0 ;
-(void)sessionWillInvalidate:(id)arg0 ;
-(void)startInvalidatingWithError:(id)arg0 ;


@end


#endif