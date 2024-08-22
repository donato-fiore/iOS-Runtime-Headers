// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDXPCCLIENTCONNECTION_H
#define HMDXPCCLIENTCONNECTION_H

@class HMFMessageTransport, NSString, NSSet, NSUUID, NSDictionary, NSXPCConnection;
@protocol HMFLogging, HMXPCServerMessageHandling, OS_dispatch_queue;


#import "HMDXPCMessageCountTracker.h"
#import "HMDProcessInfo.h"
#import "HMDXPCRequestTracker.h"
#import "HMDXPCMessageSendPolicyParameters.h"

@interface HMDXPCClientConnection : HMFMessageTransport <HMFLogging, HMXPCServerMessageHandling>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMDXPCMessageCountTracker *_counterTracker;
    NSString *_signature;
}


@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (readonly, nonatomic) NSSet *activeRequests;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property (readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) BOOL authorizedForMicrophoneAccess;
@property (copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) int clientPid;
@property (copy, nonatomic) NSUUID *clientUUID; // ivar: _clientUUID
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // ivar: _entitledForAPIAccess
@property (readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) BOOL entitledForAssistantIdentifiers;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode; // ivar: _entitledForBackgroundMode
@property (readonly, nonatomic, getter=isEntitledForCameraClipsAccess) BOOL entitledForCameraClipsAccess; // ivar: _entitledForCameraClipsAccess
@property (readonly, nonatomic, getter=isEntitledForHomeLocationAccess) BOOL entitledForHomeLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) BOOL entitledForHomeLocationFeedbackAccess;
@property (readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) BOOL entitledForMultiUserSetupAccess; // ivar: _entitledForMultiUserSetupAccess
@property (readonly, nonatomic, getter=isEntitledForPersonManagerAccess) BOOL entitledForPersonManagerAccess; // ivar: _entitledForPersonManagerAccess
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, nonatomic, getter=isEntitledForSecureAccess) BOOL entitledForSecureAccess;
@property (readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) BOOL entitledForShortcutsAutomationAccess;
@property (readonly, nonatomic, getter=isEntitledForStateDump) BOOL entitledForStateDump;
@property (readonly, nonatomic, getter=isEntitledForWalletKeyAccess) BOOL entitledForWalletKeyAccess; // ivar: _entitledForWalletKeyAccess
@property (readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) BOOL entitledToProvideAccessorySetupPayload;
@property (readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) BOOL entitledToProvideMatterSetupPayload;
@property (readonly) NSUInteger entitlements; // ivar: _entitlements
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger homeManagerOptions;
@property (copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly, nonatomic) NSString *name;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (readonly) Class principalClass;
@property (retain, nonatomic) NSDictionary *privateAccessEntitlement; // ivar: _privateAccessEntitlement
@property (retain) HMDProcessInfo *processInfo; // ivar: _processInfo
@property (readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // ivar: _requestTracker
@property (retain, nonatomic) HMDXPCMessageSendPolicyParameters *sendPolicyParameters; // ivar: _sendPolicyParameters
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(NSUInteger)entitlementsForConnection:(id)arg0 ;
+(id)logCategory;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)shouldSendResponseForMessageIdentifier:(id)arg0 ;
-(id)_displayName;
-(id)attributeDescriptions;
-(id)counterIdentifierForMessage:(id)arg0 ;
-(id)initWithConnection:(id)arg0 counterTracker:(id)arg1 ;
-(id)shortDescription;
-(void)__handleApplicationStateChange:(id)arg0 ;
-(void)_handleMessage:(id)arg0 responseHandler:(id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)handleMessage:(id)arg0 ;
-(void)handleMessage:(id)arg0 responseHandler:(id)arg1 ;
-(void)initiateRefresh;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSendPolicyParameters:(id)arg0 ;
-(void)updateUserInfo:(id)arg0 ;


@end


#endif