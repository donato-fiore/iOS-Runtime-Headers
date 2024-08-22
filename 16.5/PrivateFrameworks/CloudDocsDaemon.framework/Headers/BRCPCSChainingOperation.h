// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPCSCHAININGOPERATION_H
#define BRCPCSCHAININGOPERATION_H

@class BRCOperation, NSString;
@protocol BRCListOperationDelegate, BRCOperationSubclass;


#import "BRCAppLibrary.h"
#import "BRCServerItem.h"
#import "BRCListDirectoryContentsOperation.h"

@interface BRCPCSChainingOperation : BRCOperation <BRCListOperationDelegate, BRCOperationSubclass>

 {
    BRCAppLibrary *_appLibrary;
    BRCServerItem *_rootItem;
    BOOL _completed;
    NSUInteger _batchSize;
    int _tryCount;
    BOOL _syncDownBeforeRetry;
    NSUInteger _chainedRecordsCount;
    BRCListDirectoryContentsOperation *_listOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pcsChainCompletionBlock; // ivar: _pcsChainCompletionBlock
@property (nonatomic) BOOL shouldFillBatch; // ivar: _shouldFillBatch
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithRootItem:(id)arg0 appLibrary:(id)arg1 ;
-(void)_buildRecordListWithCompletion:(id)arg0 ;
-(void)_chainRecords;
-(void)_sendRecordBatch:(id)arg0 completion:(id)arg1 ;
-(void)_sendRecordBatch:(id)arg0 recursed:(BOOL)arg1 completion:(id)arg2 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)main;


@end


#endif