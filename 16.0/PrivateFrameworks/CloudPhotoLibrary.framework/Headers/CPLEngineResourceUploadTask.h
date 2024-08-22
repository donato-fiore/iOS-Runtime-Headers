// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINERESOURCEUPLOADTASK_H
#define CPLENGINERESOURCEUPLOADTASK_H

@protocol CPLEngineTransportTask;


#import "CPLResourceTransferTask.h"
#import "CPLResource.h"

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask

@property (nonatomic, getter=isBackgroundTask) BOOL backgroundTask; // ivar: _backgroundTask
@property (retain, nonatomic) CPLResource *cloudResource; // ivar: _cloudResource
@property (retain, nonatomic) NSObject<CPLEngineTransportTask> *transportTask; // ivar: _transportTask




@end


#endif