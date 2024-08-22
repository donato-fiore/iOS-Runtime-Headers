// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPERSONBUILDINGJOB_H
#define PHAPERSONBUILDINGJOB_H

@class NSOperationQueue, NSString;
@protocol PHAPersonBuildingJobOperationDelegate;


#import "PHAVisionServiceFaceProcessingWorkerAdditionalJob.h"
#import "PHAPersonBuildingJobOperation.h"

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAPersonBuildingJobOperationDelegate>

 {
    NSOperationQueue *_operationQueue;
    PHAPersonBuildingJobOperation *_personBuildingOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)startJob:(*id)arg0 ;
-(BOOL)stopJob:(*id)arg0 ;
-(float)completionScore;
-(id)initWithFaceProcessingWorker:(id)arg0 jobScenario:(NSUInteger)arg1 ;
-(void)operationDidProgress:(id)arg0 ;


@end


#endif