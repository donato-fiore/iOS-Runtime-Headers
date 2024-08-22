// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EFPRIORITYQUEUESTRATEGY_H
#define _EFPRIORITYQUEUESTRATEGY_H

@class NSString;
@protocol EFQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _EFPriorityQueueStrategy : NSObject <EFQueueingStrategy>



@property (readonly, nonatomic) id *comparator; // ivar: _comparator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_indexForObject:(id)arg0 buffer:(id)arg1 ;
-(NSUInteger)_insertionIndexForObject:(id)arg0 buffer:(id)arg1 ;
-(id)initWithComparator:(id)arg0 ;
-(void)dequeueObject:(id)arg0 buffer:(id)arg1 ;
-(void)enqueueObject:(id)arg0 replaceIfExists:(BOOL)arg1 buffer:(id)arg2 ;


@end


#endif