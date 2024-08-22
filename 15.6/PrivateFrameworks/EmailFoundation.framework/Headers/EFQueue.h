// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EFQUEUE_H
#define EFQUEUE_H

@class NSArray, NSMutableArray;
@protocol EFQueueingStrategy;

#import <Foundation/Foundation.h>


@interface EFQueue : NSObject

@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly, nonatomic) NSMutableArray *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSObject<EFQueueingStrategy> *strategy; // ivar: _strategy


+(id)boundedQueueWithCapacity:(NSUInteger)arg0 ;
+(id)boundedQueueWithCapacity:(NSUInteger)arg0 overflowHandler:(id)arg1 ;
+(id)bufferedQueueWithCapacity:(NSUInteger)arg0 batchHandler:(id)arg1 ;
+(id)priorityQueueWithComparator:(id)arg0 ;
-(id)debugDescription;
-(id)dequeue;
-(id)description;
-(id)drain;
-(id)init;
-(id)initWithStrategy:(id)arg0 ;
-(id)peek;
-(void)dequeueObject:(id)arg0 ;
-(void)enqueue:(id)arg0 ;
-(void)enqueue:(id)arg0 replaceIfExists:(BOOL)arg1 ;


@end


#endif