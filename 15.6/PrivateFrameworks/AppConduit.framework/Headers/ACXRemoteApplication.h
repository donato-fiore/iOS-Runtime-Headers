// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACXREMOTEAPPLICATION_H
#define ACXREMOTEAPPLICATION_H

@class NSString, NSArray, NSDictionary, MIStoreMetadata;
@protocol NSSecureCoding, NSCopying;


#import "ACXSyncedApplication.h"

@interface ACXRemoteApplication : ACXSyncedApplication <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger applicationMode; // ivar: _applicationMode
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSArray *architectureSlices; // ivar: _architectureSlices
@property (copy, nonatomic) NSString *bundleShortVersion; // ivar: _bundleShortVersion
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *companionAppBundleID; // ivar: _companionAppBundleID
@property (copy, nonatomic) NSString *complicationPrincipalClass; // ivar: _complicationPrincipalClass
@property (nonatomic) BOOL hasClockfaces; // ivar: _hasClockfaces
@property (readonly, nonatomic) BOOL hasComplication;
@property (copy, nonatomic) NSArray *intentsRestrictedWhileLocked; // ivar: _intentsRestrictedWhileLocked
@property (copy, nonatomic) NSArray *intentsSupported; // ivar: _intentsSupported
@property (nonatomic) BOOL isBetaApp; // ivar: _isBetaApp
@property (nonatomic) BOOL isLocallyAvailable; // ivar: _isLocallyAvailable
@property (nonatomic) BOOL isProfileValidated; // ivar: _isProfileValidated
@property (readonly, copy, nonatomic) NSDictionary *localizedInfoPlistStrings;
@property (copy, nonatomic) NSString *minimumOSVersion; // ivar: _minimumOSVersion
@property (copy, nonatomic) NSDictionary *requiredCapabilities; // ivar: _requiredCapabilities
@property (copy, nonatomic) NSString *sdkVersion; // ivar: _sdkVersion
@property (copy, nonatomic) MIStoreMetadata *storeMetadata; // ivar: _storeMetadata
@property (copy, nonatomic) NSArray *supportedComplicationFamilies; // ivar: _supportedComplicationFamilies
@property (nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID
@property (copy, nonatomic) NSArray *userActivityTypes; // ivar: _userActivityTypes
@property (copy, nonatomic) NSString *watchKitAppExecutableHash; // ivar: _watchKitAppExecutableHash
@property (copy, nonatomic) NSString *watchKitAppExtensionBundleID; // ivar: _watchKitAppExtensionBundleID
@property (copy, nonatomic) NSString *watchKitVersion; // ivar: _watchKitVersion


+(BOOL)supportsSecureCoding;
+(id)localizedInfoPlistKeysLoadAnywhere;
+(id)localizedInfoPlistKeysLoadAppOnly;
-(BOOL)isCompatibleWithCPUType:(int)arg0 subtype:(int)arg1 ;
-(BOOL)isCompatibleWithOSVersion:(id)arg0 ;
-(BOOL)isRuntimeCompatibleWithOSVersion:(id)arg0 ;
-(BOOL)isSystemApp;
-(BOOL)isTheSameAppAs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)counterpartIdentifiers;
-(id)description;
-(id)init;
-(id)initForTesting;
-(id)initWithApplicationRecord:(id)arg0 databaseUUID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)initWithBundleID:(id)arg0 databaseUUID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedDictionary:(id)arg0 ;
-(id)serialize;
-(id)serializeAsRemoteApplication;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif