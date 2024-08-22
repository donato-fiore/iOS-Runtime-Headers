// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NAPRIORITYQUEUEINGSTRATEGY_H
#define _NAPRIORITYQUEUEINGSTRATEGY_H

@class NSString;
@protocol NAQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _NAPriorityQueueingStrategy : NSObject <NAQueueingStrategy>

 {
    id *_priorityComparator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_insertionIndexForObject:(id)arg0 buffer:(id)arg1 ;
-(id)initWithComparator:(id)arg0 ;
-(void)enqueueObject:(id)arg0 buffer:(id)arg1 ;


@end


#endif