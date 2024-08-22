// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTACK_H
#define SASTACK_H

@class NSMutableArray, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SATimestamp.h"

@interface SAStack : NSObject {
    BOOL _omit;
    BOOL _isMainThread;
    BOOL _isTargetThread;
    BOOL _isIdleWorkQueue;
    BOOL _threadNameChanges;
    BOOL _isProcessorIdleThread;
    BOOL _isGlobalForcedIdleThread;
    int _minPriority;
    int _maxPriority;
    int _minBasePriority;
    int _maxBasePriority;
    NSUInteger _count;
    NSMutableArray *_dispatchQueues;
    NSMutableArray *_swiftTasks;
    NSMutableArray *_threadIds;
    NSString *_threadName;
    NSUInteger _firstSampleIndex;
    NSUInteger _lastSampleIndex;
    SATimestamp *_timeWhenFirstAttemptedToSample;
    NSUInteger _cpuTimeNs;
    NSUInteger _cpuInstructions;
    NSUInteger _cpuCycles;
    NSMutableArray *_rootObjects;
    NSMutableDictionary *_binaryImagesHitByTask;
    NSUInteger _ioSize;
    NSUInteger _numIOs;
}






@end


#endif