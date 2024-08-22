// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBCONNECTIONCLIENT_H
#define RBCONNECTIONCLIENT_H

@class NSString, RBSProcessHandle, RBSProcessIdentity, RBSProcessIdentifier, NSMutableSet, RBSAssertionIdentifier;
@protocol RBClientInheritanceManagerDelegate, RBEntitlementPossessing, RBStateCapturing, OS_xpc_object, RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging, RBDaemonContextProviding;

#import <Foundation/Foundation.h>

#import "RBConnectionListener.h"
#import "RBProcess.h"
#import "RBClientInheritanceManager.h"
#import "RBProcessMonitorObserver.h"

@interface RBConnectionClient : NSObject <RBClientInheritanceManagerDelegate, RBEntitlementPossessing, RBStateCapturing>

 {
    NSObject<OS_xpc_object> *_connection;
    os_unfair_lock_s _lock;
    id<RBAssertionManaging> *_assertionManager;
    id<RBEntitlementManaging> *_entitlementManager;
    id<RBProcessManaging> *_processManager;
    id<RBProcessMonitoring> *_processMonitor;
    id<RBStateCaptureManaging> *_stateCaptureManager;
    id<RBDaemonContextProviding> *_daemonContext;
    RBConnectionListener *_listener;
    RBProcess *_containingProcess;
    BOOL _ready;
    NSString *_shortDescription;
    RBProcess *_process;
    RBSProcessHandle *_processHandle;
    RBSProcessIdentity *_processIdentity;
    RBSProcessIdentifier *_processIdentifier;
    unsigned int _euid;
    RBClientInheritanceManager *_inheritanceManager;
    id<RBEntitlementPossessing> *_entitlements;
    NSMutableSet *_assertionIdentifiers;
    NSMutableSet *_deathMonitors;
    RBProcessMonitorObserver *_stateObserver;
    RBSAssertionIdentifier *_expirationBoostAssertionIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasEntitlementDomain:(NSUInteger)arg0 ;
-(id)captureState;
-(id)init;
-(void)inheritanceManager:(id)arg0 didChangeInheritances:(id)arg1 completion:(id)arg2 ;


@end


#endif