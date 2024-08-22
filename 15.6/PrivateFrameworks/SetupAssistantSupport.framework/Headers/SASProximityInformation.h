// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASPROXIMITYINFORMATION_H
#define SASPROXIMITYINFORMATION_H

@class NSData, NSNumber, NSString, NSDate, NSArray, NSDictionary, NSSet;
@protocol NSSecureCoding, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SASProximityInformation : NSObject <NSSecureCoding>



@property (retain) NSData *accessibilitySettings; // ivar: _accessibilitySettings
@property (retain, nonatomic) NSNumber *allowMoreOn5G; // ivar: _allowMoreOn5G
@property (retain) NSNumber *appAnalyticsOptIn; // ivar: _appAnalyticsOptIn
@property (copy) NSString *appleID; // ivar: _appleID
@property BOOL automaticTimeZoneEnabled; // ivar: _automaticTimeZoneEnabled
@property (nonatomic, getter=isBackupEnabled) BOOL backupEnabled; // ivar: _backupEnabled
@property (retain) NSData *backupMetadata; // ivar: _backupMetadata
@property (copy) NSString *backupUUID; // ivar: _backupUUID
@property (retain) NSNumber *connectedToWiFi; // ivar: _connectedToWiFi
@property (copy) NSDate *dateOfLastBackup; // ivar: _dateOfLastBackup
@property (retain) NSNumber *deviceAnalyticsOptIn; // ivar: _deviceAnalyticsOptIn
@property (copy) NSString *deviceClass; // ivar: _deviceClass
@property (copy) NSString *deviceModel; // ivar: _deviceModel
@property (copy) NSString *deviceName; // ivar: _deviceName
@property (retain) NSNumber *deviceTermsIdentifier; // ivar: _deviceTermsIdentifier
@property (retain) NSNumber *deviceToDeviceMigrationVersion; // ivar: _deviceToDeviceMigrationVersion
@property (retain) NSNumber *findMyDeviceOptIn; // ivar: _findMyDeviceOptIn
@property (copy) NSString *firstName; // ivar: _firstName
@property BOOL hasHomeButton; // ivar: _hasHomeButton
@property (retain) NSNumber *hasInexpensiveCellularNetwork; // ivar: _hasInexpensiveCellularNetwork
@property (retain, nonatomic) NSNumber *hasMegaBackup; // ivar: _hasMegaBackup
@property NSNumber *hasTransferrableTelephonyPlan; // ivar: _hasTransferrableTelephonyPlan
@property (copy) NSArray *keyboards; // ivar: _keyboards
@property (copy) NSDictionary *localePreferences; // ivar: _localePreferences
@property (retain) NSData *locationServicesData; // ivar: _locationServicesData
@property BOOL locationServicesOptIn; // ivar: _locationServicesOptIn
@property (retain) NSSet *nearbyNetworks; // ivar: _nearbyNetworks
@property (retain) NSObject<OS_dispatch_semaphore> *nearbyNetworksSemaphore; // ivar: _nearbyNetworksSemaphore
@property (copy) NSArray *networkPasswords; // ivar: _networkPasswords
@property (copy) NSArray *networks; // ivar: _networks
@property (retain) NSNumber *preventSoftwareUpdateDeviceMigration; // ivar: _preventSoftwareUpdateDeviceMigration
@property (retain) NSString *productVersion; // ivar: _productVersion
@property (getter=isRestoring) BOOL restoring; // ivar: _restoring
@property (retain) NSNumber *siriOptIn; // ivar: _siriOptIn
@property (retain) NSData *siriVoiceProfileAvailabilityMetadata; // ivar: _siriVoiceProfileAvailabilityMetadata
@property (retain) NSNumber *storageAvailable; // ivar: _storageAvailable
@property (retain) NSNumber *storageCapacity; // ivar: _storageCapacity
@property (retain, nonatomic) NSNumber *supportsCellularBackup; // ivar: _supportsCellularBackup
@property (retain) NSNumber *supportsDeviceToDeviceMigration; // ivar: _supportsDeviceToDeviceMigration
@property (copy) NSString *timeZone; // ivar: _timeZone
@property BOOL usesSameAccountForiTunes; // ivar: _usesSameAccountForiTunes


+(BOOL)supportsSecureCoding;
-(BOOL)isNetworkTransferrable:(struct __WiFiNetwork *)arg0 ;
-(id)_getFindMyDeviceOptIn;
-(id)initWithCoder:(id)arg0 ;
-(id)numberFromMCUserBoolSetting:(id)arg0 ;
-(void)_loadTelephonyInformation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadInformation;
-(void)wirelessScanComplete:(id)arg0 error:(int)arg1 ;


@end


#endif