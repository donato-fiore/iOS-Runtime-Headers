// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBSPROCESS_H
#define FBSPROCESS_H

@class BSProcessHandle, RBSProcessIdentity, NSString, BSMachPortTaskNameRight;
@protocol FBSProcessInternal, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding>

 {
    BSProcessHandle *_handle;
    RBSProcessIdentity *_identity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) BSProcessHandle *handle;
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) BSMachPortTaskNameRight *taskNameRight; // ivar: _taskNameRight


+(id)currentProcess;
-(BOOL)_watchdog:(id)arg0 shouldTerminateWithDeclineReason:(*id)arg1 ;
-(id)_initForCurrentProcess;
-(id)_watchdog:(id)arg0 terminationRequestForViolatedProvision:(id)arg1 error:(id)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_terminateWithRequest:(id)arg0 forWatchdog:(id)arg1 ;
-(void)dealloc;


@end


#endif