// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCFSIMPORTER_H
#define BRCFSIMPORTER_H

@class BRFileObjectID, NSString;
@protocol BRCModule, BRCSuspendable;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "BRCFairSource.h"

@interface BRCFSImporter : NSObject <BRCModule, BRCSuspendable>

 {
    BRCAccountSession *_session;
    BRCFairSource *_childPropagationSource;
    BRFileObjectID *_currentPropagationObject;
    NSUInteger _currentPropagationMinRowID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly) Class superclass;


-(BOOL)_isDesktopOrDocumentsItem:(id)arg0 ;
-(BOOL)_processParentAndFilenameIfNecessaryWithLocalItem:(id)arg0 changedFields:(NSUInteger)arg1 templateItem:(id)arg2 error:(*id)arg3 ;
-(BOOL)_shouldRejectItemWithName:(id)arg0 templateItem:(id)arg1 isDatalessDocument:(BOOL)arg2 existingItem:(id)arg3 ;
-(BOOL)_trashItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)_untrashItem:(id)arg0 toParentFileObjectID:(id)arg1 error:(*id)arg2 ;
-(BOOL)changeItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 newValues:(id)arg3 contents:(id)arg4 options:(NSUInteger)arg5 additionalAttrs:(id)arg6 clearCKInfoOnSyncUp:(BOOL)arg7 error:(*id)arg8 ;
-(id)_createAndInsertNewItemWithImportObject:(id)arg0 parentItem:(id)arg1 fields:(NSUInteger)arg2 templateItem:(id)arg3 fileURL:(id)arg4 options:(NSUInteger)arg5 additionalAttrs:(id)arg6 error:(*id)arg7 ;
-(id)_createBaseItemWithImportObject:(id)arg0 error:(*id)arg1 ;
-(id)_extractBookmarkDataFromTemplateItem:(id)arg0 isTrashBookmark:(*BOOL)arg1 ;
-(id)_findCollidingItemWithTemplateItem:(id)arg0 parentItem:(id)arg1 logicalName:(id)arg2 error:(*id)arg3 ;
-(id)_getOrCreateTrashItemInAppLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_globalItemByDocumentID:(unsigned int)arg0 ;
-(id)_globalItemByFileID:(NSUInteger)arg0 ;
-(id)_handleCollisionIfNecessaryWithTemplateItem:(id)arg0 parentItem:(id)arg1 logicalName:(id)arg2 fileURL:(id)arg3 options:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)_locateMatchingItemForTemplateItem:(id)arg0 parentItem:(id)arg1 logicalName:(id)arg2 options:(NSUInteger)arg3 fileURL:(id)arg4 fields:(*NSUInteger)arg5 shouldReject:(*BOOL)arg6 additionalAttrs:(id)arg7 error:(*id)arg8 ;
-(id)_locateTemplateItemFromFPFSImport:(id)arg0 fields:(*NSUInteger)arg1 ;
-(id)_parseBookmarkXattrsOnTemplateItemIfNecessary:(id)arg0 fileURL:(id)arg1 ;
-(id)_parseIdentityXattrsOnTemplateItemIfNecessary:(id)arg0 options:(NSUInteger)arg1 fileURL:(id)arg2 fields:(*NSUInteger)arg3 ;
-(id)createAndImportNewDirectoryWithLogicalName:(id)arg0 parentItem:(id)arg1 error:(*id)arg2 ;
-(id)importAppLibraryFromTemplateItem:(id)arg0 ;
-(id)importNewItemAtURL:(id)arg0 logicalName:(id)arg1 parentItem:(id)arg2 templateItem:(id)arg3 fields:(NSUInteger)arg4 options:(NSUInteger)arg5 additionalItemAttributes:(id)arg6 error:(*id)arg7 ;
-(id)initWithAccountSession:(id)arg0 ;
-(unsigned short)capabilityToMoveItem:(id)arg0 toNewParentItem:(id)arg1 error:(*id)arg2 ;
-(void)_changeBasicFieldsOnItem:(id)arg0 fields:(NSUInteger)arg1 template:(id)arg2 ;
-(void)_cleanItemBatchAfterMigrationToFPFSIfNecessary;
-(void)_learnEtagsIfNecessaryWithItem:(id)arg0 changedFields:(NSUInteger)arg1 baseVersion:(id)arg2 ;
-(void)_markNextChildBatchDead:(id)arg0 persistedState:(id)arg1 batchSize:(int)arg2 ;
-(void)_processIngestBatch:(id)arg0 minRowID:(NSUInteger)arg1 ;
-(void)_propagateFieldsToNextChildBatch:(id)arg0 persistedState:(id)arg1 minRowID:(NSUInteger)arg2 batchSize:(int)arg3 ;
-(void)_updateCiconiaDatabaseForBouncing:(id)arg0 existingItem:(id)arg1 ;
-(void)cancel;
-(void)close;
-(void)resume;
-(void)signal;
-(void)suspend;


@end


#endif