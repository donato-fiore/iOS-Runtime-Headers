// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCALIASITEM_H
#define BRCALIASITEM_H



#import "BRCLocalItem.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"
#import "BRCAppLibrary.h"
#import "BRCClientZone.h"
#import "BRCItemID.h"

@interface BRCAliasItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
@property (readonly, nonatomic) BRCClientZone *targetClientZone;
@property (readonly, nonatomic) BRCItemID *targetItemID;


+(id)targetReferenceWithItemID:(id)arg0 targetZone:(id)arg1 isFolderShare:(BOOL)arg2 ;
+(void)fillStructureRecord:(id)arg0 inZone:(id)arg1 itemID:(id)arg2 ckInfo:(id)arg3 parentID:(id)arg4 targetItemID:(id)arg5 targetZone:(id)arg6 diffs:(NSUInteger)arg7 isFolderShare:(BOOL)arg8 beingDeadInServerTruth:(BOOL)arg9 shouldPCSChainStatus:(unsigned char)arg10 ;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)changedAtRelativePath:(id)arg0 scanPackage:(BOOL)arg1 ;
-(BOOL)evictInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isBRAlias;
-(BOOL)startDownloadInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateOnDiskWithAliasTarget:(id)arg0 forServerEdit:(BOOL)arg1 ;
-(BOOL)updateXattrInfoFromPath:(id)arg0 error:(*id)arg1 ;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg0 stageID:(id)arg1 shouldPCSChainStatus:(unsigned char)arg2 ;
-(id)targetDocument;
-(void)_removeAliasAndMarkDead;
-(void)learnTarget:(id)arg0 ;
-(void)markLatestSyncRequestRejectedInZone:(id)arg0 ;
-(void)markNeedsUploadOrSyncingUp;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg0 ;
-(void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg0 ;
-(void)targetMovedToThisAppLibrary;
-(void)targetMovedToTrashOrDeleted;


@end


#endif