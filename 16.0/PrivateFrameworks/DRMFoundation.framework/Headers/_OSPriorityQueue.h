// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSPRIORITYQUEUE_H
#define _OSPRIORITYQUEUE_H

@class NSNumber, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _OSPriorityQueue : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) NSNumber *highestPriority; // ivar: _highestPriority
@property (retain, nonatomic) NSNumber *lowestPriority; // ivar: _lowestPriority
@property (retain, nonatomic) NSMutableDictionary *objects; // ivar: _objects


+(id)priorityQueue;
-(id)allObjects;
-(id)description;
-(id)init;
-(id)popFirst;
-(id)popLast;
-(void)addObject:(id)arg0 withPriority:(NSUInteger)arg1 ;
-(void)removeObject:(id)arg0 atPriority:(NSUInteger)arg1 ;


@end


#endif