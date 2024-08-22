// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACXSYNCEDAPPLICATION_H
#define ACXSYNCEDAPPLICATION_H

@class NSString, NSArray, NSUUID, NSNumber, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ACXSyncedApplication : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *_rawApplicationName;
@property (copy, nonatomic) NSString *applicationName; // ivar: _applicationName
@property (nonatomic) NSUInteger applicationType; // ivar: _applicationType
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSArray *counterpartIdentifiers; // ivar: _counterpartIdentifiers
@property (retain, nonatomic) NSUUID *databaseUUID; // ivar: _databaseUUID
@property (nonatomic) BOOL defaultsToPrivateAlwaysOnDisplayTreatment; // ivar: _defaultsToPrivateAlwaysOnDisplayTreatment
@property (retain, nonatomic) NSNumber *externalVersionIdentifier; // ivar: _externalVersionIdentifier
@property (nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (readonly, nonatomic) BOOL isSystemApp;
@property (copy, nonatomic) NSDictionary *localizedInfoPlistStrings; // ivar: _localizedInfoPlistStrings
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) BOOL supportsAlwaysOnDisplay; // ivar: _supportsAlwaysOnDisplay


+(BOOL)supportsSecureCoding;
+(id)buildLocalizedInfoPlistStringsDictForAppBundleURL:(id)arg0 watchKitExtensionURL:(id)arg1 ;
+(id)localizedAppNameFromRecord:(id)arg0 ;
+(id)localizedInfoPlistKeysLoadAnywhere;
+(id)localizedInfoPlistKeysLoadAppOnly;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initForTesting;
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