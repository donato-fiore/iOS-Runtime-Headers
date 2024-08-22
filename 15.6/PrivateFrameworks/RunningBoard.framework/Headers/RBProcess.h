// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBPROCESS_H
#define RBPROCESS_H

@class RBSAuditToken, NSString, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity, RBSProcessInstance, RBSProcessExitStatus, RBSProcessExitContext;
@protocol RBSProcessIdentifier, RBConcreteTargeting, OS_dispatch_source, RBBundleProperties;

#import <Foundation/Foundation.h>

#import "RBProcessState.h"
#import "RBProcess.h"

@interface RBProcess : NSObject <RBSProcessIdentifier, RBConcreteTargeting>

 {
    int _pid;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _dataLock;
    RBProcessState *_lock_appliedState;
    RBProcessState *_lock_state;
    int _appliedJetsamPriority;
    BOOL _usesSocketMonitoring;
    BOOL _systemPreventsIdleSleep;
    BOOL _diagnosticsStarted;
    BOOL _diagnosticsComplete;
    int _appNapEligible;
    int _isTestApp;
    unsigned char _manageFlags;
    NSObject<OS_dispatch_source> *_procSource;
    CGFloat _cachedProcessStartTime;
}


@property (copy, nonatomic) RBSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic, getter=isBeingPtraced) BOOL beingPtraced;
@property (readonly, nonatomic) NSObject<RBBundleProperties> *bundleProperties; // ivar: _bundleProperties
@property (readonly, nonatomic, getter=isContainerized) BOOL containerized;
@property (readonly, nonatomic) int currentJetsamPriority;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, copy, nonatomic) RBSProcessHandle *handle; // ivar: _handle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *homeDirectory; // ivar: _homeDirectory
@property (readonly, nonatomic) RBProcess *hostProcess; // ivar: _hostProcess
@property (readonly, copy, nonatomic) RBSProcessIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly, copy, nonatomic) RBSProcessInstance *instance; // ivar: _instance
@property (copy, nonatomic) RBSProcessExitStatus *intendedExitStatus; // ivar: _intendedExitStatus
@property (retain, nonatomic) RBSProcessExitContext *lastExitContext; // ivar: _lastExitContext
@property (readonly, nonatomic, getter=isLifecycleManaged) BOOL lifecycleManaged;
@property (readonly, nonatomic) int pidversion; // ivar: _pidversion
@property (readonly, nonatomic, getter=isPlatformBinary) BOOL platformBinary; // ivar: _platformBinary
@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic) CGFloat processStartTime; // ivar: _processStartTime
@property (readonly, nonatomic, getter=isReported) BOOL reported;
@property (readonly, nonatomic) int requestedJetsamPriority; // ivar: _requestedJetsamPriority
@property (readonly, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (readonly, nonatomic, getter=isSystem) BOOL system;
@property (readonly, nonatomic, getter=isSystemShell) BOOL systemShell; // ivar: _systemShell
@property (nonatomic, getter=isTerminating) BOOL terminating; // ivar: _terminating
@property (readonly, nonatomic, getter=isTestApp) BOOL testApp;
@property (readonly, nonatomic) NSString *tmpDirectory; // ivar: _tmpDirectory
@property (readonly, nonatomic) NSString *underlyingAssertion; // ivar: _underlyingAssertion


+(id)testProcessWithPid:(int)arg0 ;
+(id)testProcessWithPid:(int)arg0 andIdentity:(id)arg1 ;
-(BOOL)_sendSignal:(int)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(BOOL)terminateWithContext:(id)arg0 ;
-(id)_initWithInstance:(id)arg0 auditToken:(id)arg1 bundleProperties:(id)arg2 initialState:(id)arg3 hostProcess:(id)arg4 properties:(id)arg5 systemPreventsIdleSleep:(BOOL)arg6 ;
-(id)createRBSTarget;
-(id)init;
-(int)rbs_pid;
-(void)_applyState:(id)arg0 ;
-(void)_systemPreventIdleSleepStateDidChange:(BOOL)arg0 ;
-(void)collectDiagnostic:(NSUInteger)arg0 description:(id)arg1 code:(NSUInteger)arg2 additionalPayload:(id)arg3 completion:(id)arg4 ;
-(void)invalidate;
// -(void)invokeHandlerOnProcessDeath:(id)arg0 onQueue:(unk)arg1  ;


@end


#endif