// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACXREMOTEAPPLICATION_H
#define ACXREMOTEAPPLICATION_H

@class NSString, NSArray, NSUUID, NSDictionary, MIStoreMetadata;
@protocol ACXSyncedApp, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ACXRemoteApplication : NSObject <ACXSyncedApp, NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger applicationMode; // ivar: _applicationMode
@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (nonatomic) NSUInteger applicationType; // ivar: _applicationType
@property (copy, nonatomic) NSArray *architectureSlices; // ivar: _architectureSlices
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundleShortVersion; // ivar: _bundleShortVersion
@property (copy, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (copy, nonatomic) NSString *companionAppBundleID; // ivar: _companionAppBundleID
@property (copy, nonatomic) NSString *complicationPrincipalClass; // ivar: _complicationPrincipalClass
@property (copy, nonatomic) NSArray *counterpartIdentifiers; // ivar: _counterpartIdentifiers
@property (retain, nonatomic) NSUUID *databaseUUID; // ivar: _databaseUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasClockfaces; // ivar: _hasClockfaces
@property (readonly, nonatomic) BOOL hasComplication;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *intentsRestrictedWhileLocked; // ivar: _intentsRestrictedWhileLocked
@property (copy, nonatomic) NSArray *intentsSupported; // ivar: _intentsSupported
@property (nonatomic) BOOL isBetaApp; // ivar: _isBetaApp
@property (nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (nonatomic) BOOL isLocallyAvailable; // ivar: _isLocallyAvailable
@property (nonatomic) BOOL isProfileValidated; // ivar: _isProfileValidated
@property (readonly, nonatomic) BOOL isSystemApp;
@property (copy, nonatomic) NSDictionary *localizedInfoPlistStrings; // ivar: _localizedInfoPlistStrings
@property (copy, nonatomic) NSString *minimumOSVersion; // ivar: _minimumOSVersion
@property (copy, nonatomic) NSDictionary *requiredCapabilities; // ivar: _requiredCapabilities
@property (copy, nonatomic) NSString *sdkVersion; // ivar: _sdkVersion
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (copy, nonatomic) MIStoreMetadata *storeMetadata; // ivar: _storeMetadata
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedComplicationFamilies; // ivar: _supportedComplicationFamilies
@property (nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay
@property (copy, nonatomic) NSString *teamID; // ivar: _teamID
@property (copy, nonatomic) NSArray *userActivityTypes; // ivar: _userActivityTypes
@property (copy, nonatomic) NSString *watchKitAppExecutableHash; // ivar: _watchKitAppExecutableHash
@property (copy, nonatomic) NSString *watchKitAppExtensionBundleID; // ivar: _watchKitAppExtensionBundleID
@property (copy, nonatomic) NSString *watchKitVersion; // ivar: _watchKitVersion


+(BOOL)supportsSecureCoding;
-(BOOL)isCompatibleWithCPUType:(int)arg0 subtype:(int)arg1 ;
-(BOOL)isCompatibleWithOSVersion:(id)arg0 ;
-(BOOL)isRuntimeCompatibleWithOSVersion:(id)arg0 ;
-(BOOL)isTheSameAppAs:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithApplicationRecord:(id)arg0 databaseUUID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)initWithBundleID:(id)arg0 databaseUUID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedDictionary:(id)arg0 ;
-(id)localizedInfoPlistStringsForKeys:(id)arg0 fetchingFirstMatchingLocalizationInList:(id)arg1 ;
-(id)serialize;
-(id)serializeAsRemoteApplication;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif