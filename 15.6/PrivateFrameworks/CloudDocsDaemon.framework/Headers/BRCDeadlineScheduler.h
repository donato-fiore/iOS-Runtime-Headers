// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCDEADLINESCHEDULER_H
#define BRCDEADLINESCHEDULER_H

@class NSString;
@protocol BRCLifeCycle, BRCSuspendable, OS_dispatch_workloop, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BRCMinHeap.h"
#import "BRCFairSource.h"
#import "BRCFairScheduler.h"

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle, BRCSuspendable>

 {
    NSObject<OS_dispatch_workloop> *_workloop;
    BRCMinHeap *_minHeap;
    NSString *_name;
    BRCFairSource *_source;
    NSObject<OS_dispatch_source> *_delay;
    NSInteger _lastSchedule;
    BOOL _isResumed;
}


@property (nonatomic) NSInteger coalescingLeeway; // ivar: _leeway
@property (copy, nonatomic) id *computeNextAdmissibleDateForScheduling; // ivar: _computeNextAdmissibleDateForScheduling
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCFairScheduler *fairScheduler; // ivar: _fairScheduler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;


-(BOOL)_setupTimerRequiredForDeadline:(NSInteger)arg0 now:(NSInteger)arg1 ;
-(id)initWithName:(id)arg0 fairScheduler:(id)arg1 ;
-(void)_close;
-(void)_schedule;
-(void)addSource:(id)arg0 deadline:(NSInteger)arg1 ;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)resume;
-(void)runDeadlineSource:(id)arg0 completionHandler:(id)arg1 ;
-(void)signal;
-(void)suspend;


@end


#endif