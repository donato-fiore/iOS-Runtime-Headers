// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCRECURSIVELISTDIRECTORYCONTENTSOPERATION_H
#define BRCRECURSIVELISTDIRECTORYCONTENTSOPERATION_H

@class NSMutableSet, NSMutableArray;
@protocol BRCListOperationDelegate;


#import "BRCAutoCancelOperation.h"
#import "BRCServerZone.h"
#import "BRCItemID.h"
#import "BRCListDirectoryContentsOperation.h"

@interface BRCRecursiveListDirectoryContentsOperation : BRCAutoCancelOperation <BRCListOperationDelegate>

 {
    BRCServerZone *_serverZone;
    NSMutableSet *_itemsToList;
    BRCItemID *_rootItemID;
    BRCListDirectoryContentsOperation *_activeListOp;
    NSMutableSet *_itemsFailedListing;
    NSMutableArray *_recursiveListCompletionBlocks;
}


@property (nonatomic) BOOL rescheduleApply; // ivar: _rescheduleApply


-(BOOL)_finishIfBlockedFromListing;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithItemID:(id)arg0 zone:(id)arg1 isUserWaiting:(BOOL)arg2 ;
-(void)addRecursiveDirectoryListCompletionBlock:(id)arg0 ;
-(void)cancel;
-(void)fetchNextItemToList;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)listNextItem;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)listOrFetchNextItem;
-(void)main;


@end


#endif