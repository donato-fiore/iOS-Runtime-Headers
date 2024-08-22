// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNPRIORITYQUEUEINGSTRATEGY_H
#define _CNPRIORITYQUEUEINGSTRATEGY_H

@class NSString;
@protocol CNQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _CNPriorityQueueingStrategy : NSObject <CNQueueingStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *priorityComparator; // ivar: _priorityComparator
@property (readonly) Class superclass;


-(NSUInteger)_insertionIndexForObject:(id)arg0 buffer:(id)arg1 ;
-(id)initWithComparator:(id)arg0 ;
-(void)enqueueObject:(id)arg0 buffer:(id)arg1 ;


@end


#endif