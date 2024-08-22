// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREFIGAUDIODEVICE_H
#define AVCAPTUREFIGAUDIODEVICE_H

@class NSDictionary, NSString, AVWeakReference;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "AVCaptureDevice.h"

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSObject<OS_dispatch_queue> *_fcsQueue;
    *OpaqueFigCaptureSource _fcs;
    NSDictionary *_attributes;
    BOOL _levelMeteringEnabled;
    BOOL _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_semaphore> *_serverConnectionDiedSemaphore;
    NSString *_clientAudioClockDeviceUID;
}




+(id)_devices;
+(void)_reconnectDevices:(id)arg0 ;
+(void)initialize;
-(BOOL)hasMediaType:(id)arg0 ;
-(BOOL)isBuiltInStereoAudioCaptureSupported;
-(BOOL)isConnected;
-(BOOL)startUsingDevice:(*id)arg0 ;
-(BOOL)supportsAVCaptureSessionPreset:(id)arg0 ;
-(id)_copyFigCaptureSourceProperty:(struct __CFString *)arg0 ;
-(id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg0 ;
-(id)clientAudioClockDeviceUID;
-(id)deviceType;
-(id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg0 ;
-(id)init;
-(id)localizedName;
-(id)modelID;
-(id)uniqueID;
-(struct OpaqueCMClock *)deviceClock;
-(struct OpaqueFigCaptureSource *)figCaptureSource;
-(void)_handleNotification:(struct __CFString *)arg0 payload:(id)arg1 ;
-(void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource *)arg0 ;
-(void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg0 ;
-(void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg0 ;
-(void)audioInputDevicesDidChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)setClientAudioClockDeviceUID:(id)arg0 ;
-(void)stopUsingDevice;


@end


#endif