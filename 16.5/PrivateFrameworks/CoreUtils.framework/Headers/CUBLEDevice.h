// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUBLEDEVICE_H
#define CUBLEDEVICE_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface CUBLEDevice : NSObject

@property (readonly, copy, nonatomic) NSData *addressData; // ivar: _addressData
@property (readonly, copy, nonatomic) NSData *appleManufacturerData; // ivar: _appleManufacturerData
@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (nonatomic) unsigned int deviceFlags; // ivar: _deviceFlags
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *lgBTAddress; // ivar: _lgBTAddress
@property (readonly, copy, nonatomic) NSData *lgDeviceID; // ivar: _lgDeviceID
@property (readonly, nonatomic) unsigned int lgFlags; // ivar: _lgFlags
@property (readonly, copy, nonatomic) NSData *manufacturerData; // ivar: _manufacturerData
@property (readonly, nonatomic) int nearbyActionType; // ivar: _nearbyActionType
@property (readonly, nonatomic) unsigned char nearbyActivityLevel; // ivar: _nearbyActivityLevel
@property (readonly, copy, nonatomic) NSData *nearbyAuthTag; // ivar: _nearbyAuthTag
@property (readonly, nonatomic) unsigned int nearbyFlags; // ivar: _nearbyFlags
@property (readonly, nonatomic) unsigned char objectDiscoveryBatteryState; // ivar: _objectDiscoveryBatteryState
@property (readonly, nonatomic) int objectDiscoveryMode; // ivar: _objectDiscoveryMode
@property (readonly, copy, nonatomic) NSData *objectDiscoveryNearOwnerID; // ivar: _objectDiscoveryNearOwnerID
@property (readonly, nonatomic) unsigned short objectDiscoveryProductID; // ivar: _objectDiscoveryProductID
@property (readonly, copy, nonatomic) NSData *objectDiscoveryPublicKeyData; // ivar: _objectDiscoveryPublicKeyData
@property (readonly, nonatomic) int objectSetupBatteryPerformance; // ivar: _objectSetupBatteryPerformance
@property (readonly, nonatomic) unsigned char objectSetupBatteryState; // ivar: _objectSetupBatteryState
@property (readonly, nonatomic) unsigned char objectSetupColorCode; // ivar: _objectSetupColorCode
@property (readonly, nonatomic) unsigned int objectSetupFlags; // ivar: _objectSetupFlags
@property (readonly, copy, nonatomic) NSString *objectSetupFontCode; // ivar: _objectSetupFontCode
@property (readonly, copy, nonatomic) NSString *objectSetupMessage; // ivar: _objectSetupMessage
@property (readonly, nonatomic) unsigned char proximityPairingAudioSourceCount; // ivar: _proximityPairingAudioSourceCount
@property (readonly, nonatomic) ? proximityPairingLastConnectedHost; // ivar: _proximityPairingLastConnectedHost
@property (readonly, nonatomic) unsigned short proximityPairingProductID; // ivar: _proximityPairingProductID
@property (readonly, nonatomic) int proximityPairingSubType; // ivar: _proximityPairingSubType
@property (readonly, nonatomic) int rawRSSI; // ivar: _rawRSSI
@property (readonly, nonatomic) unsigned int scanFlags; // ivar: _scanFlags


-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(unsigned int)updateWithAdvertisementData:(id)arg0 rssi:(int)arg1 oldDevice:(id)arg2 ;
-(void)_parseAppleManufacturerPtr:(char *)arg0 end:(char *)arg1 data:(id)arg2 ;
-(void)_parseAppleNearbyActionPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAppleNearbyInfoPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAppleObjectDiscoveryPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAppleProximityPairingObjectSetupPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAppleProximityPairingPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAppleProximityPairingStatusPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseLGManufacturerPtr:(char *)arg0 end:(char *)arg1 fields:(id)arg2 ;
-(void)_parseManufacturerData:(id)arg0 advertisementFields:(id)arg1 ;


@end


#endif