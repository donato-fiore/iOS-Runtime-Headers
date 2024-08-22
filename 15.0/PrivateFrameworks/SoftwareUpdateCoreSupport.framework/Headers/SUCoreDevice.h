// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (nonatomic) BOOL hasBridgeOS; // ivar: _hasBridgeOS
@property (nonatomic) BOOL hasEmbeddedOS; // ivar: _hasEmbeddedOS
@property (nonatomic) BOOL hasRecoveryOS; // ivar: _hasRecoveryOS
@property (nonatomic) BOOL hasSFR; // ivar: _hasSFR
@property (retain, nonatomic) NSString *hwModelString; // ivar: _hwModelString
@property (retain, nonatomic) NSString *hwTarget; // ivar: _hwTarget
@property (nonatomic) BOOL isBootedOSSecureInternal; // ivar: _isBootedOSSecureInternal
@property (nonatomic) BOOL isBridgeInternal; // ivar: _isBridgeInternal
@property (nonatomic) BOOL isInternal; // ivar: _isInternal
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
-(id)_copyStringValueForKey:(NSInteger)arg0 ;
-(id)_copySysCtlValueForKey:(NSInteger)arg0 ;
-(id)_coreServicesKeyForQueryKey:(NSInteger)arg0 ;
-(id)_getMajorVersionFromBuildVersion:(id)arg0 ;
-(id)_nameForQueryKey:(NSInteger)arg0 ;
-(id)_nameForQueryMethod:(NSInteger)arg0 ;
-(id)_restoreVersionKeyForQueryKey:(NSInteger)arg0 ;
-(id)_sysCtlKeyForQueryKey:(NSInteger)arg0 ;
-(id)description;
-(id)getSystemRecoveryNSIHDirectory;
-(id)initTargetingSystemVolume:(id)arg0 ;
-(id)summary;
-(struct __CFString *)_gestaltKeyForQueryKey:(NSInteger)arg0 ;
-(void)_adjustValuesForMacOS;
-(void)_initializeBridgeOSProperties;
-(void)_parseBridgeOSBuildInformationFromDevice:(id)arg0 ;
-(void)adjustTargetingSystemVolume:(id)arg0 ;
-(void)reloadDevice;


@end


#endif