// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMDEVICEINFO_H
#define AXMDEVICEINFO_H

@class NSString, NSDictionary, NSNumber, NSValue;

#import <Foundation/Foundation.h>


@interface AXMDeviceInfo : NSObject {
    BOOL _isInternalInstall;
}


@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *computerName; // ivar: _computerName
@property (retain, nonatomic) NSString *cpuArchitecture; // ivar: _cpuArchitecture
@property (retain, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (retain, nonatomic) NSString *deviceModelNumber; // ivar: _deviceModelNumber
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSString *deviceNameClassic; // ivar: _deviceNameClassic
@property (retain, nonatomic) NSString *deviceNameGS; // ivar: _deviceNameGS
@property (retain, nonatomic) NSString *deviceNameLocalized; // ivar: _deviceNameLocalized
@property (retain, nonatomic) NSString *deviceVariant; // ivar: _deviceVariant
@property (retain, nonatomic) NSDictionary *displayZoomSizes; // ivar: _displayZoomSizes
@property (retain, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (retain, nonatomic) NSNumber *hasAmbientLightSensor; // ivar: _hasAmbientLightSensor
@property (retain, nonatomic) NSNumber *hasDualLensCamera; // ivar: _hasDualLensCamera
@property (retain, nonatomic) NSNumber *mainScreenOrientation; // ivar: _mainScreenOrientation
@property (retain, nonatomic) NSNumber *mainScreenScale; // ivar: _mainScreenScale
@property (retain, nonatomic) NSValue *mainScreenSizeHeight; // ivar: _mainScreenSizeHeight
@property (retain, nonatomic) NSValue *mainScreenSizeWidth; // ivar: _mainScreenSizeWidth
@property (retain, nonatomic) NSString *marketingName; // ivar: _marketingName
@property (retain, nonatomic) NSString *marketingProductName; // ivar: _marketingProductName
@property (retain, nonatomic) NSString *marketingVersion; // ivar: _marketingVersion
@property (retain, nonatomic) NSNumber *physicalMemory; // ivar: _physicalMemory
@property (retain, nonatomic) NSNumber *processorCount; // ivar: _processorCount
@property (retain, nonatomic) NSString *productName; // ivar: _productName
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSNumber *supports1080pPlayback; // ivar: _supports1080pPlayback
@property (retain, nonatomic) NSNumber *supports720pPlayback; // ivar: _supports720pPlayback
@property (retain, nonatomic) NSNumber *supportsARM64; // ivar: _supportsARM64
@property (retain, nonatomic) NSNumber *supportsARMv6; // ivar: _supportsARMv6
@property (retain, nonatomic) NSNumber *supportsARMv7; // ivar: _supportsARMv7
@property (retain, nonatomic) NSNumber *supportsARMv7s; // ivar: _supportsARMv7s


+(id)sharedInstance;
-(id)_init;
-(id)_jetsamInfo;
-(id)privilegedSystemReport;
-(id)systemReport;


@end


#endif