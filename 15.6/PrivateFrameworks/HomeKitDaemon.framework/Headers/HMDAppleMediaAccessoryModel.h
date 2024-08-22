// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORYMODEL_H
#define HMDAPPLEMEDIAACCESSORYMODEL_H

@class NSString, NSData, HMFPairingIdentity, NSNumber, HMFSoftwareVersion, HMFWiFiNetworkInfo;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDMediaAccessoryModel.h"
#import "HMDDevice.h"

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) NSString *deviceUUID;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSNumber *productColor;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *supportedStereoPairVersions;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) NSNumber *variant;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;


+(Class)cd_entityClass;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;


@end


#endif