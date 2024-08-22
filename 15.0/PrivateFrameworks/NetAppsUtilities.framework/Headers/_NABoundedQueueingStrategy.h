// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NABOUNDEDQUEUEINGSTRATEGY_H
#define _NABOUNDEDQUEUEINGSTRATEGY_H

@class NSString;
@protocol NAQueueingStrategy;

#import <Foundation/Foundation.h>


@interface _NABoundedQueueingStrategy : NSObject <NAQueueingStrategy>

 {
    NSUInteger _capacity;
    id *_overflowHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 overflowHandler:(id)arg1 ;
-(void)enqueueObject:(id)arg0 buffer:(id)arg1 ;


@end


#endif