// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPPROVIDERDOMAIN_H
#define FPPROVIDERDOMAIN_H

@class NSString, NSDictionary, NSError, NSURL, NSProgress, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "FPItemCollection.h"
#import "NSFileProviderDomain.h"
#import "NSFileProviderManager.h"

@interface FPProviderDomain : NSObject <NSSecureCoding, NSCopying>

 {
    FPItemCollection *_itemCollection;
    BOOL _keepLocalStorageUpToDate;
}


@property (nonatomic) BOOL allowsContextualMenuDownloadEntry; // ivar: _allowsContextualMenuDownloadEntry
@property (nonatomic) BOOL allowsSystemDeleteAlerts; // ivar: _allowsSystemDeleteAlerts
@property (nonatomic) BOOL allowsUserControlledEviction; // ivar: _allowsUserControlledEviction
@property (nonatomic) BOOL appliesChangesAtomically; // ivar: _appliesChangesAtomically
@property (nonatomic) BOOL backgroundActivityIsPaused; // ivar: _backgroundActivityIsPaused
@property (nonatomic) BOOL canDisable; // ivar: _canDisable
@property (readonly, nonatomic) BOOL canDisconnect;
@property (readonly, nonatomic) NSString *containingBundleIdentifier;
@property (readonly, nonatomic) BOOL containsPhotos;
@property (readonly, nonatomic) NSString *disconnectionReason;
@property (nonatomic) NSUInteger disconnectionState; // ivar: _disconnectionState
@property (retain, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *domainDisplayName;
@property (readonly, nonatomic) NSString *domainFullDisplayName;
@property (retain, nonatomic) NSDictionary *domainUserInfo; // ivar: _domainUserInfo
@property (nonatomic, getter=isEjectable) BOOL ejectable; // ivar: _ejectable
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) NSInteger errorGenerationCount; // ivar: _errorGenerationCount
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;
@property (retain, nonatomic) NSURL *extensionBundleURL; // ivar: _extensionBundleURL
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isHiddenByProvider) BOOL hiddenByProvider; // ivar: _hiddenByProvider
@property (readonly, nonatomic, getter=isHiddenByUser) BOOL hiddenByUser; // ivar: _hiddenByUser
@property (readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isAvailableSystemWide; // ivar: _isAvailableSystemWide
@property (readonly, nonatomic) BOOL isConnectedToAppExtension;
@property (readonly, nonatomic) BOOL isDataSeparatedDomain;
@property (readonly, nonatomic) BOOL isEnterpriseDomain;
@property (nonatomic) BOOL isIndexed; // ivar: _isIndexed
@property (readonly, nonatomic) BOOL isMainiCloudDriveDomain;
@property (readonly, nonatomic) BOOL isiCloudDriveProvider;
@property (readonly, nonatomic) NSString *localizedDisconnectionBannerText;
@property (readonly, nonatomic) NSFileProviderManager *manager; // ivar: _manager
@property (nonatomic) BOOL needsAuthentication; // ivar: _needsAuthentication
@property (readonly, copy, nonatomic) NSString *personaIdentifier;
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) NSString *providerDisplayName; // ivar: _providerDisplayName
@property (readonly, nonatomic) NSString *providerID; // ivar: _providerID
@property (retain, nonatomic) NSString *purposeIdentifier; // ivar: _purposeIdentifier
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (nonatomic) BOOL shouldHideDomainDisplayName; // ivar: _shouldHideDomainDisplayName
@property (nonatomic) BOOL shouldHideExtensionName; // ivar: _shouldHideExtensionName
@property (readonly) NSString *spotlightMountPoint;
@property (retain, nonatomic) NSArray *storageURLs; // ivar: _storageURLs
@property (retain, nonatomic) NSArray *supportedFileTypes; // ivar: _supportedFileTypes
@property (retain, nonatomic) NSArray *supportedSearchFilters; // ivar: _supportedSearchFilters
@property (nonatomic) BOOL supportsEnumeration; // ivar: _supportsEnumeration
@property (nonatomic) BOOL supportsPickingFolders; // ivar: _supportsPickingFolders
@property (nonatomic) BOOL supportsSyncingTrash; // ivar: _supportsSyncingTrash
@property (readonly, nonatomic) NSUInteger testingModes;
@property (retain, nonatomic) NSString *topLevelBundleIdentifier; // ivar: _topLevelBundleIdentifier
@property (retain, nonatomic) NSURL *topLevelBundleURL; // ivar: _topLevelBundleURL
@property (nonatomic, getter=isUsingFPFS) BOOL useFPFS; // ivar: _useFPFS
@property (nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices; // ivar: _usesUniqueItemIdentifiersAcrossDevices
@property (retain, nonatomic) NSString *version; // ivar: _version


+(BOOL)hasProviderDomainAccess;
+(BOOL)supportsSecureCoding;
+(id)beginMonitoringProviderDomainChangesWithHandler:(id)arg0 ;
+(id)providerDomainForItem:(id)arg0 error:(*id)arg1 ;
+(id)providerDomainForURL:(id)arg0 error:(*id)arg1 ;
+(id)providerDomainWithID:(id)arg0 allowCached:(BOOL)arg1 error:(*id)arg2 ;
+(id)providerDomainWithID:(id)arg0 error:(*id)arg1 ;
+(id)providerDomainsWithError:(*id)arg0 ;
+(void)_t_discardCache;
+(void)endMonitoringProviderDomainChanges:(id)arg0 ;
+(void)fetchProviderDomainForItem:(id)arg0 completionHandler:(id)arg1 ;
+(void)fetchProviderDomainWithID:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeDomainAndPreserveDataWithID:(id)arg0 mode:(NSUInteger)arg1 completionHandler:(id)arg2 ;
+(void)removeDomainWithID:(id)arg0 mode:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesDSCopyEngine;
-(NSUInteger)hash;
-(id)bundleURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProviderID:(id)arg0 domain:(id)arg1 ;
-(id)localizedName;
-(id)localizedTitleForSortDescriptor:(id)arg0 ;
-(id)providerIdentifier;
-(id)storageURL;
-(void)domainStateWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif