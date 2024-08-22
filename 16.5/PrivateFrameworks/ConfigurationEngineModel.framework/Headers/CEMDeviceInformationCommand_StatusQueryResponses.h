// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSES_H
#define CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSES_H

@class NSArray, NSNumber, NSString, NSDate;


#import "CEMPayloadBase.h"
#import "CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings.h"
#import "CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo.h"

@interface CEMDeviceInformationCommand_StatusQueryResponses : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusActiveManagedUsers; // ivar: _statusActiveManagedUsers
@property (copy, nonatomic) NSNumber *statusAppAnalyticsEnabled; // ivar: _statusAppAnalyticsEnabled
@property (copy, nonatomic) NSArray *statusAutoSetupAdminAccounts; // ivar: _statusAutoSetupAdminAccounts
@property (copy, nonatomic) NSNumber *statusAvailableDeviceCapacity; // ivar: _statusAvailableDeviceCapacity
@property (copy, nonatomic) NSNumber *statusAwaitingConfiguration; // ivar: _statusAwaitingConfiguration
@property (copy, nonatomic) NSNumber *statusBatteryLevel; // ivar: _statusBatteryLevel
@property (copy, nonatomic) NSString *statusBluetoothMAC; // ivar: _statusBluetoothMAC
@property (copy, nonatomic) NSString *statusBuildVersion; // ivar: _statusBuildVersion
@property (copy, nonatomic) NSString *statusCarrierSettingsVersion; // ivar: _statusCarrierSettingsVersion
@property (copy, nonatomic) NSNumber *statusCellularTechnology; // ivar: _statusCellularTechnology
@property (copy, nonatomic) NSString *statusCurrentCarrierNetwork; // ivar: _statusCurrentCarrierNetwork
@property (copy, nonatomic) NSString *statusCurrentMCC; // ivar: _statusCurrentMCC
@property (copy, nonatomic) NSString *statusCurrentMNC; // ivar: _statusCurrentMNC
@property (copy, nonatomic) NSNumber *statusDataRoamingEnabled; // ivar: _statusDataRoamingEnabled
@property (copy, nonatomic) NSNumber *statusDeviceCapacity; // ivar: _statusDeviceCapacity
@property (copy, nonatomic) NSString *statusDeviceID; // ivar: _statusDeviceID
@property (copy, nonatomic) NSString *statusDeviceName; // ivar: _statusDeviceName
@property (copy, nonatomic) NSNumber *statusDiagnosticSubmissionEnabled; // ivar: _statusDiagnosticSubmissionEnabled
@property (copy, nonatomic) NSString *statusEASDeviceIdentifier; // ivar: _statusEASDeviceIdentifier
@property (copy, nonatomic) NSArray *statusEthernetMACs; // ivar: _statusEthernetMACs
@property (copy, nonatomic) NSString *statusICCID; // ivar: _statusICCID
@property (copy, nonatomic) NSString *statusIMEI; // ivar: _statusIMEI
@property (copy, nonatomic) NSString *statusITunesStoreAccountHash; // ivar: _statusITunesStoreAccountHash
@property (copy, nonatomic) NSNumber *statusITunesStoreAccountIsActive; // ivar: _statusITunesStoreAccountIsActive
@property (copy, nonatomic) NSNumber *statusIsActivationLockEnabled; // ivar: _statusIsActivationLockEnabled
@property (copy, nonatomic) NSNumber *statusIsCloudBackupEnabled; // ivar: _statusIsCloudBackupEnabled
@property (copy, nonatomic) NSNumber *statusIsDeviceLocatorServiceEnabled; // ivar: _statusIsDeviceLocatorServiceEnabled
@property (copy, nonatomic) NSNumber *statusIsDoNotDisturbInEffect; // ivar: _statusIsDoNotDisturbInEffect
@property (copy, nonatomic) NSNumber *statusIsMDMLostModeEnabled; // ivar: _statusIsMDMLostModeEnabled
@property (copy, nonatomic) NSNumber *statusIsMultiUser; // ivar: _statusIsMultiUser
@property (copy, nonatomic) NSNumber *statusIsNetworkTethered; // ivar: _statusIsNetworkTethered
@property (copy, nonatomic) NSNumber *statusIsRoaming; // ivar: _statusIsRoaming
@property (copy, nonatomic) NSNumber *statusIsSupervised; // ivar: _statusIsSupervised
@property (copy, nonatomic) NSDate *statusLastCloudBackupDate; // ivar: _statusLastCloudBackupDate
@property (copy, nonatomic) NSString *statusMDMOptions; // ivar: _statusMDMOptions
@property (copy, nonatomic) NSString *statusMEID; // ivar: _statusMEID
@property (copy, nonatomic) NSString *statusMarketingName; // ivar: _statusMarketingName
@property (copy, nonatomic) NSNumber *statusMaximumResidentUsers; // ivar: _statusMaximumResidentUsers
@property (copy, nonatomic) NSString *statusModel; // ivar: _statusModel
@property (copy, nonatomic) NSString *statusModelName; // ivar: _statusModelName
@property (copy, nonatomic) NSString *statusModemFirmwareVersion; // ivar: _statusModemFirmwareVersion
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *statusOSUpdateSettings; // ivar: _statusOSUpdateSettings
@property (copy, nonatomic) NSString *statusOSVersion; // ivar: _statusOSVersion
@property (copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *statusOrganizationInfo; // ivar: _statusOrganizationInfo
@property (copy, nonatomic) NSNumber *statusPersonalHotspotEnabled; // ivar: _statusPersonalHotspotEnabled
@property (copy, nonatomic) NSString *statusPhoneNumber; // ivar: _statusPhoneNumber
@property (copy, nonatomic) NSString *statusProductName; // ivar: _statusProductName
@property (copy, nonatomic) NSString *statusPushToken; // ivar: _statusPushToken
@property (copy, nonatomic) NSString *statusSIMCarrierNetwork; // ivar: _statusSIMCarrierNetwork
@property (copy, nonatomic) NSString *statusSIMMCC; // ivar: _statusSIMMCC
@property (copy, nonatomic) NSString *statusSIMMNC; // ivar: _statusSIMMNC
@property (copy, nonatomic) NSString *statusSerialNumber; // ivar: _statusSerialNumber
@property (copy, nonatomic) NSString *statusSubscriberCarrierNetwork; // ivar: _statusSubscriberCarrierNetwork
@property (copy, nonatomic) NSString *statusSubscriberMCC; // ivar: _statusSubscriberMCC
@property (copy, nonatomic) NSString *statusSubscriberMNC; // ivar: _statusSubscriberMNC
@property (copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled; // ivar: _statusSystemIntegrityProtectionEnabled
@property (copy, nonatomic) NSString *statusUDID; // ivar: _statusUDID
@property (copy, nonatomic) NSNumber *statusVoiceRoamingEnabled; // ivar: _statusVoiceRoamingEnabled
@property (copy, nonatomic) NSString *statusWiFiMAC; // ivar: _statusWiFiMAC


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithUDID:(id)arg0 withOrganizationInfo:(id)arg1 withMDMOptions:(id)arg2 withLastCloudBackupDate:(id)arg3 withAwaitingConfiguration:(id)arg4 withITunesStoreAccountIsActive:(id)arg5 withITunesStoreAccountHash:(id)arg6 withDeviceName:(id)arg7 withOSVersion:(id)arg8 withBuildVersion:(id)arg9 withModelName:(id)arg10 withModel:(id)arg11 withProductName:(id)arg12 withMarketingName:(id)arg13 withSerialNumber:(id)arg14 withDeviceCapacity:(id)arg15 withAvailableDeviceCapacity:(id)arg16 withIMEI:(id)arg17 withMEID:(id)arg18 withModemFirmwareVersion:(id)arg19 withCellularTechnology:(id)arg20 withBatteryLevel:(id)arg21 withIsSupervised:(id)arg22 withIsMultiUser:(id)arg23 withIsDeviceLocatorServiceEnabled:(id)arg24 withIsActivationLockEnabled:(id)arg25 withIsDoNotDisturbInEffect:(id)arg26 withDeviceID:(id)arg27 withEASDeviceIdentifier:(id)arg28 withIsCloudBackupEnabled:(id)arg29 withActiveManagedUsers:(id)arg30 withOSUpdateSettings:(id)arg31 withAutoSetupAdminAccounts:(id)arg32 withSystemIntegrityProtectionEnabled:(id)arg33 withIsMDMLostModeEnabled:(id)arg34 withMaximumResidentUsers:(id)arg35 withPushToken:(id)arg36 withDiagnosticSubmissionEnabled:(id)arg37 withAppAnalyticsEnabled:(id)arg38 withICCID:(id)arg39 withBluetoothMAC:(id)arg40 withWiFiMAC:(id)arg41 withEthernetMACs:(id)arg42 withCurrentCarrierNetwork:(id)arg43 withSIMCarrierNetwork:(id)arg44 withSubscriberCarrierNetwork:(id)arg45 withCarrierSettingsVersion:(id)arg46 withPhoneNumber:(id)arg47 withDataRoamingEnabled:(id)arg48 withVoiceRoamingEnabled:(id)arg49 withPersonalHotspotEnabled:(id)arg50 withIsNetworkTethered:(id)arg51 withIsRoaming:(id)arg52 withSIMMCC:(id)arg53 withSIMMNC:(id)arg54 withSubscriberMCC:(id)arg55 withSubscriberMNC:(id)arg56 withCurrentMCC:(id)arg57 withCurrentMNC:(id)arg58 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif