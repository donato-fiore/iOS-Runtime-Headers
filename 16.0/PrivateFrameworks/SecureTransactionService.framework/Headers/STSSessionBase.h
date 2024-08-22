// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSSESSIONBASE_H
#define STSSESSIONBASE_H

@class NSString, NFSecureElementManagerSession;
@protocol NFSessionDelegate, NFSecureElementManagerSessionDelegate, OS_dispatch_semaphore, OS_dispatch_queue, STSSessionBaseDelegate, NFSession;

#import <Foundation/Foundation.h>

#import "STSHardwareManagerWrapper.h"
#import "STSHandler.h"

@interface STSSessionBase : NSObject <NFSessionDelegate, NFSecureElementManagerSessionDelegate>

 {
    os_unfair_lock_s _sessionUpdateLock;
    BOOL _controlSessionSuspended;
    NSObject<OS_dispatch_semaphore> *_controlSessionSem;
    STSHardwareManagerWrapper *_nfHwManager;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STSSessionBaseDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) STSHandler *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NFSession> *initiatingSession; // ivar: _initiatingSession
@property (retain, nonatomic) NFSecureElementManagerSession *masterSESession; // ivar: _masterSESession
@property (readonly) Class superclass;
@property (copy, nonatomic) id *theStartCallback; // ivar: _theStartCallback


-(id)activateChildSession;
-(id)canStartSession;
-(id)createHandlerForCredential:(id)arg0 ;
-(id)init;
-(id)nfHardwareManager;
-(id)setActiveCredential:(id)arg0 ;
-(id)waitForControlSessionToBeReady:(int)arg0 ;
-(void)_tearDownOnQueue:(BOOL)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)endSessionWithCompletion:(id)arg0 ;
-(void)fireSessionDidEndUnexpectedlyEventWithStatus:(NSUInteger)arg0 ;
-(void)handleSessionResumed:(id)arg0 ;
-(void)handleSessionSuspended:(id)arg0 withToken:(id)arg1 ;
-(void)secureElementManagerSessionDidEndUnexpectedly:(id)arg0 ;
-(void)startWithDelegate:(id)arg0 isFirstInQueue:(*BOOL)arg1 ;
-(void)startWithDelegate:(id)arg0 isFirstInQueue:(*BOOL)arg1 completion:(id)arg2 ;


@end


#endif