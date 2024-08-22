// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDNWDEVICEREPORT_H
#define NWAWDNWDEVICEREPORT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NWAWDNWAccumulator.h"
#import "NWAWDNWPrivacyProxyTraffic.h"

@interface NWAWDNWDeviceReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int batteryAbsoluteCapacity; // ivar: _batteryAbsoluteCapacity
@property (retain, nonatomic) NWAWDNWAccumulator *batteryAccumulator; // ivar: _batteryAccumulator
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
@property (nonatomic) int deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) BOOL devicePluggedIn; // ivar: _devicePluggedIn
@property (nonatomic) unsigned int deviceScreenBrightness; // ivar: _deviceScreenBrightness
@property (nonatomic) BOOL deviceScreenOn; // ivar: _deviceScreenOn
@property (nonatomic) BOOL hasBatteryAbsoluteCapacity;
@property (readonly, nonatomic) BOOL hasBatteryAccumulator;
@property (nonatomic) BOOL hasBatteryAtCriticalLevel;
@property (nonatomic) BOOL hasBatteryAtWarnLevel;
@property (nonatomic) BOOL hasBatteryCurrentCapacity;
@property (nonatomic) BOOL hasBatteryDesignCapacity;
@property (nonatomic) BOOL hasBatteryExternalPowerIsConnected;
@property (nonatomic) BOOL hasBatteryFullyCharged;
@property (nonatomic) BOOL hasBatteryIsCharging;
@property (nonatomic) BOOL hasBatteryMaximumCapacity;
@property (nonatomic) BOOL hasBatteryPercentage;
@property (nonatomic) BOOL hasBatteryTemperature;
@property (nonatomic) BOOL hasBatteryTimeRemaining;
@property (nonatomic) BOOL hasBatteryVoltage;
@property (nonatomic) BOOL hasDeviceOrientation;
@property (nonatomic) BOOL hasDevicePluggedIn;
@property (nonatomic) BOOL hasDeviceScreenBrightness;
@property (nonatomic) BOOL hasDeviceScreenOn;
@property (nonatomic) BOOL hasMotionState;
@property (nonatomic) BOOL hasPrivacyProxyServiceStatus;
@property (readonly, nonatomic) BOOL hasPrivacyProxyTraffic;
@property (nonatomic) BOOL hasPrivacyProxyUserTier;
@property (nonatomic) BOOL hasQuicExperimentallyEnabled;
@property (nonatomic) BOOL hasRnfEnabled;
@property (readonly, nonatomic) BOOL hasSerialNumber;
@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) int motionState; // ivar: _motionState
@property (retain, nonatomic) NSMutableArray *privacyProxyNetworkStatus; // ivar: _privacyProxyNetworkStatus
@property (nonatomic) int privacyProxyServiceStatus; // ivar: _privacyProxyServiceStatus
@property (retain, nonatomic) NWAWDNWPrivacyProxyTraffic *privacyProxyTraffic; // ivar: _privacyProxyTraffic
@property (nonatomic) int privacyProxyUserTier; // ivar: _privacyProxyUserTier
@property (nonatomic) BOOL quicExperimentallyEnabled; // ivar: _quicExperimentallyEnabled
@property (nonatomic) BOOL rnfEnabled; // ivar: _rnfEnabled
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) int thermalPressure; // ivar: _thermalPressure


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceOrientationAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)motionStateAsString:(int)arg0 ;
-(id)privacyProxyNetworkStatusAtIndex:(NSUInteger)arg0 ;
-(id)privacyProxyServiceStatusAsString:(int)arg0 ;
-(id)privacyProxyUserTierAsString:(int)arg0 ;
-(id)thermalPressureAsString:(int)arg0 ;
-(int)StringAsDeviceOrientation:(id)arg0 ;
-(int)StringAsMotionState:(id)arg0 ;
-(int)StringAsPrivacyProxyServiceStatus:(id)arg0 ;
-(int)StringAsPrivacyProxyUserTier:(id)arg0 ;
-(int)StringAsThermalPressure:(id)arg0 ;
-(void)addPrivacyProxyNetworkStatus:(id)arg0 ;
-(void)clearPrivacyProxyNetworkStatus;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif