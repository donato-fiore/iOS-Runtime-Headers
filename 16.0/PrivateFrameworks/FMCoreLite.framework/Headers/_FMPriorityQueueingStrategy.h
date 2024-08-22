// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _FMPRIORITYQUEUEINGSTRATEGY_H
#define _FMPRIORITYQUEUEINGSTRATEGY_H

@class NSString;
@protocol FMQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _FMPriorityQueueingStrategy : NSObject <FMQueueingStrategy>

 {
    id *_priorityComparator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_insertionIndexForObject:(id)arg0 buffer:(id)arg1 ;
-(id)init;
-(id)initWithComparator:(id)arg0 ;
-(void)enqueueObject:(id)arg0 buffer:(id)arg1 ;


@end


#endif