// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTREAMINGSESSIONANALYTICSPAYLOAD_H
#define BWSTREAMINGSESSIONANALYTICSPAYLOAD_H

@class NSDictionary, NSString, NSSet;
@protocol BWCoreAnalyticsPayload;

#import <Foundation/Foundation.h>


@interface BWStreamingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

 {
    int _clientIDType;
}


@property (nonatomic) unsigned int activeDeviceMask; // ivar: _activeDeviceMask
@property (retain, nonatomic) NSDictionary *actuatorVendor; // ivar: _actuatorVendor
@property (nonatomic) float averageSystemPressureLevel; // ivar: _averageSystemPressureLevel
@property (nonatomic) BOOL backgroundBlurEnabled; // ivar: _backgroundBlurEnabled
@property (nonatomic) BOOL backgroundBlurSupported; // ivar: _backgroundBlurSupported
@property (nonatomic) unsigned int cinematicFramingControlMode; // ivar: _cinematicFramingControlMode
@property (nonatomic) BOOL cinematicFramingEnabled; // ivar: _cinematicFramingEnabled
@property (nonatomic) BOOL cinematicFramingSupported; // ivar: _cinematicFramingSupported
@property (nonatomic) float cinematicVideoAverageRenderingTime; // ivar: _cinematicVideoAverageRenderingTime
@property (nonatomic) BOOL cinematicVideoEnabled; // ivar: _cinematicVideoEnabled
@property (nonatomic) float cinematicVideoWorstCaseRenderingTime; // ivar: _cinematicVideoWorstCaseRenderingTime
@property (copy, nonatomic) NSString *clientApplicationID; // ivar: _clientApplicationID
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *degradedAutoFocusStatus; // ivar: _degradedAutoFocusStatus
@property (readonly, copy) NSString *description;
@property (nonatomic) int devicePosition; // ivar: _devicePosition
@property (nonatomic) int deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (nonatomic) float infaredSensorTemperatureAverage; // ivar: _infaredSensorTemperatureAverage
@property (nonatomic) float infaredSensorTemperatureRange; // ivar: _infaredSensorTemperatureRange
@property (nonatomic) int maxSystemPressureLevel; // ivar: _maxSystemPressureLevel
@property (nonatomic) unsigned int maxTimeSinceLastPhotoCapture; // ivar: _maxTimeSinceLastPhotoCapture
@property (nonatomic) unsigned int minTimeSinceLastPhotoCapture; // ivar: _minTimeSinceLastPhotoCapture
@property (nonatomic) unsigned int numberOfBalancedPhotoCaptures; // ivar: _numberOfBalancedPhotoCaptures
@property (nonatomic) unsigned int numberOfBurstPhotoCaptures; // ivar: _numberOfBurstPhotoCaptures
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate0; // ivar: _numberOfButtonMashingCapturesAtRate0
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate1; // ivar: _numberOfButtonMashingCapturesAtRate1
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate0; // ivar: _numberOfButtonMashingEventsAtRate0
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate1; // ivar: _numberOfButtonMashingEventsAtRate1
@property (nonatomic) unsigned int numberOfPhotoCaptures; // ivar: _numberOfPhotoCaptures
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetectAttempts; // ivar: _numberOfSphereJitterDetectAttempts
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetects; // ivar: _numberOfSphereJitterDetects
@property (retain, nonatomic) NSDictionary *sensorTemperatureStats; // ivar: _sensorTemperatureStats
@property (retain, nonatomic) NSString *sphereMode; // ivar: _sphereMode
@property (nonatomic) int startingCameraPosture; // ivar: _startingCameraPosture
@property (nonatomic) int streamingStartExifOrientation; // ivar: _streamingStartExifOrientation
@property (nonatomic) unsigned int streamingTime; // ivar: _streamingTime
@property (nonatomic) float structuredLightActiveTemperatureAverage; // ivar: _structuredLightActiveTemperatureAverage
@property (nonatomic) float structuredLightActiveTemperatureFirstReading; // ivar: _structuredLightActiveTemperatureFirstReading
@property (nonatomic) float structuredLightActiveTemperatureLastReading; // ivar: _structuredLightActiveTemperatureLastReading
@property (nonatomic) float structuredLightActiveTemperatureRange; // ivar: _structuredLightActiveTemperatureRange
@property (nonatomic) float structuredLightIdleTemperatureFirstReading; // ivar: _structuredLightIdleTemperatureFirstReading
@property (retain, nonatomic) NSSet *sunburnDetectOccurred; // ivar: _sunburnDetectOccurred
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemPressureFactors; // ivar: _systemPressureFactors
@property (nonatomic) unsigned int timeOfFlightCameraProjectorModeMask; // ivar: _timeOfFlightCameraProjectorModeMask
@property (nonatomic) unsigned int timeOfFlightCameraUsageTypeMask; // ivar: _timeOfFlightCameraUsageTypeMask
@property (nonatomic) NSInteger timeToCriticalSystemPressureInMS; // ivar: _timeToCriticalSystemPressureInMS
@property (nonatomic) unsigned int timeToFirstPhotoCapture; // ivar: _timeToFirstPhotoCapture


-(id)eventDictionary;
-(id)eventName;
-(id)init;
-(void)dealloc;
-(void)reset;


@end


#endif