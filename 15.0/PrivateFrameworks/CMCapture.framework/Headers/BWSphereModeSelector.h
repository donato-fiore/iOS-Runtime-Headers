// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSPHEREMODESELECTOR_H
#define BWSPHEREMODESELECTOR_H


#import <Foundation/Foundation.h>


@interface BWSphereModeSelector : NSObject {
    *__CFString _currentSphereMode;
    float _maximumFrameRate;
    BOOL _sphereVideoSupported;
    BOOL _sphereVideoEnabled;
    BOOL _avoidsSphereRecentering;
    BOOL _enablesSphereWhenAvailable;
    BOOL _motionDataInvalid;
    BOOL _lowPowerSphereModeEnabled;
    BOOL _stillPreviewActiveSupported;
    BOOL _zeroShutterLagEnabled;
    int _sphereThermalLevel;
    BOOL _tripodModeEnabled;
    BOOL _depthDataDeliveryEnabled;
    BOOL _overCaptureEnabled;
    BOOL _variableFrameRateVideoEnabled;
}


@property (nonatomic) BOOL avoidsSphereRecentering;
@property (readonly) *__CFString currentSphereMode;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) BOOL enablesSphereWhenAvailable;
@property (nonatomic) BOOL lowPowerSphereModeEnabled;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) BOOL sphereVideoEnabled;
@property (readonly, nonatomic) BOOL sphereVideoSupported;
@property (nonatomic) int systemThermalLevel;
@property (nonatomic) BOOL tripodModeEnabled;
@property (nonatomic) BOOL variableFrameRateVideoEnabled;
@property (nonatomic) BOOL zeroShutterLagEnabled;


+(void)initialize;
-(id)initWithStillActivePreviewSupported:(BOOL)arg0 sphereVideoSupported:(BOOL)arg1 ;


@end


#endif