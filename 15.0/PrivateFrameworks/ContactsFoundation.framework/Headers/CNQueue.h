// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNQUEUE_H
#define CNQUEUE_H

@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

#import <Foundation/Foundation.h>


@interface CNQueue : NSObject

@property (readonly) NSArray *allObjects;
@property (readonly, nonatomic) NSMutableArray *buffer; // ivar: _buffer
@property (readonly) NSUInteger count;
@property (readonly, nonatomic) NSObject<CNQueueingStrategy> *strategy; // ivar: _strategy


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
-(void)enqueueObjectsFromArray:(id)arg0 ;


@end


#endif