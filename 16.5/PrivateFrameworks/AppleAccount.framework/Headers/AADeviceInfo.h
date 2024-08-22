// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AADEVICEINFO_H
#define AADEVICEINFO_H


#import <Foundation/Foundation.h>


@interface AADeviceInfo : NSObject



+(BOOL)hasiCloudSignOutRestriction;
+(BOOL)isInternalBuild;
+(BOOL)isMultiUserMode;
+(BOOL)locationServicesRestricted;
+(id)apnsToken;
+(id)appleIDClientIdentifier;
+(id)clientInfoHeader;
+(id)currentInfo;
+(id)infoDictionary;
+(id)osVersion;
+(id)productVersion;
+(id)serialNumber;
+(id)udid;
+(id)userAgentHeader;
-(BOOL)hasCellularCapability;
-(id)apnsToken;
-(id)appleIDClientIdentifier;
-(id)bluetoothMacAddress;
-(id)buildVersion;
-(id)chipIdentifier;
-(id)clientInfoHeader;
-(id)deviceBackingColor;
-(id)deviceClass;
-(id)deviceColor;
-(id)deviceCoverGlassColor;
-(id)deviceEnclosureColor;
-(id)deviceHousingColor;
-(id)deviceInfoDictionary;
-(id)deviceName;
-(id)internationalMobileEquipmentIdentity;
-(id)mobileEquipmentIdentifier;
-(id)modelNumber;
-(id)osName;
-(id)osVersion;
-(id)productType;
-(id)productVersion;
-(id)regionCode;
-(id)serialNumber;
-(id)storageCapacity;
-(id)udid;
-(id)uniqueChipIdentifier;
-(id)userAgentHeader;
-(id)wifiMacAddress;


@end


#endif