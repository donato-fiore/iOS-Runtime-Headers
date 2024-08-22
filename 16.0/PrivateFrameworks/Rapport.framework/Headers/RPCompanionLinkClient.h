// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPCOMPANIONLINKCLIENT_H
#define RPCOMPANIONLINKCLIENT_H

@class NSMutableSet, NSMutableDictionary, NSMutableOrderedSet, NSArray, NSString, NSDictionary;
@protocol NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable, RPDaemonConnection, RPSignedInUserProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RPCompanionLinkDevice.h"

@interface RPCompanionLinkClient : NSObject <NSSecureCoding, RPCompanionLinkXPCClientInterface, RPAuthenticatable, RPMessageable>

 {
    BOOL _activateCalled;
    NSMutableSet *_assertions;
    id<RPDaemonConnection> *_daemonCnx;
    NSMutableDictionary *_deviceDictionary;
    NSMutableDictionary *_eventRegistrations;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableOrderedSet *_registeredProfileIDs;
    NSMutableDictionary *_requestRegistrations;
    id<RPSignedInUserProvider> *_userProvider;
}


@property (readonly, copy) NSArray *activeDevices;
@property (readonly) RPCompanionLinkDevice *activePersonalCompanion;
@property (retain, nonatomic) NSArray *allowedMACAddresses; // ivar: _allowedMACAddresses
@property (copy, nonatomic) NSString *appID; // ivar: _appID
@property (copy, nonatomic) id *authCompletionHandler; // ivar: _authCompletionHandler
@property (nonatomic) CGFloat awdlGuestDiscoveryTimeout; // ivar: _awdlGuestDiscoveryTimeout
@property (nonatomic) NSInteger bleClientUseCase; // ivar: _bleClientUseCase
@property (nonatomic) unsigned int clientID; // ivar: _clientID
@property (copy, nonatomic) NSString *cloudServiceID; // ivar: _cloudServiceID
@property (nonatomic) NSUInteger controlFlags; // ivar: _controlFlags
@property (retain, nonatomic) RPCompanionLinkDevice *destinationDevice; // ivar: _destinationDevice
@property (copy, nonatomic) id *deviceChangedHandler; // ivar: _deviceChangedHandler
@property (copy, nonatomic) id *deviceFoundHandler; // ivar: _deviceFoundHandler
@property (copy, nonatomic) id *deviceLostHandler; // ivar: _deviceLostHandler
@property (copy, nonatomic) id *disconnectHandler; // ivar: _disconnectHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSUInteger errorFlags; // ivar: _errorFlags
@property (copy, nonatomic) id *errorFlagsChangedHandler; // ivar: _errorFlagsChangedHandler
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) id *hidePasswordHandler; // ivar: _hidePasswordHandler
@property (readonly, nonatomic) unsigned int internalAuthFlags; // ivar: _internalAuthFlags
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain) RPCompanionLinkDevice *localDevice; // ivar: _localDevice
@property (copy, nonatomic) id *localDeviceUpdatedHandler; // ivar: _localDeviceUpdatedHandler
@property (retain, nonatomic) NSArray *pairSetupACL; // ivar: _pairSetupACL
@property (nonatomic) unsigned int pairSetupFlags; // ivar: _pairSetupFlags
@property (nonatomic) unsigned int pairVerifyFlags; // ivar: _pairVerifyFlags
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) int passwordType; // ivar: _passwordType
@property (readonly, nonatomic) int passwordTypeActual; // ivar: _passwordTypeActual
@property (copy, nonatomic) id *promptForPasswordHandler; // ivar: _promptForPasswordHandler
@property (nonatomic) NSInteger rssiThreshold; // ivar: _rssiThreshold
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (copy, nonatomic) id *showPasswordHandler; // ivar: _showPasswordHandler
@property (copy, nonatomic) NSDictionary *siriInfo; // ivar: _siriInfo
@property (copy, nonatomic) id *stateUpdatedHandler; // ivar: _stateUpdatedHandler
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession
@property (nonatomic) unsigned int useCase; // ivar: _useCase
@property (nonatomic) BOOL usingOnDemandConnection; // ivar: _usingOnDemandConnection


