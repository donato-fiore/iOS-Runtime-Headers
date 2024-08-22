// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSREQUEST_H
#define SSREQUEST_H

@class BKSProcessAssertion, NSString;
@protocol SSXPCCoding, OS_dispatch_queue, OS_dispatch_source, SSRequestDelegate;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSRequest : NSObject <SSXPCCoding>

 {
    NSInteger _backgroundTaskIdentifier;
    BOOL _cancelAfterTaskExpiration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSXPCConnection *_requestConnection;
    SSXPCConnection *_responseConnection;
    NSObject<OS_dispatch_source> *_backgroundTaskExpirationTimer;
    NSInteger _callState;
    id *_completionBlock;
    BKSProcessAssertion *_taskAssertion;
    BOOL _taskAssertionTaken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldCancelAfterTaskExpiration;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesTaskCompletionAssertions; // ivar: _usesTaskCompletionAssertions


+(BOOL)_allowMultipleCallbacks;
-(BOOL)start;
-(id)_initSSRequest;
-(id)init;
-(void)__beginBackgroundTask;
-(void)__endBackgroundTask;
-(void)_beginBackgroundTask;
-(void)_cancelBackgroundTaskExpirationTimer;
-(void)_endBackgroundTask;
-(void)_expireBackgroundTask;
-(void)_shutdownRequest;
-(void)_shutdownRequestWithMessageID:(NSInteger)arg0 ;
-(void)_startWithMessageID:(NSInteger)arg0 messageBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)disconnect;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif