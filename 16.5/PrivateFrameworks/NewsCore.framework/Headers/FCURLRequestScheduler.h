// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCURLREQUESTSCHEDULER_H
#define FCURLREQUESTSCHEDULER_H

@class NSURLSession, NSMutableOrderedSet, NSMapTable, NFUnfairLock, NSDate;

#import <Foundation/Foundation.h>


@interface FCURLRequestScheduler : NSObject {
    NSURLSession *_URLSession;
    NSMutableOrderedSet *_requests;
    NSMapTable *_inFlightURLTasks;
    NSUInteger _maxInFlightURLTasks;
    NSUInteger _maxInFlightLowPriorityURLTasks;
    NFUnfairLock *_lock;
    NSDate *_dateOfLastProgress;
}




-(id)initWithURLSession:(id)arg0 ;
-(id)scheduleURLRequest:(id)arg0 destination:(NSInteger)arg1 priority:(NSInteger)arg2 loggingKey:(id)arg3 completion:(id)arg4 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif