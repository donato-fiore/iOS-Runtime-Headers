// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIINSTALLOPTIONS_H
#define MIINSTALLOPTIONS_H

@class NSString, NSData, NSDictionary, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MIStoreMetadata.h"

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL allowLocalProvisioned; // ivar: _allowLocalProvisioned
@property (copy, nonatomic) NSString *alternateIconName; // ivar: _alternateIconName
@property (nonatomic) NSUInteger autoInstallOverride; // ivar: _autoInstallOverride
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic, getter=isDeveloperInstall) BOOL developerInstall; // ivar: _developerInstall
@property (copy, nonatomic) NSData *geoJSONData; // ivar: _geoJSONData
@property (copy, nonatomic) NSData *iTunesArtworkData; // ivar: _iTunesArtworkData
@property (copy, nonatomic) MIStoreMetadata *iTunesMetadata; // ivar: _iTunesMetadata
@property (nonatomic) BOOL installForMigrator; // ivar: _installForMigrator
@property (nonatomic) NSUInteger installTargetType; // ivar: _installTargetType
@property (readonly, copy, nonatomic) NSDictionary *legacyOptionsDictionary;
@property (copy, nonatomic) NSString *linkedParentBundleID; // ivar: _linkedParentBundleID
@property (nonatomic) NSUInteger lsInstallType; // ivar: _lsInstallType
@property (nonatomic) BOOL performAPFSClone; // ivar: _performAPFSClone
@property (nonatomic) BOOL provisioningProfileInstallFailureIsFatal; // ivar: _provisioningProfileInstallFailureIsFatal
@property (copy, nonatomic) NSArray *provisioningProfiles; // ivar: _provisioningProfiles
@property (copy, nonatomic) NSData *sinfData; // ivar: _sinfData
@property (nonatomic) BOOL skipBlacklist; // ivar: _skipBlacklist
@property (nonatomic) BOOL skipWatchAppInstall; // ivar: _skipWatchAppInstall
@property (nonatomic) NSUInteger stashMode; // ivar: _stashMode
@property (nonatomic, getter=isSystemAppInstall) BOOL systemAppInstall; // ivar: _systemAppInstall
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated
@property (nonatomic) BOOL waitForDeletion; // ivar: _waitForDeletion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLegacyOptionsDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif