// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKJSDEVICE_H
#define IKJSDEVICE_H

@class NSString, NSNumber;
@protocol NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice, IKAppDeviceConfig;


#import "IKJSObject.h"

@interface IKJSDevice : IKJSObject <NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice>

 {
    id *_networkPropertiesChangedToken;
}


@property (readonly, nonatomic) NSString *advertisingIdentifier;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *appVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<IKAppDeviceConfig> *deviceConfig; // ivar: _deviceConfig
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAdvertisingTrackingEnabled;
@property (readonly, nonatomic) BOOL isInAirplaneMode;
@property (readonly, nonatomic) BOOL isInRetailDemoMode;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isSeedBuild;
@property (readonly, nonatomic) CGFloat lastNetworkChangedTime;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *networkType;
@property (readonly, nonatomic) NSString *osBuildNumber;
@property (readonly, nonatomic) NSNumber *pixelRatio;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL runningAnInternalBuild;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSString *vendorID;
@property (readonly, nonatomic) NSString *vendorIdentifier;


+(id)getMobileGestaltString:(struct __CFString *)arg0 ;
-(id)asPrivateIKJSDevice;
-(id)capacity:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 deviceConfig:(id)arg1 ;
-(void)dealloc;


@end


#endif