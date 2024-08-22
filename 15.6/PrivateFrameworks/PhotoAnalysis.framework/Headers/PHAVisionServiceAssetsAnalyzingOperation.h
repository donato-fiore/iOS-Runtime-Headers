// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAVISIONSERVICEASSETSANALYZINGOPERATION_H
#define PHAVISIONSERVICEASSETSANALYZINGOPERATION_H

@class NSOperation;
@protocol PHAVisionServiceAssetsAnalyzingOperationDelegate, OS_dispatch_semaphore;


#import "PHAVisionServiceWorker.h"
#import "PHAAnalysisWorkerJob.h"

@interface PHAVisionServiceAssetsAnalyzingOperation : NSOperation {
    PHAVisionServiceWorker *_visionServiceWorker;
    PHAAnalysisWorkerJob *_job;
    id<PHAVisionServiceAssetsAnalyzingOperationDelegate> *_delegate;
    NSObject<OS_dispatch_semaphore> *_executionCompletionSemaphore;
    int _state;
}




+(id)operationForVisionServiceWorker:(id)arg0 job:(id)arg1 ;
-(id)delegate;
-(id)initWithVisionServiceWorker:(id)arg0 job:(id)arg1 ;
-(id)job;
-(id)visionServiceWorker;
-(void)cancelAndWaitForCompletion;
-(void)main;
-(void)setDelegate:(id)arg0 ;


@end


#endif