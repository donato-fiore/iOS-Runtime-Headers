// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPACCESSORYTRANSACTION_H
#define HMDHAPACCESSORYTRANSACTION_H

@class NSNumber, NSData, NSString, NSDate, NSSet, HAPAccessory, NSArray;
@protocol HMDBackingStoreModelObjectCDRepresentable;


#import "HMDAccessoryTransaction.h"
#import "HMFConnectivityInfo.h"

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction <HMDBackingStoreModelObjectCDRepresentable>



@property (retain, nonatomic) NSNumber *accessoryFlags;
@property (retain, nonatomic) NSData *accessorySetupHash;
@property (copy, nonatomic) NSNumber *airPlayEnabled;
@property (copy, nonatomic) NSNumber *announceEnabled;
@property (retain, nonatomic) NSString *bridgeUUID;
@property (retain, nonatomic) NSData *broadcastKey;
@property (copy, nonatomic) NSNumber *cameraAccessModeAtHome;
@property (copy, nonatomic) NSNumber *cameraAccessModeNotAtHome;
@property (copy, nonatomic) NSData *cameraActivityZones;
@property (copy, nonatomic) NSNumber *cameraActivityZonesIncludedForSignificantEventDetection;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessMode;
@property (copy, nonatomic) NSDate *cameraCurrentAccessModeChangeDate;
@property (copy, nonatomic) NSNumber *cameraCurrentAccessModeChangeReason;
@property (copy, nonatomic) NSNumber *cameraRecordingEventTriggers;
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
@property (copy, nonatomic) NSNumber *doorbellChimeEnabled;
@property (retain, nonatomic) NSNumber *enhancedAuthConfigNumber;
@property (retain, nonatomic) NSNumber *enhancedAuthMethod;
@property (retain, nonatomic) HAPAccessory *hapAccessoryLocal; // ivar: _hapAccessoryLocal
@property (retain, nonatomic) NSNumber *hardwareSupport;
@property (copy, nonatomic) NSNumber *hasDismissedHomePodHasNonMemberMediaAccountWarning;
@property (retain, nonatomic) NSNumber *hasOnboardedForNaturalLighting;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *initialServiceTypeUUIDs;
@property (copy, nonatomic) NSNumber *interactionHoldDurationEnabled;
@property (copy, nonatomic) NSNumber *interactionHoldDurationSeconds;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatEnabled;
@property (copy, nonatomic) NSNumber *interactionIgnoreRepeatSeconds;
@property (copy, nonatomic) NSNumber *interactionTouchAccommodationsEnabled;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (retain, nonatomic) NSDate *keyUpdatedTime;
@property (copy, nonatomic) NSNumber *lightWhenUsingSiriEnabled;
@property (retain, nonatomic) NSNumber *needsOnboarding;
@property (retain, nonatomic) NSString *pairingUsername;
@property (retain, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSNumber *shareSiriAnalytics;
@property (copy, nonatomic) NSNumber *shareSpeakerAnalytics;
@property (copy, nonatomic) NSNumber *siriEnabled;
@property (copy, nonatomic) NSNumber *siriEndpointEnabled;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceGenderCode;
@property (copy, nonatomic) NSString *siriLanguageVoiceName;
@property (retain, nonatomic) NSNumber *sleepInterval;
@property (copy, nonatomic) NSNumber *soundAlertEnabled;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *suspendedState;
@property (retain, nonatomic) NSArray *targetUUIDs;
@property (retain, nonatomic) NSArray *transportInformation;
@property (retain, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSNumber *visionDoubleTapSettingsTimeoutInterval;
@property (copy, nonatomic) NSNumber *visionSpeakingRate;
@property (copy, nonatomic) NSNumber *visionVoiceOverAudioDuckingEnabled;
@property (copy, nonatomic) NSNumber *visionVoiceOverEnabled;
@property (retain, nonatomic) NSNumber *wiFiTransportCapabilities;


+(Class)cd_entityClass;
+(id)cd_getMKFHAPAccessoryFromAccessory:(id)arg0 ;
+(id)cd_getMKFHAPAccessoryFromAccessoryUUID:(id)arg0 ;
+(id)cd_getMKFServiceFromAccessoryUUID:(id)arg0 serviceInstanceId:(id)arg1 ;
+(id)cd_parentReferenceName;
+(id)properties;
-(id)cd_generateValueForModelObjectFromManagedObject:(id)arg0 modelObjectField:(id)arg1 modelFieldInfo:(id)arg2 ;
-(id)cd_generateValueForProperty:(id)arg0 managedObjectField:(id)arg1 context:(id)arg2 ;
-(id)dependentUUIDs;


@end


#endif