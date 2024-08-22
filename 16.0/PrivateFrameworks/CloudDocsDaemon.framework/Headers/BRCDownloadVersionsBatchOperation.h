// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDOWNLOADVERSIONSBATCHOPERATION_H
#define BRCDOWNLOADVERSIONSBATCHOPERATION_H

@class NSMutableDictionary;


#import "BRCTransferBatchOperation.h"

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {
    NSMutableDictionary *_readers;
}


@property (copy) id *perDownloadCompletionBlock; // ivar: _perDownloadCompletionBlock


-(id)actionPrettyName;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg0 forNonLocalVersion:(BOOL)arg1 ;
-(id)transferredObjectsPrettyName;
-(void)addDownload:(id)arg0 ;
-(void)addReaderID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelReaderID:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)mainWithTransfers:(id)arg0 ;
-(void)sendTransferCompletionCallBack:(id)arg0 error:(id)arg1 ;


@end


#endif