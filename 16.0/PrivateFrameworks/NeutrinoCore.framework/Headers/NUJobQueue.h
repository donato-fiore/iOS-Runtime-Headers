// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUJOBQUEUE_H
#define NUJOBQUEUE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUJobPriorityQueue.h"

@interface NUJobQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_interactiveQueue;
    NUJobPriorityQueue *_initiatedQueue;
    NSInteger _updateGroupLevel;
    NSString *_name;
}


@property (readonly) NSInteger stage; // ivar: _stage


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithStage:(NSInteger)arg0 name:(id)arg1 ;
-(void)_addJob:(id)arg0 ;
-(void)_addJobs:(id)arg0 ;
-(void)_decrementGroupLevel;
-(void)_finishedPriorityQueue:(id)arg0 ;
-(void)_incrementGroupLevel;
-(void)_removeJob:(id)arg0 ;
-(void)_startRunningIfNeeded;
-(void)addJob:(id)arg0 ;
-(void)addJobs:(id)arg0 ;
-(void)finishedPriorityQueue:(id)arg0 ;
-(void)removeJob:(id)arg0 ;


@end


#endif