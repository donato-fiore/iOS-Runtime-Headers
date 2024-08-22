// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPITEM_H
#define FPITEM_H

@class NSDictionary, NSString, NSNumber, NSArray, NSDate, UTType, NSProgress, NSError, NSURL, NSPersonNameComponents, NSSet, NSData;
@protocol NSFileProviderItemDecorating, NSFileProviderItem_Private, _SWFileProviderItem, NSFileProviderItem, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FPSandboxingURLWrapper.h"
#import "FPItemID.h"
#import "NSFileProviderItemVersion.h"

@interface FPItem : NSObject <NSFileProviderItemDecorating, NSFileProviderItem_Private, _SWFileProviderItem, NSFileProviderItem, NSCopying, NSSecureCoding>

 {
    FPSandboxingURLWrapper *_urlWrapper;
    BOOL _isFolder;
    BOOL _isPackage;
    BOOL _typesEvaluated;
    NSDictionary *_resolvedUserInfoCache;
}


@property (readonly, nonatomic, getter=isFPFS) BOOL FPFS;
@property (readonly, nonatomic, getter=isActionable) BOOL actionable;
@property (nonatomic) BOOL allowsContextualMenuDownloadEntry; // ivar: _allowsContextualMenuDownloadEntry
@property (readonly, copy, nonatomic) NSString *appContainerBundleIdentifier;
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (copy, nonatomic) NSNumber *childItemCount; // ivar: _childItemCount
@property (copy, nonatomic) NSString *cloudContainerIdentifier; // ivar: _cloudContainerIdentifier
@property (readonly, nonatomic, getter=isCloudItem) BOOL cloudItem;
@property (retain, nonatomic) NSString *collaborationIdentifier; // ivar: _collaborationIdentifier
@property (copy, nonatomic) NSArray *conflictingVersions; // ivar: _conflictingVersions
@property (copy, nonatomic) NSString *containerDisplayName; // ivar: _containerDisplayName
@property (copy, nonatomic) NSDate *contentModificationDate; // ivar: _contentModificationDate
@property (nonatomic) NSInteger contentPolicy; // ivar: _contentPolicy
@property (copy, nonatomic, setter=setContentType:) UTType *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSProgress *copyingProgress;
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *decorations; // ivar: _decorations
@property (readonly, nonatomic) NSUInteger depthInHierarchy;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) unsigned int documentID; // ivar: _documentID
@property (copy, nonatomic) NSNumber *documentSize; // ivar: _documentSize
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (nonatomic, getter=isDownloaded) BOOL downloaded; // ivar: _downloaded
@property (nonatomic, getter=isDownloading) BOOL downloading; // ivar: _downloading
@property (copy, nonatomic) NSError *downloadingError; // ivar: _downloadingError
@property (readonly, nonatomic) NSProgress *downloadingProgress;
@property (nonatomic) NSUInteger enumerationOrigin; // ivar: _enumerationOrigin
@property (nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync; // ivar: _excludedFromSync
@property (nonatomic) NSUInteger exclusionType; // ivar: _exclusionType
@property (retain, nonatomic) NSDictionary *extendedAttributes; // ivar: _extendedAttributes
@property (copy, nonatomic) NSNumber *favoriteRank; // ivar: _favoriteRank
@property (nonatomic) NSUInteger fileID; // ivar: _fileID
@property (copy, nonatomic) NSString *fileSystemFilename; // ivar: _fileSystemFilename
@property (nonatomic) NSUInteger fileSystemFlags; // ivar: _fileSystemFlags
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, nonatomic, getter=isFlattenedPackage) BOOL flattenedPackage;
@property (nonatomic) NSUInteger folderType; // ivar: _folderType
@property (retain, nonatomic) NSString *formerIdentifier; // ivar: _formerIdentifier
@property (readonly, nonatomic) FPItemID *formerItemID;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (copy, nonatomic) NSString *fp_appContainerBundleIdentifier; // ivar: _fp_appContainerBundleIdentifier
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (copy, nonatomic) NSString *fp_displayName;
@property (readonly, nonatomic) NSString *fp_domainIdentifier;
@property (nonatomic, getter=fp_isInPinnedFolder) BOOL fp_inPinnedFolder;
@property (readonly) BOOL fp_isCloudDocsContainer;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (nonatomic) BOOL fp_isDownloadRequested;
@property (nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser; // ivar: _fp_lastModifiedByCurrentUser
@property (retain, nonatomic) NSString *fp_parentDomainIdentifier; // ivar: _fp_parentDomainIdentifier
@property (nonatomic, getter=fp_isPinned) BOOL fp_pinned;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (copy, nonatomic) NSString *fp_spotlightSubDomainIdentifier; // ivar: _fp_spotlightSubDomainIdentifier
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (copy, nonatomic) NSNumber *hasUnresolvedConflicts; // ivar: _hasUnresolvedConflicts
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isIgnoreRoot) BOOL ignoreRoot; // ivar: _ignoreRoot
@property (nonatomic, getter=isInPinnedFolder) BOOL inPinnedFolder; // ivar: _inPinnedFolder
@property (copy, nonatomic) NSDictionary *inheritedUserInfo; // ivar: _inheritedUserInfo
@property (readonly, nonatomic) BOOL isCollaborationInvitation; // ivar: _isCollaborationInvitation
@property (nonatomic) BOOL isContainer;
@property (readonly, nonatomic) BOOL isContainer; // ivar: _isContainer
@property (nonatomic) BOOL isContainerPristine;
@property (readonly, nonatomic) BOOL isContainerPristine; // ivar: _isContainerPristine
@property (readonly, nonatomic) NSNumber *isDownloadRequested; // ivar: _isDownloadRequested
@property (readonly, nonatomic) BOOL isExternalDownloadPlaceholder;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isPackage;
@property (nonatomic) BOOL isSyncRoot; // ivar: _isSyncRoot
@property (readonly) BOOL isValidAppLibrary;
@property (readonly, nonatomic) NSArray *itemDecorations;
@property (readonly, nonatomic) FPItemID *itemID;
@property (readonly, copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) NSFileProviderItemVersion *itemVersion; // ivar: _itemVersion
@property (readonly, nonatomic, getter=isKnownByTheProvider) BOOL knownByTheProvider;
@property (copy, nonatomic) NSDate *lastUsedDate; // ivar: _lastUsedDate
@property (readonly, nonatomic) NSString *localizedSharingStatusString;
@property (retain, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents; // ivar: _mostRecentEditorNameComponents
@property (nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded; // ivar: _mostRecentVersionDownloaded
@property (nonatomic, getter=isOffline) BOOL offline; // ivar: _offline
@property (retain, nonatomic) NSPersonNameComponents *ownerNameComponents; // ivar: _ownerNameComponents
@property (readonly, nonatomic) FPItemID *parentItemID;
@property (copy, nonatomic) NSString *parentItemIdentifier; // ivar: _parentItemIdentifier
@property (nonatomic, getter=isPending) BOOL pending; // ivar: _pending
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic) NSString *placeholderIdentifier; // ivar: _placeholderIdentifier
@property (retain, nonatomic) NSString *preformattedMostRecentEditorName; // ivar: _preformattedMostRecentEditorName
@property (retain, nonatomic) NSString *preformattedOwnerName; // ivar: _preformattedOwnerName
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, copy, nonatomic) NSString *providerDomainID;
@property (readonly, nonatomic) NSString *providerID; // ivar: _providerID
@property (readonly, nonatomic) NSString *providerIDForDeduplication;
@property (readonly, nonatomic) NSString *providerIdentifier;
@property (readonly, nonatomic) FPItemID *providerItemID;
@property (readonly, nonatomic) NSString *providerItemIdentifier;
@property (retain, nonatomic) NSData *quarantineBlob; // ivar: _quarantineBlob
@property (readonly, nonatomic, getter=isReadable) BOOL readable;
@property (nonatomic, getter=isRecursivelyDownloaded) BOOL recursivelyDownloaded; // ivar: _recursivelyDownloaded
@property (readonly, nonatomic) NSDictionary *resolvedUserInfo;
@property (nonatomic, getter=isShared) BOOL shared; // ivar: _shared
@property (nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser; // ivar: _sharedByCurrentUser
@property (copy, nonatomic) NSString *sharingPermissions; // ivar: _sharingPermissions
@property (copy, nonatomic) NSString *spotlightDomainIdentifier; // ivar: _spotlightDomainIdentifier
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsMostRecentVersionDownloaded; // ivar: _supportsMostRecentVersionDownloaded
@property (copy, nonatomic) NSString *symlinkTargetPath; // ivar: _symlinkTargetPath
@property (getter=isSyncRoot) BOOL syncRoot;
@property (copy, nonatomic) NSData *tagData;
@property (copy, nonatomic) NSArray *tags; // ivar: _tags
@property (nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem; // ivar: _topLevelSharedItem
@property (nonatomic, getter=isTrashed) BOOL trashed; // ivar: _trashed
@property (nonatomic) NSFileProviderTypeAndCreator typeAndCreator; // ivar: _typeAndCreator
@property (copy, nonatomic) NSString *typeIdentifier;
@property (nonatomic, getter=isUbiquitous) BOOL ubiquitous; // ivar: _isUbiquitous
@property (readonly, nonatomic) NSUInteger unsupportedFields; // ivar: _unsupportedFields
@property (nonatomic, getter=isUploaded) BOOL uploaded; // ivar: _uploaded
@property (nonatomic, getter=isUploading) BOOL uploading; // ivar: _uploading
@property (copy, nonatomic) NSError *uploadingError; // ivar: _uploadingError
@property (readonly, nonatomic) NSProgress *uploadingProgress;
@property (retain, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSData *versionIdentifier; // ivar: _versionIdentifier
@property (readonly, nonatomic, getter=isWritable) BOOL writable;


+(BOOL)supportsSecureCoding;
+(id)allUbiquitousResourceKeys;
+(id)appLibraryFromContainerItem:(id)arg0 documentsItem:(id)arg1 ;
+(id)archivePlaceholderForItem:(id)arg0 underParent:(id)arg1 inProviderDomainID:(id)arg2 ;
+(id)fp_minimalAttributesForEviction;
+(id)fp_minimalAttributesForEvictionPriority;
+(id)fp_queryFetchAttributes;
+(id)generatePlaceholderIdentifier;
+(id)generatePlaceholderIdentifierWithOriginalID:(id)arg0 ;
+(id)genericArchivePlaceholderUnderParent:(id)arg0 inProviderDomainID:(id)arg1 ;
+(id)placeholderWithCopyOfExistingItem:(id)arg0 lastUsageUpdatePolicy:(NSUInteger)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3 ;
+(id)placeholderWithName:(id)arg0 contentType:(id)arg1 contentAccessDate:(id)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
+(id)placeholderWithName:(id)arg0 isFolder:(BOOL)arg1 contentAccessDate:(id)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
+(id)placeholderWithName:(id)arg0 typeIdentifier:(id)arg1 contentAccessDate:(id)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
+(id)temporaryPlaceholderFromItem:(id)arg0 ;
-(*void)_coreSpotlightAttributeForKey:(id)arg0 ;
-(BOOL)isBusy;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(BOOL)isValidContainerForAppLibrary;
-(NSInteger)localizedStandardTagsCompare:(id)arg0 ;
-(id)_downloadingStatus;
-(id)_sharedByDecorationType;
-(id)copyAsPending;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionForFPCTL:(BOOL)arg0 ;
-(id)fieldDifferencesWithItem:(id)arg0 ;
-(id)fieldDifferencesWithItem:(id)arg0 onlyMetadata:(BOOL)arg1 ;
-(id)fp_cs_uniqueIdentifier;
-(id)fp_valueForKeyPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProviderDomainID:(id)arg0 itemIdentifier:(id)arg1 parentItemIdentifier:(id)arg2 filename:(id)arg3 contentType:(id)arg4 ;
-(id)initWithProviderDomainID:(id)arg0 itemIdentifier:(id)arg1 parentItemIdentifier:(id)arg2 filename:(id)arg3 isDirectory:(BOOL)arg4 ;
-(id)initWithProviderDomainID:(id)arg0 itemIdentifier:(id)arg1 parentItemIdentifier:(id)arg2 filename:(id)arg3 typeIdentifier:(id)arg4 ;
-(id)initWithProviderID:(id)arg0 domainIdentifier:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 contentType:(id)arg5 ;
-(id)initWithProviderID:(id)arg0 domainIdentifier:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 isDirectory:(BOOL)arg5 ;
-(id)initWithSearchableItem:(id)arg0 ;
-(id)initWithVendorItem:(id)arg0 provider:(id)arg1 domain:(id)arg2 spotlightDomainIdentifier:(id)arg3 extensionCapabilities:(NSUInteger)arg4 useFPFS:(BOOL)arg5 ;
-(id)scopedSearchQueryUnderItem;
-(id)strippedCopy;
-(id)toSearchableItem;
-(id)ubiquitousResourceKeysDiffAgainstItem:(id)arg0 ;
-(void)_evaluateTypes;
-(void)encodeWithCoder:(id)arg0 ;
-(void)overrideFields:(id)arg0 ofItem:(id)arg1 ;


@end


#endif