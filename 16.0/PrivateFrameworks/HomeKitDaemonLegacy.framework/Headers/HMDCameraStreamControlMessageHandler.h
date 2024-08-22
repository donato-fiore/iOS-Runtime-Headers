// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASTREAMCONTROLMESSAGEHANDLER_H
#define HMDCAMERASTREAMCONTROLMESSAGEHANDLER_H

@class HMFObject, NSString, HMFMessageDispatcher, HMFNetMonitor, NSUUID;
@protocol HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging, HMDCameraStreamControlMessageHandlerDataSource, OS_dispatch_queue;


#import "HMDHAPAccessory.h"
#import "HMDDynamicActivityAttributionPublisher.h"
#import "HMDPhoneCallObserver.h"
#import "HMDCameraResidentMessageHandler.h"
#import "HMDService.h"
#import "HMDCameraStreamManagerSession.h"
#import "HMDCameraStreamSnapshotHandler.h"
#import "HMDCameraSupportedConfigurationCache.h"

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging>



@property (readonly, weak) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly) NSObject<HMDCameraStreamControlMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDynamicActivityAttributionPublisher *dynamicActivityAttributionPublisher; // ivar: _dynamicActivityAttributionPublisher
@property (readonly) NSUInteger hash;
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) HMFNetMonitor *networkMonitor; // ivar: _networkMonitor
@property (readonly) HMDPhoneCallObserver *phoneCallObserver; // ivar: _phoneCallObserver
@property (readonly) NSUUID *profileUniqueIdentifier; // ivar: _profileUniqueIdentifier
@property (readonly) HMDCameraResidentMessageHandler *residentMessageHandler; // ivar: _residentMessageHandler
@property (readonly) HMDService *streamManagementService; // ivar: _streamManagementService
@property (retain) HMDCameraStreamManagerSession *streamSession; // ivar: _streamSession
@property (readonly, copy) NSString *streamSessionID;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // ivar: _streamSnapshotHandler
@property (readonly, getter=isStreamingSessionInProgress) BOOL streamingSessionInProgress;
@property (readonly) Class superclass;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // ivar: _supportedConfigCache
@property (readonly) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isNegotiateMessage:(id)arg0 ;
-(BOOL)_isReconfigureMessage:(id)arg0 ;
-(BOOL)_isRemoteSetupMessage:(id)arg0 ;
-(BOOL)_isSetAudioStreamSettingMessage:(id)arg0 ;
-(BOOL)_isSetAudioVolumeMessage:(id)arg0 ;
-(BOOL)_isStartMessage:(id)arg0 ;
-(BOOL)_isStopMessage:(id)arg0 ;
-(BOOL)_shouldHandleNegotiateMessage:(id)arg0 accessoryReachable:(BOOL)arg1 ;
-(BOOL)_shouldStopStreamSessionForProcessInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 streamSnapshotHandler:(id)arg1 accessory:(id)arg2 streamManagementService:(id)arg3 profileUniqueIdentifier:(id)arg4 networkMonitor:(id)arg5 ;
-(id)initWithWorkQueue:(id)arg0 streamSnapshotHandler:(id)arg1 accessory:(id)arg2 streamManagementService:(id)arg3 profileUniqueIdentifier:(id)arg4 networkMonitor:(id)arg5 residentMessageHandler:(id)arg6 phoneCallObserver:(id)arg7 dataSource:(id)arg8 ;
-(id)logIdentifier;
-(void)_attributeMicrophoneUsageToApplicationBundleIdentifier:(id)arg0 ;
-(void)_handleNegotiateMessage:(id)arg0 ;
-(void)_handleReconfigureMessage:(id)arg0 ;
-(void)_handleRemoteSetupMessage:(id)arg0 ;
-(void)_handleSetAudioState:(id)arg0 ;
-(void)_handleSetAudioVolume:(id)arg0 ;
-(void)_handleStartMessage:(id)arg0 ;
-(void)_handleStopMessage:(id)arg0 ;
-(void)_respondToLocalNegotiateStreamMessage:(id)arg0 ;
-(void)_sendStreamStoppedMessageWithError:(id)arg0 ;
-(void)_sendStreamStoppedRemoteNotificationWithError:(id)arg0 ;
-(void)_stopStreamWithError:(id)arg0 ;
-(void)configureWithMessageDispatcher:(id)arg0 ;
-(void)dealloc;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleActivePhoneCallEstablishedNotification:(id)arg0 ;
-(void)handleCameraSettingsDidChangeNotification:(id)arg0 ;
-(void)handleConnectionDeactivatedNotification:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;
-(void)handleProcessStateChange:(id)arg0 ;
-(void)setAudioVolume:(id)arg0 callback:(id)arg1 ;
-(void)streamControlManager:(id)arg0 didNegotiateStreamWithSelectedParameters:(id)arg1 ;
-(void)streamControlManager:(id)arg0 didStopStreamWithSessionID:(id)arg1 error:(id)arg2 ;
-(void)streamControlManagerDidReceiveFirstFrame:(id)arg0 ;
-(void)streamControlManagerDidReconfigureStream:(id)arg0 ;
-(void)streamControlManagerDidSetUpRemoteConnection:(id)arg0 ;
-(void)streamControlManagerDidStartStream:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateStreamClientUsingMessage:(id)arg0 ;


@end


#endif