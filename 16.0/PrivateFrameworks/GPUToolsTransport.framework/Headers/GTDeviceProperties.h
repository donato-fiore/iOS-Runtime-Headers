// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTDEVICEPROPERTIES_H
#define GTDEVICEPROPERTIES_H

@class NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTDeviceProperties : NSObject <NSSecureCoding>



@property (nonatomic) BOOL appleInternal; // ivar: _AppleInternal
@property (copy, nonatomic) NSUUID *bootSessionUUID; // ivar: _BootSessionUUID
@property (copy, nonatomic) NSString *buildVersion; // ivar: _BuildVersion
@property (copy, nonatomic) NSString *cpuArchitecture; // ivar: _CPUArchitecture
@property (copy, nonatomic) NSString *deviceClass; // ivar: _DeviceClass
@property (nonatomic) BOOL deviceSupportsLockdown; // ivar: _DeviceSupportsLockdown
@property (nonatomic) BOOL effectiveProductionStatusAp; // ivar: _EffectiveProductionStatusAp
@property (copy, nonatomic) NSString *hardwareModel; // ivar: _HWModelStr
@property (nonatomic) BOOL isUIBuild; // ivar: _IsUIBuild
@property (nonatomic) NSUInteger locationID; // ivar: _LocationID
@property (copy, nonatomic) NSString *mobileDeviceMinimumVersion; // ivar: _MobileDeviceMinimumVersion
@property (nonatomic) BOOL osInstallEnvironment; // ivar: _OSInstallEnvironment
@property (copy, nonatomic) NSString *osVersion; // ivar: _OSVersion
@property (copy, nonatomic) NSString *productName; // ivar: _ProductName
@property (copy, nonatomic) NSString *productType; // ivar: _ProductType
@property (copy, nonatomic) NSString *releaseType; // ivar: _ReleaseType
@property (nonatomic) NSUInteger remoteXPCVersionFlags; // ivar: _RemoteXPCVersionFlags
@property (nonatomic) BOOL storeDemoMode; // ivar: _StoreDemoMode
@property (copy, nonatomic) NSString *uniqueDeviceID; // ivar: _UniqueDeviceID


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initForEmbeddedSystem;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)refreshPropertiesFromXPCObject:(id)arg0 ;


@end


#endif