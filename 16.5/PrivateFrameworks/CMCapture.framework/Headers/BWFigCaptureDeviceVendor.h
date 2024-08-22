// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    NSMutableDictionary *_tofAFEstimatorClientApplicationIDByPortType;
    NSMutableSet *_portTypesToCheckForAFDriverShortStatistics;
    NSMutableDictionary *_afDriverShortStatisticsByPortType;
}


@property (readonly) int activeDeviceClientPriority;
@property (readonly) BOOL cameraCalibrationValid; // ivar: _cameraCalibrationValid


+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
+(id)sharedCaptureDeviceVendor;
+(void)initialize;
-(BOOL)activeDeviceEquals:(id)arg0 ;
-(BOOL)streamsInUseForDevice:(id)arg0 ;
-(float)structuredLightProjectorStandbyTemperatureWithError:(*int)arg0 ;
-(id)_copyStreamsWithPositions:(id)arg0 deviceTypes:(id)arg1 allowsStreamControlLoss:(BOOL)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(*int)arg5 ;
-(id)_registeredDeviceClientWithID:(int)arg0 ;
-(id)cameraPoseMatrixForStreamWithPosition:(int)arg0 deviceType:(int)arg1 ;
-(id)copyDeviceForClient:(int)arg0 informClientWhenDeviceAvailableAgain:(BOOL)arg1 error:(*int)arg2 ;
-(id)copyStreamForFlashlightWithPosition:(int)arg0 deviceType:(int)arg1 forDevice:(id)arg2 ;
-(id)copyStreamWithPosition:(int)arg0 deviceType:(int)arg1 allowsStreamControlLoss:(BOOL)arg2 forDevice:(id)arg3 error:(*int)arg4 ;
-(id)copyStreamWithPosition:(int)arg0 deviceType:(int)arg1 forDevice:(id)arg2 error:(*int)arg3 ;
-(id)copyStreamWithoutControlWithPosition:(int)arg0 deviceType:(int)arg1 forDevice:(id)arg2 ;
-(id)copyStreamsWithPositions:(id)arg0 deviceTypes:(id)arg1 forDevice:(id)arg2 error:(*int)arg3 ;
-(id)copyStreamsWithUniqueIDs:(id)arg0 forDevice:(id)arg1 error:(*int)arg2 ;
-(id)initWithDeviceCreateFunction:(*unk)arg0 ;
-(int)keepControlOfStreamsWithPositions:(id)arg0 deviceTypes:(id)arg1 forDevice:(id)arg2 ;
-(int)registerClientWithPID:(int)arg0 clientApplicationID:(id)arg1 clientDescription:(id)arg2 clientPriority:(int)arg3 canStealFromClientsWithSamePriority:(BOOL)arg4 deviceSharingWithOtherClientsAllowed:(BOOL)arg5 deviceAvailabilityChangedHandler:(id)arg6 ;
-(int)registerClientWithPID:(int)arg0 clientDescription:(id)arg1 clientPriority:(int)arg2 canStealFromClientsWithSamePriority:(BOOL)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(id)arg5 ;
-(int)requestControlOfStreams:(id)arg0 device:(id)arg1 ;
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