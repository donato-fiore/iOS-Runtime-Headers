// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDINMEMORYDOWNLOADTASK_H
#define PLCLOUDINMEMORYDOWNLOADTASK_H

@class NSMapTable, NSString, NSArray, CPLResourceTransferTask;

#import <Foundation/Foundation.h>


@interface PLCloudInMemoryDownloadTask : NSObject {
    NSMapTable *_taskIDsToCompletionHandlers;
}


@property (readonly, nonatomic, getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy, nonatomic) NSString *resourceID; // ivar: _resourceID
@property (readonly, weak, nonatomic) NSArray *taskIDs;
@property (retain, nonatomic) CPLResourceTransferTask *transferTask; // ivar: _transferTask


-(id)initWithResourceID:(id)arg0 taskID:(id)arg1 completionHandler:(id)arg2 ;
-(void)addClientWithTaskID:(id)arg0 completionHandler:(id)arg1 ;
-(void)cancelClientWithTaskID:(id)arg0 ;
-(void)reportCompletionWithData:(id)arg0 error:(id)arg1 ;


@end


#endif