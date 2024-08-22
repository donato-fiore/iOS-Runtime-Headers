// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBDEVICE_H
#define CBDEVICE_H

@class NSString, NSData, NSMutableDictionary, NSArray, NSDictionary;
@protocol CUXPCCodable, CBDictionaryCodable;

#import <Foundation/Foundation.h>


@interface CBDevice : NSObject <CUXPCCodable, CBDictionaryCodable>



@property (nonatomic) unsigned int accessoryStatusFlags;
@property (nonatomic) unsigned char accessoryStatusLidOpenCount;
@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (nonatomic) unsigned char airplaySourceFlags; // ivar: _airplaySourceFlags
@property (nonatomic) unsigned char airplayTargetConfigSeed; // ivar: _airplayTargetConfigSeed
@property (nonatomic) unsigned char airplayTargetFlags; // ivar: _airplayTargetFlags
@property (nonatomic) unsigned int airplayTargetIPv4; // ivar: _airplayTargetIPv4
@property (nonatomic) unsigned short airplayTargetPort;
@property (nonatomic) unsigned int appearanceValue;
@property (nonatomic) int audioStreamState; // ivar: _audioStreamState
@property (nonatomic) unsigned short batteryInfoCase; // ivar: _batteryInfoCase
@property (nonatomic) unsigned short batteryInfoLeft; // ivar: _batteryInfoLeft
@property (nonatomic) unsigned short batteryInfoMain; // ivar: _batteryInfoMain
@property (nonatomic) unsigned short batteryInfoRight; // ivar: _batteryInfoRight
@property (readonly, nonatomic) float batteryLevelCase;
@property (readonly, nonatomic) float batteryLevelLeft;
@property (readonly, nonatomic) float batteryLevelMain;
@property (readonly, nonatomic) float batteryLevelRight;
@property (readonly, nonatomic) unsigned char batteryStateCase;
@property (readonly, nonatomic) unsigned char batteryStateLeft;
@property (readonly, nonatomic) unsigned char batteryStateMain;
@property (readonly, nonatomic) unsigned char batteryStateRight;
@property (copy, nonatomic) NSData *bleAddressData; // ivar: _bleAddressData
@property (copy, nonatomic) NSData *bleAdvertisementData; // ivar: _bleAdvertisementData
@property (copy, nonatomic) NSData *bleAppleManufacturerData; // ivar: _bleAppleManufacturerData
@property (nonatomic) int bleChannel; // ivar: _bleChannel
@property (nonatomic) int bleRSSI; // ivar: _bleRSSI
@property (copy, nonatomic) NSData *btAddressData; // ivar: _btAddressData
@property (nonatomic) NSUInteger changeFlags; // ivar: _changeFlags
@property (nonatomic) char classicRSSI; // ivar: _classicRSSI
@property (readonly, nonatomic) unsigned char colorCodeBest;
@property (readonly, nonatomic) unsigned char colorFlags;
@property (nonatomic) unsigned short colorInfo; // ivar: _colorInfo
@property (nonatomic) unsigned int connectedServices; // ivar: _connectedServices
@property (copy, nonatomic) NSString *contactID; // ivar: _contactID
@property (nonatomic) NSUInteger deviceFlags; // ivar: _deviceFlags
@property (retain, nonatomic) NSMutableDictionary *deviceInfo; // ivar: _deviceInfo
@property (nonatomic) unsigned char deviceType; // ivar: _deviceType
@property (nonatomic) NSUInteger discoveryFlags; // ivar: _discoveryFlags
@property (nonatomic) char doubleTapActionLeft; // ivar: _doubleTapActionLeft
@property (nonatomic) char doubleTapActionRight; // ivar: _doubleTapActionRight
@property (nonatomic) char doubleTapCapability; // ivar: _doubleTapCapability
@property (nonatomic) unsigned char dsActionFlags;
@property (nonatomic) char dsActionMeasuredPower;
@property (nonatomic) unsigned char dsActionTieBreaker;
@property (nonatomic) unsigned char dsInfoVehicleConfidence;
@property (nonatomic) unsigned char dsInfoVehicleState;
@property (copy, nonatomic) NSData *fidoPayloadData;
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (nonatomic) unsigned int gapaFlags;
@property (nonatomic) unsigned int gfpModelID;
@property (copy, nonatomic) NSData *gfpPayloadData;
@property (nonatomic) unsigned char heySiriConfidence;
@property (nonatomic) unsigned short heySiriDeviceClass;
@property (nonatomic) unsigned short heySiriPerceptualHash;
@property (nonatomic) unsigned char heySiriProductType;
@property (nonatomic) unsigned char heySiriRandom;
@property (nonatomic) unsigned char heySiriSNR;
@property (nonatomic) unsigned short homeKitV1Category; // ivar: _homeKitV1Category
@property (nonatomic) unsigned char homeKitV1CompatibleVersion; // ivar: _homeKitV1CompatibleVersion
@property (nonatomic) unsigned char homeKitV1ConfigurationNumber; // ivar: _homeKitV1ConfigurationNumber
@property (copy, nonatomic) NSData *homeKitV1DeviceIDData; // ivar: _homeKitV1DeviceIDData
@property (nonatomic) unsigned char homeKitV1Flags; // ivar: _homeKitV1Flags
@property (nonatomic) unsigned int homeKitV1SetupHash; // ivar: _homeKitV1SetupHash
@property (nonatomic) unsigned short homeKitV1StateNumber; // ivar: _homeKitV1StateNumber
@property (copy, nonatomic) NSData *homeKitV2AccessoryIDData; // ivar: _homeKitV2AccessoryIDData
@property (copy, nonatomic) NSData *homeKitV2AuthTagData; // ivar: _homeKitV2AuthTagData
@property (nonatomic) unsigned short homeKitV2InstanceID; // ivar: _homeKitV2InstanceID
@property (nonatomic) unsigned short homeKitV2StateNumber; // ivar: _homeKitV2StateNumber
@property (nonatomic) NSUInteger homeKitV2Value; // ivar: _homeKitV2Value
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *idsDeviceID; // ivar: _idsDeviceID
@property (nonatomic) unsigned int internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) NSData *irkData;
@property (nonatomic) NSUInteger lastSeenTicks; // ivar: _lastSeenTicks
@property (copy, nonatomic) NSData *linkKeyData;
@property (copy, nonatomic) NSData *ltkData;
@property (nonatomic) char microphoneMode; // ivar: _microphoneMode
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSData *mspAddressData;
@property (nonatomic) unsigned int mspDeviceClass;
@property (copy, nonatomic) NSString *mspDisplayName;
@property (nonatomic) unsigned char mspSubScenario;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSData *nearbyActionAuthTag; // ivar: _nearbyActionAuthTag
@property (readonly, nonatomic) unsigned char nearbyActionDeviceClass;
@property (nonatomic) unsigned int nearbyActionFlags; // ivar: _nearbyActionFlags
@property (nonatomic) unsigned char nearbyActionType; // ivar: _nearbyActionType
@property (nonatomic) unsigned int nearbyActionV2Flags;
@property (copy, nonatomic) NSData *nearbyActionV2TargetData;
@property (nonatomic) unsigned char nearbyActionV2Type;
@property (readonly, nonatomic) unsigned char nearbyActivityLevel; // ivar: _nearbyActivityLevel
@property (copy, nonatomic) NSData *nearbyAuthTag; // ivar: _nearbyAuthTag
@property (copy, nonatomic) NSData *nearbyInfoAuthTag; // ivar: _nearbyInfoAuthTag
@property (nonatomic) unsigned int nearbyInfoFlags; // ivar: _nearbyInfoFlags
@property (nonatomic) CGFloat nearbyInfoStatusProgress;
@property (nonatomic) unsigned char nearbyInfoStatusTime;
@property (nonatomic) unsigned char nearbyInfoStatusType;
@property (nonatomic) unsigned char objectDiscoveryBatteryState; // ivar: _objectDiscoveryBatteryState
@property (nonatomic) unsigned char objectDiscoveryMode; // ivar: _objectDiscoveryMode
@property (copy, nonatomic) NSData *objectDiscoveryNearOwnerID; // ivar: _objectDiscoveryNearOwnerID
@property (nonatomic) unsigned int objectDiscoveryProductID; // ivar: _objectDiscoveryProductID
@property (copy, nonatomic) NSData *objectDiscoveryPublicKeyData; // ivar: _objectDiscoveryPublicKeyData
@property (readonly, nonatomic) unsigned char objectSetupBatteryPerformance; // ivar: _objectSetupBatteryPerformance
@property (readonly, nonatomic) unsigned char objectSetupBatteryState; // ivar: _objectSetupBatteryState
@property (readonly, nonatomic) unsigned char objectSetupColorCode; // ivar: _objectSetupColorCode
@property (readonly, nonatomic) unsigned int objectSetupFlags; // ivar: _objectSetupFlags
@property (readonly, copy, nonatomic) NSString *objectSetupFontCode; // ivar: _objectSetupFontCode
@property (readonly, copy, nonatomic) NSString *objectSetupMessage; // ivar: _objectSetupMessage
@property (nonatomic) NSUInteger oldDiscoveryFlags; // ivar: _oldDiscoveryFlags
@property (nonatomic) char placementMode; // ivar: _placementMode
@property (nonatomic) int primaryPlacement; // ivar: _primaryPlacement
@property (nonatomic) unsigned int productID; // ivar: _productID
@property (nonatomic) unsigned int proximityPairingProductID; // ivar: _proximityPairingProductID
@property (nonatomic) unsigned char proximityPairingSubType; // ivar: _proximityPairingSubType
@property (nonatomic) unsigned char proximityServiceCategory; // ivar: _proximityServiceCategory
@property (copy, nonatomic) NSData *proximityServiceClassicAddress; // ivar: _proximityServiceClassicAddress
@property (copy, nonatomic) NSData *proximityServiceData; // ivar: _proximityServiceData
@property (nonatomic) unsigned char proximityServiceFlags; // ivar: _proximityServiceFlags
@property (nonatomic) char proximityServiceMeasuredPower; // ivar: _proximityServiceMeasuredPower
@property (nonatomic) unsigned short proximityServicePSM; // ivar: _proximityServicePSM
@property (nonatomic) unsigned int proximityServiceProductID; // ivar: _proximityServiceProductID
@property (copy, nonatomic) NSData *proximityServiceSetupHash; // ivar: _proximityServiceSetupHash
@property (nonatomic) unsigned char proximityServiceSubType; // ivar: _proximityServiceSubType
@property (nonatomic) unsigned short proximityServiceVendorID; // ivar: _proximityServiceVendorID
@property (nonatomic) unsigned char proximityServiceVersion; // ivar: _proximityServiceVersion
@property (readonly, nonatomic) char rssi;
@property (nonatomic) int secondaryPlacement; // ivar: _secondaryPlacement
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) char smartRoutingMode; // ivar: _smartRoutingMode
@property (nonatomic) unsigned char spatialInteractionFlags; // ivar: _spatialInteractionFlags
@property (copy, nonatomic) NSArray *spatialInteractionIdentifiers; // ivar: _spatialInteractionIdentifiers
@property (nonatomic) unsigned int spatialInteractionPeerID; // ivar: _spatialInteractionPeerID
@property (copy, nonatomic) NSData *spatialInteractionTokenData; // ivar: _spatialInteractionTokenData
@property (copy, nonatomic) NSData *spatialInteractionUWBConfigData; // ivar: _spatialInteractionUWBConfigData
@property (nonatomic) unsigned int spatialInteractionUWBTokenFlags; // ivar: _spatialInteractionUWBTokenFlags
@property (copy, nonatomic) NSDictionary *spatialInteractionUserInfo; // ivar: _spatialInteractionUserInfo
@property (readonly, copy, nonatomic) NSString *stableIdentifier;
@property (nonatomic) unsigned int supportedServices; // ivar: _supportedServices
@property (nonatomic) unsigned short vendorID; // ivar: _vendorID
@property (nonatomic) unsigned char vendorIDSource; // ivar: _vendorIDSource


