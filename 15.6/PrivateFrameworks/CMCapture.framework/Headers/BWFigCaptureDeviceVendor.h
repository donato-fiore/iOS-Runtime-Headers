// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWFIGCAPTUREDEVICEVENDOR_H
#define BWFIGCAPTUREDEVICEVENDOR_H

@class NSMutableArray, NSDictionary, NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "BWFigCaptureDevice.h"
#import "BWFigCaptureDeviceClient.h"

@interface BWFigCaptureDeviceVendor : NSObject {
    *unk _deviceCreateFunction;
    BWFigCaptureDevice *_device;
    NSMutableArray *_controlledStreams;
    NSMutableArray *_streamsToKeepControlled;
    NSMutableArray *_streamsInUse;
    NSMutableArray *_streamsControlledByOtherClients;
    NSMutableArray *_registeredDeviceClients;
    BWFigCaptureDeviceClient *_deviceClient;
    NSMutableArray *_victimizedDeviceClients;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_source> *_deviceCloseTimer;
    int _deviceUsageCount;
    CGFloat _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_transaction> *_activeForClientAssertion;
    NSDictionary *_cameraPoseMatricesByPortType;
    NSMutableSet *_portTypesToCheckForToFAFEstimator;
    NSMutableDictionary *_tofAFEstimatorResultsByPortType;
    NSMutableSet *_portTypesToCheckForAFDriverShortStatistics;
    NSMutableDictionary *_afDriverShortStatisticsByPortType;
}


@property (readonly) int activeDeviceClientPriority;
@property (readonly) BOOL cameraCalibrationValid; // ivar: _cameraCalibrationValid


+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
+(id)sharedCaptureDeviceVendor;
+(void)initialize;
-(BOOL)_isCameraCalibrationValid;
-(BOOL)activeDeviceEquals:(id)arg0 ;
-(BOOL)streamsInUseForDevice:(id)arg0 ;
-(float)structuredLightProjectorStandbyTemperatureWithError:(*int)arg0 ;
-(id)_copyStreamWithPosition:(int)arg0 deviceType:(int)arg1 forDevice:(id)arg2 requestControl:(BOOL)arg3 error:(*int)arg4 ;
-(id)_copyStreamsWithPositions:(id)arg0 deviceTypes:(id)arg1 forDevice:(id)arg2 requestControl:(BOOL)arg3 error:(*int)arg4 ;
-(id)_moveCurrentDeviceClientToVictimizedList;
-(id)_moveDeviceClientToVictimizedList:(id)arg0 ;
-(id)_popLatestVictimizedDeviceClient;
-(id)_registeredDeviceClientWithID:(int)arg0 ;
-(id)cameraPoseMatrixForStreamWithPosition:(int)arg0 deviceType:(int)arg1 ;
-(id)copyDeviceForClient:(int)arg0 informClientWhenDeviceAvailableAgain:(BOOL)arg1 error:(*int)arg2 ;
-(id)copyStreamForFlashlightWithPosition:(int)arg0 deviceType:(int)arg1 forDevice:(id)arg2 ;
-(id)copyStreamWithPosition:(int)arg0 deviceType:(int)arg1 forDevice:(id)arg2 error:(*int)arg3 ;
-(id)copyStreamsWithPositions:(id)arg0 deviceTypes:(id)arg1 forDevice:(id)arg2 error:(*int)arg3 ;
-(id)copyStreamsWithUniqueIDs:(id)arg0 forDevice:(id)arg1 error:(*int)arg2 ;
-(id)initWithDeviceCreateFunction:(*unk)arg0 ;
-(int)_createDevice:(char *)arg0 clientPID:(int)arg1 ;
-(int)_requestControlOfStreams:(id)arg0 device:(id)arg1 ;
-(int)keepControlOfStreamsWithPositions:(id)arg0 deviceTypes:(id)arg1 forDevice:(id)arg2 ;
-(int)registerClientWithPID:(int)arg0 clientDescription:(id)arg1 clientPriority:(int)arg2 canStealFromClientsWithSamePriority:(BOOL)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(id)arg5 ;
-(void)_deviceAvailabilityChangedForClient:(id)arg0 available:(BOOL)arg1 postNotification:(BOOL)arg2 reason:(int)arg3 ;
-(void)_dumpInventory;
-(void)_handleDeviceNoLongerAvailable:(struct OpaqueFigCaptureDevice *)arg0 ;
-(void)_handleDeviceUnrecoverableError:(int)arg0 fromDevice:(struct OpaqueFigCaptureDevice *)arg1 ;
-(void)_handleErrorForGlobalDevice;
-(void)_handleStreamControlTakenByAnotherClientNotification:(struct OpaqueFigCaptureStream *)arg0 ;
-(void)_handleStreamFrameReceiveTimeoutNotification:(struct OpaqueFigCaptureStream *)arg0 ;
-(void)_handleStreamRelinquishedByAnotherClientNotification:(struct OpaqueFigCaptureStream *)arg0 ;
-(void)_invalidateAndReleaseDevice;
-(void)_logAFDriverShortStatisticsToCoreAnalytics;
-(void)_logISPStartupTimeToCoreAnalytics:(int)arg0 ;
-(void)_logToFAFEstimatorResultsToCoreAnalytics;
-(void)_performBlockOnDeviceQueue:(id)arg0 ;
-(void)_performBlockOnDeviceQueueSynchronously:(id)arg0 ;
-(void)_registerForDeviceNotifications:(id)arg0 ;
-(void)_registerForStreamNotifications:(id)arg0 ;
-(void)_relinquishControlOfStreams;
-(void)_removeCurrentDeviceClient;
-(void)_removeVictimizedDeviceClientWithClientID:(int)arg0 ;
-(void)_resetDeviceCloseTimer;
-(void)_setupDeviceCloseTimer;
-(void)_unregisterForDeviceNotifications:(id)arg0 ;
-(void)_unregisterFromStreamNotifications:(id)arg0 ;
-(void)_updateAFDriverShortStatisticsForStream:(id)arg0 ;
-(void)_updateTofAFEstimatorResultsForStream:(id)arg0 ;
-(void)dealloc;
-(void)invalidateVideoDevice:(id)arg0 forPID:(int)arg1 ;
-(void)prewarmDefaultVideoDeviceForPID:(int)arg0 completionHandler:(id)arg1 ;
-(void)resumeSystemPressuredDevice;
-(void)shutDownSystemPressuredDevice:(id)arg0 ;
-(void)takeBackDevice:(id)arg0 forClient:(int)arg1 informClientWhenDeviceAvailableAgain:(BOOL)arg2 ;
-(void)takeBackStreams:(id)arg0 device:(id)arg1 ;
-(void)unregisterCallbacksForClient:(int)arg0 ;


@end


#endif