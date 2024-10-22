// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDEVICECAPABILITIESMODEL_H
#define HMDDEVICECAPABILITIESMODEL_H

@class NSNumber;


#import "HMDBackingStoreModelObject.h"

@interface HMDDeviceCapabilitiesModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *remoteGatewayCapable;
@property (copy, nonatomic) NSNumber *residentCapable;
@property (copy, nonatomic) NSNumber *supportsAccessCodes;
@property (copy, nonatomic) NSNumber *supportsAnnounce;
@property (copy, nonatomic) NSNumber *supportsAssistantAccessControl;
@property (copy, nonatomic) NSNumber *supportsCHIP;
@property (copy, nonatomic) NSNumber *supportsCameraActivityZones;
@property (copy, nonatomic) NSNumber *supportsCameraPackageDetection;
@property (copy, nonatomic) NSNumber *supportsCameraRecording;
@property (copy, nonatomic) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (copy, nonatomic) NSNumber *supportsCameraSignificantEventNotifications;
@property (copy, nonatomic) NSNumber *supportsCloudDataSync;
@property (copy, nonatomic) NSNumber *supportsCompanionInitiatedRestart;
@property (copy, nonatomic) NSNumber *supportsCoordinationDoorbellChime;
@property (copy, nonatomic) NSNumber *supportsDeviceSetup;
@property (copy, nonatomic) NSNumber *supportsDoorbellChime; // ivar: _supportsDoorbellChime
@property (copy, nonatomic) NSNumber *supportsFaceClassification;
@property (copy, nonatomic) NSNumber *supportsFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsHomeHub;
@property (copy, nonatomic) NSNumber *supportsHomeInvitation;
@property (copy, nonatomic) NSNumber *supportsIDSActivityMonitorPresence;
@property (copy, nonatomic) NSNumber *supportsKeyTransferClient;
@property (copy, nonatomic) NSNumber *supportsKeyTransferServer;
@property (copy, nonatomic) NSNumber *supportsKeychainSync;
@property (copy, nonatomic) NSNumber *supportsLockNotificationContext;
@property (copy, nonatomic) NSNumber *supportsMediaActions;
@property (copy, nonatomic) NSNumber *supportsMultiUser;
@property (copy, nonatomic) NSNumber *supportsMusicAlarm;
@property (copy, nonatomic) NSNumber *supportsNaturalLighting;
@property (copy, nonatomic) NSNumber *supportsPreferredMediaUser;
@property (copy, nonatomic) NSNumber *supportsResidentFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsRouterManagement;
@property (copy, nonatomic) NSNumber *supportsShortcutActions;
@property (copy, nonatomic) NSNumber *supportsSiriEndpointSetup;
@property (copy, nonatomic) NSNumber *supportsStandaloneMode;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV1; // ivar: _supportsStereoPairingV1
@property (copy, nonatomic) NSNumber *supportsStereoPairingV2; // ivar: _supportsStereoPairingV2
@property (copy, nonatomic) NSNumber *supportsTargetControl;
@property (copy, nonatomic) NSNumber *supportsThirdPartyMusic;
@property (copy, nonatomic) NSNumber *supportsThreadBorderRouter;
@property (copy, nonatomic) NSNumber *supportsWakeOnLAN;
@property (copy, nonatomic) NSNumber *supportsWalletKey;
@property (copy, nonatomic) NSNumber *supportsWholeHouseAudio;


+(id)properties;
+(id)schemaHashRoot;


@end


#endif