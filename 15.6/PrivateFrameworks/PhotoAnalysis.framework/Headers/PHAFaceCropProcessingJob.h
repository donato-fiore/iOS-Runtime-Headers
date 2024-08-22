// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAFACECROPPROCESSINGJOB_H
#define PHAFACECROPPROCESSINGJOB_H

@class NSOperationQueue, NSString;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;


#import "PHAVisionServiceFaceProcessingWorkerAdditionalJob.h"
#import "PHAFaceCropProcessingJobProcessFaceCropsOperation.h"

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate>

 {
    NSOperationQueue *_operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation *_processingOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)startJob:(*id)arg0 ;
-(BOOL)stopJob:(*id)arg0 ;
-(float)completionScore;
-(id)initWithFaceProcessingWorker:(id)arg0 jobScenario:(NSUInteger)arg1 dirtyFaceCrops:(id)arg2 ;
-(void)operation:(id)arg0 didProcessFaceCrop:(id)arg1 withError:(id)arg2 ;


@end


#endif