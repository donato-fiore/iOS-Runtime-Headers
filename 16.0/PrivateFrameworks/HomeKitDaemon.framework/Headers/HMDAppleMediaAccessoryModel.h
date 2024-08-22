// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMODEL_H
#define HMDAPPLEMEDIAACCESSORYMODEL_H

@class NSData, NSString, HMFPairingIdentity, NSNumber, HMFSoftwareVersion, HMFWiFiNetworkInfo;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDMediaAccessoryModel.h"
#import "HMDDevice.h"
#import "HMDDeviceAddress.h"

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSData *accessoryCapabilities;
@property (retain, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) HMDDeviceAddress *deviceAddress;
@property (retain, nonatomic) NSData *deviceIRKData;
@property (retain, nonatomic) NSString *deviceUUID;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSNumber *productColor;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *supportedStereoPairVersions;
@property (retain, nonatomic) NSNumber *variant;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;


+(Class)cd_entityClass;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;


@end


#endif