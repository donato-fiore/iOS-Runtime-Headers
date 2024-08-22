// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETUPMANAGER_H
#define HMDACCESSORYSETUPMANAGER_H

@class HMFObject, HMFMessageDispatcher, NSMutableDictionary, NSString, NSUUID;
@protocol HMDSBSRemoteAlertHandleObserver, HMFMessageReceiver, HMDSBSRemoteAlertHandle, HMDFeaturesDataSource, OS_dispatch_queue;


#import "HMDAccessorySetupCoordinator.h"
#import "HMDSBSRemoteAlertHandleProvider.h"
#import "HMDXPCClientConnection.h"
#import "HMDAddAccessoryRequestInformation.h"

@interface HMDAccessorySetupManager : HMFObject <HMDSBSRemoteAlertHandleObserver, HMFMessageReceiver>

 {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HMDAccessorySetupCoordinator *accessorySetupCoordinator; // ivar: _accessorySetupCoordinator
@property (readonly) HMFMessageDispatcher *accessorySetupMessageDispatcher; // ivar: _accessorySetupMessageDispatcher
@property (retain) NSObject<HMDSBSRemoteAlertHandle> *alertHandle; // ivar: _alertHandle
@property (readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider; // ivar: _alertHandleProvider
@property (readonly) NSMutableDictionary *completionHandlersByAddAccessoryRequestID; // ivar: _completionHandlersByAddAccessoryRequestID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFeaturesDataSource> *featuresDataSource; // ivar: _featuresDataSource
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *homeDataMessageDispatcher; // ivar: _homeDataMessageDispatcher
@property (retain, nonatomic) HMDXPCClientConnection *homeUIServiceConnection; // ivar: _homeUIServiceConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation; // ivar: _pendingAddAccessoryRequestInformation
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)accessorySetupHostBundleIdentifier;
-(id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 homeDataMessageDispatcher:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 homeDataMessageDispatcher:(id)arg1 accessorySetupMessageDispatcher:(id)arg2 alertHandleProvider:(id)arg3 featuresDataSource:(id)arg4 ;
-(void)_finishAddAccessoryRequestInformationWithRequestIdentifier:(id)arg0 accessorySetupCompletedInfo:(id)arg1 setupError:(id)arg2 ;
-(void)_handleAddAndSetUpAccessoriesForTopologyMessage:(id)arg0 ;
-(void)_handleAddAndSetUpAccessoriesMessage:(id)arg0 ;
-(void)_handleFinishAccessorySetupMessage:(id)arg0 ;
-(void)_handleResumeAccessorySetupMessage:(id)arg0 ;
-(void)_launchHUISWithNFCProxSetupURL:(id)arg0 ;
-(void)_launchHUISWithSetupAccessoryDescription:(id)arg0 resumeSetupUserInfo:(id)arg1 connection:(id)arg2 completionHandler:(id)arg3 ;
-(void)clearPendingAddAccessoryRequestInformation;
-(void)configure;
-(void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)arg0 ;
-(void)handleNFCProxSetupNotification:(id)arg0 ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;


@end


#endif