// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPACCESSORYTRANSACTION_H
#define HMDHAPACCESSORYTRANSACTION_H

@class NSNumber, NSData, NSString, NSSet, HAPAccessory, NSDate, NSArray;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDAccessoryTransaction.h"
#import "HMFConnectivityInfo.h"

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (retain, nonatomic) NSString *bridgeUUID;
@property (retain, nonatomic) NSData *broadcastKey;
@property (retain, nonatomic) NSNumber *certificationStatus;
@property (retain, nonatomic) NSData *chipAttributeDatabase;
@property (retain, nonatomic) NSNumber *chipNodeID;
@property (copy, nonatomic) NSSet *chipPairings;
@property (retain, nonatomic) NSData *chipPairingsData;
@property (retain, nonatomic) NSNumber *chipProductID;
@property (retain, nonatomic) NSNumber *chipVendorID;
@property (retain, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPAccessory *hapAccessoryLocal; // ivar: _hapAccessoryLocal
@property (retain, nonatomic) NSNumber *hardwareSupport;
@property (retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, nonatomic) NSDate *keyUpdatedTime;
@property (retain, nonatomic) NSNumber *needsOnboarding;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSNumber *sleepInterval;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *transportInformation;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *wiFiTransportCapabilities;


+(Class)cd_entityClass;
+(id)cd_getMKFHAPAccessoryFromAccessory:(id)arg0 ;
+(id)cd_getMKFHAPAccessoryFromAccessoryUUID:(id)arg0 ;
+(id)cd_getMKFServiceFromAccessoryUUID:(id)arg0 serviceInstanceId:(id)arg1 managedObject:(id)arg2 modelObjectField:(id)arg3 ;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)dependentUUIDs;


@end


#endif