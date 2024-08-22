// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFSESSION_H
#define NFSESSION_H

@class NFTimer, NSString;
@protocol NFSession, OS_dispatch_queue, NFSessionInterface><NSXPCProxyCreating, NFSessionDelegate;

#import <Foundation/Foundation.h>


@interface NFSession : NSObject <NFSession>

 {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionInterface><NSXPCProxyCreating> *_proxy;
    id *_didStartCallback;
    id *_didEndCallback;
    NFTimer *_sessionKillSwitch;
}


@property (readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL didEnd;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isActive;
@property (weak) NSObject<NFSessionDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (readonly) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)isFirstInQueue;
-(BOOL)isTimeLimited;
-(id)activateWithToken:(id)arg0 ;
-(id)createSessionHandoffToken:(*id)arg0 ;
-(id)init;
-(id)proxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_endProxySession;
-(void)_invokeDidEndSession;
-(void)_invokeDidStartCallback:(id)arg0 ;
-(void)dealloc;
-(void)didStartSession:(id)arg0 ;
-(void)didStartSessionWithoutQueue:(id)arg0 ;
-(void)endSession;
-(void)endSessionAndStartNextSession:(id)arg0 completion:(id)arg1 ;
-(void)endSessionWithCompletion:(id)arg0 ;
-(void)handleSessionResumed;
-(void)handleSessionSuspended:(id)arg0 ;
-(void)prioritizeSession;
-(void)resume;
-(void)setDidStartCallback:(id)arg0 ;
-(void)setIsFirstInQueue:(BOOL)arg0 ;
-(void)setProxy:(id)arg0 ;
-(void)setSessionTimeLimit:(CGFloat)arg0 ;


@end


#endif