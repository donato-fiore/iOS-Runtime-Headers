// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCLOCATERECORDOPERATION_H
#define BRCLOCATERECORDOPERATION_H

@class BRCOperation, CKRecordID, NSMutableArray, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerZone.h"

@interface BRCLocateRecordOperation : BRCOperation <BRCOperationSubclass>

 {
    NSUInteger _recordsFetched;
    NSUInteger _recordsFetchedTotalMetadataSize;
    NSUInteger _xattrsFetchedTotalSize;
    CKRecordID *_structureRecordID;
    BRCServerZone *_serverZone;
    BOOL _exists;
    NSMutableArray *_locateRecordCompletionBlocks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithRecordID:(id)arg0 serverZone:(id)arg1 isUserWaiting:(BOOL)arg2 ;
-(void)_performAfterLocatingRecord:(id)arg0 ;
-(void)addLocateRecordCompletionBlock:(id)arg0 ;
-(void)cancelToBeReplacedByOperation:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif