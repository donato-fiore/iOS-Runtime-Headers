// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINERESOURCEDOWNLOADTASK_H
#define CPLENGINERESOURCEDOWNLOADTASK_H

@class NSMutableArray, NSString, NSData;
@protocol CPLEngineTransportResourcesDownloadTask;


#import "CPLResourceTransferTask.h"
#import "CPLPlaceholderRecord.h"
#import "CPLResource.h"

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    NSMutableArray *_stateProgressDates;
    NSString *_activeQueuesStatusAtEnqueingTime;
    NSUInteger _preemptingCount;
}


@property (readonly, copy, nonatomic) id *cancelHandler; // ivar: _cancelHandler
@property (nonatomic, getter=isCancelledByEngine) BOOL cancelledByEngine; // ivar: _cancelledByEngine
@property (retain, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (readonly, nonatomic) CPLPlaceholderRecord *cloudRecord; // ivar: _cloudRecord
@property (readonly, nonatomic) CPLResource *cloudResource; // ivar: _cloudResource
@property (readonly, copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy, nonatomic) id *didStartHandler; // ivar: _didStartHandler
@property (readonly, copy, nonatomic) id *launchHandler; // ivar: _launchHandler
@property (readonly, copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) NSUInteger taskIdentifierForQueue; // ivar: _taskIdentifierForQueue
@property (copy, nonatomic) NSString *transportIdentifier; // ivar: _transportIdentifier
@property (retain, nonatomic) NSData *transportScope; // ivar: _transportScope
@property (weak, nonatomic) NSObject<CPLEngineTransportResourcesDownloadTask> *transportTask; // ivar: _transportTask
@property (readonly, nonatomic) BOOL willGenerateReport;


+(NSUInteger)maximumResourceDownloadSizeForResourceType:(NSUInteger)arg0 ;
+(void)initialize;
// -(id)initWithResource:(id)arg0 taskIdentifier:(id)arg1 launchHandler:(id)arg2 cancelHandler:(unk)arg3 didStartHandler:(id)arg4 progressHandler:(unk)arg5 completionHandler:(id)arg6  ;
-(void)associateCloudResource:(id)arg0 ofRecord:(id)arg1 ;
-(void)cancelTask;
-(void)launch;
-(void)noteActiveQueuesStatusAtEnqueingTime:(id)arg0 ;
-(void)noteStateDidProgress:(NSUInteger)arg0 ;
-(void)noteTaskHasBeenPreempted;


@end


#endif