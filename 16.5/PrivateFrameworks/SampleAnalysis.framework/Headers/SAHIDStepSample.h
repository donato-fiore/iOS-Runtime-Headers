// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAHIDSTEPSAMPLE_H
#define SAHIDSTEPSAMPLE_H


#import <Foundation/Foundation.h>

#import "SATask.h"
#import "SAThread.h"
#import "SATimestamp.h"

@interface SAHIDStepSample : NSObject {
    SATask *_task;
    SAThread *_thread;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    NSUInteger _startSampleIndex;
    NSUInteger _endSampleIndex;
}




-(id)debugDescription;


@end


#endif