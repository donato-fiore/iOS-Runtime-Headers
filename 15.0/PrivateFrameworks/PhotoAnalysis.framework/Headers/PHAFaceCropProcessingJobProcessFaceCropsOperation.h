// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAFACECROPPROCESSINGJOBPROCESSFACECROPSOPERATION_H
#define PHAFACECROPPROCESSINGJOBPROCESSFACECROPSOPERATION_H

@class NSOperation, NSArray;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;


#import "PHAVisionServiceFaceProcessingWorker.h"

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {
    id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> *_delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSArray *_faceCrops;
    NSUInteger _totalSteps;
    NSUInteger _currentStep;
}




-(float)percentComplete;
-(id)delegate;
-(id)initWithFaceProcessingWorker:(id)arg0 faceCrops:(id)arg1 ;
-(void)main;
-(void)setDelegate:(id)arg0 ;


@end


#endif