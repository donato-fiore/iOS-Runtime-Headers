// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAQUEUE_H
#define NAQUEUE_H

@class NSMutableArray, NSArray;
@protocol NAQueueingStrategy;

#import <Foundation/Foundation.h>


@interface NAQueue : NSObject {
    NSMutableArray *_buffer;
    id<NAQueueingStrategy> *_strategy;
}


@property (readonly) NSArray *allObjects;
@property (readonly) NSUInteger count;


+(id)boundedQueueWithCapacity:(NSUInteger)arg0 ;
+(id)boundedQueueWithCapacity:(NSUInteger)arg0 overflowHandler:(id)arg1 ;
+(id)priorityQueueWithComparator:(id)arg0 ;
-(id)dequeue;
-(id)drain;
-(id)init;
-(id)initWithStrategy:(id)arg0 ;
-(id)peek;
-(void)dequeueObject:(id)arg0 ;
-(void)enqueue:(id)arg0 ;


@end


#endif