// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYTRANSACTION_H
#define HMDACCESSORYTRANSACTION_H

@class NSNumber, NSArray, NSString, NSDate, NSUUID, NSData;
@protocol OS_dispatch_group;


#import "HMDBackingStoreModelObject.h"
#import "HMDUserManagementOperationTimestamp.h"

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject

@property (retain, nonatomic) NSNumber *accessoryCategory;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (retain, nonatomic) NSString *configurationAppIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker; // ivar: _configurationTracker
@property (retain, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSString *configuredNetworkProtectionGroupUUIDString; // ivar: _configuredNetworkProtectionGroupUUIDString
@property (retain, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (retain, nonatomic) NSString *hostAccessoryUUID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *initialCategoryIdentifier;
@property (retain, nonatomic) NSString *initialManufacturer;
@property (retain, nonatomic) NSString *initialModel;
@property (retain, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (retain, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSNumber *lowBattery;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *networkClientIdentifier;
@property (retain, nonatomic) NSNumber *networkClientLAN;
@property (retain, nonatomic) NSString *networkClientProfileFingerprint;
@property (retain, nonatomic) NSString *networkRouterUUID;
@property (retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp;
@property (retain, nonatomic) NSString *pendingConfigurationIdentifier;
@property (copy) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;
@property (retain, nonatomic) NSString *primaryProfileVersion;
@property (retain, nonatomic) NSString *productData;
@property (retain, nonatomic) NSString *productDataV2;
@property (retain, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSString *roomUUID;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp;
@property (retain, nonatomic) NSNumber *suspendCapable;
@property (retain, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif