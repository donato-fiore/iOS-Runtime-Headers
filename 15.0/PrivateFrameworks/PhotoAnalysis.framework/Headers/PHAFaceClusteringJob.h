// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAFACECLUSTERINGJOB_H
#define PHAFACECLUSTERINGJOB_H



#import "PHAVisionServiceFaceProcessingWorkerAdditionalJob.h"
#import "PHAVisionServiceFaceProcessingWorkerJobKeepAlive.h"

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob {
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
}




-(BOOL)startJob:(*id)arg0 ;
-(BOOL)stopJob:(*id)arg0 ;
-(float)completionScore;
-(id)initWithFaceProcessingWorker:(id)arg0 jobScenario:(NSUInteger)arg1 ;
-(void)_handleClusteringCompletion;
-(void)_startJobKeepAlive;
-(void)_stopJobKeepAlive;


@end


#endif