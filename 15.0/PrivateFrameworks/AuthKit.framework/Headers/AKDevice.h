// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}


@property (copy, nonatomic) NSString *MLBSerialNumber; // ivar: _MLBSerialNumber
@property (copy, nonatomic) NSString *ROMAddress; // ivar: _ROMAddress
@property (copy, nonatomic) NSNumber *backingColor; // ivar: _backingColor
@property (copy, nonatomic) NSString *color; // ivar: _color
@property (copy, nonatomic) NSNumber *coverGlassColor; // ivar: _coverGlassColor
@property (copy, nonatomic) NSString *enclosureColor; // ivar: _enclosureColor
@property (copy, nonatomic) NSNumber *housingColor; // ivar: _housingColor
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) NSString *internationalMobileEquipmentIdentity2;
@property (readonly) BOOL isBiometricAuthCapable;
@property (readonly) BOOL isFaceIDCapable;
@property (readonly) BOOL isInCircle;
@property (readonly) BOOL isInternalBuild;
@property (readonly) BOOL isMultiUserMode;
@property (readonly) BOOL isProtectedWithPasscode;
@property (readonly) BOOL isUnlocked;
@property (setter=setLinkType:) NSUInteger linkType; // ivar: _linkType
@property (readonly) NSString *localUserUUID;
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (copy, nonatomic) NSString *serverFriendlyDescription; // ivar: _serverFriendlyDescription
@property (copy, nonatomic) NSString *uniqueDeviceIdentifier; // ivar: _uniqueDeviceIdentifier
@property (readonly) NSString *userChosenName;
@property (readonly) NSString *userFullName;


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