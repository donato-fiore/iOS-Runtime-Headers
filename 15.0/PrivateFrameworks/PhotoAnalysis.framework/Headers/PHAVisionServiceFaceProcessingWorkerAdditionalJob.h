// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAVISIONSERVICEFACEPROCESSINGWORKERADDITIONALJOB_H
#define PHAVISIONSERVICEFACEPROCESSINGWORKERADDITIONALJOB_H



#import "PHAWorkerJob.h"
#import "PHAVisionServiceFaceProcessingWorker.h"

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob {
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSUInteger _jobScenario;
    BOOL _isFinished;
}




-(BOOL)finished;
-(BOOL)startJob:(*id)arg0 ;
-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopJob:(*id)arg0 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)jobScenario;
-(id)faceProcessingWorker;
-(id)initWithFaceProcessingWorker:(id)arg0 jobScenario:(NSUInteger)arg1 ;
-(id)photoLibrary;
-(void)markAsFinished;


@end


#endif