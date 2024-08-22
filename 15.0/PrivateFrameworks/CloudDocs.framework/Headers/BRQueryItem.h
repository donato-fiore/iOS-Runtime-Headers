// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRQUERYITEM_H
#define BRQUERYITEM_H

@class NSString, NSNumber, NSURL, NSMutableDictionary, NSDate, UTType, NSArray, NSError, NSDictionary, NSPersonNameComponents, NSSet, NSFileProviderItemVersion, NSData;
@protocol NSFileProviderItem_Private, NSFileProviderItemDecorating, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BRFileObjectID.h"

@interface BRQueryItem : NSObject <NSFileProviderItem_Private, NSFileProviderItemDecorating, NSSecureCoding, NSCopying>

 {
    NSString *_appLibraryID;
    NSString *_parentPath;
    NSString *_logicalName;
    NSString *_physicalName;
    NSString *_bookmarkData;
    BRFileObjectID *_fileObjectID;
    BRFileObjectID *_parentFileObjectID;
    BRFileObjectID *_shareRootFileObjectID;
    NSNumber *_size;
    NSNumber *_mtime;
    NSNumber *_btime;
    NSNumber *_lastUsedTime;
    NSNumber *_favoriteRank;
    NSNumber *_childItemCount;
    NSURL *_url;
    NSURL *_localRepresentationURL;
    NSNumber *_parentZoneRowID;
    NSNumber *_zoneRowID;
    NSMutableDictionary *_attrs;
    id *_replacement;
    ? _flags;
    NSInteger _logicalHandle;
    NSInteger _physicalHandle;
    NSUInteger _parentFileID;
    unsigned short _diffs;
}


@property (readonly, nonatomic) NSString *appLibraryID;
@property (readonly, nonatomic) unsigned short br_downloadStatus;
@property (readonly, nonatomic) unsigned int br_shareOptions;
@property (readonly, nonatomic) unsigned short br_uploadStatus;
@property (readonly, nonatomic) NSNumber *btime;
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *decorations;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short diffs;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, getter=isDownloadRequested) NSNumber *downloadRequested;
@property (readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *downloadingError;
@property (readonly, nonatomic) BOOL editedSinceShared;
@property (readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic) NSNumber *favoriteRank;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, nonatomic) NSUInteger fileSystemFlags;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, nonatomic, getter=fp_isAddedByCurrentUser) BOOL fp_addedByCurrentUser;
@property (readonly, nonatomic) NSPersonNameComponents *fp_addedByNameComponents;
@property (readonly, copy) NSSet *fp_cloudContainerClientBundleIdentifiers;
@property (readonly, copy) NSString *fp_cloudContainerIdentifier;
@property (readonly, copy) NSString *fp_domainIdentifier;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (readonly, nonatomic, getter=fp_isLastModifiedByCurrentUser) BOOL fp_lastModifiedByCurrentUser;
@property (readonly, copy) NSString *fp_parentDomainIdentifier;
@property (readonly, copy) NSString *fp_spotlightDomainIdentifier;
@property (readonly, getter=fp_isUbiquitous) BOOL fp_ubiquitous;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isConflicted;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDownloadActive;
@property (readonly, nonatomic) NSNumber *isDownloadRequested;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isInTransfer;
@property (readonly, nonatomic) BOOL isLive;
@property (nonatomic) BOOL isNetworkOffline;
@property (nonatomic) BOOL isPreCrash;
@property (readonly, nonatomic) BOOL isSymlink;
@property (readonly, nonatomic) BOOL isTrashed;
@property (readonly, nonatomic) BOOL isUploadActive;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSNumber *lastUsedTime;
@property (readonly, nonatomic) NSURL *localRepresentationURL;
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic) NSNumber *mtime;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, nonatomic) NSString *parentPath;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *physicalName;
@property (readonly, nonatomic) NSString *preformattedMostRecentEditorName;
@property (readonly, nonatomic) NSString *preformattedOwnerName;
@property (readonly, copy) NSString *providerIdentifier;
@property (readonly, copy, nonatomic) NSData *quarantineBlob;
@property (nonatomic) id *replacement;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property (readonly, copy) NSString *sharingPermissions;
@property (readonly, nonatomic) NSNumber *size;
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
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSData *versionIdentifier;


+(BOOL)supportsSecureCoding;
+(id)askDaemonQueryItemForURL:(id)arg0 andFakeFSEvent:(BOOL)arg1 error:(*id)arg2 ;
+(id)askDaemonQueryItemForURL:(id)arg0 error:(*id)arg1 ;
+(id)containerItemForContainer:(id)arg0 forceScan:(BOOL)arg1 ;
+(id)containerItemForContainer:(id)arg0 withDocumentsItem:(id)arg1 ;
+(id)containerItemForContainer:(id)arg0 withDocumentsItem:(id)arg1 zoneRowID:(id)arg2 ;
+(void)initialize;
-(BOOL)_isInSharedZone;
-(BOOL)canMerge:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQueryItem:(id)arg0 ;
-(BOOL)isTopLevel;
-(id)attributeForKey:(id)arg0 ;
-(id)attributeForName:(id)arg0 ;
-(id)attributeNames;
-(id)attributesForNames:(id)arg0 ;
-(id)containerIDIfDesktopOrDocuments;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)downloadingStatus;
-(id)filePath;
-(id)fileSize;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryItem:(id)arg0 ;
-(id)localizedFileNameIfDesktopOrDocuments;
-(id)owner;
-(id)parentFileID;
-(id)sharedItemRole;
-(id)subclassDescription;
-(id)valueForKey:(id)arg0 ;
-(void)_mergeAttrs:(id)arg0 ;
-(void)_mergeURL:(id)arg0 ;
-(void)attachLogicalExtension:(id)arg0 physicalExtension:(id)arg1 ;
-(void)clearDiffs;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markDead;
-(void)merge:(id)arg0 ;
-(void)mergeProgressUpdate:(id)arg0 ;
-(void)setAttribute:(id)arg0 forKey:(id)arg1 ;


@end


#endif