// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSSEARCHABLEITEMADAPTER_H
#define _CSSEARCHABLEITEMADAPTER_H

@class CSSearchableItemAttributeSet, NSNumber, NSArray, NSString, NSDate, UTType, NSError, NSDictionary, NSURL, NSPersonNameComponents, NSSet, CSSearchableItem, NSData;
@protocol NSFileProviderItem_Private;

#import <Foundation/Foundation.h>

#import "NSFileProviderItemVersion.h"

@interface _CSSearchableItemAdapter : NSObject <NSFileProviderItem_Private>



@property (readonly, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy) NSArray *conflictingVersions;
@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, nonatomic) NSInteger contentPolicy;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, copy, nonatomic) NSNumber *favoriteRank;
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, nonatomic) NSUInteger fileSystemFlags;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly) BOOL fp_isCloudDocsContainer;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, copy) NSString *fp_parentDomainIdentifier;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly) BOOL isCollaborationInvitation;
@property (readonly, nonatomic) CSSearchableItem *item; // ivar: _item
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property (readonly, nonatomic) NSString *preformattedOwnerName;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy, nonatomic) NSData *quarantineBlob;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property (getter=isSyncRoot) BOOL syncRoot;
@property (readonly, copy, nonatomic) NSData *tagData;
@property (readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic) NSFileProviderTypeAndCreator typeAndCreator;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSData *versionIdentifier;


+(id)fp_queryFetchAttributes;
-(BOOL)isInPinnedFolder;
-(BOOL)isPinned;
-(BOOL)isRecursivelyDownloaded;
-(id)collaborationIdentifier;
-(id)formerIdentifier;
-(id)fp_appContainerBundleIdentifier;
-(id)initWithSearchableItem:(id)arg0 ;
-(id)sharingCurrentUserPermissions;
-(id)sharingCurrentUserRole;
-(id)tags;


@end


#endif