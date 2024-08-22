// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADSERVICEIMAGEPROCESSINGTASK_H
#define VCPMADSERVICEIMAGEPROCESSINGTASK_H

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;


#import "VCPMABaseTask.h"
#import "VCPMADServiceImageAsset.h"

@interface VCPMADServiceImageProcessingTask : VCPMABaseTask {
    NSArray *_requests;
    VCPMADServiceImageAsset *_asset;
    NSMutableArray *_subtasks;
    NSObject<OS_dispatch_queue> *_cancelQueue;
}


@property (retain, nonatomic) NSString *signpostPayload; // ivar: _signpostPayload


// +(id)taskWithRequests:(id)arg0 forAsset:(id)arg1 cancelBlock:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(BOOL)cachesResources;
-(BOOL)run:(*id)arg0 ;
// -(id)initWithRequests:(id)arg0 forAsset:(id)arg1 cancelBlock:(id)arg2 andCompletionHandler:(unk)arg3  ;
-(void)cancel;


@end


#endif