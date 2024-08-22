// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHAPACCESSORYTRANSACTION_H
#define HMDHAPACCESSORYTRANSACTION_H

@class NSNumber, NSData, NSString, HAPAccessory, NSSet, NSDate, NSArray;


#import "HMDAccessoryTransaction.h"
#import "HMFConnectivityInfo.h"

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction

@property (retain, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (retain, nonatomic) NSString *bridgeUUID;
@property (retain, nonatomic) NSData *broadcastKey;
@property (retain, nonatomic) NSNumber *certificationStatus;
@property (retain, nonatomic) NSNumber *communicationProtocol;
@property (retain, nonatomic) HMFConnectivityInfo *connectivityInfo;
@property (retain, nonatomic) HAPAccessory *hapAccessoryLocal; // ivar: _hapAccessoryLocal
@property (retain, nonatomic) NSNumber *hardwareSupport;
@property (retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (copy, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, nonatomic) NSDate *keyUpdatedTime;
@property (retain, nonatomic) NSNumber *needsOnboarding;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) NSData *relayAccessToken;
@property (retain, nonatomic) NSString *relayIdentifier;
@property (retain, nonatomic) NSNumber *relayState;
@property (retain, nonatomic) NSNumber *sleepInterval;
@property (retain, nonatomic) NSNumber *supportsRelay;
@property (retain, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *transportInformation;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (retain, nonatomic) NSNumber *wiFiTransportCapabilities;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif