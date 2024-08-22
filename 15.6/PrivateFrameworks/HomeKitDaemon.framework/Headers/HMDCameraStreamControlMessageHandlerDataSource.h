// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASTREAMCONTROLMESSAGEHANDLERDATASOURCE_H
#define HMDCAMERASTREAMCONTROLMESSAGEHANDLERDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDCameraStreamControlMessageHandlerDataSource;


#import "HMDCameraNetworkConfig.h"

@interface HMDCameraStreamControlMessageHandlerDataSource : HMFObject <HMDCameraStreamControlMessageHandlerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly, getter=isResidentCapable) BOOL residentCapable;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsBidirectionalAudioForCameraStreaming;
@property (readonly) BOOL supportsChangingVolume;
@property (readonly) BOOL supportsReceivingRemoteCameraStream;


-(id)createDynamicActivityAttributionPublisher;
-(id)createLocalStreamControlManagerWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(NSUInteger)arg3 device:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 localNetworkConfig:(id)arg9 remoteCapabilities:(id)arg10 supportedConfigCache:(id)arg11 streamPreference:(id)arg12 ;
-(id)createRemoteStreamControlManagerWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(NSUInteger)arg3 device:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 profileUniqueIdentifier:(id)arg10 residentMessageHandler:(id)arg11 remoteAccessDevice:(id)arg12 streamPreference:(id)arg13 ;
-(id)createStreamManagerSessionWithSessionID:(id)arg0 destinationID:(id)arg1 streamClientConnection:(id)arg2 streamControlManager:(id)arg3 setupWaitPeriod:(CGFloat)arg4 ;


@end


#endif