+(BOOL)supportsSecureCoding;
-(BOOL)shouldReportDevice:(id)arg0 toXPCConnectionWithLaunchInstanceID:(id)arg1 outReason:(*id)arg2 ;
-(id)_XPCConnectionWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 ;
-(id)_clientError:(id)arg0 ;
// -(id)_connectionWithClient:(id)arg0 queue:(id)arg1 userProvider:(id)arg2 interruptionHandler:(id)arg3 invalidationHandler:(unk)arg4  ;
-(id)_ensureXPCStarted;
-(id)activateAssertionID:(id)arg0 destinationID:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserProvider:(id)arg0 ;
// -(void)_activateWithCompletion:(id)arg0 reactivate:(unk)arg1  ;
-(void)_interrupted;
-(void)_invalidateAssertion:(id)arg0 ;
-(void)_invalidated;
-(void)_invokeBlockActivateSafe:(id)arg0 ;
-(void)_lostAllDevices;
-(void)_registerEventID:(id)arg0 options:(id)arg1 reregister:(BOOL)arg2 ;
-(void)_registerProfileID:(id)arg0 reregister:(BOOL)arg1 completion:(id)arg2 ;
-(void)_registerRequestID:(id)arg0 options:(id)arg1 reregister:(BOOL)arg2 ;
-(void)_registerRequestIDOnQueue:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)_reregisterAssertions;
-(void)_reregisterEvents;
-(void)_reregisterProfileIDs;
-(void)_reregisterRequests;
-(void)activateWithCompletion:(id)arg0 ;
-(void)companionLinkAuthCompleted:(id)arg0 ;
-(void)companionLinkChangedDevice:(id)arg0 changes:(unsigned int)arg1 ;
-(void)companionLinkFoundDevice:(id)arg0 ;
-(void)companionLinkHandleDisconnect;
-(void)companionLinkLocalDeviceUpdated:(id)arg0 ;
-(void)companionLinkLostDevice:(id)arg0 ;
-(void)companionLinkPromptForPasswordType:(int)arg0 flags:(unsigned int)arg1 throttleSeconds:(int)arg2 ;
-(void)companionLinkReceivedEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)companionLinkReceivedRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)companionLinkUpdateClientState:(id)arg0 ;
-(void)companionLinkUpdateErrorFlags:(NSUInteger)arg0 ;
-(void)createDeviceToEndpointMappingForDevice:(id)arg0 completion:(id)arg1 ;
-(void)deregisterEventID:(id)arg0 ;
-(void)deregisterProfileID:(id)arg0 completion:(id)arg1 ;
-(void)deregisterRequestID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;
-(void)launchAppWithBundleID:(id)arg0 destinationID:(id)arg1 completion:(id)arg2 ;
-(void)launchAppWithURL:(id)arg0 destinationID:(id)arg1 completion:(id)arg2 ;
-(void)registerEventID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)registerProfileID:(id)arg0 completion:(id)arg1 ;
-(void)registerRequestID:(id)arg0 options:(id)arg1 handler:(id)arg2 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 destinationID:(id)arg2 options:(id)arg3 completion:(id)arg4 ;
-(void)sendEventID:(id)arg0 event:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 destinationID:(id)arg2 options:(id)arg3 responseHandler:(id)arg4 ;
-(void)sendRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 responseHandler:(id)arg3 ;
-(void)triggerEnhancedDiscoveryForReason:(id)arg0 completion:(id)arg1 ;
-(void)triggerEnhancedDiscoveryForReason:(id)arg0 useCase:(unsigned int)arg1 completion:(id)arg2 ;
-(void)tryPassword:(id)arg0 ;


@end


#endif