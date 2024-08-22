// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBPROCESSEXITCONTEXT_H
#define FBPROCESSEXITCONTEXT_H

@class NSString, NSError, FBSProcessTerminationRequest, RBSProcessExitContext;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBProcessState.h"
#import "FBProcessWatchdogEventContext.h"

@interface FBProcessExitContext : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger exitReason; // ivar: _exitReason
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *launchError; // ivar: _launchError
@property (copy, nonatomic) FBProcessState *stateBeforeExiting; // ivar: _stateBeforeExiting
@property (readonly) Class superclass;
@property (nonatomic) NSInteger terminationReason; // ivar: _terminationReason
@property (retain, nonatomic) FBSProcessTerminationRequest *terminationRequest; // ivar: _terminationRequest
@property (readonly, nonatomic) RBSProcessExitContext *underlyingContext; // ivar: _underlyingContext
@property (retain, nonatomic) FBProcessWatchdogEventContext *watchdogContext; // ivar: _watchdogContext


+(id)descriptionForExitReason:(NSUInteger)arg0 ;
-(BOOL)consideredJetsam;
-(BOOL)exitedNormally;
-(BOOL)fairPlayFailure;
-(NSInteger)exitStatus;
-(id)createError;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithLaunchError:(id)arg0 underlyingContext:(id)arg1 ;
-(id)initWithUnderlyingContext:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(int)exitCode;
-(int)terminationSignal;


@end


#endif