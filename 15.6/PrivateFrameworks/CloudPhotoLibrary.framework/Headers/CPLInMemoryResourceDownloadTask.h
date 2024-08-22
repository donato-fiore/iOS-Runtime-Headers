// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLINMEMORYRESOURCEDOWNLOADTASK_H
#define CPLINMEMORYRESOURCEDOWNLOADTASK_H

@protocol OS_dispatch_queue, CPLEngineTransportTask;


#import "CPLResourceTransferTask.h"
#import "CPLPlaceholderRecord.h"
#import "CPLResource.h"

@interface CPLInMemoryResourceDownloadTask : CPLResourceTransferTask {
    NSObject<OS_dispatch_queue> *_queue;
    id<CPLEngineTransportTask> *_transportTask;
}


@property (readonly, nonatomic) CPLPlaceholderRecord *cloudRecord; // ivar: _cloudRecord
@property (readonly, nonatomic) CPLResource *cloudResource; // ivar: _cloudResource
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) id *launchHandler; // ivar: _launchHandler


+(id)failedTaskForResource:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
// -(id)initWithResource:(id)arg0 taskIdentifier:(id)arg1 launchHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)associateCloudResource:(id)arg0 ofRecord:(id)arg1 ;
-(void)cancelTask;
-(void)finishWithData:(id)arg0 error:(id)arg1 ;
-(void)launch;
-(void)launchTransportTask:(id)arg0 ;


@end


#endif