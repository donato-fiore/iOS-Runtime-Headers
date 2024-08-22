// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCIAP2SHIMSERVERCLIENT_H
#define ACCIAP2SHIMSERVERCLIENT_H

@class NSString, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface ACCiAP2ShimServerClient : NSObject

@property (nonatomic) unsigned int applicationState; // ivar: _applicationState
@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL cameraSupportedByClient; // ivar: _cameraSupportedByClient
@property (readonly, nonatomic) unsigned int capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSArray *clientEAProtocols; // ivar: _clientEAProtocols
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (nonatomic) BOOL clientRequiresAccReset; // ivar: _clientRequiresAccReset
@property (readonly, nonatomic) BOOL entitlementForAllAccessories; // ivar: _entitlementForAllAccessories
@property (readonly, nonatomic) int iapSessionRefCount; // ivar: _iapSessionRefCount
@property (nonatomic) BOOL locationSupportedByClient; // ivar: _locationSupportedByClient
@property (readonly, nonatomic) *SBSProcessAssertion processAssertion; // ivar: _processAssertion
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processAssertionQ; // ivar: _processAssertionQ
@property (readonly, nonatomic) NSInteger processAssertionStartTime; // ivar: _processAssertionStartTime
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *processAssertionTimer; // ivar: _processAssertionTimer
@property (readonly, nonatomic) int processId; // ivar: _processId
@property (readonly, nonatomic) BOOL supportsAccessibility; // ivar: _supportsAccessibility
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


-(BOOL)canSendConnectionEventForAccessory:(id)arg0 ;
-(id)_applicationInfoForBundleIDSync:(id)arg0 ;
-(id)description;
-(id)initWithCapabilities:(unsigned int)arg0 auditToken:(struct ? )arg1 xpcConnection:(id)arg2 eaProtocols:(id)arg3 andBundleId:(id)arg4 ;
-(void)dealloc;
-(void)releaseProcessAssertion;
-(void)takeProcessAssertion:(id)arg0 ;


@end


#endif