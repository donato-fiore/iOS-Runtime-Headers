// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBSPROCESSHANDLE_H
#define RBSPROCESSHANDLE_H

@class BSProcessHandle, BSAuditToken, NSString, NSUUID;
@protocol RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "RBSMachPortTaskNameRight.h"
#import "RBSProcessMonitor.h"
#import "RBSProcessLimitations.h"
#import "RBSProcessBundle.h"
#import "RBSProcessState.h"
#import "RBSProcessHandle.h"
#import "RBSProcessIdentity.h"
#import "RBSProcessInstance.h"
#import "RBSProcessExitContext.h"

@interface RBSProcessHandle : NSObject <RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding>

 {
    RBSMachPortTaskNameRight *_taskPort;
    RBSProcessMonitor *_monitor;
    BSProcessHandle *_legacyHandle;
    NSObject<OS_xpc_object> *_codedHandle;
    BSAuditToken *_bsAuditToken;
    NSUInteger _data;
    NSString *_cachedName;
}


@property (readonly, nonatomic, getter=isXPCService) BOOL XPCService;
@property (readonly, nonatomic) RBSProcessLimitations *activeLimitations;
@property (readonly, nonatomic, getter=isApplication) BOOL application;
@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, nonatomic) RBSProcessBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) RBSProcessState *currentState;
@property (readonly, nonatomic, getter=isDaemon) BOOL daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int euid; // ivar: _euid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBSProcessHandle *hostProcess;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (readonly, copy, nonatomic) RBSProcessInstance *instance;
@property (readonly, nonatomic) RBSProcessExitContext *lastExitContext;
@property (readonly, nonatomic, getter=isLifecycleManaged) BOOL lifecycleManaged;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic, getter=isReported) BOOL reported;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *xpcServiceIdentifier;


+(BOOL)supportsRBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)currentProcess;
+(id)handleForIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)handleForKey:(NSUInteger)arg0 fetchIfNeeded:(BOOL)arg1 ;
+(id)handleForLegacyHandle:(id)arg0 error:(*id)arg1 ;
+(id)handleForPredicate:(id)arg0 error:(*id)arg1 ;
+(id)observeForImminentAssertionsExpiration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesProcess:(id)arg0 ;
-(CGFloat)elapsedCPUTimeForFrontBoard;
-(id)currentStateMatchingDescriptor:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 ;
-(id)initWithInstance:(id)arg0 auditToken:(id)arg1 bundleData:(id)arg2 manageFlags:(unsigned char)arg3 beforeTranslocationBundlePath:(id)arg4 ;
-(id)initWithLaunchContext:(id)arg0 ;
-(id)initWithRBSXPCCoder:(id)arg0 ;
-(id)legacyHandle;
-(id)processPredicate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithRBSXPCCoder:(id)arg0 ;
-(void)fullEncode:(id)arg0 forKey:(id)arg1 ;
-(void)intendToExitWith:(id)arg0 ;
-(void)monitorForDeath:(id)arg0 ;


@end


#endif