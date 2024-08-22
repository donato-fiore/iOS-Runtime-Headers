// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCOREDEVICE_H
#define SUCOREDEVICE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SUCoreDevice : NSObject

@property (retain, nonatomic) NSDictionary *appleInternalVariantPlistContents; // ivar: _appleInternalVariantPlistContents
@property (retain, nonatomic) NSString *appleInternalVariantPlistPath; // ivar: _appleInternalVariantPlistPath
@property (retain, nonatomic) NSString *bridgeBuildVersion; // ivar: _bridgeBuildVersion
@property (retain, nonatomic) NSString *bridgeRestoreVersion; // ivar: _bridgeRestoreVersion
@property (retain, nonatomic) NSString *bridgeVersion; // ivar: _bridgeVersion
@property (retain, nonatomic) NSDictionary *bridgeVersionPlistContents; // ivar: _bridgeVersionPlistContents
@property (retain, nonatomic) NSString *bridgeVersionPlistPath; // ivar: _bridgeVersionPlistPath
@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *deviceBoardID; // ivar: _deviceBoardID
@property (retain, nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (nonatomic) BOOL deviceSupportsAppleInternalVariant; // ivar: _deviceSupportsAppleInternalVariant
@property (nonatomic) BOOL deviceSupportsCoreServices; // ivar: _deviceSupportsCoreServices
@property (nonatomic) BOOL deviceSupportsMobileGestalt; // ivar: _deviceSupportsMobileGestalt
@property (nonatomic) BOOL deviceSupportsMultiVolumeBoot; // ivar: _deviceSupportsMultiVolumeBoot
@property (nonatomic) BOOL deviceSupportsRecoveryOSRestoreVersion; // ivar: _deviceSupportsRecoveryOSRestoreVersion
@property (nonatomic) BOOL deviceSupportsRecoveryOSSystemVersion; // ivar: _deviceSupportsRecoveryOSSystemVersion
@property (nonatomic) BOOL deviceSupportsRestoreVersion; // ivar: _deviceSupportsRestoreVersion
@property (nonatomic) BOOL deviceSupportsSFRRestoreVersion; // ivar: _deviceSupportsSFRRestoreVersion
@property (nonatomic) BOOL deviceSupportsSFRSystemVersion; // ivar: _deviceSupportsSFRSystemVersion
@property (nonatomic) BOOL deviceSupportsSplatCryptex1RestoreVersion; // ivar: _deviceSupportsSplatCryptex1RestoreVersion
@property (nonatomic) BOOL deviceSupportsSplatCryptex1SystemVersion; // ivar: _deviceSupportsSplatCryptex1SystemVersion
@property (nonatomic) BOOL deviceSupportsSplatRestoreVersion; // ivar: _deviceSupportsSplatRestoreVersion
@property (nonatomic) BOOL deviceSupportsSplatRollbackRestoreVersion; // ivar: _deviceSupportsSplatRollbackRestoreVersion
@property (nonatomic) BOOL deviceSupportsSplatRollbackSystemVersion; // ivar: _deviceSupportsSplatRollbackSystemVersion
@property (nonatomic) BOOL deviceSupportsSplatSystemVersion; // ivar: _deviceSupportsSplatSystemVersion
@property (nonatomic) BOOL hasBridgeOS; // ivar: _hasBridgeOS
@property (readonly, nonatomic) BOOL hasEligibleRollback;
@property (nonatomic) BOOL hasEmbeddedOS; // ivar: _hasEmbeddedOS
@property (nonatomic) BOOL hasRecoveryOS; // ivar: _hasRecoveryOS
@property (nonatomic) BOOL hasSFR; // ivar: _hasSFR
@property (readonly, nonatomic) BOOL hasSemiSplatActive;
@property (nonatomic) BOOL hasSplat; // ivar: _hasSplat
@property (nonatomic) BOOL hasSplatOnlyUpdateInstalled; // ivar: _hasSplatOnlyUpdateInstalled
@property (retain, nonatomic) NSString *hwModelString; // ivar: _hwModelString
@property (retain, nonatomic) NSString *hwTarget; // ivar: _hwTarget
@property (nonatomic) BOOL isBootedOSSecureInternal; // ivar: _isBootedOSSecureInternal
@property (nonatomic) BOOL isBridgeInternal; // ivar: _isBridgeInternal
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
@property (retain, nonatomic) NSString *marketingProductName; // ivar: _marketingProductName
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *recoveryOSBuildVersion; // ivar: _recoveryOSBuildVersion
@property (retain, nonatomic) NSString *recoveryOSProductVersion; // ivar: _recoveryOSProductVersion
@property (retain, nonatomic) NSString *recoveryOSReleaseType; // ivar: _recoveryOSReleaseType
@property (retain, nonatomic) NSString *recoveryOSRestoreVersion; // ivar: _recoveryOSRestoreVersion
@property (retain, nonatomic) NSDictionary *recoveryOSRestoreVersionPlistContents; // ivar: _recoveryOSRestoreVersionPlistContents
@property (retain, nonatomic) NSString *recoveryOSRestoreVersionPlistPath; // ivar: _recoveryOSRestoreVersionPlistPath
@property (retain, nonatomic) NSDictionary *recoveryOSSystemVersionPlistContents; // ivar: _recoveryOSSystemVersionPlistContents
@property (retain, nonatomic) NSString *recoveryOSSystemVersionPlistPath; // ivar: _recoveryOSSystemVersionPlistPath
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType
@property (retain, nonatomic) NSString *restoreVersion; // ivar: _restoreVersion
@property (retain, nonatomic) NSDictionary *restoreVersionPlistContents; // ivar: _restoreVersionPlistContents
@property (retain, nonatomic) NSString *restoreVersionPlistPath; // ivar: _restoreVersionPlistPath
@property (retain, nonatomic) NSString *sfrBuildVersion; // ivar: _sfrBuildVersion
@property (retain, nonatomic) NSString *sfrProductVersion; // ivar: _sfrProductVersion
@property (retain, nonatomic) NSString *sfrReleaseType; // ivar: _sfrReleaseType
@property (retain, nonatomic) NSString *sfrRestoreVersion; // ivar: _sfrRestoreVersion
@property (retain, nonatomic) NSDictionary *sfrRestoreVersionPlistContents; // ivar: _sfrRestoreVersionPlistContents
@property (retain, nonatomic) NSString *sfrRestoreVersionPlistPath; // ivar: _sfrRestoreVersionPlistPath
@property (retain, nonatomic) NSDictionary *sfrSystemVersionPlistContents; // ivar: _sfrSystemVersionPlistContents
@property (retain, nonatomic) NSString *sfrSystemVersionPlistPath; // ivar: _sfrSystemVersionPlistPath
@property (retain, nonatomic) NSString *splatBuildVersion; // ivar: _splatBuildVersion
@property (retain, nonatomic) NSString *splatCryptex1BuildVersion; // ivar: _splatCryptex1BuildVersion
@property (retain, nonatomic) NSString *splatCryptex1BuildVersionOverride; // ivar: _splatCryptex1BuildVersionOverride
@property (retain, nonatomic) NSString *splatCryptex1ProductVersion; // ivar: _splatCryptex1ProductVersion
@property (retain, nonatomic) NSString *splatCryptex1ProductVersionExtra; // ivar: _splatCryptex1ProductVersionExtra
@property (retain, nonatomic) NSString *splatCryptex1ReleaseType; // ivar: _splatCryptex1ReleaseType
@property (retain, nonatomic) NSString *splatCryptex1RestoreVersion; // ivar: _splatCryptex1RestoreVersion
@property (retain, nonatomic) NSDictionary *splatCryptex1RestoreVersionPlistContents; // ivar: _splatCryptex1RestoreVersionPlistContents
@property (retain, nonatomic) NSString *splatCryptex1RestoreVersionPlistPath; // ivar: _splatCryptex1RestoreVersionPlistPath
@property (retain, nonatomic) NSDictionary *splatCryptex1SystemVersionPlistContents; // ivar: _splatCryptex1SystemVersionPlistContents
@property (retain, nonatomic) NSString *splatCryptex1SystemVersionPlistPath; // ivar: _splatCryptex1SystemVersionPlistPath
@property (retain, nonatomic) NSString *splatProductVersion; // ivar: _splatProductVersion
@property (retain, nonatomic) NSString *splatProductVersionExtra; // ivar: _splatProductVersionExtra
@property (retain, nonatomic) NSString *splatReleaseType; // ivar: _splatReleaseType
@property (retain, nonatomic) NSString *splatRestoreVersion; // ivar: _splatRestoreVersion
@property (retain, nonatomic) NSDictionary *splatRestoreVersionPlistContents; // ivar: _splatRestoreVersionPlistContents
@property (retain, nonatomic) NSString *splatRestoreVersionPlistPath; // ivar: _splatRestoreVersionPlistPath
@property (retain, nonatomic) NSString *splatRollbackBuildVersion; // ivar: _splatRollbackBuildVersion
@property (retain, nonatomic) NSString *splatRollbackProductVersion; // ivar: _splatRollbackProductVersion
@property (retain, nonatomic) NSString *splatRollbackProductVersionExtra; // ivar: _splatRollbackProductVersionExtra
@property (retain, nonatomic) NSString *splatRollbackReleaseType; // ivar: _splatRollbackReleaseType
@property (retain, nonatomic) NSString *splatRollbackRestoreVersion; // ivar: _splatRollbackRestoreVersion
@property (retain, nonatomic) NSDictionary *splatRollbackRestoreVersionPlistContents; // ivar: _splatRollbackRestoreVersionPlistContents
@property (retain, nonatomic) NSString *splatRollbackRestoreVersionPlistPath; // ivar: _splatRollbackRestoreVersionPlistPath
@property (retain, nonatomic) NSDictionary *splatRollbackSystemVersionPlistContents; // ivar: _splatRollbackSystemVersionPlistContents
@property (retain, nonatomic) NSString *splatRollbackSystemVersionPlistPath; // ivar: _splatRollbackSystemVersionPlistPath
@property (retain, nonatomic) NSDictionary *splatSystemVersionPlistContents; // ivar: _splatSystemVersionPlistContents
@property (retain, nonatomic) NSString *splatSystemVersionPlistPath; // ivar: _splatSystemVersionPlistPath
@property (retain, nonatomic) NSDictionary *systemVersionPlistContents; // ivar: _systemVersionPlistContents
@property (retain, nonatomic) NSString *systemVersionPlistPath; // ivar: _systemVersionPlistPath
@property (retain, nonatomic) NSString *targetedSystemVolume; // ivar: _targetedSystemVolume


+(id)sharedDevice;
-(BOOL)_supportsAppleInternalVariant;
-(BOOL)_supportsCoreServices;
-(BOOL)_supportsMobileGestalt;
-(BOOL)_supportsRecoveryOS;
-(BOOL)_supportsRecoveryOSRestoreVersion;
-(BOOL)_supportsRecoveryOSSystemVersion;
-(BOOL)_supportsRestoreVersion;
-(BOOL)_supportsSFR;
-(BOOL)_supportsSFRRestoreVersion;
-(BOOL)_supportsSFRSystemVersion;
-(BOOL)_supportsSplat;
-(BOOL)_supportsSplatRestoreVersion;
-(BOOL)_supportsSplatSystemVersion;
-(BOOL)isMajorOSUpdate:(id)arg0 ;
-(BOOL)isMinorOSUpdate:(id)arg0 ;
-(NSInteger)_queryMethodForKey:(NSInteger)arg0 ;
-(id)_copyCoreServicesAppleInternalValue;
-(id)_copyCoreServicesValueForKey:(NSInteger)arg0 ;
-(id)_copyDeviceBoardID;
-(id)_copyGestaltValueForKey:(NSInteger)arg0 ;
-(id)_copyRecoveryOSRestoreVersionValueForKey:(NSInteger)arg0 ;
-(id)_copyRecoveryOSSystemVersionValueForKey:(NSInteger)arg0 ;
-(id)_copyRestoreVersionValueForKey:(NSInteger)arg0 ;
-(id)_copySFRRestoreVersionValueForKey:(NSInteger)arg0 ;
-(id)_copySFRSystemVersionValueForKey:(NSInteger)arg0 ;
-(id)_copySplatCryptex1RestoreVersionPath;
-(id)_copySplatCryptex1SystemVersionPath;
-(id)_copySplatCryptex1ValueForKey:(NSInteger)arg0 ;
-(id)_copySplatRollbackObjectsPath;
-(id)_copySplatRollbackRestoreVersionPath;
-(id)_copySplatRollbackSystemVersionPath;
-(id)_copySplatRollbackValueForKey:(NSInteger)arg0 ;
-(id)_copySplatValueForKey:(NSInteger)arg0 ;
-(id)_copyStringValueForKey:(NSInteger)arg0 ;
-(id)_copySysCtlValueForKey:(NSInteger)arg0 ;
-(id)_coreServicesKeyForQueryKey:(NSInteger)arg0 ;
-(id)_getMajorVersionFromBuildVersion:(id)arg0 ;
-(id)_nameForQueryKey:(NSInteger)arg0 ;
-(id)_nameForQueryMethod:(NSInteger)arg0 ;
-(id)_restoreVersionKeyForQueryKey:(NSInteger)arg0 ;
-(id)_splatCryptex1VersionPlistContentsForKey:(NSInteger)arg0 ;
-(id)_splatRollbackVersionPlistContentsForKey:(NSInteger)arg0 ;
-(id)_splatVersionKeyForQueryKey:(NSInteger)arg0 ;
-(id)_splatVersionPlistContentsForKey:(NSInteger)arg0 ;
-(id)_sysCtlKeyForQueryKey:(NSInteger)arg0 ;
-(id)description;
-(id)getSystemRecoveryNSIHDirectory;
-(id)initTargetingSystemVolume:(id)arg0 ;
-(id)summary;
-(struct __CFString *)_gestaltKeyForQueryKey:(NSInteger)arg0 ;
-(void)_adjustValuesForMacOS;
-(void)_initializeBridgeOSProperties;
-(void)_parseBridgeOSBuildInformationFromDevice:(id)arg0 ;
-(void)_reloadPlistContentsForKey:(NSInteger)arg0 ;
-(void)adjustTargetingSystemVolume:(id)arg0 ;
-(void)reloadDevice;


@end


#endif