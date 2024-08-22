// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKDEVICE_H
#define CRKDEVICE_H

@class NSDictionary, NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CRKDevice : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSDictionary *activeAirPlayRoute;
@property (copy, nonatomic) NSDictionary *activeAirPlayRoute; // ivar: _activeAirPlayRoute
@property (copy, nonatomic) NSArray *allOpenApplications;
@property (copy, nonatomic) NSArray *allOpenApplications; // ivar: _allOpenApplications
@property (nonatomic, getter=isAppLocked) BOOL appLocked;
@property (nonatomic, getter=isAppLocked) BOOL appLocked; // ivar: _appLocked
@property (copy, nonatomic) NSArray *availableAirPlayRoutes;
@property (copy, nonatomic) NSArray *availableAirPlayRoutes; // ivar: _availableAirPlayRoutes
@property (nonatomic) NSUInteger availableBytes;
@property (nonatomic) NSUInteger availableBytes; // ivar: _availableBytes
@property (nonatomic) float batteryLevel;
@property (nonatomic) float batteryLevel; // ivar: _batteryLevel
@property (copy, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (nonatomic) NSUInteger chargingState;
@property (nonatomic) NSUInteger chargingState; // ivar: _chargingState
@property (copy, nonatomic) NSString *currentLocaleIdentifier;
@property (copy, nonatomic) NSString *currentLocaleIdentifier; // ivar: _currentLocaleIdentifier
@property (nonatomic) NSUInteger deviceOrientation;
@property (nonatomic) NSUInteger deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) float displayBackingScaleFactor;
@property (nonatomic) float displayBackingScaleFactor; // ivar: _displayBackingScaleFactor
@property (nonatomic) float displayHeight;
@property (nonatomic) float displayHeight; // ivar: _displayHeight
@property (nonatomic) float displayWidth;
@property (nonatomic) float displayWidth; // ivar: _displayWidth
@property (copy, nonatomic) NSArray *displays;
@property (copy, nonatomic) NSArray *displays; // ivar: _displays
@property (nonatomic, getter=isEphemeralMultiUser) BOOL ephemeralMultiUser;
@property (nonatomic, getter=isEphemeralMultiUser) BOOL ephemeralMultiUser; // ivar: _ephemeralMultiUser
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *installedApplicationInfo;
@property (copy, nonatomic) NSArray *installedApplicationInfo; // ivar: _installedApplicationInfo
@property (copy, nonatomic) NSArray *installedApplications;
@property (copy, nonatomic) NSArray *installedApplications;
@property (copy, nonatomic) NSString *instructorImageIdentifier;
@property (copy, nonatomic) NSString *instructorImageIdentifier; // ivar: _instructorImageIdentifier
@property (nonatomic) NSUInteger interfaceOrientation;
@property (nonatomic) NSUInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) NSUInteger lockState;
@property (nonatomic) NSUInteger lockState; // ivar: _lockState
@property (nonatomic) NSUInteger loginState;
@property (nonatomic) NSUInteger loginState; // ivar: _loginState
@property (copy, nonatomic) NSString *managementLockPasscode;
@property (copy, nonatomic) NSString *managementLockPasscode; // ivar: _managementLockPasscode
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (nonatomic, getter=isMuted) BOOL muted; // ivar: _muted
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic, getter=isOrientationLocked) BOOL orientationLocked;
@property (nonatomic, getter=isOrientationLocked) BOOL orientationLocked; // ivar: _orientationLocked
@property (nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled;
@property (nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled; // ivar: _passcodeEnabled
@property (copy, nonatomic) NSString *pipOpenApplication;
@property (copy, nonatomic) NSString *pipOpenApplication; // ivar: _pipOpenApplication
@property (nonatomic) NSUInteger platform;
@property (nonatomic) NSUInteger platform; // ivar: _platform
@property (copy, nonatomic) NSString *primaryOpenApplication;
@property (copy, nonatomic) NSString *primaryOpenApplication; // ivar: _primaryOpenApplication
@property (nonatomic, getter=isRequestingUnenroll) BOOL requestingUnenroll; // ivar: _requestingUnenroll
@property (nonatomic, getter=isScreenSaverActive) BOOL screenSaverActive;
@property (nonatomic, getter=isScreenSaverActive) BOOL screenSaverActive; // ivar: _screenSaverActive
@property (nonatomic) NSUInteger screenState;
@property (nonatomic) NSUInteger screenState; // ivar: _screenState
@property (copy, nonatomic) NSString *secondaryOpenApplication;
@property (copy, nonatomic) NSString *secondaryOpenApplication; // ivar: _secondaryOpenApplication
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (copy, nonatomic) NSString *stagedAdHocIdentityCertificateFingerprint; // ivar: _stagedAdHocIdentityCertificateFingerprint
@property (copy, nonatomic) NSString *studentImageIdentifier;
@property (copy, nonatomic) NSString *studentImageIdentifier; // ivar: _studentImageIdentifier
@property (nonatomic, getter=isSupervised) BOOL supervised;
@property (nonatomic, getter=isSupervised) BOOL supervised; // ivar: _supervised
@property (copy, nonatomic) NSString *systemName;
@property (copy, nonatomic) NSString *systemName; // ivar: _systemName
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (copy, nonatomic) NSArray *trustedAnchorCertificateFingerprints; // ivar: _trustedAnchorCertificateFingerprints
@property (copy, nonatomic) NSString *trustedExchangeIdentifier; // ivar: _trustedExchangeIdentifier
@property (copy, nonatomic) NSString *userDisplayName;
@property (copy, nonatomic) NSString *userDisplayName; // ivar: _userDisplayName
@property (copy, nonatomic) NSString *userFamilyName;
@property (copy, nonatomic) NSString *userFamilyName; // ivar: _userFamilyName
@property (copy, nonatomic) NSString *userGivenName;
@property (copy, nonatomic) NSString *userGivenName; // ivar: _userGivenName
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSString *userImageURL;
@property (copy, nonatomic) NSString *userImageURL; // ivar: _userImageURL
@property (copy, nonatomic) NSString *userPhoneticFamilyName; // ivar: _userPhoneticFamilyName
@property (copy, nonatomic) NSString *userPhoneticGivenName; // ivar: _userPhoneticGivenName
@property (nonatomic) float volume;
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
+(id)CRKKeyForDMFKey:(id)arg0 ;
+(id)allPropertyKeys;
+(id)applicationInfoFromBundleIdentifiers:(id)arg0 ;
+(id)keyTranslations;
-(BOOL)isApplicationInstalled:(id)arg0 ;
-(BOOL)isApplicationOpen:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDevice:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif