// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RERELEVANCEENGINESUBSYSTEM_H
#define RERELEVANCEENGINESUBSYSTEM_H

@class NSString;
@protocol RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "REActivityTracker.h"
#import "RERelevanceEngine.h"

@interface RERelevanceEngineSubsystem : NSObject <RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate>

 {
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    REActivityTracker *_activityTracker;
    BOOL _running;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) RERelevanceEngine *relevanceEngine; // ivar: _relevanceEngine
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;


-(id)initWithRelevanceEngine:(id)arg0 ;
-(void)activityTracker:(id)arg0 didBeginActivity:(id)arg1 ;
-(void)activityTracker:(id)arg0 didEndActivity:(id)arg1 ;
-(void)beginActivity:(id)arg0 forObject:(id)arg1 ;
-(void)dealloc;
-(void)endActivity:(id)arg0 forObject:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)trackObject:(id)arg0 ;
-(void)withdrawObject:(id)arg0 ;


@end


#endif