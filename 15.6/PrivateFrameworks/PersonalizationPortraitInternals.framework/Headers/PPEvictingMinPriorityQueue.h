// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVICTINGMINPRIORITYQUEUE_H
#define PPEVICTINGMINPRIORITYQUEUE_H


#import <Foundation/Foundation.h>


@interface PPEvictingMinPriorityQueue : NSObject {
    NSUInteger _capacity;
    *void _queue;
}


@property (readonly, nonatomic) CGFloat count;


-(NSUInteger)capacity;
-(id)extractSortedMutableArray;
-(id)getMinItemWithoutPopping;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)popItem;
-(void)addObject:(id)arg0 ;
-(void)dealloc;


@end


#endif