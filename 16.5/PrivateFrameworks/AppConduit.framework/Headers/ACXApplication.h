// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACXAPPLICATION_H
#define ACXAPPLICATION_H

@class NSArray, NSString, NSURL;
@protocol NSSecureCoding, NSCopying;


#import "ACXRemoteApplication.h"
#import "ACXApplicationStatus.h"

@interface ACXApplication : ACXRemoteApplication <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger autoInstallOverride; // ivar: _autoInstallOverride
@property (readonly, copy, nonatomic) NSArray *clockFaceExtensionPaths; // ivar: _clockFaceExtensionPaths
@property (readonly, copy, nonatomic) NSString *companionAppName; // ivar: _companionAppName
@property (readonly, nonatomic) NSURL *companionAppURL; // ivar: _companionAppURL
@property (copy, nonatomic) ACXApplicationStatus *deviceStatus; // ivar: _deviceStatus
@property (readonly, nonatomic) BOOL isEmbeddedPlaceholder; // ivar: _isEmbeddedPlaceholder
@property (readonly, nonatomic) BOOL isPurchasedReDownload; // ivar: _isPurchasedReDownload
@property (nonatomic) BOOL isTrusted; // ivar: _isTrusted
@property (readonly, nonatomic) NSUInteger lsSequenceNumber; // ivar: _lsSequenceNumber
@property (readonly, copy, nonatomic) NSString *sourceAppIdentifier; // ivar: _sourceAppIdentifier
@property (readonly, nonatomic) NSURL *watchAppURL; // ivar: _watchAppURL


+(BOOL)_isIndeterminateMISError:(int)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)gizmoApplicationsFromCompanionAppRecord:(id)arg0 databaseUUID:(id)arg1 startingSequenceNumber:(NSUInteger)arg2 ;
+(int)_systemTrustsApplicationWithBundleURL:(id)arg0 ;
-(BOOL)isLocallyAvailable;
-(id)_URLOfFirstItemWithExtension:(id)arg0 inDirectory:(id)arg1 ;
-(id)_URLsOfExtensionsInBundleURL:(id)arg0 mayNotExist:(BOOL)arg1 ;
-(id)_infoPlistForPluginBundle:(id)arg0 ;
-(id)_mostCurrentWKAppURLInCompanionAppRecord:(id)arg0 isPlaceholder:(*BOOL)arg1 ;
-(id)_parseArchitectureSlicesForWatchKitAppExecutableURL:(id)arg0 ;
-(id)_storeMetadataWithError:(*id)arg0 ;
-(id)_watchKitApplicationNameFromWKAppInfoPlist:(id)arg0 containerRecord:(id)arg1 ;
-(id)appWithReevaluatedTrust;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initForTesting;
-(id)initWithApplicationRecord:(id)arg0 databaseUUID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)initWithApplicationRecord:(id)arg0 gizmoBundleIdentifier:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(NSUInteger)arg3 ;
-(id)initWithBundleID:(id)arg0 databaseUUID:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedDictionary:(id)arg0 ;
-(id)initWithSerializedDictionary:(id)arg0 reevaluatingTrust:(BOOL)arg1 ;
-(id)serialize;
-(id)serializeAsRemoteApplication;
-(void)_evaluateTrustInfoForReevaluation:(BOOL)arg0 ;
-(void)_populateStoreMetadata;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif