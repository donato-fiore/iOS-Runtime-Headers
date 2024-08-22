// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTXRESOURCETRACKER_H
#define DTXRESOURCETRACKER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "DTXResourceTracker.h"

@interface DTXResourceTracker : NSObject {
    NSUInteger _total;
    NSUInteger _maxChunk;
    NSUInteger _used;
    unsigned int _waiting;
    unsigned int _acquireNum;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_acqSem;
    DTXResourceTracker *_parentTracker;
}


@property (nonatomic) BOOL log; // ivar: _log
@property (nonatomic) NSUInteger maxChunkSize;
@property (nonatomic) NSUInteger totalSize;


-(id)init;
-(unsigned int)acquireSize:(NSUInteger)arg0 ;
-(void)forceAcquireSize:(NSUInteger)arg0 ;
-(void)releaseSize:(NSUInteger)arg0 ;
-(void)resumeLimits;
-(void)suspendLimits;


@end


#endif