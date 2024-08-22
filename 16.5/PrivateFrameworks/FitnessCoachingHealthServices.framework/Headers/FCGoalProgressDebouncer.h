// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCGOALPROGRESSDEBOUNCER_H
#define FCGOALPROGRESSDEBOUNCER_H

@protocol OS_dispatch_queue, OS_dispatch_source, FCGoalProgressDebouncerDelegate;

#import <Foundation/Foundation.h>


@interface FCGoalProgressDebouncer : NSObject {
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_source> *_timer;
}


@property (weak, nonatomic) NSObject<FCGoalProgressDebouncerDelegate> *delegate; // ivar: _delegate


-(BOOL)inProgress;
-(id)initWithServiceQueue:(id)arg0 ;
-(void)_handleTimerFired;
-(void)debounce;


@end


#endif