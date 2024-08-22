// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAMEDIAANALYSISDTURBOJOB_H
#define PHAMEDIAANALYSISDTURBOJOB_H

@class PHPhotoLibrary;


#import "PHAWorkerJob.h"

@interface PHAMediaAnalysisdTurboJob : PHAWorkerJob {
    os_unfair_lock_s _lock;
    PHPhotoLibrary *_library;
    int _requestId;
    BOOL _complete;
}




-(BOOL)finished;
-(BOOL)startProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stopProcessingOnWorker:(id)arg0 withError:(*id)arg1 ;
-(float)completionScore;
-(id)initWithWorkerType:(short)arg0 scenario:(NSUInteger)arg1 library:(id)arg2 ;
-(void)requestCompleted;


@end


#endif