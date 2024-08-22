// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCTRANSFERBATCHOPERATION_H
#define BRCTRANSFERBATCHOPERATION_H

@class BRCOperation, NSMutableDictionary, NSString;
@protocol BRCOperationSubclass, OS_dispatch_queue, OS_dispatch_group;



@interface BRCTransferBatchOperation : BRCOperation <BRCOperationSubclass>

 {
    NSMutableDictionary *_entriesByRecordID;
    NSMutableDictionary *_entriesBySecondaryRecordID;
    NSMutableDictionary *_entriesByTransferID;
    NSUInteger _itemsCount;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *didProgressBlock; // ivar: _didProgressBlock
@property NSUInteger doneSize; // ivar: _doneSize
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger itemsCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *pendingGroup; // ivar: _pendingGroup
@property (readonly) Class superclass;
@property NSUInteger totalSize; // ivar: _totalSize


-(BOOL)shouldRetryForError:(id)arg0 ;
-(CGFloat)progressForTransferID:(id)arg0 ;
-(id)_finishedTransferForRecord:(id)arg0 recordID:(id)arg1 error:(id)arg2 ;
-(id)actionPrettyName;
-(id)createActivity;
-(id)fetchOperationForTransfers:(id)arg0 traceCode:(int)arg1 ;
-(id)initWithName:(id)arg0 syncContext:(id)arg1 ;
-(id)initWithName:(id)arg0 syncContext:(id)arg1 group:(id)arg2 ;
-(id)subclassableDescriptionWithContext:(id)arg0 ;
-(id)transferredObjectsPrettyName;
-(void)_addTransfer:(id)arg0 ;
-(void)_cancelTransferID:(id)arg0 ;
-(void)_finishedTransfer:(id)arg0 error:(id)arg1 ;
-(void)_setProgress:(CGFloat)arg0 forTransfer:(id)arg1 ;
-(void)addAliasItem:(id)arg0 toTransferWithID:(id)arg1 ;
-(void)addTransfer:(id)arg0 ;
-(void)cancelTransferID:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)finishedTransferForRecord:(id)arg0 recordID:(id)arg1 error:(id)arg2 ;
-(void)main;
-(void)mainWithTransfers:(id)arg0 ;
-(void)sendBatchProgressedCallback;
-(void)sendTransferCompletionCallBack:(id)arg0 error:(id)arg1 ;
-(void)setProgress:(CGFloat)arg0 forRecordID:(id)arg1 ;


@end


#endif