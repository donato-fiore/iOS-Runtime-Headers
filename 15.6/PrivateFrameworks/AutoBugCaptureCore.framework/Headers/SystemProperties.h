// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSTEMPROPERTIES_H
#define SYSTEMPROPERTIES_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface SystemProperties : NSObject {
    int _dualSIMCapability;
}


@property (readonly, nonatomic) BOOL basebandCapability; // ivar: _basebandCapability
@property (readonly, nonatomic) NSString *basebandChipset; // ivar: _basebandChipset
@property (readonly, nonatomic) NSString *buildPlatform; // ivar: _buildPlatform
@property (readonly, nonatomic) NSString *buildVariant; // ivar: _buildVariant
@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSString *buildVersionPrefix; // ivar: _buildVersionPrefix
@property (readonly, nonatomic) BOOL carrierBuild; // ivar: _carrierBuild
@property (readonly, nonatomic) BOOL carrierSeedBuild;
@property (copy, nonatomic) NSNumber *carrierSeedBuildOverride; // ivar: _carrierSeedBuildOverride
@property (readonly, nonatomic) BOOL customerBuild;
@property (readonly, nonatomic) BOOL customerSeedBuild;
@property (readonly, nonatomic) int deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSString *deviceClassString;
@property (readonly, nonatomic) BOOL dualSIMCapable; // ivar: _dualSIMCapable
@property (readonly, nonatomic) BOOL dualSIMEnabled; // ivar: _dualSIMEnabled
@property (readonly, nonatomic) BOOL factoryBuild; // ivar: _factoryBuild
@property (readonly, nonatomic) BOOL internalBuild; // ivar: _internalBuild
@property (nonatomic) BOOL internalBuildDisabledByOverride; // ivar: _internalBuildDisabledByOverride
@property (readonly, nonatomic) BOOL npiDevice; // ivar: _npiDevice
@property (copy, nonatomic) NSNumber *npiDeviceOverride; // ivar: _npiDeviceOverride
@property (readonly, nonatomic) NSString *productName; // ivar: _productName
@property (readonly, nonatomic) NSString *productType; // ivar: _productType
@property (readonly, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (readonly, nonatomic) BOOL seedBuild; // ivar: _seedBuild
@property (copy, nonatomic) NSNumber *seedBuildOverride; // ivar: _seedBuildOverride
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) BOOL vendorBuild; // ivar: _vendorBuild
@property (copy, nonatomic) NSNumber *vendorBuildOverride; // ivar: _vendorBuildOverride


+(id)sharedInstance;
+(int)systemPropertiesDeviceClassFromMGQDeviceClass:(int)arg0 ;
+(void)setDeviceConfigTypeForSerialNumber:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif