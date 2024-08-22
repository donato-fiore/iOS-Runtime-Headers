// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFDEVICECAPABILITIES_H
#define _MKFDEVICECAPABILITIES_H

@class MKFModel, NSString, NSUUID, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDeviceCapabilities, MKFDeviceCapabilitiesPrivateExtensions, MKFDevice;


#import "MKFDeviceCapabilitiesDatabaseID.h"
#import "_MKFDevice.h"

@interface _MKFDeviceCapabilities : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFDeviceCapabilities, MKFDeviceCapabilitiesPrivateExtensions>



@property (readonly, copy, nonatomic) MKFDeviceCapabilitiesDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _MKFDevice *device;
@property (readonly, retain, nonatomic) NSObject<MKFDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSNumber *remoteGatewayCapable;
@property (copy, nonatomic) NSNumber *remoteGatewayCapable;
@property (copy, nonatomic) NSNumber *residentCapable;
@property (copy, nonatomic) NSNumber *residentCapable;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *supportsAnnounce;
@property (copy, nonatomic) NSNumber *supportsAnnounce;
@property (copy, nonatomic) NSNumber *supportsAssistantAccessControl;
@property (copy, nonatomic) NSNumber *supportsAssistantAccessControl;
@property (copy, nonatomic) NSNumber *supportsAudioAnalysis;
@property (copy, nonatomic) NSNumber *supportsAudioAnalysis;
@property (copy, nonatomic) NSNumber *supportsCameraActivityZones;
@property (copy, nonatomic) NSNumber *supportsCameraActivityZones;
@property (copy, nonatomic) NSNumber *supportsCameraRecording;
@property (copy, nonatomic) NSNumber *supportsCameraRecording;
@property (copy, nonatomic) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (copy, nonatomic) NSNumber *supportsCameraRecordingReachabilityNotifications;
@property (copy, nonatomic) NSNumber *supportsCameraSignificantEventNotifications;
@property (copy, nonatomic) NSNumber *supportsCameraSignificantEventNotifications;
@property (copy, nonatomic) NSNumber *supportsCloudDataSync;
@property (copy, nonatomic) NSNumber *supportsCloudDataSync;
@property (copy, nonatomic) NSNumber *supportsCompanionInitiatedRestart;
@property (copy, nonatomic) NSNumber *supportsCompanionInitiatedRestart;
@property (copy, nonatomic) NSNumber *supportsDeviceSetup;
@property (copy, nonatomic) NSNumber *supportsDeviceSetup;
@property (copy, nonatomic) NSNumber *supportsFaceClassification;
@property (copy, nonatomic) NSNumber *supportsFaceClassification;
@property (copy, nonatomic) NSNumber *supportsFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsHomeHub;
@property (copy, nonatomic) NSNumber *supportsHomeHub;
@property (copy, nonatomic) NSNumber *supportsHomeInvitation;
@property (copy, nonatomic) NSNumber *supportsHomeInvitation;
@property (copy, nonatomic) NSNumber *supportsIDSActivityMonitorPresence;
@property (copy, nonatomic) NSNumber *supportsIDSActivityMonitorPresence;
@property (copy, nonatomic) NSNumber *supportsKeyTransferClient;
@property (copy, nonatomic) NSNumber *supportsKeyTransferClient;
@property (copy, nonatomic) NSNumber *supportsKeyTransferServer;
@property (copy, nonatomic) NSNumber *supportsKeyTransferServer;
@property (copy, nonatomic) NSNumber *supportsKeychainSync;
@property (copy, nonatomic) NSNumber *supportsKeychainSync;
@property (copy, nonatomic) NSNumber *supportsMediaActions;
@property (copy, nonatomic) NSNumber *supportsMediaActions;
@property (copy, nonatomic) NSNumber *supportsMultiUser;
@property (copy, nonatomic) NSNumber *supportsMultiUser;
@property (copy, nonatomic) NSNumber *supportsMusicAlarm;
@property (copy, nonatomic) NSNumber *supportsMusicAlarm;
@property (copy, nonatomic) NSNumber *supportsNaturalLighting;
@property (copy, nonatomic) NSNumber *supportsNaturalLighting;
@property (copy, nonatomic) NSNumber *supportsPreferredMediaUser;
@property (copy, nonatomic) NSNumber *supportsPreferredMediaUser;
@property (copy, nonatomic) NSNumber *supportsResidentFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsResidentFirmwareUpdate;
@property (copy, nonatomic) NSNumber *supportsRouterManagement;
@property (copy, nonatomic) NSNumber *supportsRouterManagement;
@property (copy, nonatomic) NSNumber *supportsShortcutActions;
@property (copy, nonatomic) NSNumber *supportsShortcutActions;
@property (copy, nonatomic) NSNumber *supportsSiriEndpointSetup;
@property (copy, nonatomic) NSNumber *supportsSiriEndpointSetup;
@property (copy, nonatomic) NSNumber *supportsStandaloneMode;
@property (copy, nonatomic) NSNumber *supportsStandaloneMode;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV1;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV1;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV2;
@property (copy, nonatomic) NSNumber *supportsStereoPairingV2;
@property (copy, nonatomic) NSNumber *supportsTargetControl;
@property (copy, nonatomic) NSNumber *supportsTargetControl;
@property (copy, nonatomic) NSNumber *supportsThirdPartyMusic;
@property (copy, nonatomic) NSNumber *supportsThirdPartyMusic;
@property (copy, nonatomic) NSNumber *supportsThreadBorderRouter;
@property (copy, nonatomic) NSNumber *supportsThreadBorderRouter;
@property (copy, nonatomic) NSNumber *supportsWakeOnLAN;
@property (copy, nonatomic) NSNumber *supportsWakeOnLAN;
@property (copy, nonatomic) NSNumber *supportsWholeHouseAudio;
@property (copy, nonatomic) NSNumber *supportsWholeHouseAudio;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfDeviceCapabilities;


@end


#endif