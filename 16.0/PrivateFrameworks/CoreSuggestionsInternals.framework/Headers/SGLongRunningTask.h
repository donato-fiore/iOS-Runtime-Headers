// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGLONGRUNNINGTASK_H
#define SGLONGRUNNINGTASK_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "SGLongRunningTaskManager.h"

@interface SGLongRunningTask : NSObject {
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    uint8_t _deferRequested;
}




-(BOOL)shouldDefer;
-(id)init;
-(id)initWithDeadline:(id)arg0 manager:(id)arg1 ;
-(void)markFinished;
-(void)requestDefer;


@end


#endif