-(BOOL)isEquivalentToCBDevice:(id)arg0 compareFlags:(unsigned int)arg1 ;
-(NSUInteger)removeInternalFlags:(unsigned int)arg0 ;
-(NSUInteger)updateWithCBDevice:(id)arg0 ;
-(NSUInteger)updateWithPowerSourceDescription:(id)arg0 ;
-(id)description;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(void)_clearUnparsedProperties;
-(void)_parseAirPlaySourcePtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAirPlayTargetPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseAppleManufacturerPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseDSInfoPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseHeySiriPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseHomeKitV1Ptr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseHomeKitV2Ptr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseManufacturerPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseMicrosoftManufacturerPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseMicrosoftSwiftPairPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseNearbyActionPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseNearbyActionV2Ptr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseNearbyInfoPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseObjectDiscoveryPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseProximityPairingAccessoryStatusPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseProximityPairingObjectSetupPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseProximityPairingPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseProximityPairingWxSetupPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseProximityPairingWxStatusPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseProximityServiceData:(id)arg0 ;
-(void)_parseProximityServiceHomeKitSetupPtr:(char *)arg0 end:(char *)arg1 ;
-(void)_parseSpatialInteractionPtr:(char *)arg0 end:(char *)arg1 ;
-(void)encodeWithXPCObject:(id)arg0 ;
-(void)updateWithCBIdentity:(id)arg0 ;
-(void)updateWithRPIdentity:(id)arg0 ;


@end


#endif