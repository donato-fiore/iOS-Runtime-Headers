// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCDOWNLOADTHUMBNAILSBATCHOPERATION_H
#define BRCDOWNLOADTHUMBNAILSBATCHOPERATION_H



#import "BRCTransferBatchOperation.h"

@interface BRCDownloadThumbnailsBatchOperation : BRCTransferBatchOperation

@property (copy) id *perDownloadCompletionBlock; // ivar: _perDownloadCompletionBlock


-(id)actionPrettyName;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg0 ;
-(id)transferredObjectsPrettyName;
-(void)addDownload:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)mainWithTransfers:(id)arg0 ;
-(void)sendTransferCompletionCallBack:(id)arg0 error:(id)arg1 ;


@end


#endif