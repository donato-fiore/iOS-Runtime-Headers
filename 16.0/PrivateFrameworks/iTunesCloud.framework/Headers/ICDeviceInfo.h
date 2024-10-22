// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDEVICEINFO_H
#define ICDEVICEINFO_H

@class NSString, NSData, NSNumber;
@protocol ICNanoPairedDeviceStatusObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDeviceInfo : NSObject <ICNanoPairedDeviceStatusObserver>

 {
    atomic_flag _hasRegisteredForNameNotifications;
    *MGNotificationTokenStruct _nameNotificationToken;
    NSString *_productVersion;
    NSString *_deviceModel;
    NSString *_rawDeviceModel;
    NSString *_hardwarePlatform;
    NSString *_buildVersion;
    int _deviceClass;
    NSString *_deviceClassName;
    unsigned int _fairPlayDeviceType;
    NSString *_currentLocale;
    NSData *_deviceGUIDData;
    NSString *_deviceGUID;
    NSString *_name;
    NSString *_serialNumber;
    NSData *_macAddressData;
    CGSize _mainScreenSize;
    NSNumber *_hasCellularDataCapabilityNumber;
    NSNumber *_hasTelephonyCapabilityNumber;
    NSNumber *_hasWiFiCapabilityValue;
    NSNumber *_hasWAPICapabilityValue;
    NSNumber *_has720pCapabilityValue;
    NSNumber *_has1080pCapabilityValue;
    NSNumber *_isPhoneNumberAccessRestrictedValue;
    NSNumber *_screenClassValue;
    NSNumber *_isInternalBuildNumber;
    NSNumber *_supportsMusicStreamingValue;
    NSString *_systemReleaseType;
    NSObject<OS_dispatch_queue> *_deviceNameUpdateQueue;
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, copy, nonatomic) NSString *currentLocale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, copy, nonatomic) NSString *deviceClassName;
@property (readonly, copy, nonatomic) NSData *deviceFairPlayGUIDData;
@property (readonly, copy, nonatomic) NSString *deviceGUID;
@property (readonly, copy, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) unsigned int fairPlayDeviceType;
@property (readonly, copy, nonatomic) NSString *hardwarePlatform;
@property (readonly, nonatomic) BOOL has1080pCapability;
@property (readonly, nonatomic) BOOL has720pCapability;
@property (readonly, nonatomic) BOOL hasCellularDataCapability;
@property (readonly, nonatomic) BOOL hasTelephonyCapability;
@property (readonly, nonatomic) BOOL hasWAPICapability;
@property (readonly, nonatomic) BOOL hasWiFiCapability;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;
@property (readonly, nonatomic) BOOL isAppleTV;
@property (readonly, nonatomic) BOOL isAudioAccessory;
@property (readonly, nonatomic) BOOL isIPad;
@property (readonly, nonatomic) BOOL isIPhone;
@property (readonly, nonatomic) BOOL isIPod;
@property (readonly, nonatomic) BOOL isMac;
@property (readonly, nonatomic) BOOL isROSDevice;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, copy, nonatomic) NSString *macAddress;
@property (readonly, copy, nonatomic) NSData *macAddressData;
@property (readonly, nonatomic) CGSize mainScreenSize;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isPhoneNumberAccessRestricted) BOOL phoneNumberAccessRestricted;
@property (readonly, copy, nonatomic) NSString *productPlatform;
@property (readonly, copy, nonatomic) NSString *productVersion;
@property (readonly, copy, nonatomic) NSString *rawDeviceModel;
@property (readonly, nonatomic) int screenClass;
@property (readonly, nonatomic, getter=isSeedBuild) BOOL seedBuild;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleITunesAccounts;
@property (readonly, nonatomic) BOOL supportsMusicStreaming;
@property (readonly, nonatomic) BOOL supportsSideLoadedMediaContent;
@property (readonly, copy, nonatomic) NSString *systemReleaseType;


+(id)currentDeviceInfo;
+(id)defaultInfo;
-(id)_init;
-(int)_gestaltDeviceClass;
-(void)dealloc;


@end


#endif