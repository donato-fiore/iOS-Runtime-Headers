// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREDEVICEINPUTINTERNAL_H
#define AVCAPTUREDEVICEINPUTINTERNAL_H

@class NSArray, AVWeakReference;
@protocol AVCallbackCancellation;

#import <Foundation/Foundation.h>

#import "AVCaptureDevice.h"

@interface AVCaptureDeviceInputInternal : NSObject {
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    BOOL unifiedAutoExposureDefaultsEnabled;
    BOOL builtInMicrophoneStereoAudioCaptureEnabled;
    BOOL visionDataDeliveryEnabled;
    BOOL cameraCalibrationDataDeliveryEnabled;
    float simulatedAperture;
    ? videoMinFrameDurationOverride;
    float maxGainOverride;
    BOOL centerStageAllowed;
    BOOL backgroundBlurAllowed;
    BOOL ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id<AVCallbackCancellation> *deviceOpenCallbackInvoker;
    BOOL studioLightingAllowed;
}




-(void)dealloc;


@end


#endif