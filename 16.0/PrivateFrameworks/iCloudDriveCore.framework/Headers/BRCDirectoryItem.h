// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDIRECTORYITEM_H
#define BRCDIRECTORYITEM_H

@class NSString;
@protocol BRCTopLevelShareable;


#import "BRCLocalItem.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>



@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (nonatomic) NSInteger mtime; // ivar: _mtime
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;


-(BOOL)_deleteFromDB:(id)arg0 keepAliases:(BOOL)arg1 offline:(BOOL)arg2 ;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_insertRecursiveProperties;
-(BOOL)_recomputeChildItemCount;
-(BOOL)_repopulateRecursivePropertiesIfNecessary;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)_updateRecursiveProperties;
-(BOOL)containsDirFault;
-(BOOL)containsFault;
-(BOOL)containsOverQuotaItems;
-(BOOL)containsPendingDeleteDocuments;
-(BOOL)containsPendingDownload;
-(BOOL)containsPendingUploadOrSyncUp;
-(BOOL)evictInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)hasDeadChildren;
-(BOOL)hasLiveChildren;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)isDirectory;
-(BOOL)isDirectoryFault;
-(BOOL)isDirectoryWithPackageName;
-(BOOL)isShareableItem;
-(BOOL)isSharedByMeOrContainsSharedByMeItem;
-(BOOL)isSharedToMeOrContainsSharedToMeItem;
-(BOOL)possiblyContainsSharedItem;
-(BOOL)startDownloadInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)_serverChildItemCount;
-(id)asShareableItem;
-(id)childItemCount;
-(id)clientZonesChildrenNeedingSyncUpAreIn;
-(id)collaborationIdentifierIfComputable;
-(id)folderRootStructureRecord;
-(id)serverQuotaUsage;
-(void)_learnItemID:(id)arg0 serverItem:(id)arg1 ;
-(void)_retryPostponedIfNeededForDiffs:(NSUInteger)arg0 ;
-(void)markRemovedFromFilesystemRecursively:(BOOL)arg0 ;
-(void)prepareForSyncUpInZone:(id)arg0 ;
-(void)transformIntoFSRoot;
-(void)updateFromServerItem:(id)arg0 ;
-(void)updateItemMetadataFromServerItem:(id)arg0 appliedSharingPermission:(BOOL)arg1 ;
-(void)updateWithContentModificationDate:(id)arg0 ;


@end


#endif