// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCLISTDIRECTORYCONTENTSOPERATION_H
#define BRCLISTDIRECTORYCONTENTSOPERATION_H

@class CKRecordID, NSMutableArray, NSHashTable, CKQueryOperation;


#import "BRCAutoCancelOperation.h"
#import "BRCServerZone.h"
#import "BRCItemID.h"

@interface BRCListDirectoryContentsOperation : BRCAutoCancelOperation {
    BRCServerZone *_serverZone;
    CKRecordID *_recordID;
    unsigned int _batchSize;
    NSUInteger _recordsFetched;
    NSUInteger _recordsFetchedTotalMetadataSize;
    NSUInteger _xattrsFetchedTotalSize;
    NSMutableArray *_listCompletionBlocks;
    NSMutableArray *_preFlushListCompletionBlocks;
    NSHashTable *_delegates;
    BOOL _hasNilDelegate;
    CKQueryOperation *_queryOp;
}


@property (readonly, nonatomic) BRCItemID *folderToList; // ivar: _itemID
@property (nonatomic) BOOL rescheduleApply; // ivar: _rescheduleApply


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithItemID:(id)arg0 zone:(id)arg1 isUserWaiting:(BOOL)arg2 ;
-(void)_cursorWasUpdated:(id)arg0 subResourcesOp:(id)arg1 ;
-(void)_scheduleQueryOp;
-(void)_waitForFlushAndRescheduleApplyIfNecessaryWithError:(id)arg0 ;
-(void)addDirectoryListCompletionBlock:(id)arg0 ;
-(void)addPreFlushDirectoryListCompletionBlock:(id)arg0 ;
-(void)beginObservingChangesWithDelegate:(id)arg0 ;
-(void)cancelToBeReplacedByOperation:(id)arg0 ;
-(void)endObservingChangesWithDelegate:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif