// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPEVICTINGMAXTOKENCOUNTPRIORITYQUEUE_H
#define PPEVICTINGMAXTOKENCOUNTPRIORITYQUEUE_H


#import <Foundation/Foundation.h>


@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    NSUInteger _capacity;
    *void _queue;
}


@property (readonly, nonatomic) CGFloat count;


-(NSUInteger)capacity;
-(id)getMaxItemWithoutPopping;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)popItem;
-(void)addObject:(id)arg0 ;
-(void)dealloc;
-(void)enumerateTokenCountsUsingBlock:(id)arg0 ;


@end


#endif