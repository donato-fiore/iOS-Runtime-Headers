// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSFPITEMHELPER_H
#define LIVEFSFPITEMHELPER_H

@class NSString, NSDate, NSMutableDictionary, NSData, NSNumber, UTType, NSError, NSDictionary, NSURL, NSPersonNameComponents, NSSet, NSMapTable, NSFileProviderItemVersion;
@protocol NSFileProviderItem_Private, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "LiveFSFPEnumeratorDataContainer.h"
#import "LiveFSFPExtensionHelper.h"
#import "LiveFSFPItemHelper.h"

@interface LiveFSFPItemHelper : NSObject <NSFileProviderItem_Private>

 {
    _LIFileAttributes attributes;
    int numChildren;
    NSString *_fullPath;
    BOOL _isFetchingXattrValues;
    NSDate *_lastXattrValuesFetchDate;
    NSMutableDictionary *_pendingRenameCompletionBlocks;
    NSObject<OS_dispatch_group> *_xattrFetchGroup;
    NSDate *_lastUsedDate;
    NSData *_tagData;
    NSNumber *_favoriteRank;
}


@property NSInteger attr_load; // ivar: _attr_load
@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, copy, nonatomic) NSNumber *childItemCount;
@property (weak) LiveFSFPEnumeratorDataContainer *container; // ivar: _container
@property (readonly, copy) NSString *containerDisplayName;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
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
@property (retain) LiveFSFPExtensionHelper *extension; // ivar: _extension
@property (copy, nonatomic) NSNumber *favoriteRank;
@property (readonly, copy, nonatomic) NSString *fh; // ivar: _fh
@property (readonly, copy) NSString *fileSystemFilename;
@property (readonly, nonatomic) NSUInteger fileSystemFlags;
@property (readonly, copy) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
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
@property (readonly, copy, nonatomic) NSString *fullPath;
@property (readonly, copy) NSNumber *hasUnresolvedConflicts;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHidden) BOOL hidden;
@property NSUInteger inodeNum; // ivar: _inodeNum
@property (readonly, copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (retain) NSMapTable *itemNameCache; // ivar: _itemNameCache
@property (readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property (copy, nonatomic) NSDate *lastUsedDate;
@property int liType; // ivar: _liType
@property (readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property (retain) LiveFSFPItemHelper *parent; // ivar: _parent
@property (readonly, copy, nonatomic) NSString *parentItemIdentifier;
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
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
@property (copy, nonatomic) NSData *tagData;
@property (readonly, nonatomic, getter=isTopLevelSharedItem) BOOL topLevelSharedItem;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic) NSFileProviderTypeAndCreator typeAndCreator;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property (readonly, nonatomic, getter=isUploading) BOOL uploading;
@property (readonly, copy, nonatomic) NSError *uploadingError;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSData *versionIdentifier;


+(id)UTIForExtension:(id)arg0 liType:(int)arg1 ;
+(id)newItemForFH:(id)arg0 withReference:(int)arg1 name:(id)arg2 parent:(id)arg3 type:(int)arg4 attrs:(id)arg5 extension:(id)arg6 ;
+(int)dt_dir;
+(int)dt_examine;
+(int)dt_lnk;
+(int)dt_reg;
-(BOOL)_fetchXattrValues;
-(BOOL)calcNumberOfChildren:(*id)arg0 ;
-(BOOL)ensureFileHandleOrError:(*id)arg0 ;
-(BOOL)isDirectory;
-(BOOL)isDocument;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSymlink;
-(id)initItemForFH:(id)arg0 withReference:(int)arg1 name:(id)arg2 parent:(id)arg3 type:(int)arg4 attrs:(id)arg5 extension:(id)arg6 ;
-(id)lastUsedTime;
-(int)refreshAttrsHasAProblem:(*id)arg0 ;
-(void)_fetchFavoriteRank:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchLastUsedDateWithProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchTagDataWithProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchXattrNamed:(id)arg0 proxy:(id)arg1 completionHandler:(id)arg2 ;
-(void)afterRename:(id)arg0 performBlock:(id)arg1 ;
-(void)dealloc;
-(void)doDealloc;
-(void)dropAfterRenameBlockForName:(id)arg0 ;
-(void)performBlocksForRename:(id)arg0 onEHQueue:(BOOL)arg1 ;
-(void)prefetchXattrBasedValues;
-(void)recursivelySetChildrenDeleted;
-(void)resetFileHandle;
-(void)setAttributes:(id)arg0 time:(NSInteger)arg1 ;
-(void)setAttributesLocked:(id)arg0 time:(NSInteger)arg1 ;
-(void)setAttributesStale;
-(void)setItemDeleted;
-(void)setNewParent:(id)arg0 andName:(id)arg1 ;


@end


#endif