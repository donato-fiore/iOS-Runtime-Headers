// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHACONTACTCLASSIFICATIONJOB_H
#define PHACONTACTCLASSIFICATIONJOB_H

@class NSProgress;
@protocol OS_dispatch_queue;


#import "PHAWorkerJob.h"
#import "PHAVisionServiceFaceProcessingWorker.h"

@interface PHAContactClassificationJob : PHAWorkerJob

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (nonatomic) BOOL done; // ivar: _done
@property (retain, nonatomic) PHAVisionServiceFaceProcessingWorker *faceProcessingWorker; // ivar: _faceProcessingWorker
@property (nonatomic) NSUInteger jobScenario; // ivar: _jobScenario
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress


-(BOOL)finished;
-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(float)completionScore;
-(id)initWithFaceProcessingWorker:(id)arg0 jobScenario:(NSUInteger)arg1 ;


@end


#endif