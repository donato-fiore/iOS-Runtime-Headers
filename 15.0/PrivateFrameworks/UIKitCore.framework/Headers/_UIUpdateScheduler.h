// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIUPDATESCHEDULER_H
#define _UIUPDATESCHEDULER_H

@class CADynamicFrameRateSource;

#import <Foundation/Foundation.h>


@interface _UIUpdateScheduler : NSObject {
    CADynamicFrameRateSource *_frameSource;
    unsigned int _frameToken;
    NSUInteger _minFrameDuration;
    _UIUpdateInputInternal _implicitTransactionInput;
    _UIUpdateInputInternal _displayLinksInput;
    _UIUpdateInputInternal _requestsInput;
    *__CFRunLoopObserver _runloopObserver;
    int _stage;
    _UIUpdateTiming _timing;
    NSUInteger _earliestModelTime;
    _UIMachTimer _readyTimer;
    NSUInteger _readyTime;
}




-(id)init;


@end


#endif