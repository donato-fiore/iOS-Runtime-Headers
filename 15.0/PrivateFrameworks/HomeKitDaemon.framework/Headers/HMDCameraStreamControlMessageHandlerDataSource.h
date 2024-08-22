// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASTREAMCONTROLMESSAGEHANDLERDATASOURCE_H
#define HMDCAMERASTREAMCONTROLMESSAGEHANDLERDATASOURCE_H

@class HMFObject, NSString;
@protocol HMDCameraStreamControlMessageHandlerDataSource;



@interface HMDCameraStreamControlMessageHandlerDataSource : HMFObject <HMDCameraStreamControlMessageHandlerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isMacOSDevice) BOOL macOSDevice;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsBidirectionalAudioForCameraStreaming;
@property (readonly) BOOL supportsReceivingRemoteCameraStream;


-(id)createDynamicActivityAttributionPublisher;
-(id)createLocalStreamControlManagerWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(NSUInteger)arg3 device:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 supportedConfigCache:(id)arg10 streamPreference:(id)arg11 ;
-(id)createRemoteStreamControlManagerWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 reachabilityPath:(NSUInteger)arg3 device:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 accessory:(id)arg7 streamManagementService:(id)arg8 remoteCapabilities:(id)arg9 profileUniqueIdentifier:(id)arg10 residentMessageHandler:(id)arg11 remoteAccessDevice:(id)arg12 streamPreference:(id)arg13 ;
-(id)createStreamManagerSessionWithSessionID:(id)arg0 destinationID:(id)arg1 streamClientProcessInfo:(id)arg2 streamControlManager:(id)arg3 setupWaitPeriod:(CGFloat)arg4 ;


@end


#endif