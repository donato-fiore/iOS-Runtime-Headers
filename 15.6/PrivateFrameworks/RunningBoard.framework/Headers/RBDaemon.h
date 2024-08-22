// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBDAEMON_H
#define RBDAEMON_H

@class NSString;
@protocol RBAssertionManagerDelegate, RBProcessManagerDelegate, RBBundlePropertiesManagerDelegate, RBPowerAssertionManagerDelegate, RBDaemonContextProviding, RBAssertionManaging, RBAssertionOriginatorPidPersisting, RBDomainAttributeManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging;

#import <Foundation/Foundation.h>

#import "RBAssertionDescriptorValidator.h"
#import "RBBundlePropertiesManager.h"
#import "RBConnectionListener.h"
#import "RBPowerAssertionManager.h"
#import "RBProcessReconnectManager.h"
#import "RBThrottleBestEffortNetworkingManager.h"
#import "RBProcess.h"

@interface RBDaemon : NSObject <RBAssertionManagerDelegate, RBProcessManagerDelegate, RBBundlePropertiesManagerDelegate, RBPowerAssertionManagerDelegate, RBDaemonContextProviding>

 {
    RBAssertionDescriptorValidator *_assertionDescriptorValidator;
    RBBundlePropertiesManager *_bundlePropertiesManager;
    RBConnectionListener *_listener;
    RBPowerAssertionManager *_powerAssertionManager;
    RBProcessReconnectManager *_reconnectManager;
    RBThrottleBestEffortNetworkingManager *_throttleBestEffortNetworkingManager;
}


@property (readonly, nonatomic) NSObject<RBAssertionManaging> *assertionManager; // ivar: _assertionManager
@property (readonly, nonatomic) NSObject<RBAssertionOriginatorPidPersisting> *assertionOriginatorPidStore; // ivar: _assertionOriginatorPidStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<RBDomainAttributeManaging> *domainAttributeManager; // ivar: _domainAttributeManager
@property (readonly, nonatomic) NSObject<RBEntitlementManaging> *entitlementManager; // ivar: _entitlementManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) RBProcess *process;
@property (readonly, nonatomic) NSObject<RBProcessManaging> *processManager; // ivar: _processManager
@property (readonly, nonatomic) NSObject<RBProcessMonitoring> *processMonitor; // ivar: _processMonitor
@property (readonly, nonatomic) NSObject<RBStateCaptureManaging> *stateCaptureManager; // ivar: _stateCaptureManager
@property (readonly) Class superclass;


+(void)run;
-(id)init;
-(void)assertionManager:(id)arg0 didAddProcess:(id)arg1 withState:(id)arg2 ;
-(void)assertionManager:(id)arg0 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg1 ;
-(void)assertionManager:(id)arg0 didBeginTrackingStateForProcessIdentity:(id)arg1 ;
-(void)assertionManager:(id)arg0 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg1 ;
-(void)assertionManager:(id)arg0 didEndTrackingStateForProcessIdentity:(id)arg1 ;
-(void)assertionManager:(id)arg0 didInvalidateAssertions:(id)arg1 ;
-(void)assertionManager:(id)arg0 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg1 ;
-(void)assertionManager:(id)arg0 didRemoveProcess:(id)arg1 withState:(id)arg2 ;
-(void)assertionManager:(id)arg0 didResolveSystemState:(id)arg1 ;
-(void)assertionManager:(id)arg0 didUpdateProcessStates:(id)arg1 completion:(id)arg2 ;
-(void)assertionManager:(id)arg0 willExpireAssertionsSoonForProcess:(id)arg1 expirationTime:(CGFloat)arg2 ;
-(void)assertionManager:(id)arg0 willInvalidateAssertion:(id)arg1 ;
-(void)bundlePropertiesManager:(id)arg0 didChangePropertiesForProcessIdentities:(id)arg1 ;
-(void)powerAssertionManagerDidAllowIdleSleep:(id)arg0 ;
-(void)powerAssertionManagerDidPreventIdleSleep:(id)arg0 ;
-(void)processManager:(id)arg0 didAddProcess:(id)arg1 ;
-(void)processManager:(id)arg0 didReconnectProcesses:(id)arg1 ;
-(void)processManager:(id)arg0 didRemoveProcess:(id)arg1 ;


@end


#endif