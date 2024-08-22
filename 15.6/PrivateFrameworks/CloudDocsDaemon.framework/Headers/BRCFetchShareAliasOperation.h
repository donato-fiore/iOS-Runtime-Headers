// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCFETCHSHAREALIASOPERATION_H
#define BRCFETCHSHAREALIASOPERATION_H

@class BRCOperation, CKRecordID, NSMutableArray, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerZone.h"
#import "BRCItemID.h"
#import "BRCItemGlobalID.h"

@interface BRCFetchShareAliasOperation : BRCOperation <BRCOperationSubclass>

 {
    CKRecordID *_recordID;
    BRCServerZone *_serverZone;
    BRCItemID *_parentItemID;
    NSMutableArray *_fetchShareAliasCompletionBlocks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCItemGlobalID *targetItemID; // ivar: _targetItemID


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithTarget:(id)arg0 aliasZone:(id)arg1 isUserWaiting:(BOOL)arg2 ;
-(void)_performAfterFetchingAlias:(id)arg0 ;
-(void)addFetchShareAliasCompletionBlock:(id)arg0 ;
-(void)cancelToBeReplacedByOperation:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif