// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPROCESS_H
#define RBPROCESS_H

@class RBSAuditToken, NSString, RBSProcessHandle, RBSProcessIdentifier, RBSProcessIdentity, RBSProcessInstance, RBSProcessExitStatus, RBSProcessExitContext;
@protocol RBSProcessIdentifier, RBConcreteTargeting, OS_dispatch_source, RBBundleProperties;

#import <Foundation/Foundation.h>

#import "RBProcessState.h"
#import "RBProcess.h"
#import "RBJetsamProperties.h"

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
    int _memlimit;
    unsigned char _manageFlags;
    NSObject<OS_dispatch_source> *_procSource;
    CGFloat _cachedProcessStartTime;
}


@property (copy, nonatomic) RBSAuditToken *auditToken; // ivar: _auditToken
@property (readonly, nonatomic, getter=isBeingPtraced) BOOL beingPtraced;
@property (readonly, nonatomic) NSObject<RBBundleProperties> *bundleProperties; // ivar: _bundleProperties
@property (readonly, nonatomic, getter=isContainerized) BOOL containerized;
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
@property (readonly, nonatomic, getter=isJetsamManaged) BOOL jetsamManaged;
@property (retain, nonatomic) RBSProcessExitContext *lastExitContext; // ivar: _lastExitContext
@property (readonly, nonatomic, getter=isLifecycleManaged) BOOL lifecycleManaged;
@property (readonly, copy, nonatomic) RBJetsamProperties *memoryLimits; // ivar: _memoryLimits
@property (readonly, nonatomic) int pidversion; // ivar: _pidversion
@property (readonly, nonatomic, getter=isPlatformBinary) BOOL platformBinary; // ivar: _platformBinary
@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic) CGFloat processStartTime; // ivar: _processStartTime
@property (readonly, nonatomic, getter=isReported) BOOL reported;
@property (readonly, nonatomic) NSString *shortDescription; // ivar: _shortDescription
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (readonly, nonatomic, getter=isSystem) BOOL system;
@property (nonatomic, getter=isTerminating) BOOL terminating; // ivar: _terminating
@property (readonly, nonatomic, getter=isTestApp) BOOL testApp;
@property (readonly, nonatomic) NSString *tmpDirectory; // ivar: _tmpDirectory
@property (readonly, nonatomic) NSString *underlyingAssertion; // ivar: _underlyingAssertion


+(id)testProcessWithPid:(int)arg0 ;
+(id)testProcessWithPid:(int)arg0 andIdentity:(id)arg1 ;
+(id)testProcessWithPid:(int)arg0 identity:(id)arg1 launchdProps:(id)arg2 andBundleProps:(id)arg3 ;
-(BOOL)_sendSignal:(int)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(BOOL)terminateWithContext:(id)arg0 ;
-(id)_initThinWithInstance:(id)arg0 auditToken:(id)arg1 bundleProperties:(id)arg2 jetsamProperties:(id)arg3 hostProcess:(id)arg4 properties:(id)arg5 ;
-(id)_initWithInstance:(id)arg0 auditToken:(id)arg1 bundleProperties:(id)arg2 jetsamProperties:(id)arg3 initialState:(id)arg4 hostProcess:(id)arg5 properties:(id)arg6 systemPreventsIdleSleep:(BOOL)arg7 ;
-(id)createRBSTarget;
-(id)init;
-(int)rbs_pid;
-(void)_applyState:(id)arg0 ;
-(void)_systemPreventIdleSleepStateDidChange:(BOOL)arg0 ;
-(void)collectDiagnostic:(NSUInteger)arg0 description:(id)arg1 domain:(unsigned int)arg2 code:(NSUInteger)arg3 additionalPayload:(id)arg4 completion:(id)arg5 ;
-(void)invalidate;
// -(void)invokeHandlerOnProcessDeath:(id)arg0 onQueue:(unk)arg1  ;


@end


#endif