// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSEVENTQUEUELOCK_H
#define BSEVENTQUEUELOCK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BSEventQueue.h"

@interface BSEventQueueLock : NSObject {
    BOOL _relinquished;
    BSEventQueue *_eventQueue;
}


@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


-(id)description;
-(id)initWithEventQueue:(id)arg0 reason:(id)arg1 ;
-(void)dealloc;
-(void)relinquish;


@end


#endif