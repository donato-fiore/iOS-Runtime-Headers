// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMFDEVICE_H
#define DMFDEVICE_H

@class NSString, NSArray, NSNumber, NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface DMFDevice : NSObject

@property (readonly, nonatomic) NSString *EASIdentifier; // ivar: _EASIdentifier
@property (readonly, nonatomic) NSString *ICCID; // ivar: _ICCID
@property (readonly, nonatomic) NSString *IMEI; // ivar: _IMEI
@property (readonly, nonatomic) NSString *MEID; // ivar: _MEID
@property (readonly, nonatomic) NSArray *activeManagedUsers; // ivar: _activeManagedUsers
@property (readonly, nonatomic) NSArray *autoSetupAdminAccounts; // ivar: _autoSetupAdminAccounts
@property (readonly, nonatomic) NSNumber *availableCapacity; // ivar: _availableCapacity
@property (readonly, nonatomic) NSNumber *batteryLevel; // ivar: _batteryLevel
@property (readonly, nonatomic) NSString *bluetoothAddress; // ivar: _bluetoothAddress
@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (readonly, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (readonly, nonatomic) NSString *carrierSettingsVersion; // ivar: _carrierSettingsVersion
@property (readonly, nonatomic) NSNumber *cellularTechnology; // ivar: _cellularTechnology
@property (readonly, nonatomic) NSString *currentCarrierNetwork; // ivar: _currentCarrierNetwork
@property (readonly, nonatomic) NSString *currentMCC; // ivar: _currentMCC
@property (readonly, nonatomic) NSString *currentMNC; // ivar: _currentMNC
@property (readonly, nonatomic) NSString *destinationIdentifier; // ivar: _destinationIdentifier
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSNumber *deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSNumber *enforcedSoftwareUpdateDelay; // ivar: _enforcedSoftwareUpdateDelay
@property (copy, nonatomic) NSDictionary *errorsForKeys; // ivar: _errorsForKeys
@property (readonly, nonatomic) NSString *hostName; // ivar: _hostName
@property (readonly, nonatomic) NSString *iTunesStoreAccountHash; // ivar: _iTunesStoreAccountHash
@property (readonly, nonatomic) NSNumber *iTunesStoreAccountIsActive; // ivar: _iTunesStoreAccountIsActive
@property (readonly, nonatomic) NSDictionary *installedExtensions; // ivar: _installedExtensions
@property (readonly, nonatomic) NSNumber *isActivationLockEnabled; // ivar: _isActivationLockEnabled
@property (readonly, nonatomic) NSNumber *isAppAnalyticsEnabled; // ivar: _isAppAnalyticsEnabled
@property (readonly, nonatomic) NSNumber *isAppleInternal; // ivar: _isAppleInternal
@property (readonly, nonatomic) NSNumber *isAwaitingConfiguration; // ivar: _isAwaitingConfiguration
@property (readonly, nonatomic) NSNumber *isCloudBackupEnabled; // ivar: _isCloudBackupEnabled
@property (readonly, nonatomic) NSNumber *isDataRoamingEnabled; // ivar: _isDataRoamingEnabled
@property (readonly, nonatomic) NSNumber *isDeviceLocatorServiceEnabled; // ivar: _isDeviceLocatorServiceEnabled
@property (readonly, nonatomic) NSNumber *isDiagnosticSubmissionEnabled; // ivar: _isDiagnosticSubmissionEnabled
@property (readonly, nonatomic) NSNumber *isDoNotDisturbInEffect; // ivar: _isDoNotDisturbInEffect
@property (readonly, nonatomic) NSNumber *isEphemeralMultiUser; // ivar: _isEphemeralMultiUser
@property (readonly, nonatomic) NSNumber *isInSingleAppMode; // ivar: _isInSingleAppMode
@property (readonly, nonatomic) NSNumber *isLostModeEnabled; // ivar: _isLostModeEnabled
@property (readonly, nonatomic) NSNumber *isNetworkTethered; // ivar: _isNetworkTethered
@property (readonly, nonatomic) NSNumber *isPersonalHotspotEnabled; // ivar: _isPersonalHotspotEnabled
@property (readonly, nonatomic) NSNumber *isRoaming; // ivar: _isRoaming
@property (readonly, nonatomic) NSNumber *isSupervised; // ivar: _isSupervised
@property (readonly, nonatomic) NSNumber *isSystemIntegrityProtectionEnabled; // ivar: _isSystemIntegrityProtectionEnabled
@property (readonly, nonatomic) NSNumber *isVoiceRoamingEnabled; // ivar: _isVoiceRoamingEnabled
@property (readonly, nonatomic) NSDate *lastCloudBackupDate; // ivar: _lastCloudBackupDate
@property (readonly, nonatomic) NSString *localHostName; // ivar: _localHostName
@property (readonly, nonatomic) NSString *marketingName; // ivar: _marketingName
@property (readonly, nonatomic) NSNumber *maximumResidentUsers; // ivar: _maximumResidentUsers
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) NSString *modemFirmwareVersion; // ivar: _modemFirmwareVersion
@property (readonly, nonatomic) NSDictionary *osUpdateSettings; // ivar: _osUpdateSettings
@property (readonly, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly, nonatomic) NSString *productName; // ivar: _productName
@property (readonly, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSDictionary *serviceSubscriptions; // ivar: _serviceSubscriptions
@property (readonly, nonatomic) NSArray *skippedSetupPanes; // ivar: _skippedSetupPanes
@property (readonly, nonatomic) NSString *subscriberCarrierNetwork; // ivar: _subscriberCarrierNetwork
@property (readonly, nonatomic) NSString *subscriberMCC; // ivar: _subscriberMCC
@property (readonly, nonatomic) NSString *subscriberMNC; // ivar: _subscriberMNC
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSString *wifiAddress; // ivar: _wifiAddress
@property (readonly, nonatomic) NSDictionary *xsanConfiguration; // ivar: _xsanConfiguration


+(id)_sanitizedDeviceKey:(id)arg0 ;
+(id)propertyNameForKey:(id)arg0 ;
-(id)initPrivate;
-(id)valueForKey:(id)arg0 error:(*id)arg1 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif