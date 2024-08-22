// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NURENDERCONTEXT_H
#define NURENDERCONTEXT_H

@class NSPointerArray, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NURenderNode.h"

@interface NURenderContext : NSObject {
    NSPointerArray *_jobs;
    NSMutableArray *_rateLimitedJobs;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly) NSInteger jobCount;
@property (readonly) NSArray *jobs;
@property (retain) NURenderNode *lastPrepareNode; // ivar: _lastPrepareNode
@property (retain) NURenderNode *lastRenderNode; // ivar: _lastRenderNode
@property CGFloat minimumRenderInterval; // ivar: _minimumRenderInterval
@property NSUInteger nextRenderTime; // ivar: _nextRenderTime
@property (readonly, nonatomic) NSInteger purpose; // ivar: _purpose
@property (nonatomic) BOOL shouldCoalesceUpdates; // ivar: _shouldCoalesceUpdates


-(id)_dequeueRateLimitedJob;
-(id)debugDescription;
-(id)dequeueRateLimitedJob;
-(id)init;
-(id)initWithPurpose:(NSInteger)arg0 ;
-(void)_cancelAllJobs;
-(void)_enqueueRateLimitedJob:(id)arg0 ;
-(void)_jobFinished:(id)arg0 ;
-(void)_removeJob:(id)arg0 ;
-(void)addJob:(id)arg0 ;
-(void)cancelAllJobs;
-(void)cancelAllRequests;
-(void)enqueueRateLimitedJob:(id)arg0 ;
-(void)removeJob:(id)arg0 ;
-(void)updateNextRenderTimeFromTime:(NSUInteger)arg0 ;


@end


#endif