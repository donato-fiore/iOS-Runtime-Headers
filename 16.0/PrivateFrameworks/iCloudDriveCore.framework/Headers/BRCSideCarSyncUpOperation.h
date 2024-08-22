// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSIDECARSYNCUPOPERATION_H
#define BRCSIDECARSYNCUPOPERATION_H

@class BRCOperation, NSString;
@protocol BRCOperationSubclass;


#import "BRCAccountSession.h"

@interface BRCSideCarSyncUpOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCAccountSession *_session;
    BOOL _shouldPerformAnotherBatch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldPerformAnotherBatch;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)_itemsNeedingSyncUpEnumerator;
-(id)createActivity;
-(id)initWithSession:(id)arg0 ;
-(void)_markItemsFailedSync;
-(void)_syncUpRecordBatchWithModifiedRecords:(id)arg0 deletedRecordIDs:(id)arg1 recordIDToZoneMap:(id)arg2 requestID:(NSUInteger)arg3 ;
-(void)fakeSyncForItem:(id)arg0 itemRank:(NSUInteger)arg1 ;
-(void)main;


@end


#endif