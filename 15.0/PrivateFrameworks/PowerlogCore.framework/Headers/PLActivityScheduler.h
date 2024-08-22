// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLACTIVITYSCHEDULER_H
#define PLACTIVITYSCHEDULER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLActivityScheduler : NSObject

@property (retain) NSMutableDictionary *activities; // ivar: _activities
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(id)init;
-(id)lastCompletedDateWithIdentifier:(id)arg0 ;
-(void)cancelActivityWithIdentifier:(id)arg0 ;
// -(void)scheduleActivityWithIdentifier:(id)arg0 withCriteria:(id)arg1 withMustRunCriterion:(id)arg2 withQueue:(id)arg3 withInterruptBlock:(id)arg4 withActivityBlock:(unk)arg5  ;


@end


#endif