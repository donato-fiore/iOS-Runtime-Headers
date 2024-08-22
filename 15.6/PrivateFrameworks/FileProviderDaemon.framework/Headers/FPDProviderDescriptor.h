// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDPROVIDERDESCRIPTOR_H
#define FPDPROVIDERDESCRIPTOR_H

@class NSString, NSNumber, NSURL, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPDProviderDescriptor : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowsContextualMenuDownloadEntry; // ivar: _allowsContextualMenuDownloadEntry
@property (nonatomic) BOOL allowsSystemDeleteAlerts; // ivar: _allowsSystemDeleteAlerts
@property (nonatomic) BOOL allowsUserControlledEviction; // ivar: _allowsUserControlledEviction
@property (nonatomic) BOOL appliesChangesAtomically; // ivar: _appliesChangesAtomically
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (nonatomic) BOOL canToggleDomainVisibility; // ivar: _canToggleDomainVisibility
@property (nonatomic) BOOL defaultDomainVisible; // ivar: _defaultDomainVisible
@property (retain, nonatomic) NSString *documentGroupName; // ivar: _documentGroupName
@property (retain, nonatomic) NSNumber *downloadPipelineDepth; // ivar: _downloadPipelineDepth
@property (nonatomic) BOOL enabledByDefault; // ivar: _enabledByDefault
@property (retain, nonatomic) NSURL *extensionBundleURL; // ivar: _extensionBundleURL
@property (retain, nonatomic) NSString *extensionPointVersion; // ivar: _extensionPointVersion
@property (retain, nonatomic) NSArray *extensionStorageURLs; // ivar: _extensionStorageURLs
@property (nonatomic) BOOL hasExplicitExtensionStorageURLs; // ivar: _hasExplicitExtensionStorageURLs
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isAvailableSystemWide; // ivar: _isAvailableSystemWide
@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (nonatomic) BOOL owningApplicationIsManaged; // ivar: _owningApplicationIsManaged
@property (retain, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (retain, nonatomic) NSUUID *pluginUUID; // ivar: _pluginUUID
@property (retain, nonatomic) NSString *purposeIdentifier; // ivar: _purposeIdentifier
@property (nonatomic) BOOL readonly; // ivar: _readonly
@property (retain, nonatomic) NSArray *requestedExtendedAttributes; // ivar: _requestedExtendedAttributes
@property (nonatomic) BOOL shouldHideExtensionName; // ivar: _shouldHideExtensionName
@property (retain, nonatomic) NSArray *supportedFileTypes; // ivar: _supportedFileTypes
@property (retain, nonatomic) NSArray *supportedSearchFilters; // ivar: _supportedSearchFilters
@property (nonatomic) BOOL supportsEnumeration; // ivar: _supportsEnumeration
@property (nonatomic) BOOL supportsPickingFolders; // ivar: _supportsPickingFolders
@property (nonatomic) BOOL supportsUnzippedPackages; // ivar: _supportsUnzippedPackages
@property (retain, nonatomic) NSString *topLevelBundleIdentifier; // ivar: _topLevelBundleIdentifier
@property (retain, nonatomic) NSNumber *uploadPipelineDepth; // ivar: _uploadPipelineDepth
@property (nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices; // ivar: _usesUniqueItemIdentifiersAcrossDevices
@property (nonatomic) BOOL wantsFlattenedPackages; // ivar: _wantsFlattenedPackages


+(BOOL)supportsSecureCoding;
+(id)personaFromExtensionRecord:(id)arg0 ;
+(id)uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtension:(id)arg0 ;
-(id)localizedStringForInfoPlistValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif