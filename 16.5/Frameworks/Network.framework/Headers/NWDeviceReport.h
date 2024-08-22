// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWDEVICEREPORT_H
#define NWDEVICEREPORT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "NWAccumulator.h"
#import "NWPrivacyProxyTraffic.h"

@interface NWDeviceReport : NSObject

@property (nonatomic) unsigned int batteryAbsoluteCapacity; // ivar: _batteryAbsoluteCapacity
@property (retain, nonatomic) NWAccumulator *batteryAccumulator; // ivar: _batteryAccumulator
@property (nonatomic) BOOL batteryAtCriticalLevel; // ivar: _batteryAtCriticalLevel
@property (nonatomic) BOOL batteryAtWarnLevel; // ivar: _batteryAtWarnLevel
@property (nonatomic) unsigned int batteryCurrentCapacity; // ivar: _batteryCurrentCapacity
@property (nonatomic) unsigned int batteryDesignCapacity; // ivar: _batteryDesignCapacity
@property (nonatomic) BOOL batteryExternalPowerIsConnected; // ivar: _batteryExternalPowerIsConnected
@property (nonatomic) BOOL batteryFullyCharged; // ivar: _batteryFullyCharged
@property (nonatomic) BOOL batteryIsCharging; // ivar: _batteryIsCharging
@property (nonatomic) unsigned int batteryMaximumCapacity; // ivar: _batteryMaximumCapacity
@property (nonatomic) unsigned int batteryPercentage; // ivar: _batteryPercentage
@property (nonatomic) int batteryTemperature; // ivar: _batteryTemperature
@property (nonatomic) unsigned int batteryTimeRemaining; // ivar: _batteryTimeRemaining
@property (nonatomic) unsigned int batteryVoltage; // ivar: _batteryVoltage
@property (nonatomic) unsigned int deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) BOOL devicePluggedIn; // ivar: _devicePluggedIn
@property (nonatomic) unsigned int deviceScreenBrightness; // ivar: _deviceScreenBrightness
@property (nonatomic) BOOL deviceScreenOn; // ivar: _deviceScreenOn
@property (nonatomic) unsigned int motionState; // ivar: _motionState
@property (retain, nonatomic) NSArray *privacyProxyNetworkStatus; // ivar: _privacyProxyNetworkStatus
@property (nonatomic) unsigned int privacyProxyServiceStatus; // ivar: _privacyProxyServiceStatus
@property (retain, nonatomic) NWPrivacyProxyTraffic *privacyProxyTraffic; // ivar: _privacyProxyTraffic
@property (nonatomic) unsigned int privacyProxyUserTier; // ivar: _privacyProxyUserTier
@property (nonatomic) BOOL quicExperimentallyEnabled; // ivar: _quicExperimentallyEnabled
@property (nonatomic) BOOL rnfEnabled; // ivar: _rnfEnabled
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) unsigned int thermalPressure; // ivar: _thermalPressure


-(id)awdReport:(BOOL)arg0 ;
-(id)description;


@end


#endif