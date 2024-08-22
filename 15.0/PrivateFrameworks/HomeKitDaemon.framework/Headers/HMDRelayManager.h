// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDRELAYMANAGER_H
#define HMDRELAYMANAGER_H

@class HMFObject, NSString, NSHashTable, IDSService, HMFNetMonitor, NSMutableArray, NSURLSession;
@protocol HMFNetMonitorDelegate, IDSServiceDelegateHomeKit, NSURLSessionDelegate, HMFLogging, HMFLocking, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDRelayManager : HMFObject <HMFNetMonitorDelegate, IDSServiceDelegateHomeKit, NSURLSessionDelegate, HMFLogging>

 {
    id<HMFLocking> *_lock;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (copy, nonatomic) NSString *controllerIdentifier; // ivar: _controllerIdentifier
@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (readonly, nonatomic) IDSService *idsService; // ivar: _idsService
@property (readonly, nonatomic) HMFNetMonitor *networkMonitor; // ivar: _networkMonitor
@property (readonly, nonatomic) NSHashTable *relayAccessories; // ivar: _relayAccessories
@property (readonly, nonatomic) NSMutableArray *relayStreams; // ivar: _relayStreams
@property (readonly) Class superclass;
@property (nonatomic, getter=isSupported) BOOL supported; // ivar: _supported
@property (readonly, nonatomic) NSURLSession *urlSession; // ivar: _urlSession


+(id)logCategory;
-(BOOL)_enableRelayForAccessory:(id)arg0 ;
-(id)_accessTokenForAccessTokenAttributes:(id)arg0 consentTokens:(id)arg1 matchedConsentToken:(*id)arg2 error:(*id)arg3 ;
-(id)_consentTokenForConsentTokenAttributes:(id)arg0 matchedAccessory:(*id)arg1 error:(*id)arg2 ;
-(id)_relayStreamForAccessory:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)logIdentifier;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)__resumeAllStreams;
-(void)__suspendAllStreams;
-(void)_accessTokensForConsentTokens:(id)arg0 user:(id)arg1 completionHandler:(id)arg2 ;
-(void)_activateAccessory:(id)arg0 ;
-(void)_disableRelayForAccessory:(id)arg0 ;
-(void)_handleAccessoryEnabled:(id)arg0 ;
-(void)_handleNotifyingDelegatesOfControllerIdentifierUpdate:(id)arg0 ;
-(void)_handleRelayManagerDisabled;
-(void)_handleRelayManagerEnabled;
-(void)_handleRelayManagerEnabling;
-(void)_handleRelayManagerUnsupported;
-(void)_pairAccessory:(id)arg0 ;
-(void)_requestConsentTokensForAccessoryIdentifiers:(id)arg0 administratorIdentifier:(id)arg1 ;
-(void)_requestPairingWithAccessories:(id)arg0 ;
-(void)_requestUserReportAccessory:(id)arg0 reportIdentifier:(id)arg1 ;
-(void)_sendAccessoryReport:(id)arg0 reportIdentifier:(id)arg1 ;
-(void)_setupRelayForAccessory:(id)arg0 ;
-(void)_tearDownRelayForAccessory:(id)arg0 ;
-(void)_updateControllerIdentifier;
-(void)_updateCurrentState;
-(void)accessory:(id)arg0 didUpdateEnabledState:(BOOL)arg1 ;
-(void)accessoryDidActivate:(id)arg0 ;
-(void)accessoryDidPair:(id)arg0 ;
-(void)addDelegate:(id)arg0 ;
-(void)addRelayAccessory:(id)arg0 ;
-(void)addUserToRelayAccessories:(id)arg0 consentTokens:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)networkMonitorIsReachable:(id)arg0 ;
-(void)networkMonitorIsUnreachable:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeRelayAccessory:(id)arg0 ;
-(void)requestPairingWithRelayAccessories:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 incomingAccessoryData:(id)arg2 fromAccessoryID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingAccessoryReportMessage:(id)arg2 controllerID:(id)arg3 accessoryID:(id)arg4 context:(id)arg5 ;
-(void)startAccessories:(id)arg0 ;


@end


#endif