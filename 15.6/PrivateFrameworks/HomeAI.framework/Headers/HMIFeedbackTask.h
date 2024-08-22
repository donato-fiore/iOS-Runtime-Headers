// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFEEDBACKTASK_H
#define HMIFEEDBACKTASK_H

@class HMFOperation;


#import "HMITask.h"

@interface HMIFeedbackTask : HMITask {
    HMFOperation *_operation;
}




-(id)initWithTaskID:(int)arg0 cameraProfileUUID:(id)arg1 clipUUID:(id)arg2 ;
-(void)mainInsideAutoreleasePool;


@end


#endif