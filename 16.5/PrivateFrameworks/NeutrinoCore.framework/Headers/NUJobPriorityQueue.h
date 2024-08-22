// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUJOBPRIORITYQUEUE_H
#define NUJOBPRIORITYQUEUE_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUJobQueue.h"

@interface NUJobPriorityQueue : NSObject {
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_currentlyExecutingJobName;
    BOOL _isRunning;
}


@property (readonly) NSInteger count;
@property (readonly) NSString *name; // ivar: _name


-(BOOL)_removeJob:(id)arg0 ;
-(BOOL)_runNextJob;
-(BOOL)removeJob:(id)arg0 ;
-(BOOL)start;
-(id)_popJob;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 owner:(id)arg1 qos:(unsigned int)arg2 ;
-(id)popJob;
-(void)_addJob:(id)arg0 ;
-(void)_run;
-(void)_sort;
-(void)_sortIfNeeded;
-(void)_startRunning;
-(void)addJob:(id)arg0 ;


@end


#endif