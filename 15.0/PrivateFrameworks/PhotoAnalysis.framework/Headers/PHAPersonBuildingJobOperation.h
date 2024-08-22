// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAPERSONBUILDINGJOBOPERATION_H
#define PHAPERSONBUILDINGJOBOPERATION_H

@class NSOperation, PVCanceler, NSProgress;
@protocol PHAPersonBuildingJobOperationDelegate;


#import "PHAVisionServiceFaceProcessingWorker.h"

@interface PHAPersonBuildingJobOperation : NSOperation {
    id<PHAPersonBuildingJobOperationDelegate> *_delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    PVCanceler *_canceler;
    NSProgress *_progress;
    float _percentComplete;
}




-(float)percentComplete;
-(id)delegate;
-(id)initWithFaceProcessingWorker:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif