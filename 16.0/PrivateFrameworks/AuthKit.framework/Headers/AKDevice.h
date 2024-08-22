// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKDEVICE_H
#define AKDEVICE_H

@class NSLock, NSString, NSNumber, NSLocale, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKDevice : NSObject <NSSecureCoding, NSCopying>

 {
    os_unfair_lock_s _unfairLock;
    *__CTServerConnection _telephonyConnectionRef;
    NSLock *_telephonyLock;
    BOOL _shouldUpdateUniqueDeviceIdentifier;
    BOOL _shouldUpdateServerFriendlyDescription;
    BOOL _shouldUpdateColor;
    BOOL _shouldUpdateEnclosureColor;
    BOOL _shouldUpdateCoverGlassColor;
    BOOL _shouldUpdateHousingColor;
    BOOL _shouldUpdateBackingColor;
    BOOL _shouldUpdateLocale;
    BOOL _shouldUpdateROMAddress;
    BOOL _shouldUpdateMLBSerialNumber;
    BOOL _shouldUpdateModelNumber;
    BOOL _shouldUpdateProvisioningDeviceIdentifier;
}


@property (copy, nonatomic) NSString *MLBSerialNumber; // ivar: _MLBSerialNumber
@property (copy, nonatomic) NSString *ROMAddress; // ivar: _ROMAddress
@property (copy, nonatomic) NSNumber *backingColor; // ivar: _backingColor
@property (copy, nonatomic) NSString *color; // ivar: _color
@property (copy, nonatomic) NSNumber *coverGlassColor; // ivar: _coverGlassColor
@property (copy, nonatomic) NSString *enclosureColor; // ivar: _enclosureColor
@property (copy, nonatomic) NSNumber *housingColor; // ivar: _housingColor
@property (readonly, nonatomic) NSString *integratedCircuitCardIdentifier;
@property (readonly, nonatomic) NSString *internationalMobileEquipmentIdentity;
@property (readonly, nonatomic) NSString *internationalMobileEquipmentIdentity2;
@property (readonly, nonatomic) BOOL isBiometricAuthCapable;
@property (readonly, nonatomic) BOOL isFaceIDCapable;
@property (readonly, nonatomic) BOOL isInCircle;
@property (readonly, nonatomic) BOOL isInternalBuild;
@property (readonly, nonatomic) BOOL isMultiUserMode;
@property (readonly, nonatomic) BOOL isProtectedWithPasscode;
@property (readonly, nonatomic) BOOL isUnlocked;
@property (nonatomic, setter=setLinkType:) NSUInteger linkType; // ivar: _linkType
@property (readonly, nonatomic) NSString *localUserUUID;
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *mobileEquipmentIdentifier;
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (readonly, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *provisioningDeviceIdentifier; // ivar: _provisioningDeviceIdentifier
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSData *serializedData;
@property (copy, nonatomic) NSString *serverFriendlyDescription; // ivar: _serverFriendlyDescription
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier; // ivar: _uniqueDeviceIdentifier
@property (readonly, nonatomic) NSString *userChosenName;
@property (readonly, nonatomic) NSString *userFullName;


+(BOOL)hasUniqueDeviceIdentifier;
+(BOOL)supportsSecureCoding;
+(NSInteger)_currentDeviceAuthenticationMode;
+(NSInteger)currentDeviceAuthenticationMode;
+(NSInteger)currentDeviceAuthenticationModeForAuthContext:(id)arg0 ;
+(id)_buildNumber;
+(id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg0 ;
+(id)_hardwareModel;
+(id)_osName;
+(id)_osVersion;
+(id)_systemVersionDictionary;
+(id)activeIDSPeerDevice;
+(id)currentDevice;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg0 ;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg0 inTable:(id)arg1 ;
+(id)deviceWithSerializedData:(id)arg0 ;
+(id)systemContainerCacheURL;
+(id)systemContainerURL;
-(id)_volumeGroupUUID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct __CTServerConnection *)_telephonyConnection;
-(void)_setShouldUpdateToValue:(BOOL)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif