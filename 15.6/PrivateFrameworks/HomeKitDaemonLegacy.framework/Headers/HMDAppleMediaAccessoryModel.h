// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORYMODEL_H
#define HMDAPPLEMEDIAACCESSORYMODEL_H

@class NSString, NSData, HMFPairingIdentity, NSNumber, HMFSoftwareVersion, HMFWiFiNetworkInfo;


#import "HMDMediaAccessoryModel.h"
#import "HMDDevice.h"

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (retain, nonatomic) NSString *appleMediaAccessoryChangeTag;
@property (retain, nonatomic) HMDDevice *device;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSData *loggedInAccount;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (retain, nonatomic) NSNumber *productColor;
@property (retain, nonatomic) HMFSoftwareVersion *softwareVersion;
@property (retain, nonatomic) NSNumber *supportedStereoPairVersions;
@property (retain, nonatomic) NSData *symptoms;
@property (retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo;


+(id)appleMediaAccessoryModelWithChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;
+(id)homePodAccessoryModelWithChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;
+(id)properties;
-(id)_initWithObjectChangeType:(NSUInteger)arg0 uuid:(id)arg1 parentUUID:(id)arg2 ;


@end


#endif