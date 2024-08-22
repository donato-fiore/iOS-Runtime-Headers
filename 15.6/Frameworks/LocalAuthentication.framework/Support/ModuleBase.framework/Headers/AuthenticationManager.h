// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUTHENTICATIONMANAGER_H
#define AUTHENTICATIONMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "AuthenticationInProgress.h"

@interface AuthenticationManager : NSObject {
    id *_completionHandler;
    NSMutableArray *_idleBlocks;
}


@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication; // ivar: _pendingAuthentication
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication; // ivar: _runningAuthentication


+(id)sharedInstance;
-(BOOL)canStartAuthenticationWithPolicy:(NSInteger)arg0 ;
-(NSInteger)_priorityForPolicy:(NSInteger)arg0 ;
-(id)_cancelationError;
-(id)_invalidationError;
-(id)init;
-(id)runningMechanism;
-(void)_runAuthentication:(id)arg0 ;
-(void)_runIdleBlocks;
-(void)_runIdleBlocksNow;
-(void)authenticateForPolicy:(NSInteger)arg0 constraintData:(id)arg1 internalInfo:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 mechanism:(id)arg5 reply:(id)arg6 ;
-(void)cancelWithError:(id)arg0 originatorId:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)runWhenIdle:(id)arg0 ;


@end


#endif