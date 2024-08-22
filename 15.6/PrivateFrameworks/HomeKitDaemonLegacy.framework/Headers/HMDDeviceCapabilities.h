// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDEVICECAPABILITIES_H
#define HMDDEVICECAPABILITIES_H

@class HMFObject, NSString, NSUUID;
@protocol HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMFLogging, NSCopying, NSSecureCoding;


#import "HMDDeviceCapabilitiesModel.h"

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, HMFLogging, NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    HMDDeviceCapabilitiesModel *_objectModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL messagedHomePodSettingsFeatureEnabled; // ivar: _messagedHomePodSettingsFeatureEnabled
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (copy, nonatomic) NSUUID *modelParentIdentifier;
@property (readonly, nonatomic, getter=isRemoteGatewayCapable) BOOL remoteGatewayCapable;
@property (readonly, nonatomic, getter=isResidentCapable) BOOL residentCapable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAccessCodes;
@property (readonly, nonatomic) BOOL supportsAnnounce;
@property (readonly, nonatomic) BOOL supportsAssistantAccessControl;
@property (readonly, nonatomic) BOOL supportsCHIP;
@property (readonly, nonatomic) BOOL supportsCameraActivityZones;
@property (readonly, nonatomic) BOOL supportsCameraPackageDetection;
@property (readonly, nonatomic) BOOL supportsCameraRecording;
@property (readonly, nonatomic) BOOL supportsCameraRecordingReachabilityNotifications;
@property (readonly, nonatomic) BOOL supportsCameraSignificantEventNotifications;
@property (readonly, nonatomic) BOOL supportsCaptiveNetworks;
@property (readonly, nonatomic) BOOL supportsCloudDataSync;
@property (readonly, nonatomic) BOOL supportsCompanionInitiatedRestart;
@property (readonly, nonatomic) BOOL supportsCoordinationDoorbellChime;
@property (readonly, nonatomic) BOOL supportsDeviceSetup;
@property (readonly) BOOL supportsDoorbellChime;
@property (readonly, nonatomic) BOOL supportsFaceClassification;
@property (readonly, nonatomic) BOOL supportsFirmwareUpdate;
@property (readonly) BOOL supportsHomeHub;
@property (readonly, nonatomic) BOOL supportsHomeInvitation;
@property (readonly, nonatomic) BOOL supportsHomeLevelLocationServiceSetting;
@property (readonly, nonatomic) BOOL supportsIDSActivityMonitorPresence;
@property (readonly, nonatomic) BOOL supportsKeyTransferClient;
@property (readonly, nonatomic) BOOL supportsKeyTransferServer;
@property (readonly, nonatomic) BOOL supportsKeychainSync;
@property (readonly, nonatomic) BOOL supportsLockNotificationContext;
@property (readonly, nonatomic) BOOL supportsManagedConfigurationProfile;
@property (readonly, nonatomic) BOOL supportsMediaActions;
@property (readonly, nonatomic) BOOL supportsMessagedHomePodSettings;
@property (readonly, nonatomic) BOOL supportsModernTransport;
@property (readonly, nonatomic) BOOL supportsMultiUser;
@property (readonly, nonatomic) BOOL supportsMusicAlarm;
@property (readonly, nonatomic) BOOL supportsNaturalLighting;
@property (readonly) BOOL supportsPreferredMediaUser;
@property (readonly, nonatomic) BOOL supportsResidentFirmwareUpdate;
@property (readonly, nonatomic) BOOL supportsResidentFirstAccessoryCommunication;
@property (readonly, nonatomic) BOOL supportsRouterManagement;
@property (readonly, nonatomic) BOOL supportsShortcutActions;
@property (readonly) BOOL supportsSiriEndpointSetup;
@property (readonly, nonatomic) BOOL supportsStandaloneMode;
@property (readonly, nonatomic) BOOL supportsTargetControl;
@property (readonly) BOOL supportsThirdPartyMusic;
@property (readonly, nonatomic) BOOL supportsThreadBorderRouter;
@property (readonly, nonatomic) BOOL supportsUnifiedMediaNotifications;
@property (readonly) BOOL supportsUserMediaSettings;
@property (readonly, nonatomic) BOOL supportsWakeOnLAN;
@property (readonly, nonatomic) BOOL supportsWalletKey;
@property (readonly, nonatomic) BOOL supportsWholeHouseAudio;


+(BOOL)isAppleMediaAccessory;
+(BOOL)isCompanionCapable;
+(BOOL)requiresHomePodPairing;
+(BOOL)supportsAddingAccessory;
+(BOOL)supportsAudioDestinationControllerCreation;
+(BOOL)supportsAudioDestinationCreation;
+(BOOL)supportsBackboard;
+(BOOL)supportsBidirectionalAudioForCameraStreaming;
+(BOOL)supportsBulletinBoard;
+(BOOL)supportsCameraSnapshotRequestViaRelay;
+(BOOL)supportsCustomerReset;
+(BOOL)supportsDeviceLock;
+(BOOL)supportsDismissUserNotificationAndDialog;
+(BOOL)supportsHomeApp;
+(BOOL)supportsHomeKitDataStream;
+(BOOL)supportsIntentDonation;
+(BOOL)supportsLocalization;
+(BOOL)supportsReceivingRemoteCameraStream;
+(BOOL)supportsRemoteAccess;
+(BOOL)supportsSecureCoding;
+(BOOL)supportsSiriUnsecuringActionsWithNoPasscode;
+(BOOL)supportsSiriUnsecuringActionsWithWatchAuth;
+(BOOL)supportsStereoPairingV1;
+(BOOL)supportsStereoPairingV2;
+(BOOL)supportsSymptomsHandler;
+(BOOL)supportsSyncingToSharedUsers;
+(BOOL)supportsUserNotifications;
+(NSUInteger)appleMediaAccessoryVariant;
+(NSUInteger)supportedPairingCapabilities;
+(id)deviceCapabilities;
+(id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg0 ;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)backingStoreObjectsWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectModel:(id)arg0 ;
-(id)initWithProductInfo:(id)arg0 ;
-(id)initWithProductInfo:(id)arg0 homekitVersion:(id)arg1 ;
-(id)initWithProductInfo:(id)arg0 homekitVersion:(id)arg1 overrideInfo:(id)arg2 ;
-(id)initWithProductInfo:(id)arg0 homekitVersion:(id)arg1 overrideInfo:(id)arg2 mobileGestaltClient:(id)arg3 ;
-(id)modelBackedObjects;
-(id)modelObjectWithChangeType:(NSUInteger)arg0 version:(NSInteger)arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;
-(void)transactionObjectRemoved:(id)arg0 message:(id)arg1 ;
-(void)transactionObjectUpdated:(id)arg0 newValues:(id)arg1 message:(id)arg2 ;


@end


#endif