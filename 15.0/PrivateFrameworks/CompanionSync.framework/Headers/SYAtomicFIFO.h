// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYATOMICFIFO_H
#define SYATOMICFIFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SYAtomicFIFO : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_store;
}


@property (readonly) id *head;
@property (readonly) id *tail;


-(id)dequeue;
-(id)dequeueUntil:(id)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)enqueue:(id)arg0 ;
-(void)removeAllObjects;


@end


#endif