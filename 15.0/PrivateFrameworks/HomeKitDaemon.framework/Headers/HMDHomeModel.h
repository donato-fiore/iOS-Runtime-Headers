// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEMODEL_H
#define HMDHOMEMODEL_H

@class NSDictionary, NSDate, NSString, NSData, NSNumber;


#import "HMDBackingStoreModelObject.h"
#import "HMDNaturalLightingContext.h"
#import "HMDHomeKitVersion.h"

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSDictionary *chipKeyValueStore;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *defaultRoomUUID;
@property (retain, nonatomic) NSData *encodedNaturalLightingContext;
@property (retain, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (copy, nonatomic) NSNumber *hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (copy, nonatomic) NSNumber *hasOnboardedForAccessCode;
@property (copy, nonatomic) NSNumber *hasOnboardedForWalletKey;
@property (retain, nonatomic) NSData *homeLocationData;
@property (copy, nonatomic) NSNumber *multiUserEnabled;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) HMDNaturalLightingContext *naturalLightingContext;
@property (retain, nonatomic) NSNumber *networkProtectionMode;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSData *ownerPublicKey;
@property (retain, nonatomic) NSString *ownerUUID;
@property (retain, nonatomic) NSString *ownerUserID;
@property (retain, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) NSNumber *presenceComputeStatus;
@property (retain, nonatomic) NSString *primaryResidentUUID;
@property (copy, nonatomic) HMDHomeKitVersion *sharedHomeSourceVersion;


+(id)properties;


@end


#endif