// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSETUPMANAGER_H
#define HMDACCESSORYSETUPMANAGER_H

@class HMFObject, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMDSBSRemoteAlertHandleObserver, HMFLogging, HMFMessageReceiver, HMDSBSRemoteAlertHandle, HMDFeaturesDataSource, OS_dispatch_queue;


#import "HMDAccessorySetupCoordinator.h"
#import "HMDXPCClientConnection.h"
#import "HMDSBSRemoteAlertHandleProvider.h"
#import "HMDHomeManager.h"
#import "HMDAddAccessoryRequestInformation.h"

@interface HMDAccessorySetupManager : HMFObject <HMDSBSRemoteAlertHandleObserver, HMFLogging, HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMDAccessorySetupCoordinator *accessorySetupCoordinator; // ivar: _accessorySetupCoordinator
@property (retain, nonatomic) HMDXPCClientConnection *accessorySetupHostClientConnection; // ivar: _accessorySetupHostClientConnection
@property CGFloat activationStartTime; // ivar: _activationStartTime
@property (retain) NSObject<HMDSBSRemoteAlertHandle> *alertHandle; // ivar: _alertHandle
@property (readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider; // ivar: _alertHandleProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy) id *pendingAccessorySetupCompletionHandler; // ivar: _pendingAccessorySetupCompletionHandler
@property (retain, nonatomic) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation; // ivar: _pendingAddAccessoryRequestInformation
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)accessorySetupHostBundleIdentifier;
+(id)logCategory;
-(id)_accessorySetupResultFromCompletedInfo:(id)arg0 clientIdentifierSalt:(id)arg1 ;
-(id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 homeManager:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 homeManager:(id)arg1 messageDispatcher:(id)arg2 alertHandleProvider:(id)arg3 featuresDataSource:(id)arg4 ;
-(void)_finishAccessorySetupWithSetupCompletedInfo:(id)arg0 setupError:(id)arg1 ;
-(void)_handleFailAccessorySetupMessage:(id)arg0 ;
-(void)_handleFetchPendingSetupAccessoryDescriptionMessage:(id)arg0 ;
-(void)_handleFinishAccessorySetupMessage:(id)arg0 ;
-(void)_handlePerformAccessorySetupMessage:(id)arg0 ;
-(void)_handlePerformMatterEcosystemAccessorySetupMessage:(id)arg0 ;
-(void)_handleResumeAccessorySetupMessage:(id)arg0 ;
-(void)_launchHUISWithNFCProxSetupURL:(id)arg0 ;
-(void)_launchHUISWithRequest:(id)arg0 matterTopology:(id)arg1 connection:(id)arg2 completionHandler:(id)arg3 ;
-(void)_launchHUISWithSetupAccessoryDescription:(id)arg0 resumeSetupUserInfo:(id)arg1 connection:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearPendingAddAccessoryRequestInformation;
-(void)configure;
-(void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)arg0 ;
-(void)handleNFCProxSetupNotification:(id)arg0 ;
-(void)launchAccessorySetupHostToRequestSetupCodeForAccessoryWithUUID:(id)arg0 accessoryName:(id)arg1 homeUUID:(id)arg2 clientConnection:(id)arg3 completionHandler:(id)arg4 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif